// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayOffsetSamples
// Entry Point: 00b0ab6c
// Size: 36 bytes
// Signature: undefined getPlayOffsetSamples(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullAudioStreamedSource::getPlayOffsetSamples() */

int NullAudioStreamedSource::getPlayOffsetSamples(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0x40);
  iVar2 = NullAudioSource::getPlayOffsetSamples();
  return iVar2 + iVar1;
}


