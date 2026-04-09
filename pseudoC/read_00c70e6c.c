// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00c70e6c
// Size: 80 bytes
// Signature: undefined __thiscall read(StreamedAudioData * this, uint param_1, char * param_2, bool * param_3)


/* VideoPlayer::StreamedAudioData::read(unsigned int, char*, bool&) */

uint __thiscall
VideoPlayer::StreamedAudioData::read
          (StreamedAudioData *this,uint param_1,char *param_2,bool *param_3)

{
  TheoraVideoDecoder::getFrameAudio(*(TheoraVideoDecoder **)(*(long *)(this + 0x10) + 8),param_2);
  *param_3 = *(bool *)(*(long *)(*(long *)(this + 0x10) + 8) + 0x51);
  return param_1;
}


