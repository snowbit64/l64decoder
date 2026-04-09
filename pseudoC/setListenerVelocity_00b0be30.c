// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setListenerVelocity
// Entry Point: 00b0be30
// Size: 48 bytes
// Signature: undefined __thiscall setListenerVelocity(SoftAudioDevice * this, float * param_1)


/* SoftAudioDevice::setListenerVelocity(float const*) */

void __thiscall SoftAudioDevice::setListenerVelocity(SoftAudioDevice *this,float *param_1)

{
  *(float *)(this + 0x1b74) = *param_1 * 1000.0;
  *(float *)(this + 0x1b78) = param_1[1] * 1000.0;
  *(float *)(this + 0x1b7c) = param_1[2] * 1000.0;
  return;
}


