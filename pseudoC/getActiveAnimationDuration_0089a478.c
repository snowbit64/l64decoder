// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getActiveAnimationDuration
// Entry Point: 0089a478
// Size: 24 bytes
// Signature: undefined getActiveAnimationDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianAnimationBlender::getActiveAnimationDuration() */

undefined  [16] PedestrianAnimationBlender::getActiveAnimationDuration(void)

{
  long in_x0;
  undefined auVar1 [16];
  
  if (*(long *)(in_x0 + 0x58) != 0) {
    auVar1 = CharacterSet::getDuration((uint)*(long *)(in_x0 + 0x58));
    return auVar1;
  }
  return ZEXT816(0);
}


