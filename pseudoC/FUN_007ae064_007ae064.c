// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae064
// Entry Point: 007ae064
// Size: 60 bytes
// Signature: undefined FUN_007ae064(void)


void FUN_007ae064(long param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x13) >> 1 & 1) != 0)) {
    *(long *)(param_1 + 0x40) = lVar1;
  }
  return;
}


