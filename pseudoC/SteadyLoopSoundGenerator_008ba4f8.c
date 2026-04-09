// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SteadyLoopSoundGenerator
// Entry Point: 008ba4f8
// Size: 168 bytes
// Signature: undefined __thiscall SteadyLoopSoundGenerator(SteadyLoopSoundGenerator * this)


/* SteadyLoopSoundGenerator::SteadyLoopSoundGenerator() */

void __thiscall SteadyLoopSoundGenerator::SteadyLoopSoundGenerator(SteadyLoopSoundGenerator *this)

{
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR__SteadyLoopSoundGenerator_00fddb28;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = operator_new__(0x4000);
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined8 *)(this + 0x34) = uVar2;
  *(void **)(this + 0x28) = pvVar1;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x48) = 0;
                    /* try { // try from 008ba560 to 008ba567 has its CatchHandler @ 008ba5a0 */
  pvVar1 = operator_new__(0x4000);
  *(void **)(this + 0x48) = pvVar1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x10) = 0xffffffff;
  *(undefined8 *)(this + 0x30) = 0xffffffff;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  return;
}


