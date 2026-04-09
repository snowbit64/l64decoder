// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentTime
// Entry Point: 0086ffd8
// Size: 20 bytes
// Signature: undefined getCurrentTime(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoOverlay::getCurrentTime() const */

undefined  [16] VideoOverlay::getCurrentTime(void)

{
  long in_x0;
  undefined auVar1 [16];
  
  if (*(long *)(in_x0 + 0x78) != 0) {
    auVar1 = VideoPlayer::getCurrentTime();
    return auVar1;
  }
  return ZEXT816(0);
}


