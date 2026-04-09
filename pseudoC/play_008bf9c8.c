// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 008bf9c8
// Size: 32 bytes
// Signature: undefined play(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalFileListChannel::play() */

void LocalFileListChannel::play(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x20) != '\0') {
    *(undefined *)(in_x0 + 0x20) = 0;
    StreamedSample::resume();
    return;
  }
  start();
  return;
}


