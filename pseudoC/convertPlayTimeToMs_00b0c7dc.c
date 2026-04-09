// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPlayTimeToMs
// Entry Point: 00b0c7dc
// Size: 60 bytes
// Signature: undefined __thiscall convertPlayTimeToMs(SoftAudioDevice * this, ulonglong param_1)


/* SoftAudioDevice::convertPlayTimeToMs(unsigned long long) */

undefined  [16] __thiscall
SoftAudioDevice::convertPlayTimeToMs(SoftAudioDevice *this,ulonglong param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  
  uVar1 = SoLoud::Soloud::getBackendSamplerate();
  auVar2._0_8_ = ((double)(unkuint9)param_1 / (double)(uVar1 & 0xffffffff)) * 1000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}


