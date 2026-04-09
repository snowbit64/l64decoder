// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullAudioStreamedBuffer
// Entry Point: 00b0a8d0
// Size: 60 bytes
// Signature: undefined __thiscall NullAudioStreamedBuffer(NullAudioStreamedBuffer * this, AudioBufferDesc * param_1)


/* NullAudioStreamedBuffer::NullAudioStreamedBuffer(AudioBufferDesc const&) */

void __thiscall
NullAudioStreamedBuffer::NullAudioStreamedBuffer
          (NullAudioStreamedBuffer *this,AudioBufferDesc *param_1)

{
  NullAudioBuffer::NullAudioBuffer((NullAudioBuffer *)this,param_1);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x50);
  *(undefined ***)this = &PTR__NullAudioStreamedBuffer_00fe7718;
  return;
}


