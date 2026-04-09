// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAvailableModStart
// Entry Point: 00b3c508
// Size: 20 bytes
// Signature: undefined addAvailableModStart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::addAvailableModStart() */

void MasterServerManager::addAvailableModStart(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x10) != *(long *)(in_x0 + 8)) {
    *(long *)(in_x0 + 0x10) = *(long *)(in_x0 + 8);
  }
  return;
}


