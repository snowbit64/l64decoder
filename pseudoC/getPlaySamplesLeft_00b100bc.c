// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlaySamplesLeft
// Entry Point: 00b100bc
// Size: 48 bytes
// Signature: undefined getPlaySamplesLeft(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::getPlaySamplesLeft() */

int SoftAudioSource::getPlaySamplesLeft(void)

{
  long in_x0;
  float fVar1;
  
  fVar1 = (float)SoLoud::Soloud::getInfo(*(Soloud **)(in_x0 + 0xb8),*(uint *)(in_x0 + 200),1);
  return (int)(fVar1 + 0.5);
}


