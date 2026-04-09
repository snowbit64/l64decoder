// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDuration
// Entry Point: 0086ffc4
// Size: 20 bytes
// Signature: undefined getDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoOverlay::getDuration() const */

undefined  [16] VideoOverlay::getDuration(void)

{
  long in_x0;
  undefined auVar1 [16];
  
  if (*(long *)(in_x0 + 0x78) != 0) {
    auVar1 = VideoPlayer::getDuration();
    return auVar1;
  }
  return ZEXT816(0);
}


