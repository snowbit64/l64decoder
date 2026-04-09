// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00870038
// Size: 16 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoOverlay::stop() */

void VideoOverlay::stop(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x78) != 0) {
    VideoPlayer::stop();
    return;
  }
  return;
}


