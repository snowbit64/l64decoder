// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addWork
// Entry Point: 00e4432c
// Size: 136 bytes
// Signature: undefined __thiscall addWork(Pool * this, PoolTask * param_1)


/* SoLoud::Thread::Pool::addWork(SoLoud::Thread::PoolTask*) */

ulong __thiscall SoLoud::Thread::Pool::addWork(Pool *this,PoolTask *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)this != 0) {
    if (*(pthread_mutex_t **)(this + 0x10) != (pthread_mutex_t *)0x0) {
      pthread_mutex_lock(*(pthread_mutex_t **)(this + 0x10));
    }
    iVar1 = *(int *)(this + 0x2018);
    if (iVar1 != 0x400) {
      *(PoolTask **)(this + (long)iVar1 * 8 + 0x18) = param_1;
      *(int *)(this + 0x2018) = iVar1 + 1;
      if (*(pthread_mutex_t **)(this + 0x10) != (pthread_mutex_t *)0x0) {
        uVar2 = pthread_mutex_unlock(*(pthread_mutex_t **)(this + 0x10));
        return (ulong)uVar2;
      }
      return 0;
    }
    if (*(pthread_mutex_t **)(this + 0x10) != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t **)(this + 0x10));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00e44380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (***(code ***)param_1)(param_1);
  return uVar3;
}


