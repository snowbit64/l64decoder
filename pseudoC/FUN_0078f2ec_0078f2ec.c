// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f2ec
// Entry Point: 0078f2ec
// Size: 144 bytes
// Signature: undefined FUN_0078f2ec(void)


void FUN_0078f2ec(char **param_1)

{
  int iVar1;
  
  if (((UserBlockManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&UserBlockManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 0078f344 to 0078f34f has its CatchHandler @ 0078f37c */
    UserBlockManager::UserBlockManager
              ((UserBlockManager *)UserBlockManager::getInstance()::instance);
    __cxa_atexit(UserBlockManager::~UserBlockManager,UserBlockManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&UserBlockManager::getInstance()::instance);
  }
  UserBlockManager::setIsUserBlocked
            ((UserBlockManager *)UserBlockManager::getInstance()::instance,*param_1,param_1[2],
             *(PLATFORM_ID *)(param_1 + 4),*(bool *)(param_1 + 6),param_1[8]);
  return;
}


