// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007adf84
// Entry Point: 007adf84
// Size: 64 bytes
// Signature: undefined FUN_007adf84(void)


void FUN_007adf84(long param_1,uint *param_2)

{
  EntityRegistryManager *pEVar1;
  undefined8 uVar2;
  
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  uVar2 = EntityRegistryManager::getEntityById(pEVar1,*param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  uVar2 = EntityRegistryManager::getEntityById(pEVar1,param_2[4]);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}


