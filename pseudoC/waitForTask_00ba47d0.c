// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitForTask
// Entry Point: 00ba47d0
// Size: 356 bytes
// Signature: undefined __thiscall waitForTask(ThreadPoolTaskManager * this, Task * param_1)


/* ThreadPoolTaskManager::waitForTask(ThreadPool::Task*) */

bool __thiscall ThreadPoolTaskManager::waitForTask(ThreadPoolTaskManager *this,Task *param_1)

{
  long lVar1;
  Task TVar2;
  uint uVar3;
  long *plVar4;
  Task **ppTVar5;
  ulong uVar6;
  Task **ppTVar7;
  uint uVar8;
  ulong uVar9;
  
LAB_00ba47f4:
  Mutex::enterCriticalSection();
  uVar6 = *(ulong *)(this + 0x30);
  lVar1 = *(long *)(this + 0x18);
  plVar4 = (long *)(lVar1 + (uVar6 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(this + 0x20) == lVar1) {
    ppTVar5 = (Task **)0x0;
  }
  else {
    ppTVar5 = (Task **)(*plVar4 + (uVar6 & 0x1ff) * 8);
  }
  uVar9 = *(ulong *)(this + 0x38);
  ppTVar7 = ppTVar5;
LAB_00ba4840:
  if (*(long *)(this + 0x20) == lVar1) {
    if (ppTVar7 == (Task **)0x0) goto LAB_00ba4894;
  }
  else if (ppTVar7 ==
           (Task **)(*(long *)(lVar1 + (uVar9 + uVar6 >> 9) * 8) + (uVar9 + uVar6 & 0x1ff) * 8))
  goto LAB_00ba4894;
  if (*ppTVar7 == param_1) {
    std::__ndk1::deque<ThreadPool::Task*,std::__ndk1::allocator<ThreadPool::Task*>>::erase
              ((int)this + 0x10);
    Mutex::leaveCriticalSection();
    Semaphore::wait();
    TVar2 = param_1[8];
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    return TVar2 == (Task)0x0;
  }
  ppTVar5 = ppTVar5 + 1;
  ppTVar7 = ppTVar7 + 1;
  if ((Task **)(*plVar4 + 0x1000) == ppTVar5) {
    plVar4 = plVar4 + 1;
    ppTVar5 = (Task **)*plVar4;
    ppTVar7 = ppTVar5;
  }
  goto LAB_00ba4840;
LAB_00ba4894:
  Mutex::leaveCriticalSection();
  uVar6 = uVar9 & 0xffffffff;
  uVar8 = (uint)uVar9;
  if (uVar8 == 0) {
    Semaphore::wait();
    Semaphore::post();
  }
  else {
    do {
      Semaphore::wait();
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
    } while (uVar3 != 0);
    Semaphore::wait();
    Semaphore::post();
    while (uVar8 != 0) {
      Semaphore::post();
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar8;
    }
  }
  goto LAB_00ba47f4;
}


