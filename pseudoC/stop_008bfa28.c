// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 008bfa28
// Size: 44 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalFileListChannel::stop() */

void LocalFileListChannel::stop(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x20) = 0;
  StreamedSample::stop();
  StreamedSample::unload();
  return;
}


