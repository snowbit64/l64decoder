// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyObject
// Entry Point: 008d5708
// Size: 616 bytes
// Signature: undefined __thiscall destroyObject(FoliageBendingSystem * this, uint param_1)


/* FoliageBendingSystem::destroyObject(unsigned int) */

undefined8 __thiscall FoliageBendingSystem::destroyObject(FoliageBendingSystem *this,uint param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  size_t __n;
  int iVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  ulong __n_00;
  
  uVar5 = (ulong)param_1;
  if ((param_1 < *(uint *)(this + 0x40)) &&
     (*(char *)(*(long *)(this + 0x30) + uVar5 * 0xa0) != '\0')) {
    lVar1 = *(long *)(this + 0x48);
    lVar3 = *(long *)(this + 0x50) - lVar1;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (*(uint *)(lVar1 + uVar6 * 4) == param_1) {
          pvVar7 = (void *)(lVar1 + uVar6 * 4);
          __n = *(long *)(this + 0x50) - (long)(void *)((long)pvVar7 + 4);
          if (__n != 0) {
            memmove(pvVar7,(void *)((long)pvVar7 + 4),__n);
          }
          puVar2 = *(uint **)(this + 0x68);
          *(size_t *)(this + 0x50) = (long)pvVar7 + __n;
          if (puVar2 == *(uint **)(this + 0x70)) {
            pvVar7 = *(void **)(this + 0x60);
            __n_00 = (long)puVar2 - (long)pvVar7;
            uVar6 = ((long)__n_00 >> 2) + 1;
            if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar6 <= (ulong)((long)__n_00 >> 1)) {
              uVar6 = (long)__n_00 >> 1;
            }
            if (0x7ffffffffffffffb < __n_00) {
              uVar6 = 0x3fffffffffffffff;
            }
            if (uVar6 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar6 << 2);
            }
            puVar2 = (uint *)((long)__dest + ((long)__n_00 >> 2) * 4);
            *puVar2 = param_1;
            if (0 < (long)__n_00) {
              memcpy(__dest,pvVar7,__n_00);
            }
            *(void **)(this + 0x60) = __dest;
            *(uint **)(this + 0x68) = puVar2 + 1;
            *(void **)(this + 0x70) = (void *)((long)__dest + uVar6 * 4);
            if (pvVar7 != (void *)0x0) {
              operator_delete(pvVar7);
            }
          }
          else {
            *puVar2 = param_1;
            *(uint **)(this + 0x68) = puVar2 + 1;
          }
          *(undefined *)(*(long *)(this + 0x30) + uVar5 * 0xa0) = 0;
          return 1;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)(lVar3 >> 2));
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008d5928 to 008d5933 has its CatchHandler @ 008d5970 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: internal error in FoliageBendingSystem\n");
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008d58e0 to 008d58eb has its CatchHandler @ 008d5974 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: deleting invalid FoliageBendingSystem object index %u\n",uVar5);
  }
  return 0;
}


