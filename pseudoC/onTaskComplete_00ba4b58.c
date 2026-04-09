// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTaskComplete
// Entry Point: 00ba4b58
// Size: 148 bytes
// Signature: undefined __thiscall onTaskComplete(ThreadPoolTaskManager * this, Task * param_1)


/* ThreadPoolTaskManager::onTaskComplete(ThreadPool::Task*) */

void __thiscall ThreadPoolTaskManager::onTaskComplete(ThreadPoolTaskManager *this,Task *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x38);
  uVar1 = 0;
  if (*(long *)(this + 0x20) - lVar2 != 0) {
    uVar1 = (*(long *)(this + 0x20) - lVar2) * 0x40 - 1;
  }
  uVar4 = lVar3 + *(long *)(this + 0x30);
  if (uVar1 == uVar4) {
    std::__ndk1::deque<ThreadPool::Task*,std::__ndk1::allocator<ThreadPool::Task*>>::
    __add_back_capacity();
    lVar3 = *(long *)(this + 0x38);
    lVar2 = *(long *)(this + 0x18);
    uVar4 = *(long *)(this + 0x30) + lVar3;
  }
  lVar2 = *(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8));
  *(long *)(this + 0x38) = lVar3 + 1;
  *(Task **)(lVar2 + (uVar4 & 0x1ff) * 8) = param_1;
  Mutex::leaveCriticalSection();
  Semaphore::post();
  return;
}


