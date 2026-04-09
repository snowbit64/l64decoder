// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9be8
// Entry Point: 006e9be8
// Size: 260 bytes
// Signature: undefined FUN_006e9be8(void)


void FUN_006e9be8(char **param_1)

{
  REPORT_USER_REASON RVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  byte local_60;
  void *local_50;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  EngineManager::getInstance();
  EngineManager::getReporterUniqueUserId();
  RVar1 = *(REPORT_USER_REASON *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 6);
  if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar4 != 0)) {
                    /* try { // try from 006e9cb0 to 006e9cbb has its CatchHandler @ 006e9cec */
    UserBlockManager::UserBlockManager
              ((UserBlockManager *)UserBlockManager::getInstance()::instance);
    __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&UserBlockManager::getInstance()::instance);
  }
                    /* try { // try from 006e9c54 to 006e9c67 has its CatchHandler @ 006e9d00 */
  UserBlockManager::reportUser
            (UserBlockManager::getInstance()::instance,*param_1,(PLATFORM_ID)param_1[2],RVar1,
             (char *)(ulong)uVar2);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


