// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f60c
// Entry Point: 0078f60c
// Size: 140 bytes
// Signature: undefined FUN_0078f60c(void)


void FUN_0078f60c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar2 != 0)) {
                    /* try { // try from 0078f660 to 0078f66b has its CatchHandler @ 0078f698 */
    UserBlockManager::UserBlockManager
              ((UserBlockManager *)UserBlockManager::getInstance()::instance);
    __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&UserBlockManager::getInstance()::instance);
  }
  uVar1 = UserBlockManager::getNumBlockedUsers();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


