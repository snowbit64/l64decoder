// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Mutex
// Entry Point: 00c5ec80
// Size: 120 bytes
// Signature: undefined __thiscall Mutex(Mutex * this, bool param_1)


/* Mutex::Mutex(bool) */

void __thiscall Mutex::Mutex(Mutex *this,bool param_1)

{
  long lVar1;
  int iVar2;
  pthread_mutexattr_t apStack_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pthread_mutexattr_init(apStack_40);
  pthread_mutexattr_settype(apStack_40,param_1 & 1);
  pthread_mutex_init((pthread_mutex_t *)this,apStack_40);
  iVar2 = pthread_mutexattr_destroy(apStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


