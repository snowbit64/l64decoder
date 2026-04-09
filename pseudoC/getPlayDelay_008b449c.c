// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayDelay
// Entry Point: 008b449c
// Size: 84 bytes
// Signature: undefined getPlayDelay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisSample::getPlayDelay() const */

float LoopSynthesisSample::getPlayDelay(void)

{
  long in_x0;
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(long **)(in_x0 + 0x118) == (long *)0x0) {
    fVar3 = 0.0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(in_x0 + 0x118) + 0x30))();
    uVar2 = LoopSynthesisGenerator::getFrequency();
    fVar3 = (float)(uVar1 & 0xffffffff) / (float)(uVar2 & 0xffffffff);
  }
  return fVar3;
}


