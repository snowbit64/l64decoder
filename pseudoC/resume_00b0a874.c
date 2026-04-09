// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resume
// Entry Point: 00b0a874
// Size: 16 bytes
// Signature: undefined resume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullAudioSource::resume() */

void NullAudioSource::resume(void)

{
  long in_x0;
  
  *(byte *)(in_x0 + 8) = *(byte *)(in_x0 + 8) ^ 1;
  return;
}


