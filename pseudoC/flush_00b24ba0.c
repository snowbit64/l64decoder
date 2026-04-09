// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flush
// Entry Point: 00b24ba0
// Size: 4 bytes
// Signature: undefined flush(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AsyncFileLogSink::flush() */

void AsyncFileLogSink::flush(void)

{
  writePendings();
  return;
}


