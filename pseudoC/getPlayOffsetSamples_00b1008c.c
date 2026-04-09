// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayOffsetSamples
// Entry Point: 00b1008c
// Size: 48 bytes
// Signature: undefined getPlayOffsetSamples(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::getPlayOffsetSamples() */

int SoftAudioSource::getPlayOffsetSamples(void)

{
  long in_x0;
  float fVar1;
  
  fVar1 = (float)SoLoud::Soloud::getInfo(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 200),0);
  return (int)(fVar1 + 0.5);
}


