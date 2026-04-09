// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Java_com_giantssoftware_GoogleIAPDevice_nativeCallbackPurchaseComplete
// Entry Point: 00b06b28
// Size: 200 bytes
// Signature: undefined Java_com_giantssoftware_GoogleIAPDevice_nativeCallbackPurchaseComplete(void)


void Java_com_giantssoftware_GoogleIAPDevice_nativeCallbackPurchaseComplete
               (undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  Logger *this;
  
  if (AndroidInAppPurchase::m_pInstance != (AndroidInAppPurchase *)0x0) {
    AndroidInAppPurchase::onPurchaseComplete(AndroidInAppPurchase::m_pInstance,param_3,param_4);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b06bb0 to 00b06bb7 has its CatchHandler @ 00b06c00 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00b06bbc to 00b06bbf has its CatchHandler @ 00b06bf0 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "nativeCallbackPurchaseComplete: iap not created, productId=%u, errorCode=%d\n"
                     ,(ulong)param_3,(ulong)param_4);
  return;
}


