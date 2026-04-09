// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortLoadPoints
// Entry Point: 008a9298
// Size: 76 bytes
// Signature: undefined __thiscall sortLoadPoints(LoadSimulationRuntimeSettings * this, vector * param_1)


/* LoadSimulationRuntimeSettings::sortLoadPoints(std::__ndk1::vector<LoadSimulationRuntimeSettings::LoadPoint,
   std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint> >&) */

void __thiscall
LoadSimulationRuntimeSettings::sortLoadPoints(LoadSimulationRuntimeSettings *this,vector *param_1)

{
  long lVar1;
  __less a_Stack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::
  __sort<std::__ndk1::__less<LoadSimulationRuntimeSettings::LoadPoint,LoadSimulationRuntimeSettings::LoadPoint>&,LoadSimulationRuntimeSettings::LoadPoint*>
            (*(LoadPoint **)param_1,*(LoadPoint **)(param_1 + 8),a_Stack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


