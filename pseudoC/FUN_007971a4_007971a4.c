// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007971a4
// Entry Point: 007971a4
// Size: 40 bytes
// Signature: undefined FUN_007971a4(void)


void FUN_007971a4(uint *param_1)

{
  AndroidInAppPurchase *this;
  
  EngineManager::getInstance();
  this = (AndroidInAppPurchase *)EngineManager::getInAppPurchase();
  AndroidInAppPurchase::finishPendingPurchase(this,*param_1);
  return;
}


