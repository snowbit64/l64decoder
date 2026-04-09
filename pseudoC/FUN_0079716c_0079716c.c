// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079716c
// Entry Point: 0079716c
// Size: 56 bytes
// Signature: undefined FUN_0079716c(void)


void FUN_0079716c(uint *param_1)

{
  AndroidInAppPurchase *this;
  uint uVar1;
  
  EngineManager::getInstance();
  this = (AndroidInAppPurchase *)EngineManager::getInAppPurchase();
  uVar1 = AndroidInAppPurchase::getPendingPurchaseProductId(this,*param_1);
  param_1[0x40] = uVar1;
  param_1[0x42] = 1;
  return;
}


