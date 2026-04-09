// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Pool
// Entry Point: 00e440b4
// Size: 168 bytes
// Signature: undefined __thiscall ~Pool(Pool * this)


/* SoLoud::Thread::Pool::~Pool() */

void __thiscall SoLoud::Thread::Pool::~Pool(Pool *this)

{
  void *pvVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  
  *(undefined4 *)(this + 0x2020) = 0;
  if (0 < *(int *)this) {
    lVar2 = 0;
    do {
      pthread_join(**(pthread_t **)(*(long *)(this + 8) + lVar2 * 8),(void **)0x0);
      pvVar1 = *(void **)(*(long *)(this + 8) + lVar2 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)this);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  __mutex = *(pthread_mutex_t **)(this + 0x10);
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_destroy(__mutex);
    operator_delete(__mutex);
    return;
  }
  return;
}


