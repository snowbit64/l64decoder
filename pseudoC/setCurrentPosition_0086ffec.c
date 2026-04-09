// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCurrentPosition
// Entry Point: 0086ffec
// Size: 16 bytes
// Signature: undefined __thiscall setCurrentPosition(VideoOverlay * this, float param_1)


/* VideoOverlay::setCurrentPosition(float) */

void __thiscall VideoOverlay::setCurrentPosition(VideoOverlay *this,float param_1)

{
  if (*(VideoPlayer **)(this + 0x78) != (VideoPlayer *)0x0) {
    VideoPlayer::setCurrentPosition(*(VideoPlayer **)(this + 0x78),param_1);
    return;
  }
  return;
}


