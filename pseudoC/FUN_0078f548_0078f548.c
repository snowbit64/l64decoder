// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f548
// Entry Point: 0078f548
// Size: 172 bytes
// Signature: undefined FUN_0078f548(void)


void FUN_0078f548(char **param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = *param_1;
  pcVar4 = param_1[2];
  if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar2 != 0)) {
                    /* try { // try from 0078f5bc to 0078f5c7 has its CatchHandler @ 0078f5f4 */
    UserBlockManager::UserBlockManager
              ((UserBlockManager *)UserBlockManager::getInstance()::instance);
    __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&UserBlockManager::getInstance()::instance);
  }
  uVar1 = UserBlockManager::getAllowTextCommunicationWithUser
                    (UserBlockManager::getInstance()::instance,pcVar3,(PLATFORM_ID)pcVar4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = 1;
  return;
}


