// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayOffset
// Entry Point: 008b4434
// Size: 96 bytes
// Signature: undefined getPlayOffset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisSample::getPlayOffset() const */

float LoopSynthesisSample::getPlayOffset(void)

{
  long in_x0;
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(long **)(in_x0 + 0x118) == (long *)0x0) {
    fVar3 = 0.0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(in_x0 + 0x118) + 0x20))();
    uVar2 = LoopSynthesisGenerator::getFrequency();
    fVar3 = ((float)(uVar1 & 0xffffffff) / (float)(uVar2 & 0xffffffff)) * 1000.0;
  }
  return fVar3;
}


