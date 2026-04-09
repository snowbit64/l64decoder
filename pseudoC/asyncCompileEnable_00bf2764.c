// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: asyncCompileEnable
// Entry Point: 00bf2764
// Size: 524 bytes
// Signature: undefined __thiscall asyncCompileEnable(ShaderManager * this, uint param_1)


/* ShaderManager::asyncCompileEnable(unsigned int) */

void __thiscall ShaderManager::asyncCompileEnable(ShaderManager *this,uint param_1)

{
  ulong uVar1;
  Thread **ppTVar2;
  long lVar3;
  int iVar4;
  Thread *this_00;
  void *__dest;
  uint uVar5;
  void *__src;
  ulong __n;
  char acStack_a8 [64];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x128) == *(long *)(this + 0x130)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00bf2934 to 00bf293f has its CatchHandler @ 00bf2970 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Launching %u compiler threads.\n",(ulong)param_1);
    if (param_1 != 0) {
      uVar5 = 0;
      do {
        this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00bf2840 to 00bf2843 has its CatchHandler @ 00bf2988 */
        Thread::Thread(this_00);
        FUN_00befcc0(acStack_a8);
        Thread::start(this_00,asyncCompileThreadCallbackStatic,this,0xffffffff,acStack_a8,2,0x80000)
        ;
        ppTVar2 = *(Thread ***)(this + 0x130);
        if (ppTVar2 == *(Thread ***)(this + 0x138)) {
          __src = *(void **)(this + 0x128);
          __n = (long)ppTVar2 - (long)__src;
          uVar1 = ((long)__n >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)__n >> 2)) {
            uVar1 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar1 << 3);
          }
          ppTVar2 = (Thread **)((long)__dest + ((long)__n >> 3) * 8);
          *ppTVar2 = this_00;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)(this + 0x128) = __dest;
          *(Thread ***)(this + 0x130) = ppTVar2 + 1;
          *(void **)(this + 0x138) = (void *)((long)__dest + uVar1 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *ppTVar2 = this_00;
          *(Thread ***)(this + 0x130) = ppTVar2 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (param_1 != uVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


