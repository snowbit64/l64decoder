// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadBlockedUserDetails
// Entry Point: 00c673e8
// Size: 824 bytes
// Signature: undefined __cdecl loadBlockedUserDetails(DomXMLFile * param_1, uint param_2, UserDetails * param_3)


/* UserBlockManager::loadBlockedUserDetails(DomXMLFile&, unsigned int,
   UserBlockManager::UserDetails&) */

void UserBlockManager::loadBlockedUserDetails(DomXMLFile *param_1,uint param_2,UserDetails *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  char acStack_158 [256];
  long local_58;
  
  uVar6 = (ulong)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00c67344(acStack_158,0x100,0x100,"blockedUserIds.user(%u)#uniqueUserId",uVar6);
  lVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_158,0);
  if (lVar4 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00c6760c to 00c67617 has its CatchHandler @ 00c6772c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar5 = "[UserBlockManager] Missing attribute \'uniqueUserId\' in blocked user index %u\n";
  }
  else {
    FUN_00c67344(acStack_158,0x100,0x100,"blockedUserIds.user(%u)#platformUserId",uVar6);
    lVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_158,0);
    if (lVar4 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00c67654 to 00c6765f has its CatchHandler @ 00c67728 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = "[UserBlockManager] Missing attribute \'platformUserId\' in blocked user index %u\n";
    }
    else {
      FUN_00c67344(acStack_158,0x100,0x100,"blockedUserIds.user(%u)#platformId",uVar6);
      iVar3 = Properties::getInt((Properties *)param_1,acStack_158,0);
      if (iVar3 != 0) {
        FUN_00c67344(acStack_158,0x100,0x100,"blockedUserIds.user(%u)#displayName",uVar6);
        lVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,acStack_158,0);
        if (lVar4 == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar3 != 0)) {
                    /* try { // try from 00c676e4 to 00c676ef has its CatchHandler @ 00c67720 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "[UserBlockManager] Missing attribute \'displayName\' in blocked user index %u\n"
                            ,uVar6);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)param_3);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(param_3 + 0x18));
          *(int *)(param_3 + 0x30) = iVar3;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)(param_3 + 0x38));
        }
        bVar2 = lVar4 != 0;
        goto LAB_00c675d0;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00c6769c to 00c676a7 has its CatchHandler @ 00c67724 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = "[UserBlockManager] Missing attribute \'platformId\' in blocked user index %u\n";
    }
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5,uVar6);
  bVar2 = false;
LAB_00c675d0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


