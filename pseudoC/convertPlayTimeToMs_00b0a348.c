// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPlayTimeToMs
// Entry Point: 00b0a348
// Size: 8 bytes
// Signature: undefined __thiscall convertPlayTimeToMs(NullAudioDevice * this, ulonglong param_1)


/* NullAudioDevice::convertPlayTimeToMs(unsigned long long) */

void __thiscall NullAudioDevice::convertPlayTimeToMs(NullAudioDevice *this,ulonglong param_1)

{
  Watch::convertTicksToMs(param_1);
  return;
}


