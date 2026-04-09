// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyBufferDeallocated
// Entry Point: 00b0ce50
// Size: 20 bytes
// Signature: undefined __thiscall notifyBufferDeallocated(SoftAudioDevice * this, uint param_1)


/* SoftAudioDevice::notifyBufferDeallocated(unsigned int) */

void __thiscall SoftAudioDevice::notifyBufferDeallocated(SoftAudioDevice *this,uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 <= *(uint *)(this + 0x1bbc)) {
    iVar1 = *(uint *)(this + 0x1bbc) - param_1;
  }
  *(int *)(this + 0x1bbc) = iVar1;
  return;
}


