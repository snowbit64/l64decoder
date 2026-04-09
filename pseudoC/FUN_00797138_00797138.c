// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797138
// Entry Point: 00797138
// Size: 52 bytes
// Signature: undefined FUN_00797138(void)


void FUN_00797138(long param_1)

{
  undefined4 uVar1;
  
  EngineManager::getInstance();
  EngineManager::getInAppPurchase();
  uVar1 = AndroidInAppPurchase::getNumPendingPurchases();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


