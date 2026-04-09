// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setListenerDirection
// Entry Point: 00b0be60
// Size: 52 bytes
// Signature: undefined __thiscall setListenerDirection(SoftAudioDevice * this, float * param_1, float * param_2)


/* SoftAudioDevice::setListenerDirection(float const*, float const*) */

void __thiscall
SoftAudioDevice::setListenerDirection(SoftAudioDevice *this,float *param_1,float *param_2)

{
  *(float *)(this + 0x1b80) = *param_1;
  *(float *)(this + 0x1b84) = param_1[1];
  *(float *)(this + 0x1b88) = param_1[2];
  *(float *)(this + 0x1b8c) = *param_2;
  *(float *)(this + 0x1b90) = param_2[1];
  *(float *)(this + 0x1b94) = param_2[2];
  return;
}


