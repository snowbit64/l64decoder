// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelTask
// Entry Point: 00ba2b90
// Size: 276 bytes
// Signature: undefined __thiscall cancelTask(ThreadPool * this, ThreadPoolTaskManager * param_1, Task * param_2)


/* ThreadPool::cancelTask(ThreadPoolTaskManager*, ThreadPool::Task*) */

void __thiscall
ThreadPool::cancelTask(ThreadPool *this,ThreadPoolTaskManager *param_1,Task *param_2)

{
  long lVar1;
  long *plVar2;
  Task **ppTVar3;
  ulong uVar4;
  Task **ppTVar5;
  
  Mutex::enterCriticalSection();
  uVar4 = *(ulong *)(this + 0x50);
  lVar1 = *(long *)(this + 0x38);
  plVar2 = (long *)(lVar1 + (uVar4 >> 5 & 0x7fffffffffffff8));
  if (*(long *)(this + 0x40) == lVar1) {
    ppTVar3 = (Task **)0x0;
  }
  else {
    ppTVar3 = (Task **)(*plVar2 + (uVar4 & 0xff) * 0x10);
  }
  ppTVar5 = ppTVar3;
  do {
    if (*(long *)(this + 0x40) == lVar1) {
      if (ppTVar5 == (Task **)0x0) goto LAB_00ba2c64;
    }
    else if (ppTVar5 ==
             (Task **)(*(long *)(lVar1 + (*(long *)(this + 0x58) + uVar4 >> 8) * 8) +
                      (*(long *)(this + 0x58) + uVar4 & 0xff) * 0x10)) {
LAB_00ba2c64:
      Mutex::leaveCriticalSection();
      return;
    }
    if ((*ppTVar5 == param_2) && ((ThreadPoolTaskManager *)ppTVar5[1] == param_1)) {
      std::__ndk1::deque<ThreadPool::TaskAndMgr,std::__ndk1::allocator<ThreadPool::TaskAndMgr>>::
      erase((int)this + 0x30);
      Mutex::leaveCriticalSection();
      param_2[8] = (Task)0x1;
      ThreadPoolTaskManager::onTaskComplete(param_1,param_2);
      return;
    }
    ppTVar3 = ppTVar3 + 2;
    ppTVar5 = ppTVar5 + 2;
    if ((Task **)(*plVar2 + 0x1000) == ppTVar3) {
      plVar2 = plVar2 + 1;
      ppTVar3 = (Task **)*plVar2;
      ppTVar5 = ppTVar3;
    }
  } while( true );
}


