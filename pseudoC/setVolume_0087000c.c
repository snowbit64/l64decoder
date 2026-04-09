// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 0087000c
// Size: 16 bytes
// Signature: undefined __thiscall setVolume(VideoOverlay * this, float param_1)


/* VideoOverlay::setVolume(float) */

void __thiscall VideoOverlay::setVolume(VideoOverlay *this,float param_1)

{
  if (*(VideoPlayer **)(this + 0x78) != (VideoPlayer *)0x0) {
    VideoPlayer::setVolume(*(VideoPlayer **)(this + 0x78),param_1);
    return;
  }
  return;
}


