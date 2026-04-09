// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AndroidActivity
// Entry Point: 006ecd10
// Size: 428 bytes
// Signature: undefined __thiscall AndroidActivity(AndroidActivity * this, android_app * param_1)


/* AndroidActivity::AndroidActivity(android_app*) */

void __thiscall AndroidActivity::AndroidActivity(AndroidActivity *this,android_app *param_1)

{
  byte bVar1;
  int iVar2;
  AndroidJNICall *this_00;
  ulong uVar3;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006ece84 to 006ece8f has its CatchHandler @ 006ecebc */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"AndroidActivity()\n");
  AndroidSysUtil::s_isSoftDestroy = 0;
  AndroidSysUtil::s_pApp = param_1;
  *(android_app **)this = param_1;
  *(AndroidActivity **)param_1 = this;
  *(code **)(param_1 + 8) = FUN_006ecf7c;
  *(code **)(param_1 + 0x10) = FUN_006ecf84;
  *(undefined2 *)(this + 0x10) = 0;
  this_00 = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 006ecd98 to 006ecd9f has its CatchHandler @ 006eced8 */
  AndroidJNICall::AndroidJNICall(this_00,0);
  *(AndroidJNICall **)(this + 8) = this_00;
  uVar3 = AndroidJNICall::callBool(this_00,"jniReady");
  while ((uVar3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006ece50 to 006ece57 has its CatchHandler @ 006ecec0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "AndroidActivity: Java activity not ready for JNI...\n");
    usleep(100000);
    uVar3 = AndroidJNICall::callBool(*(AndroidJNICall **)(this + 8),"jniReady");
  }
  bVar1 = AndroidJNICall::callBool(*(AndroidJNICall **)(this + 8),"enableExitCrashWorkaround");
  this[0x12] = (AndroidActivity)(bVar1 & 1);
  return;
}


