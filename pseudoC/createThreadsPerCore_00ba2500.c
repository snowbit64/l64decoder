// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createThreadsPerCore
// Entry Point: 00ba2500
// Size: 756 bytes
// Signature: undefined __thiscall createThreadsPerCore(ThreadPool * this, uint param_1, char * param_2, ThreadPriority param_3, uint param_4)


/* ThreadPool::createThreadsPerCore(unsigned int, char const*, Thread::ThreadPriority, unsigned int)
    */

void __thiscall
ThreadPool::createThreadsPerCore
          (ThreadPool *this,uint param_1,char *param_2,ThreadPriority param_3,uint param_4)

{
  ulong uVar1;
  Thread **ppTVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Thread *this_00;
  ThreadPool **ppTVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  void *pvVar11;
  
  uVar5 = param_1 | param_1 >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  iVar6 = 0;
  uVar9 = 0;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = *(uint *)(MathUtil::s_multiplyDeBruijnBitPosition +
                   (ulong)((uVar5 | uVar5 >> 0x10) * 0x7c4acdd >> 0x1b) * 4);
  do {
    uVar4 = 1 << (ulong)(uVar9 & 0x1f);
    if ((uVar4 & param_1) != 0) {
      this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00ba25ac to 00ba25af has its CatchHandler @ 00ba280c */
      Thread::Thread(this_00);
      ppTVar7 = (ThreadPool **)operator_new(0x10);
      *ppTVar7 = this;
      *(int *)(ppTVar7 + 1) = iVar6;
      Thread::start(this_00,staticThreadExecuteFunction,ppTVar7,uVar4,param_2,param_3,param_4);
      ppTVar2 = *(Thread ***)(this + 8);
      if (ppTVar2 == *(Thread ***)(this + 0x10)) {
        pvVar11 = *(void **)this;
        uVar10 = (long)ppTVar2 - (long)pvVar11;
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
          pvVar8 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) goto LAB_00ba2790;
          pvVar8 = operator_new(uVar1 << 3);
        }
        ppTVar2 = (Thread **)((long)pvVar8 + ((long)uVar10 >> 3) * 8);
        *ppTVar2 = this_00;
        if (0 < (long)uVar10) {
          memcpy(pvVar8,pvVar11,uVar10);
        }
        *(void **)this = pvVar8;
        *(Thread ***)(this + 8) = ppTVar2 + 1;
        *(void **)(this + 0x10) = (void *)((long)pvVar8 + uVar1 * 8);
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
        }
      }
      else {
        *ppTVar2 = this_00;
        *(Thread ***)(this + 8) = ppTVar2 + 1;
      }
      puVar3 = *(undefined8 **)(this + 0x20);
      iVar6 = iVar6 + 1;
      if (puVar3 == *(undefined8 **)(this + 0x28)) {
        pvVar11 = *(void **)(this + 0x18);
        uVar10 = (long)puVar3 - (long)pvVar11;
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
          pvVar8 = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
LAB_00ba2790:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar8 = operator_new(uVar1 << 3);
        }
        puVar3 = (undefined8 *)((long)pvVar8 + ((long)uVar10 >> 3) * 8);
        *puVar3 = ppTVar7;
        if (0 < (long)uVar10) {
          memcpy(pvVar8,pvVar11,uVar10);
        }
        *(void **)(this + 0x18) = pvVar8;
        *(undefined8 **)(this + 0x20) = puVar3 + 1;
        *(void **)(this + 0x28) = (void *)((long)pvVar8 + uVar1 * 8);
        if (pvVar11 != (void *)0x0) {
          operator_delete(pvVar11);
        }
      }
      else {
        *puVar3 = ppTVar7;
        *(undefined8 **)(this + 0x20) = puVar3 + 1;
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar5 < uVar9) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00ba27bc to 00ba27c7 has its CatchHandler @ 00ba27f4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Started %u threads for threadpool \'%s\'\n",
                        (ulong)(*(long *)(this + 8) - *(long *)this) >> 3,param_2);
      return;
    }
  } while( true );
}


