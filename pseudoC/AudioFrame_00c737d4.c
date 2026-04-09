// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioFrame
// Entry Point: 00c737d4
// Size: 16 bytes
// Signature: undefined __thiscall ~AudioFrame(AudioFrame * this)


/* TheoraVideoDecoder::AudioFrame::~AudioFrame() */

void __thiscall TheoraVideoDecoder::AudioFrame::~AudioFrame(AudioFrame *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}


