// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea4cc
// Entry Point: 006ea4cc
// Size: 572 bytes
// Signature: undefined FUN_006ea4cc(void)


void FUN_006ea4cc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *__src;
  int iVar3;
  MasterServerManager *this;
  undefined8 *__dest;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong __n;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  if (1 < *(uint3 *)((long)param_1 + 0xc)) {
    uVar5 = (ulong)(*(uint3 *)((long)param_1 + 0xc) >> 1);
    local_80 = (undefined8 *)operator_new(uVar5 << 3);
    lVar7 = 0;
    uVar4 = 0;
    local_70 = local_80 + uVar5;
    local_78 = local_80;
    do {
      __src = local_80;
      lVar6 = *param_1;
      if (*(int *)(lVar6 + lVar7 + 8) == 6) {
        if (local_78 == local_70) {
          __n = (long)local_78 - (long)local_80;
          uVar5 = ((long)__n >> 3) + 1;
          if (uVar5 >> 0x3d != 0) {
                    /* try { // try from 006ea6f0 to 006ea703 has its CatchHandler @ 006ea720 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar5 <= (ulong)((long)__n >> 2)) {
            uVar5 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar5 = 0x1fffffffffffffff;
          }
          if (uVar5 == 0) {
            __dest = (undefined8 *)0x0;
          }
          else {
            if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = (undefined8 *)operator_new(uVar5 << 3);
          }
          puVar1 = __dest + ((long)__n >> 3);
          *puVar1 = *(undefined8 *)(lVar6 + lVar7);
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          local_70 = __dest + uVar5;
          local_80 = __dest;
          local_78 = puVar1 + 1;
          if (__src != (undefined8 *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *local_78 = *(undefined8 *)(lVar6 + lVar7);
          local_78 = local_78 + 1;
        }
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 006ea6b8 to 006ea6c3 has its CatchHandler @ 006ea708 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 006ea5fc to 006ea65b has its CatchHandler @ 006ea724 */
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Invalid session id at index %u in masterServerSetServerPlatformSessionIds\n"
                          ,uVar4 & 0xffffffff);
      }
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar4 < *(uint3 *)((long)param_1 + 0xc) >> 1);
  }
                    /* try { // try from 006ea51c to 006ea57f has its CatchHandler @ 006ea71c */
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::setServerPlatformSessionIds(this,(vector *)&local_80);
  ReflectionUtil::deleteInvocationArgValue((Value *)param_1);
  if (local_80 != (undefined8 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


