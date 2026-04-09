// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pollTask
// Entry Point: 00ba43e4
// Size: 280 bytes
// Signature: undefined __thiscall pollTask(ThreadPoolTaskManager * this, Task * param_1, bool * param_2)


/* ThreadPoolTaskManager::pollTask(ThreadPool::Task*, bool&) */

bool __thiscall
ThreadPoolTaskManager::pollTask(ThreadPoolTaskManager *this,Task *param_1,bool *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  Task **ppTVar4;
  ulong uVar5;
  Task **ppTVar6;
  Task **ppTVar7;
  
  Mutex::enterCriticalSection();
  uVar5 = *(ulong *)(this + 0x30);
  lVar1 = *(long *)(this + 0x18);
  plVar3 = (long *)(lVar1 + (uVar5 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(this + 0x20) == lVar1) {
    ppTVar4 = (Task **)0x0;
  }
  else {
    ppTVar4 = (Task **)(*plVar3 + (uVar5 & 0x1ff) * 8);
  }
  ppTVar6 = ppTVar4;
  do {
    if (*(long *)(this + 0x20) == lVar1) {
      ppTVar7 = (Task **)0x0;
      if (ppTVar6 == (Task **)0x0) goto LAB_00ba44ac;
    }
    else {
      ppTVar7 = (Task **)(*(long *)(lVar1 + (*(long *)(this + 0x38) + uVar5 >> 9) * 8) +
                         (*(long *)(this + 0x38) + uVar5 & 0x1ff) * 8);
      if (ppTVar6 == ppTVar7) {
LAB_00ba44ac:
        Mutex::leaveCriticalSection();
        goto LAB_00ba44e0;
      }
    }
    if (*ppTVar6 == param_1) {
      std::__ndk1::deque<ThreadPool::Task*,std::__ndk1::allocator<ThreadPool::Task*>>::erase
                ((int)this + 0x10);
      Mutex::leaveCriticalSection();
      Semaphore::wait();
      iVar2 = *(int *)(this + 8);
      *param_2 = (bool)param_1[8];
      *(int *)(this + 8) = iVar2 + -1;
LAB_00ba44e0:
      return ppTVar6 != ppTVar7;
    }
    ppTVar4 = ppTVar4 + 1;
    ppTVar6 = ppTVar6 + 1;
    if ((Task **)(*plVar3 + 0x1000) == ppTVar4) {
      plVar3 = plVar3 + 1;
      ppTVar4 = (Task **)*plVar3;
      ppTVar6 = ppTVar4;
    }
  } while( true );
}


