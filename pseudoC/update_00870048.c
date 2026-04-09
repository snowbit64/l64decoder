// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00870048
// Size: 16 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoOverlay::update() */

void VideoOverlay::update(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x78) != 0) {
    VideoPlayer::update();
    return;
  }
  return;
}


