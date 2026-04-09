// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareLoadPoints
// Entry Point: 008a9228
// Size: 112 bytes
// Signature: undefined prepareLoadPoints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoadSimulationRuntimeSettings::prepareLoadPoints() */

void LoadSimulationRuntimeSettings::prepareLoadPoints(void)

{
  LoadPoint *pLVar1;
  long lVar2;
  LoadSimulationRuntimeSettings *in_x0;
  __less a_Stack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pLVar1 = *(LoadPoint **)(in_x0 + 0x48);
  if (pLVar1 != *(LoadPoint **)(in_x0 + 0x50)) {
    std::__ndk1::
    __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
              (pLVar1,*(LoadPoint **)(in_x0 + 0x50),a_Stack_40);
    addMissingLoadPoints(in_x0,(vector *)(in_x0 + 0x48));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


