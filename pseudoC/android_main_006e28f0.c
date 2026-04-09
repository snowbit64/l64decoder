// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: android_main
// Entry Point: 006e28f0
// Size: 552 bytes
// Signature: undefined android_main(void)


void android_main(android_app *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  AndroidActivity aAStack_50 [18];
  char local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006e2a44 to 006e2a4f has its CatchHandler @ 006e2b30 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"android_main()\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006e2a8c to 006e2a97 has its CatchHandler @ 006e2b2c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Running build @ %s (%s)","09:59:05",&DAT_004da752);
  AndroidActivity::AndroidActivity(aAStack_50,param_1);
                    /* try { // try from 006e2970 to 006e29f7 has its CatchHandler @ 006e2b48 */
  iVar2 = AndroidActivity::run();
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006e2ad4 to 006e2adf has its CatchHandler @ 006e2b18 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "leaving run ... @ %s (%s)","09:59:05",&DAT_004da752);
  if (local_3e == '\0') {
    __android_log_print(2,"NativeLog","Quitting application using exit()\n");
    if (AndroidSysUtil::s_isSoftDestroy == '\0') {
                    /* try { // try from 006e2b0c to 006e2b13 has its CatchHandler @ 006e2b48 */
                    /* WARNING: Subroutine does not return */
      exit(iVar2);
    }
  }
  else {
    __android_log_print(3,"NativeLog","Quitting application using _exit()\n");
    if (AndroidSysUtil::s_isSoftDestroy == '\0') {
                    /* WARNING: Subroutine does not return */
      _exit(iVar2);
    }
  }
  AndroidActivity::~AndroidActivity(aAStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


