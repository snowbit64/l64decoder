// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a7254
// Entry Point: 007a7254
// Size: 92 bytes
// Signature: undefined FUN_007a7254(void)


void FUN_007a7254(TransformGroup *param_1,uint *param_2)

{
  byte bVar1;
  EntityRegistryManager *this;
  TransformGroup *pTVar2;
  
  *(undefined *)(param_2 + 0x40) = 0;
  param_2[0x42] = 3;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar2 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_2);
  if (pTVar2 != (TransformGroup *)0x0) {
    bVar1 = CloneUtil::cloneFirstCharacterSet(param_1,pTVar2);
    param_2[0x42] = 3;
    *(byte *)(param_2 + 0x40) = bVar1 & 1;
  }
  return;
}


