// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasActiveTransition
// Entry Point: 0089a320
// Size: 88 bytes
// Signature: undefined hasActiveTransition(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianAnimationBlender::hasActiveTransition() */

bool PedestrianAnimationBlender::hasActiveTransition(void)

{
  long in_x0;
  
  if ((*(char *)(in_x0 + 0x18) != '\0') && (*(float *)(in_x0 + 4) != *(float *)(in_x0 + 8))) {
    return true;
  }
  if ((*(char *)(in_x0 + 0x34) != '\0') && (*(float *)(in_x0 + 0x20) != *(float *)(in_x0 + 0x24))) {
    return true;
  }
  return *(char *)(in_x0 + 0x50) != '\0' && *(float *)(in_x0 + 0x3c) != *(float *)(in_x0 + 0x40);
}


