// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ThreadPool
// Entry Point: 00ba1eb4
// Size: 284 bytes
// Signature: undefined __thiscall ~ThreadPool(ThreadPool * this)


/* ThreadPool::~ThreadPool() */

void __thiscall ThreadPool::~ThreadPool(ThreadPool *this)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  Thread *this_00;
  
                    /* try { // try from 00ba1ec8 to 00ba1ecb has its CatchHandler @ 00ba1fd0 */
  cancelAllRemainingTasks();
  if (*(long *)(this + 8) != *(long *)this) {
    uVar4 = 0;
    do {
                    /* try { // try from 00ba1ee0 to 00ba1ee3 has its CatchHandler @ 00ba1fd8 */
      Thread::cancel();
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(this + 8) - *(long *)this >> 3));
    if (*(long *)(this + 8) != *(long *)this) {
      uVar4 = 1;
      do {
                    /* try { // try from 00ba1f08 to 00ba1f0f has its CatchHandler @ 00ba1fd4 */
        Semaphore::post();
        lVar3 = *(long *)this;
        bVar1 = uVar4 < (ulong)(*(long *)(this + 8) - lVar3 >> 3);
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (bVar1);
      if (*(long *)(this + 8) != lVar3) {
        uVar4 = 0;
        do {
          this_00 = *(Thread **)(lVar3 + uVar4 * 8);
          if (this_00 != (Thread *)0x0) {
            Thread::~Thread(this_00);
            operator_delete(this_00);
          }
          pvVar2 = *(void **)(*(long *)(this + 0x18) + uVar4 * 8);
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
          }
          lVar3 = *(long *)this;
          uVar4 = (ulong)((int)uVar4 + 1);
        } while (uVar4 < (ulong)(*(long *)(this + 8) - lVar3 >> 3));
      }
    }
  }
  Semaphore::~Semaphore((Semaphore *)(this + 0x88));
  Mutex::~Mutex((Mutex *)(this + 0x60));
  std::__ndk1::__deque_base<ThreadPool::TaskAndMgr,std::__ndk1::allocator<ThreadPool::TaskAndMgr>>::
  ~__deque_base((__deque_base<ThreadPool::TaskAndMgr,std::__ndk1::allocator<ThreadPool::TaskAndMgr>>
                 *)(this + 0x30));
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar2;
  operator_delete(pvVar2);
  return;
}


