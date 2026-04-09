// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCurrentPosition
// Entry Point: 00c70e30
// Size: 8 bytes
// Signature: undefined __thiscall setCurrentPosition(VideoPlayer * this, float param_1)


/* VideoPlayer::setCurrentPosition(float) */

void __thiscall VideoPlayer::setCurrentPosition(VideoPlayer *this,float param_1)

{
  TheoraVideoDecoder::seek(*(TheoraVideoDecoder **)(this + 8),param_1);
  return;
}


