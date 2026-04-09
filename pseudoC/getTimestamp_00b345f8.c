// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimestamp
// Entry Point: 00b345f8
// Size: 24 bytes
// Signature: undefined getTimestamp(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFile::getTimestamp() */

void NativeFile::getTimestamp(void)

{
  char *pcVar1;
  long in_x0;
  
  pcVar1 = (char *)(in_x0 + 0x11);
  if ((*(byte *)(in_x0 + 0x10) & 1) != 0) {
    pcVar1 = *(char **)(in_x0 + 0x20);
  }
  NativeFileUtil::getModifiedTimestamp(pcVar1);
  return;
}


