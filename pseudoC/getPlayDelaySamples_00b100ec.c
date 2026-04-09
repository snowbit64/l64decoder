// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayDelaySamples
// Entry Point: 00b100ec
// Size: 48 bytes
// Signature: undefined getPlayDelaySamples(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::getPlayDelaySamples() */

int SoftAudioSource::getPlayDelaySamples(void)

{
  long in_x0;
  float fVar1;
  
  fVar1 = (float)SoLoud::Soloud::getInfo(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 200),3);
  return (int)(fVar1 + 0.5);
}


