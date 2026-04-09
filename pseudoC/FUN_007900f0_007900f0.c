// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007900f0
// Entry Point: 007900f0
// Size: 60 bytes
// Signature: undefined FUN_007900f0(void)


void FUN_007900f0(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  param_1[0x42] = 3;
  *(bool *)(param_1 + 0x40) = lVar1 != 0;
  return;
}


