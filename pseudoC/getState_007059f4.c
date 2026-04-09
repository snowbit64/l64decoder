// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getState
// Entry Point: 007059f4
// Size: 40 bytes
// Signature: undefined getState(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::getState() */

undefined4 AnimalAnimationSystem::getState(void)

{
  long *in_x0;
  
  if (*(int *)((long)in_x0 + 0x2ac) != -1) {
    return *(undefined4 *)(*in_x0 + (long)*(int *)((long)in_x0 + 0x2ac) * 0x28);
  }
  return 0xffffffff;
}


