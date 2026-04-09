// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextFinishedTask
// Entry Point: 00ba49f0
// Size: 184 bytes
// Signature: undefined getNextFinishedTask(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPoolTaskManager::getNextFinishedTask() */

undefined8 ThreadPoolTaskManager::getNextFinishedTask(void)

{
  long in_x0;
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  Mutex::enterCriticalSection();
  if (*(long *)(in_x0 + 0x38) == 0) {
    Mutex::leaveCriticalSection();
    uVar3 = 0;
  }
  else {
    uVar1 = *(ulong *)(in_x0 + 0x30);
    lVar2 = *(long *)((long)*(void ***)(in_x0 + 0x18) + (uVar1 >> 6 & 0x3fffffffffffff8));
    *(ulong *)(in_x0 + 0x30) = uVar1 + 1;
    *(long *)(in_x0 + 0x38) = *(long *)(in_x0 + 0x38) + -1;
    uVar3 = *(undefined8 *)(lVar2 + (uVar1 & 0x1ff) * 8);
    if (0x3ff < uVar1 + 1) {
      operator_delete(**(void ***)(in_x0 + 0x18));
      *(long *)(in_x0 + 0x18) = *(long *)(in_x0 + 0x18) + 8;
      *(long *)(in_x0 + 0x30) = *(long *)(in_x0 + 0x30) + -0x200;
    }
    Mutex::leaveCriticalSection();
    Semaphore::wait();
    *(int *)(in_x0 + 8) = *(int *)(in_x0 + 8) + -1;
  }
  return uVar3;
}


