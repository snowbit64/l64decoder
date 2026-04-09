// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007971cc
// Entry Point: 007971cc
// Size: 56 bytes
// Signature: undefined FUN_007971cc(void)


void FUN_007971cc(long param_1)

{
  byte bVar1;
  
  EngineManager::getInstance();
  EngineManager::getInAppPurchase();
  bVar1 = AndroidInAppPurchase::hasRestorePurchases();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


