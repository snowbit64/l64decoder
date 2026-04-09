// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoopSynthesisDataExchanger
// Entry Point: 008a38c8
// Size: 232 bytes
// Signature: undefined __thiscall ~LoopSynthesisDataExchanger(LoopSynthesisDataExchanger * this)


/* LoopSynthesisDataExchanger::~LoopSynthesisDataExchanger() */

void __thiscall
LoopSynthesisDataExchanger::~LoopSynthesisDataExchanger(LoopSynthesisDataExchanger *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)(this + 0x240);
  if (pvVar3 != (void *)0x0) {
    pvVar1 = pvVar3;
    pvVar2 = *(void **)(this + 0x248);
    if (*(void **)(this + 0x248) != pvVar3) {
      do {
        pvVar1 = *(void **)((long)pvVar2 + -0x30);
        pvVar4 = (void *)((long)pvVar2 + -0x40);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar2 + -0x28) = pvVar1;
          operator_delete(pvVar1);
        }
        pvVar2 = pvVar4;
      } while (pvVar4 != pvVar3);
      pvVar1 = *(void **)(this + 0x240);
    }
    *(void **)(this + 0x248) = pvVar3;
    operator_delete(pvVar1);
  }
  SteadyLoopRuntimeSettings::~SteadyLoopRuntimeSettings((SteadyLoopRuntimeSettings *)(this + 0x1e0))
  ;
  pvVar3 = *(void **)(this + 0x1c8);
  if (pvVar3 != (void *)0x0) {
    pvVar1 = pvVar3;
    pvVar2 = *(void **)(this + 0x1d0);
    if (*(void **)(this + 0x1d0) != pvVar3) {
      do {
        pvVar1 = *(void **)((long)pvVar2 + -0x30);
        pvVar4 = (void *)((long)pvVar2 + -0x40);
        if (pvVar1 != (void *)0x0) {
          *(void **)((long)pvVar2 + -0x28) = pvVar1;
          operator_delete(pvVar1);
        }
        pvVar2 = pvVar4;
      } while (pvVar4 != pvVar3);
      pvVar1 = *(void **)(this + 0x1c8);
    }
    *(void **)(this + 0x1d0) = pvVar3;
    operator_delete(pvVar1);
  }
  StaticSoundRuntimeSettings::~StaticSoundRuntimeSettings
            ((StaticSoundRuntimeSettings *)(this + 0x140));
  StaticSoundRuntimeSettings::~StaticSoundRuntimeSettings
            ((StaticSoundRuntimeSettings *)(this + 0x100));
  SteadyLoopRuntimeSettings::~SteadyLoopRuntimeSettings((SteadyLoopRuntimeSettings *)(this + 0xe8));
  GranularSynthesisRuntimeSettings::~GranularSynthesisRuntimeSettings
            ((GranularSynthesisRuntimeSettings *)(this + 0x90));
  GranularSynthesisRuntimeSettings::~GranularSynthesisRuntimeSettings
            ((GranularSynthesisRuntimeSettings *)(this + 0x38));
  return;
}


