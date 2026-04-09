// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyBufferAllocated
// Entry Point: 00b0ce30
// Size: 32 bytes
// Signature: undefined __thiscall notifyBufferAllocated(SoftAudioDevice * this, uint param_1)


/* SoftAudioDevice::notifyBufferAllocated(unsigned int) */

void __thiscall SoftAudioDevice::notifyBufferAllocated(SoftAudioDevice *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(this + 0x1bbc) + param_1;
  uVar2 = *(uint *)(this + 0x1bc0);
  if (*(uint *)(this + 0x1bc0) <= uVar1) {
    uVar2 = uVar1;
  }
  *(uint *)(this + 0x1bbc) = uVar1;
  *(uint *)(this + 0x1bc0) = uVar2;
  return;
}


