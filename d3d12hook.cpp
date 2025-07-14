#include "stdafx.h"
#include "menu.h"
#include "utils.h"
#include "cheat.h"
#include "font.h"

namespace d3d12hook {
    PresentD3D12            oPresentD3D12 = nullptr;
    ExecuteCommandListsFn   oExecuteCommandListsD3D12 = nullptr;
    SignalFn                oSignalD3D12 = nullptr;

    static ID3D12Device* gDevice = nullptr;
    static ID3D12CommandQueue* gCommandQueue = nullptr;
    static ID3D12DescriptorHeap* gHeapRTV = nullptr;
    static ID3D12DescriptorHeap* gHeapSRV = nullptr;
    static ID3D12GraphicsCommandList* gCommandList = nullptr;
    static ID3D12Fence* gFence = nullptr;
    static UINT64                  gFenceValue = 0;
    static uintx_t                 gBufferCount = 0;
    DXGI_SWAP_CHAIN_DESC desc = {};
    struct FrameContext {
        ID3D12CommandAllocator* allocator;
        ID3D12Resource* renderTarget;
        D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle;
    };
    static FrameContext* gFrameContexts = nullptr;
    static bool                   gInitialized = false;
    static bool                   gShutdown = false;

    // Utility to log HRESULTs
    inline void LogHRESULT(const char* label, HRESULT hr) {
        DebugLog("[d3d12hook] %s: hr=0x%08X\n", label, hr);
    }

    long __fastcall hookPresentD3D12(IDXGISwapChain3* pSwapChain, UINT SyncInterval, UINT Flags) {

        if (!gInitialized) {
            DebugLog("[d3d12hook] Initializing ImGui on first Present.\n");

            if (FAILED(pSwapChain->GetDevice(__uuidof(ID3D12Device), (void**)&gDevice))) {
                LogHRESULT("GetDevice", E_FAIL);
                return oPresentD3D12(pSwapChain, SyncInterval, Flags);
            }

            pSwapChain->GetDesc(&desc);
            gBufferCount = desc.BufferCount;
            DebugLog("[d3d12hook] BufferCount=%u\n", gBufferCount);

            // Create heaps
            D3D12_DESCRIPTOR_HEAP_DESC heapDesc = {};
            heapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
            heapDesc.NumDescriptors = gBufferCount;
            if (FAILED(gDevice->CreateDescriptorHeap(&heapDesc, IID_PPV_ARGS(&gHeapRTV)))) {
                LogHRESULT("CreateDescriptorHeap RTV", E_FAIL);
                return oPresentD3D12(pSwapChain, SyncInterval, Flags);
            }

            heapDesc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
            heapDesc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
            if (FAILED(gDevice->CreateDescriptorHeap(&heapDesc, IID_PPV_ARGS(&gHeapSRV)))) {
                LogHRESULT("CreateDescriptorHeap SRV", E_FAIL);
                return oPresentD3D12(pSwapChain, SyncInterval, Flags);
            }

            // FrameContexts
            gFrameContexts = new FrameContext[gBufferCount];
            ZeroMemory(gFrameContexts, sizeof(FrameContext) * gBufferCount);

            UINT rtvSize = gDevice->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
            auto rtvHandle = gHeapRTV->GetCPUDescriptorHandleForHeapStart();
            for (UINT i = 0; i < gBufferCount; ++i) {
                ID3D12Resource* back;
                pSwapChain->GetBuffer(i, IID_PPV_ARGS(&back));
                gDevice->CreateRenderTargetView(back, nullptr, rtvHandle);
                gFrameContexts[i].renderTarget = back;
                gFrameContexts[i].rtvHandle = rtvHandle;
                rtvHandle.ptr += rtvSize;
            }

            // ImGui
            ImGui::CreateContext();

            while (ShowCursor(FALSE) >= 0);
            while (ShowCursor(TRUE) < 0);

            ImGuiIO& io = ImGui::GetIO();
            ImFontConfig fontConfig;
            fontConfig.FontDataOwnedByAtlas = false;
            io.Fonts->AddFontFromMemoryTTF(MaFont, MaFontsize, 16.0f, &fontConfig);
            io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
            ImGui::StyleColorsDark();
            ImGui_ImplWin32_Init(desc.OutputWindow);
            ImGui_ImplDX12_Init(gDevice, gBufferCount,
                desc.BufferDesc.Format,
                gHeapSRV,
                gHeapSRV->GetCPUDescriptorHandleForHeapStart(),
                gHeapSRV->GetGPUDescriptorHandleForHeapStart());

            inputhook::Init(desc.OutputWindow);
            gInitialized = true;
            DebugLog("[d3d12hook] ImGui initialized.\n");
        }

        if (!gShutdown &&
            gDevice &&
            gHeapSRV &&
            gCommandQueue &&
            gInitialized &&
            gFrameContexts)
        {
            ImGui_ImplDX12_NewFrame();
            ImGui_ImplWin32_NewFrame();
            ImGui::NewFrame();

            static bool lastKeyState = false;
            bool currentKeyState = (GetAsyncKeyState(globals::openMenuKey) & 0x8000);

            if (currentKeyState && !lastKeyState) {
                menu::isOpen = !menu::isOpen;
            }
            lastKeyState = currentKeyState;

            static bool lastOpen = false;
            ImGuiIO& io = ImGui::GetIO();

            io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange;
            io.MouseDrawCursor = menu::isOpen;

            if (menu::isOpen != lastOpen)
            {
                if (menu::isOpen)
                {
                    ReleaseCapture();
                    SetFocus(desc.OutputWindow);
                }
                else
                {
                    SetCapture(desc.OutputWindow);
                }

                lastOpen = menu::isOpen;
            }
            if (menu::isOpen)
            {
                if (GetCapture() != nullptr && GetCapture() != desc.OutputWindow)
                    ReleaseCapture();
            }

            menu::Init();

            //cheat::Cheat::RefreshCheat();

            ImGui::Render();

            UINT frameIdx = pSwapChain->GetCurrentBackBufferIndex();
            FrameContext& ctx = gFrameContexts[frameIdx];

            static ID3D12CommandAllocator* allocator = nullptr;
            if (!allocator) {
                gDevice->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&allocator));
            }
            allocator->Reset();

            if (!gCommandList) {
                gDevice->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, allocator, nullptr, IID_PPV_ARGS(&gCommandList));
                gCommandList->Close();
            }
            gCommandList->Reset(allocator, nullptr);

            D3D12_RESOURCE_BARRIER barrier = {};
            barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
            barrier.Transition.pResource = ctx.renderTarget;
            barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
            barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
            gCommandList->ResourceBarrier(1, &barrier);

            gCommandList->OMSetRenderTargets(1, &ctx.rtvHandle, FALSE, nullptr);
            ID3D12DescriptorHeap* heaps[] = { gHeapSRV };
            gCommandList->SetDescriptorHeaps(1, heaps);

            if (ImGui::GetDrawData())
                ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), gCommandList);

            barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
            barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
            gCommandList->ResourceBarrier(1, &barrier);

            gCommandList->Close();
            gCommandQueue->ExecuteCommandLists(1, reinterpret_cast<ID3D12CommandList* const*>(&gCommandList));
        }

        return oPresentD3D12(pSwapChain, SyncInterval, Flags);
    }


    void STDMETHODCALLTYPE hookExecuteCommandListsD3D12(
        ID3D12CommandQueue * _this,
        UINT                          NumCommandLists,
        ID3D12CommandList* const* ppCommandLists) {
        if (!gCommandQueue) {
            gCommandQueue = _this;
            DebugLog("[d3d12hook] Captured CommandQueue=%p\n", _this);
        }
        oExecuteCommandListsD3D12(_this, NumCommandLists, ppCommandLists);
    }

    HRESULT STDMETHODCALLTYPE hookSignalD3D12(
        ID3D12CommandQueue * _this,
        ID3D12Fence * pFence,
        UINT64              Value) {
        if (gCommandQueue && _this == gCommandQueue) {
            gFence = pFence;
            gFenceValue = Value;
            DebugLog("[d3d12hook] Captured Fence=%p, Value=%llu\n", pFence, Value);
        }
        return oSignalD3D12(_this, pFence, Value);
    }

    void release() {
        DebugLog("[d3d12hook] Releasing resources.\n");
        gShutdown = true;
        if (gCommandList) gCommandList->Release();
        if (gHeapRTV) gHeapRTV->Release();
        if (gHeapSRV) gHeapSRV->Release();
        for (UINT i = 0; i < gBufferCount; ++i) {
            if (gFrameContexts[i].renderTarget) gFrameContexts[i].renderTarget->Release();
        }
        if (gFence) gFence->Release();
        if (gDevice) gDevice->Release();
        delete[] gFrameContexts;

        // Unhook
        MH_DisableHook(MH_ALL_HOOKS);
        DebugLog("[d3d12hook] Hooks disabled.\n");
    }
}
