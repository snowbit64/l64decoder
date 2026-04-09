// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoadSimulationRuntimeSettings
// Entry Point: 008a384c
// Size: 124 bytes
// Signature: undefined __thiscall ~LoadSimulationRuntimeSettings(LoadSimulationRuntimeSettings * this)


/* LoadSimulationRuntimeSettings::~LoadSimulationRuntimeSettings() */

void __thiscall
LoadSimulationRuntimeSettings::~LoadSimulationRuntimeSettings(LoadSimulationRuntimeSettings *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)(this + 0x48);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar3;
  pvVar2 = *(void **)(this + 0x50);
  if (*(void **)(this + 0x50) != pvVar3) {
    do {
      pvVar1 = *(void **)((long)pvVar2 + -0x30);
      pvVar4 = (void *)((long)pvVar2 + -0x40);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar2 + -0x28) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar2 = pvVar4;
    } while (pvVar4 != pvVar3);
    pvVar1 = *(void **)(this + 0x48);
  }
  *(void **)(this + 0x50) = pvVar3;
  operator_delete(pvVar1);
  return;
}


