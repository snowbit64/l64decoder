// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Java_com_giantssoftware_GoogleIAPDevice_nativeCallbackRestoreComplete
// Entry Point: 00b06c18
// Size: 176 bytes
// Signature: undefined Java_com_giantssoftware_GoogleIAPDevice_nativeCallbackRestoreComplete(void)


void Java_com_giantssoftware_GoogleIAPDevice_nativeCallbackRestoreComplete
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  Logger *this;
  
  if (AndroidInAppPurchase::m_pInstance != (AndroidInAppPurchase *)0x0) {
    AndroidInAppPurchase::onRestoreComplete(AndroidInAppPurchase::m_pInstance,param_3);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b06c88 to 00b06c8f has its CatchHandler @ 00b06cd8 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00b06c94 to 00b06c97 has its CatchHandler @ 00b06cc8 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "nativeCallbackRestoreComplete: iap not created, errorCode=%d\n",(ulong)param_3
                    );
  return;
}


