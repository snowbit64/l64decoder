// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelAllTasks
// Entry Point: 00ba2f5c
// Size: 260 bytes
// Signature: undefined __thiscall cancelAllTasks(ThreadPool * this, ThreadPoolTaskManager * param_1)


/* ThreadPool::cancelAllTasks(ThreadPoolTaskManager*) */

void __thiscall ThreadPool::cancelAllTasks(ThreadPool *this,ThreadPoolTaskManager *param_1)

{
  long lVar1;
  long *plVar2;
  Task **ppTVar3;
  ulong uVar4;
  Task **ppTVar5;
  Task *pTVar6;
  
  do {
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
LAB_00ba2fcc:
    if (*(long *)(this + 0x40) == lVar1) {
      if (ppTVar5 == (Task **)0x0) goto LAB_00ba3048;
    }
    else if (ppTVar5 ==
             (Task **)(*(long *)(lVar1 + (*(long *)(this + 0x58) + uVar4 >> 8) * 8) +
                      (*(long *)(this + 0x58) + uVar4 & 0xff) * 0x10)) {
LAB_00ba3048:
      Mutex::leaveCriticalSection();
      return;
    }
    if ((ThreadPoolTaskManager *)ppTVar5[1] != param_1) {
      ppTVar3 = ppTVar3 + 2;
      ppTVar5 = ppTVar5 + 2;
      if ((Task **)(*plVar2 + 0x1000) == ppTVar3) {
        plVar2 = plVar2 + 1;
        ppTVar3 = (Task **)*plVar2;
        ppTVar5 = ppTVar3;
      }
      goto LAB_00ba2fcc;
    }
    pTVar6 = *ppTVar5;
    std::__ndk1::deque<ThreadPool::TaskAndMgr,std::__ndk1::allocator<ThreadPool::TaskAndMgr>>::erase
              ((int)this + 0x30);
    Mutex::leaveCriticalSection();
    pTVar6[8] = (Task)0x1;
    ThreadPoolTaskManager::onTaskComplete(param_1,pTVar6);
  } while( true );
}


