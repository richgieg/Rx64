#ifndef RECON_H_
#define RECON_H_

#include <efi.h>

VOID
PrintEnvironmentVariables (
    IN BOOLEAN PauseAfterEntry
    );

VOID
PrintMemoryMap (
    IN BOOLEAN PauseAfterEntry
    );

#endif
