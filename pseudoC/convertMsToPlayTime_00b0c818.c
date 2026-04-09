// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertMsToPlayTime
// Entry Point: 00b0c818
// Size: 72 bytes
// Signature: undefined __cdecl convertMsToPlayTime(double param_1)


/* SoftAudioDevice::convertMsToPlayTime(double) */

long SoftAudioDevice::convertMsToPlayTime(double param_1)

{
  ulong uVar1;
  
  uVar1 = SoLoud::Soloud::getBackendSamplerate();
  return (long)(((double)(uVar1 & 0xffffffff) * param_1) / 1000.0 + 0.5);
}


