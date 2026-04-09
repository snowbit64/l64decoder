// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioRecordingDevice
// Entry Point: 00b0f6f8
// Size: 48 bytes
// Signature: undefined __thiscall ~SoftAudioRecordingDevice(SoftAudioRecordingDevice * this)


/* SoftAudioRecordingDevice::~SoftAudioRecordingDevice() */

void __thiscall SoftAudioRecordingDevice::~SoftAudioRecordingDevice(SoftAudioRecordingDevice *this)

{
  *(undefined ***)this = &PTR__SoftAudioRecordingDevice_00fe7bc0;
                    /* try { // try from 00b0f718 to 00b0f71f has its CatchHandler @ 00b0f728 */
  SoLoud::Soloud::deinitRecordingDevice(*(Soloud **)(this + 8),*(uint *)(this + 0x10));
  return;
}


