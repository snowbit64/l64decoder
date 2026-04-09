// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae104
// Entry Point: 007ae104
// Size: 48 bytes
// Signature: undefined FUN_007ae104(void)


void FUN_007ae104(long param_1,uint *param_2)

{
  EntityRegistryManager *this;
  undefined8 uVar1;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  uVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}


