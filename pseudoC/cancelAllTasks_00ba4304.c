// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelAllTasks
// Entry Point: 00ba4304
// Size: 12 bytes
// Signature: undefined cancelAllTasks(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPoolTaskManager::cancelAllTasks() */

void ThreadPoolTaskManager::cancelAllTasks(void)

{
  ThreadPool **in_x0;
  
  ThreadPool::cancelAllTasks(*in_x0,(ThreadPoolTaskManager *)in_x0);
  return;
}


