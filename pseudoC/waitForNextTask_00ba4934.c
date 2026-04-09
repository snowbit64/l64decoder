// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitForNextTask
// Entry Point: 00ba4934
// Size: 188 bytes
// Signature: undefined waitForNextTask(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadPoolTaskManager::waitForNextTask() */

undefined8 ThreadPoolTaskManager::waitForNextTask(void)

{
  long in_x0;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(int *)(in_x0 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    Semaphore::wait();
    Mutex::enterCriticalSection();
    uVar3 = *(ulong *)(in_x0 + 0x30);
    lVar1 = *(long *)((long)*(void ***)(in_x0 + 0x18) + (uVar3 >> 6 & 0x3fffffffffffff8));
    *(long *)(in_x0 + 0x38) = *(long *)(in_x0 + 0x38) + -1;
    *(ulong *)(in_x0 + 0x30) = uVar3 + 1;
    uVar2 = *(undefined8 *)(lVar1 + (uVar3 & 0x1ff) * 8);
    if (0x3ff < uVar3 + 1) {
      operator_delete(**(void ***)(in_x0 + 0x18));
      *(long *)(in_x0 + 0x18) = *(long *)(in_x0 + 0x18) + 8;
      *(long *)(in_x0 + 0x30) = *(long *)(in_x0 + 0x30) + -0x200;
    }
    Mutex::leaveCriticalSection();
    *(int *)(in_x0 + 8) = *(int *)(in_x0 + 8) + -1;
  }
  return uVar2;
}


