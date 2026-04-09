// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createMutex
// Entry Point: 00e43f34
// Size: 100 bytes
// Signature: undefined createMutex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Thread::createMutex() */

pthread_mutex_t * SoLoud::Thread::createMutex(void)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  pthread_mutexattr_t apStack_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __mutex = (pthread_mutex_t *)operator_new(0x28);
  pthread_mutexattr_init(apStack_30);
  iVar2 = pthread_mutex_init(__mutex,apStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return __mutex;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


