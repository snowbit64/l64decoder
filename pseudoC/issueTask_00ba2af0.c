// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: issueTask
// Entry Point: 00ba2af0
// Size: 160 bytes
// Signature: undefined __thiscall issueTask(ThreadPool * this, ThreadPoolTaskManager * param_1, Task * param_2)


/* ThreadPool::issueTask(ThreadPoolTaskManager*, ThreadPool::Task*) */

void __thiscall ThreadPool::issueTask(ThreadPool *this,ThreadPoolTaskManager *param_1,Task *param_2)

{
  Task **ppTVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  param_2[8] = (Task)0x0;
  Mutex::enterCriticalSection();
  lVar3 = *(long *)(this + 0x38);
  uVar2 = 0;
  if (*(long *)(this + 0x40) - lVar3 != 0) {
    uVar2 = (*(long *)(this + 0x40) - lVar3) * 0x20 - 1;
  }
  uVar4 = *(long *)(this + 0x58) + *(long *)(this + 0x50);
  if (uVar2 == uVar4) {
    std::__ndk1::deque<ThreadPool::TaskAndMgr,std::__ndk1::allocator<ThreadPool::TaskAndMgr>>::
    __add_back_capacity();
    lVar3 = *(long *)(this + 0x38);
    uVar4 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
  }
  ppTVar1 = (Task **)(*(long *)(lVar3 + (uVar4 >> 5 & 0x7fffffffffffff8)) + (uVar4 & 0xff) * 0x10);
  *ppTVar1 = param_2;
  ppTVar1[1] = (Task *)param_1;
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  Mutex::leaveCriticalSection();
  Semaphore::post();
  return;
}


