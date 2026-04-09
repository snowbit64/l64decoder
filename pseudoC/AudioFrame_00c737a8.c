// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AudioFrame
// Entry Point: 00c737a8
// Size: 44 bytes
// Signature: undefined __thiscall AudioFrame(AudioFrame * this, uint param_1)


/* TheoraVideoDecoder::AudioFrame::AudioFrame(unsigned int) */

void __thiscall TheoraVideoDecoder::AudioFrame::AudioFrame(AudioFrame *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__((ulong)param_1 << 1);
  *(void **)this = pvVar1;
  return;
}


