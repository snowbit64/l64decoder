// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAudioBuffer
// Entry Point: 00b0a0f8
// Size: 84 bytes
// Signature: undefined __thiscall createAudioBuffer(NullAudioDevice * this, AudioBufferDesc * param_1)


/* NullAudioDevice::createAudioBuffer(AudioBufferDesc const&) */

NullAudioStreamedBuffer * __thiscall
NullAudioDevice::createAudioBuffer(NullAudioDevice *this,AudioBufferDesc *param_1)

{
  NullAudioStreamedBuffer *this_00;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    this_00 = (NullAudioStreamedBuffer *)operator_new(0x40);
                    /* try { // try from 00b0a134 to 00b0a13b has its CatchHandler @ 00b0a14c */
    NullAudioBuffer::NullAudioBuffer((NullAudioBuffer *)this_00,param_1);
  }
  else {
    this_00 = (NullAudioStreamedBuffer *)operator_new(0x48);
                    /* try { // try from 00b0a11c to 00b0a123 has its CatchHandler @ 00b0a150 */
    NullAudioStreamedBuffer::NullAudioStreamedBuffer(this_00,param_1);
  }
  return this_00;
}


