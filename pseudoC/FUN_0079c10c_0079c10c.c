// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079c10c
// Entry Point: 0079c10c
// Size: 84 bytes
// Signature: undefined FUN_0079c10c(void)


void FUN_0079c10c(uint *param_1)

{
  byte bVar1;
  EntityRegistryManager *this;
  long lVar2;
  
  *(undefined *)(param_1 + 0x40) = 0;
  param_1[0x42] = 3;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_1);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x12) >> 2 & 1) != 0)) {
    bVar1 = *(byte *)(lVar2 + 0x210);
    param_1[0x42] = 3;
    *(byte *)(param_1 + 0x40) = bVar1 >> 6 & 1;
  }
  return;
}


