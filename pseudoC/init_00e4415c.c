// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00e4415c
// Size: 280 bytes
// Signature: undefined __thiscall init(Pool * this, int param_1)


/* SoLoud::Thread::Pool::init(int) */

void __thiscall SoLoud::Thread::Pool::init(Pool *this,int param_1)

{
  long lVar1;
  uint uVar2;
  pthread_mutex_t *__mutex;
  void *pvVar3;
  code **__arg;
  pthread_t *__newthread;
  long lVar5;
  pthread_mutexattr_t apStack_60 [2];
  long local_58;
  Pool *pPVar4;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pPVar4 = this;
  if (0 < param_1) {
    *(undefined4 *)(this + 0x2018) = 0;
    __mutex = (pthread_mutex_t *)operator_new(0x28);
    pthread_mutexattr_init(apStack_60);
    pthread_mutex_init(__mutex,apStack_60);
    *(pthread_mutex_t **)(this + 0x10) = __mutex;
    *(undefined4 *)(this + 0x2020) = 1;
    *(int *)this = param_1;
    pvVar3 = operator_new__((ulong)(uint)param_1 << 3);
    lVar5 = 0;
    *(void **)(this + 8) = pvVar3;
    do {
      __arg = (code **)operator_new(0x10);
      *__arg = FUN_00e44274;
      __arg[1] = (code *)this;
      __newthread = (pthread_t *)operator_new(8);
      pthread_create(__newthread,(pthread_attr_t *)0x0,FUN_00e44048,__arg);
      uVar2 = pthread_setname_np(*__newthread,"soloud");
      pPVar4 = (Pool *)(ulong)uVar2;
      *(pthread_t **)(*(long *)(this + 8) + lVar5 * 8) = __newthread;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


