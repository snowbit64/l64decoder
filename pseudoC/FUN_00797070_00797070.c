// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797070
// Entry Point: 00797070
// Size: 72 bytes
// Signature: undefined FUN_00797070(void)


void FUN_00797070(uint *param_1)

{
  AndroidInAppPurchase *this;
  undefined8 uVar1;
  
  EngineManager::getInstance();
  this = (AndroidInAppPurchase *)EngineManager::getInAppPurchase();
  uVar1 = AndroidInAppPurchase::getDescription(this,*param_1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  return;
}


