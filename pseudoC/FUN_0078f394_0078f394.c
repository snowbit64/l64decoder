// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f394
// Entry Point: 0078f394
// Size: 176 bytes
// Signature: undefined FUN_0078f394(void)


void FUN_0078f394(char **param_1)

{
  PLATFORM_ID PVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = *param_1;
  pcVar5 = param_1[2];
  PVar1 = *(PLATFORM_ID *)(param_1 + 4);
  if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar3 != 0)) {
                    /* try { // try from 0078f40c to 0078f417 has its CatchHandler @ 0078f444 */
    UserBlockManager::UserBlockManager
              ((UserBlockManager *)UserBlockManager::getInstance()::instance);
    __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&UserBlockManager::getInstance()::instance);
  }
  bVar2 = UserBlockManager::getIsUserBlocked
                    ((UserBlockManager *)UserBlockManager::getInstance()::instance,pcVar4,pcVar5,
                     PVar1);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar2 & 1;
  return;
}


