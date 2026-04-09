// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createThreadsCustom
// Entry Point: 00ba2820
// Size: 676 bytes
// Signature: undefined __thiscall createThreadsCustom(ThreadPool * this, uint param_1, uint * param_2, char * param_3, ThreadPriority param_4, uint param_5)


/* ThreadPool::createThreadsCustom(unsigned int, unsigned int const*, char const*,
   Thread::ThreadPriority, unsigned int) */

void __thiscall
ThreadPool::createThreadsCustom
          (ThreadPool *this,uint param_1,uint *param_2,char *param_3,ThreadPriority param_4,
          uint param_5)

{
  ulong uVar1;
  Thread **ppTVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  Thread *this_00;
  ThreadPool **ppTVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  
  if (param_1 != 0) {
    uVar8 = 0;
    do {
      this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00ba288c to 00ba288f has its CatchHandler @ 00ba2adc */
      Thread::Thread(this_00);
      ppTVar6 = (ThreadPool **)operator_new(0x10);
      *ppTVar6 = this;
      uVar4 = param_2[uVar8];
      *(int *)(ppTVar6 + 1) = (int)uVar8;
      Thread::start(this_00,staticThreadExecuteFunction,ppTVar6,uVar4,param_3,param_4,param_5);
      ppTVar2 = *(Thread ***)(this + 8);
      if (ppTVar2 == *(Thread ***)(this + 0x10)) {
        pvVar10 = *(void **)this;
        uVar9 = (long)ppTVar2 - (long)pvVar10;
        uVar1 = ((long)uVar9 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar9 >> 2)) {
          uVar1 = (long)uVar9 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) goto LAB_00ba2a60;
          pvVar7 = operator_new(uVar1 << 3);
        }
        ppTVar2 = (Thread **)((long)pvVar7 + ((long)uVar9 >> 3) * 8);
        *ppTVar2 = this_00;
        if (0 < (long)uVar9) {
          memcpy(pvVar7,pvVar10,uVar9);
        }
        *(void **)this = pvVar7;
        *(Thread ***)(this + 8) = ppTVar2 + 1;
        *(void **)(this + 0x10) = (void *)((long)pvVar7 + uVar1 * 8);
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
      }
      else {
        *ppTVar2 = this_00;
        *(Thread ***)(this + 8) = ppTVar2 + 1;
      }
      puVar3 = *(undefined8 **)(this + 0x20);
      if (puVar3 == *(undefined8 **)(this + 0x28)) {
        pvVar10 = *(void **)(this + 0x18);
        uVar9 = (long)puVar3 - (long)pvVar10;
        uVar1 = ((long)uVar9 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)uVar9 >> 2)) {
          uVar1 = (long)uVar9 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
LAB_00ba2a60:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar7 = operator_new(uVar1 << 3);
        }
        puVar3 = (undefined8 *)((long)pvVar7 + ((long)uVar9 >> 3) * 8);
        *puVar3 = ppTVar6;
        if (0 < (long)uVar9) {
          memcpy(pvVar7,pvVar10,uVar9);
        }
        *(void **)(this + 0x18) = pvVar7;
        *(undefined8 **)(this + 0x20) = puVar3 + 1;
        *(void **)(this + 0x28) = (void *)((long)pvVar7 + uVar1 * 8);
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
      }
      else {
        *puVar3 = ppTVar6;
        *(undefined8 **)(this + 0x20) = puVar3 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (param_1 != uVar8);
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00ba2a8c to 00ba2a97 has its CatchHandler @ 00ba2ac4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Started %u threads for threadpool \'%s\'\n",
                    (ulong)(*(long *)(this + 8) - *(long *)this) >> 3,param_3);
  return;
}


