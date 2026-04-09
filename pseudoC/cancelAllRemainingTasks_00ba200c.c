// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelAllRemainingTasks
// Entry Point: 00ba200c
// Size: 200 bytes
// Signature: undefined cancelAllRemainingTasks(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPool::cancelAllRemainingTasks() */

void ThreadPool::cancelAllRemainingTasks(void)

{
  Task **ppTVar1;
  Task *pTVar2;
  ThreadPoolTaskManager *this;
  long in_x0;
  long lVar3;
  ulong uVar4;
  
  Mutex::enterCriticalSection();
  lVar3 = *(long *)(in_x0 + 0x58);
  while (lVar3 != 0) {
    uVar4 = *(ulong *)(in_x0 + 0x50);
    ppTVar1 = (Task **)(*(long *)((long)*(void ***)(in_x0 + 0x38) + (uVar4 >> 5 & 0x7fffffffffffff8)
                                 ) + (uVar4 & 0xff) * 0x10);
    pTVar2 = *ppTVar1;
    this = (ThreadPoolTaskManager *)ppTVar1[1];
    *(ulong *)(in_x0 + 0x50) = uVar4 + 1;
    *(long *)(in_x0 + 0x58) = lVar3 + -1;
    if (0x1ff < uVar4 + 1) {
      operator_delete(**(void ***)(in_x0 + 0x38));
      *(long *)(in_x0 + 0x38) = *(long *)(in_x0 + 0x38) + 8;
      *(long *)(in_x0 + 0x50) = *(long *)(in_x0 + 0x50) + -0x100;
    }
    Mutex::leaveCriticalSection();
    pTVar2[8] = (Task)0x1;
    ThreadPoolTaskManager::onTaskComplete(this,pTVar2);
    Mutex::enterCriticalSection();
    lVar3 = *(long *)(in_x0 + 0x58);
  }
  Mutex::leaveCriticalSection();
  return;
}


