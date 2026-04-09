// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoopSynthesisGenerator
// Entry Point: 008b46d0
// Size: 216 bytes
// Signature: undefined __thiscall ~LoopSynthesisGenerator(LoopSynthesisGenerator * this)


/* LoopSynthesisGenerator::~LoopSynthesisGenerator() */

void __thiscall LoopSynthesisGenerator::~LoopSynthesisGenerator(LoopSynthesisGenerator *this)

{
  LoadSoundSimulation *pLVar1;
  StaticSoundGenerator *pSVar2;
  
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  pLVar1 = *(LoadSoundSimulation **)(this + 0x10);
  if (pLVar1 != (LoadSoundSimulation *)0x0) {
    LoadSoundSimulation::~LoadSoundSimulation(pLVar1);
    operator_delete(pLVar1);
  }
  pSVar2 = *(StaticSoundGenerator **)(this + 0x28);
  if (pSVar2 != (StaticSoundGenerator *)0x0) {
    StaticSoundGenerator::~StaticSoundGenerator(pSVar2);
    operator_delete(pSVar2);
  }
  pSVar2 = *(StaticSoundGenerator **)(this + 0x30);
  if (pSVar2 != (StaticSoundGenerator *)0x0) {
    StaticSoundGenerator::~StaticSoundGenerator(pSVar2);
    operator_delete(pSVar2);
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  pLVar1 = *(LoadSoundSimulation **)(this + 0x20);
  if (pLVar1 != (LoadSoundSimulation *)0x0) {
    LoadSoundSimulation::~LoadSoundSimulation(pLVar1);
    operator_delete(pLVar1);
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


