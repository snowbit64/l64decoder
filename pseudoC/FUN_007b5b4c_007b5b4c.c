// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5b4c
// Entry Point: 007b5b4c
// Size: 72 bytes
// Signature: undefined FUN_007b5b4c(void)


void FUN_007b5b4c(long param_1,uint *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  long lVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if ((*(byte *)(lVar1 + 0x11) & 0x80) != 0) {
      lVar2 = lVar1;
    }
  }
  *(long *)(param_1 + 0xa0) = lVar2;
  return;
}


