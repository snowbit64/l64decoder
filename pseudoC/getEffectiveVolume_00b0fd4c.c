// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEffectiveVolume
// Entry Point: 00b0fd4c
// Size: 48 bytes
// Signature: undefined getEffectiveVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::getEffectiveVolume() const */

float SoftAudioSource::getEffectiveVolume(void)

{
  long in_x0;
  float fVar1;
  
  fVar1 = (float)SoftAudioDevice::getGroupVolume
                           (*(SoftAudioDevice **)(in_x0 + 0xa8),*(uint *)(in_x0 + 0xd0));
  return fVar1 * *(float *)(in_x0 + 0x108);
}


