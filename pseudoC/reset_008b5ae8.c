// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008b5ae8
// Size: 128 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::reset() */

void LoopSynthesisGenerator::reset(void)

{
  long **pplVar1;
  long **in_x0;
  
  *(undefined *)(in_x0 + 0xb) = 0;
  pplVar1 = in_x0 + 1;
  if (*(char *)((long)in_x0 + 0x3c) != '\0') {
    pplVar1 = in_x0;
  }
  if (*pplVar1 != (long *)0x0) {
    (**(code **)(**pplVar1 + 0x48))();
  }
  if (in_x0[3] != (long *)0x0) {
    (**(code **)(*in_x0[3] + 0x48))();
  }
  if (in_x0[5] != (long *)0x0) {
    StaticSoundGenerator::reset((StaticSoundGenerator *)in_x0[5],0);
  }
  if (in_x0[6] != (long *)0x0) {
    StaticSoundGenerator::reset((StaticSoundGenerator *)in_x0[6],0);
  }
  *(undefined2 *)((long)in_x0 + 0x59) = 0x100;
  return;
}


