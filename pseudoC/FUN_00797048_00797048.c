// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797048
// Entry Point: 00797048
// Size: 40 bytes
// Signature: undefined FUN_00797048(void)


void FUN_00797048(uint *param_1)

{
  AndroidInAppPurchase *this;
  
  EngineManager::getInstance();
  this = (AndroidInAppPurchase *)EngineManager::getInAppPurchase();
  AndroidInAppPurchase::finishPurchase(this,*param_1);
  return;
}


