// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setListenerPosition
// Entry Point: 00b0be14
// Size: 28 bytes
// Signature: undefined __thiscall setListenerPosition(SoftAudioDevice * this, float * param_1)


/* SoftAudioDevice::setListenerPosition(float const*) */

void __thiscall SoftAudioDevice::setListenerPosition(SoftAudioDevice *this,float *param_1)

{
  *(float *)(this + 0x1b68) = *param_1;
  *(float *)(this + 0x1b6c) = param_1[1];
  *(float *)(this + 0x1b70) = param_1[2];
  return;
}


