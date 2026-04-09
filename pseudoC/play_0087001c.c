// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 0087001c
// Size: 28 bytes
// Signature: undefined play(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoOverlay::play() */

void VideoOverlay::play(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x78) != 0) {
    VideoPlayer::play();
  }
  return;
}


