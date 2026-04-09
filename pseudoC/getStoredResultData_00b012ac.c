// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStoredResultData
// Entry Point: 00b012ac
// Size: 20 bytes
// Signature: undefined getStoredResultData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProfilerManager::getStoredResultData() */

long ProfilerManager::getStoredResultData(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x80) = 1;
  return in_x0 + 0x68;
}


