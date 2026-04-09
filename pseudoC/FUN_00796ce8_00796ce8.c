// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796ce8
// Entry Point: 00796ce8
// Size: 56 bytes
// Signature: undefined FUN_00796ce8(void)


void FUN_00796ce8(long param_1)

{
  byte bVar1;
  
  EngineManager::getInstance();
  EngineManager::getInAppPurchase();
  bVar1 = AndroidInAppPurchase::isLoaded();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


