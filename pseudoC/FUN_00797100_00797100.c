// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797100
// Entry Point: 00797100
// Size: 56 bytes
// Signature: undefined FUN_00797100(void)


void FUN_00797100(uint *param_1)

{
  AndroidInAppPurchase *this;
  uint uVar1;
  
  EngineManager::getInstance();
  this = (AndroidInAppPurchase *)EngineManager::getInAppPurchase();
  uVar1 = AndroidInAppPurchase::getPurchaseState(this,*param_1);
  param_1[0x40] = uVar1;
  param_1[0x42] = 1;
  return;
}


