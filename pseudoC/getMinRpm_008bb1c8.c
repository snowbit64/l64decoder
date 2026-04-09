// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMinRpm
// Entry Point: 008bb1c8
// Size: 32 bytes
// Signature: undefined getMinRpm(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopSoundGenerator::getMinRpm() const */

undefined4 SteadyLoopSoundGenerator::getMinRpm(void)

{
  long in_x0;
  long *plVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  plVar1 = *(long **)(in_x0 + 8);
  if ((plVar1 != (long *)0x0) && (*plVar1 != plVar1[1])) {
    uVar2 = *(undefined4 *)(*plVar1 + 0x18);
  }
  return uVar2;
}


