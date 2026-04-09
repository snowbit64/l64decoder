// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796cc0
// Entry Point: 00796cc0
// Size: 40 bytes
// Signature: undefined FUN_00796cc0(void)


void FUN_00796cc0(char **param_1)

{
  AndroidInAppPurchase *this;
  
  EngineManager::getInstance();
  this = (AndroidInAppPurchase *)EngineManager::getInAppPurchase();
  AndroidInAppPurchase::init(this,*param_1);
  return;
}


