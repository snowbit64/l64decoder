// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startWriteServerEvents
// Entry Point: 009847a8
// Size: 32 bytes
// Signature: undefined startWriteServerEvents(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MeshSplitManager::startWriteServerEvents() */

bool MeshSplitManager::startWriteServerEvents(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x150) != *(long *)(in_x0 + 0x158) ||
         *(long *)(in_x0 + 0x168) != *(long *)(in_x0 + 0x170);
}


