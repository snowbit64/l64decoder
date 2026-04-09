// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileHistory
// Entry Point: 00b33474
// Size: 24 bytes
// Signature: undefined getFileHistory(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FileManager::getFileHistory() */

void FileManager::getFileHistory(void)

{
  long in_x0;
  long *in_x8;
  
  *(undefined *)(in_x8 + 2) = 0;
  *in_x8 = in_x0 + 0xb8;
  in_x8[1] = in_x0 + 0xe0;
  Mutex::enterCriticalSection();
  return;
}


