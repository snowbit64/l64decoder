// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pause
// Entry Point: 008bf9f0
// Size: 56 bytes
// Signature: undefined pause(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalFileListChannel::pause() */

void LocalFileListChannel::pause(void)

{
  long in_x0;
  ulong uVar1;
  
  uVar1 = StreamedSample::isPlaying();
  if ((uVar1 & 1) != 0) {
    *(undefined *)(in_x0 + 0x20) = 1;
    StreamedSample::pause();
  }
  return;
}


