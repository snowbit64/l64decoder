// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelAllStreamQueues
// Entry Point: 00b020d4
// Size: 8 bytes
// Signature: undefined cancelAllStreamQueues(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamManager::cancelAllStreamQueues() */

void StreamManager::cancelAllStreamQueues(void)

{
  StreamManager *in_x0;
  
  activateQueueEntries(in_x0,-1.0);
  return;
}


