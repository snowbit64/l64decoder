// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlaying
// Entry Point: 0086fffc
// Size: 16 bytes
// Signature: undefined isPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoOverlay::isPlaying() const */

void VideoOverlay::isPlaying(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x78) != 0) {
    VideoPlayer::isPlaying();
    return;
  }
  return;
}


