// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlaySamplesLeft
// Entry Point: 00b0a844
// Size: 16 bytes
// Signature: undefined getPlaySamplesLeft(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullAudioSource::getPlaySamplesLeft() */

int NullAudioSource::getPlaySamplesLeft(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x18) - *(int *)(in_x0 + 0x10);
}


