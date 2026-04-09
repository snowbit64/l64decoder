// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isPlaying
// Entry Point: 00b10e94
// Size: 16 bytes
// Signature: undefined isPlaying(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::isPlaying() */

bool SoftAudioSource::isPlaying(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x110) != 0;
}


