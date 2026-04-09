// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitUntilTaskListIsDrained
// Entry Point: 00ba3060
// Size: 76 bytes
// Signature: undefined waitUntilTaskListIsDrained(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPool::waitUntilTaskListIsDrained() */

void ThreadPool::waitUntilTaskListIsDrained(void)

{
  int iVar1;
  long in_x0;
  
  while( true ) {
    Mutex::enterCriticalSection();
    iVar1 = *(int *)(in_x0 + 0x58);
    Mutex::leaveCriticalSection();
    if (iVar1 == 0) break;
    ThreadUtil::usleep(1000);
  }
  return;
}


