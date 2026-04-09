// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isMoveActive
// Entry Point: 00705df8
// Size: 48 bytes
// Signature: undefined isMoveActive(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystem::isMoveActive() */

bool AnimalAnimationSystem::isMoveActive(void)

{
  long *in_x0;
  
  if (*(int *)((long)in_x0 + 0x2ac) != -1) {
    return *(char *)(*in_x0 + (long)*(int *)((long)in_x0 + 0x2ac) * 0x28 + 0x20) != '\0';
  }
  return false;
}


