// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeOneTask
// Entry Point: 00ba3108
// Size: 208 bytes
// Signature: undefined __thiscall executeOneTask(ThreadPool * this, uint param_1)


/* ThreadPool::executeOneTask(unsigned int) */

bool __thiscall ThreadPool::executeOneTask(ThreadPool *this,uint param_1)

{
  long **pplVar1;
  long *plVar2;
  long *this_00;
  ulong uVar3;
  long lVar4;
  
  Mutex::enterCriticalSection();
  lVar4 = *(long *)(this + 0x58);
  if (lVar4 == 0) {
    Mutex::leaveCriticalSection();
  }
  else {
    uVar3 = *(ulong *)(this + 0x50);
    pplVar1 = (long **)(*(long *)((long)*(void ***)(this + 0x38) + (uVar3 >> 5 & 0x7fffffffffffff8))
                       + (uVar3 & 0xff) * 0x10);
    plVar2 = *pplVar1;
    this_00 = pplVar1[1];
    *(ulong *)(this + 0x50) = uVar3 + 1;
    *(long *)(this + 0x58) = lVar4 + -1;
    if (0x1ff < uVar3 + 1) {
      operator_delete(**(void ***)(this + 0x38));
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + -0x100;
    }
    Mutex::leaveCriticalSection();
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    ThreadPoolTaskManager::onTaskComplete((ThreadPoolTaskManager *)this_00,(Task *)plVar2);
  }
  return lVar4 != 0;
}


