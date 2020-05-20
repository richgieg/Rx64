#include "loader_info.h"
#include "console.h"
#include "graphics.h"
#include "kernel.h"
#include "memory.h"

VOID
KernelEntry (
    IN LOADER_INFO *LoaderInfo
    )
{
    MmInitialize();

    GfxInitializeGraphics(
        LoaderInfo->FrameBufferBase,
        LoaderInfo->FrameBufferSize,
        LoaderInfo->HorizontalResolution,
        LoaderInfo->VerticalResolution
    );

    CnInitializeConsole();

    // CnDemo_ColorfulChars();
    CnDemo_PrintMemory();

    for (;;) {
        asm("hlt");
    }
}

VOID
KeBugCheck ()
{
    // Red Screen of Destruction...
    GfxFillScreen(0x00ff0000);

    for (;;) {
        asm("hlt");
    }
}
