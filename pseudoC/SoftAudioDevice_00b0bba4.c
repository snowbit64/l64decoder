// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioDevice
// Entry Point: 00b0bba4
// Size: 36 bytes
// Signature: undefined __thiscall ~SoftAudioDevice(SoftAudioDevice * this)


/* SoftAudioDevice::~SoftAudioDevice() */

void __thiscall SoftAudioDevice::~SoftAudioDevice(SoftAudioDevice *this)

{
  ~SoftAudioDevice(this);
  operator_delete(this);
  return;
}


