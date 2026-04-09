// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyBufferIsBeingDestroyed
// Entry Point: 00b0ce0c
// Size: 36 bytes
// Signature: undefined __thiscall notifyBufferIsBeingDestroyed(SoftAudioDevice * this, IAudioBuffer * param_1)


/* SoftAudioDevice::notifyBufferIsBeingDestroyed(IAudioBuffer*) */

void __thiscall
SoftAudioDevice::notifyBufferIsBeingDestroyed(SoftAudioDevice *this,IAudioBuffer *param_1)

{
  long lVar1;
  
  lVar1 = 0x1bac;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar1 = 0x1bb4;
  }
  *(int *)(this + lVar1) = *(int *)(this + lVar1) + -1;
  return;
}


