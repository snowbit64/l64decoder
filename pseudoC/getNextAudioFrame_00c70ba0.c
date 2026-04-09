// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextAudioFrame
// Entry Point: 00c70ba0
// Size: 8 bytes
// Signature: undefined __thiscall getNextAudioFrame(VideoPlayer * this, void * param_1)


/* VideoPlayer::getNextAudioFrame(void*) */

void __thiscall VideoPlayer::getNextAudioFrame(VideoPlayer *this,void *param_1)

{
  TheoraVideoDecoder::getFrameAudio(*(TheoraVideoDecoder **)(this + 8),param_1);
  return;
}


