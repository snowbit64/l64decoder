// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyBufferDeallocated
// Entry Point: 00b0efd4
// Size: 8 bytes
// Signature: undefined __thiscall notifyBufferDeallocated(SoftAudioBuffer * this, uint param_1)


/* SoftAudioBuffer::notifyBufferDeallocated(unsigned int) */

void __thiscall SoftAudioBuffer::notifyBufferDeallocated(SoftAudioBuffer *this,uint param_1)

{
  SoftAudioDevice::notifyBufferDeallocated(*(SoftAudioDevice **)(this + 0x40),param_1);
  return;
}


