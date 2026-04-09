// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyBufferAllocated
// Entry Point: 00b0efcc
// Size: 8 bytes
// Signature: undefined __thiscall notifyBufferAllocated(SoftAudioBuffer * this, uint param_1)


/* SoftAudioBuffer::notifyBufferAllocated(unsigned int) */

void __thiscall SoftAudioBuffer::notifyBufferAllocated(SoftAudioBuffer *this,uint param_1)

{
  SoftAudioDevice::notifyBufferAllocated(*(SoftAudioDevice **)(this + 0x40),param_1);
  return;
}


