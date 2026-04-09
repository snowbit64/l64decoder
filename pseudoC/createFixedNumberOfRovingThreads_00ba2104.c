// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createFixedNumberOfRovingThreads
// Entry Point: 00ba2104
// Size: 720 bytes
// Signature: undefined __thiscall createFixedNumberOfRovingThreads(ThreadPool * this, uint param_1, char * param_2, ThreadPriority param_3, uint param_4)


/* ThreadPool::createFixedNumberOfRovingThreads(unsigned int, char const*, Thread::ThreadPriority,
   unsigned int) */

void __thiscall
ThreadPool::createFixedNumberOfRovingThreads
          (ThreadPool *this,uint param_1,char *param_2,ThreadPriority param_3,uint param_4)

{
  ulong uVar1;
  Thread **ppTVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  Thread *this_00;
  ThreadPool **ppTVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  char acStack_270 [512];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_1 != 0) {
    uVar9 = 0;
    do {
      this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00ba2178 to 00ba217b has its CatchHandler @ 00ba23ec */
      Thread::Thread(this_00);
      ppTVar6 = (ThreadPool **)operator_new(0x10);
      *ppTVar6 = this;
      *(uint *)(ppTVar6 + 1) = uVar9;
      FUN_00ba2400(acStack_270);
      Thread::start(this_00,staticThreadExecuteFunction,ppTVar6,0xffffffff,acStack_270,param_3,
                    param_4);
      ppTVar2 = *(Thread ***)(this + 8);
      if (ppTVar2 == *(Thread ***)(this + 0x10)) {
        pvVar8 = *(void **)this;
        uVar10 = (long)ppTVar2 - (long)pvVar8;
        uVar1 = ((long)uVar10 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar10 >> 2)) {
          uVar1 = (long)uVar10 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) goto LAB_00ba236c;
          pvVar7 = operator_new(uVar1 << 3);
        }
        ppTVar2 = (Thread **)((long)pvVar7 + ((long)uVar10 >> 3) * 8);
        *ppTVar2 = this_00;
        if (0 < (long)uVar10) {
          memcpy(pvVar7,pvVar8,uVar10);
        }
        *(void **)this = pvVar7;
        *(Thread ***)(this + 8) = ppTVar2 + 1;
        *(void **)(this + 0x10) = (void *)((long)pvVar7 + uVar1 * 8);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      else {
        *ppTVar2 = this_00;
        *(Thread ***)(this + 8) = ppTVar2 + 1;
      }
      puVar3 = *(undefined8 **)(this + 0x20);
      if (puVar3 == *(undefined8 **)(this + 0x28)) {
        pvVar8 = *(void **)(this + 0x18);
        uVar10 = (long)puVar3 - (long)pvVar8;
        uVar1 = ((long)uVar10 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar10 >> 2)) {
          uVar1 = (long)uVar10 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
LAB_00ba236c:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar7 = operator_new(uVar1 << 3);
        }
        puVar3 = (undefined8 *)((long)pvVar7 + ((long)uVar10 >> 3) * 8);
        *puVar3 = ppTVar6;
        if (0 < (long)uVar10) {
          memcpy(pvVar7,pvVar8,uVar10);
        }
        *(void **)(this + 0x18) = pvVar7;
        *(undefined8 **)(this + 0x20) = puVar3 + 1;
        *(void **)(this + 0x28) = (void *)((long)pvVar7 + uVar1 * 8);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      else {
        *puVar3 = ppTVar6;
        *(undefined8 **)(this + 0x20) = puVar3 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (param_1 != uVar9);
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00ba2398 to 00ba23a3 has its CatchHandler @ 00ba23d4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Started %u threads for threadpool \'%s\'\n",
                    (ulong)(*(long *)(this + 8) - *(long *)this) >> 3,param_2);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


