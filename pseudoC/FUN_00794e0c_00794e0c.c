// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794e0c
// Entry Point: 00794e0c
// Size: 76 bytes
// Signature: undefined FUN_00794e0c(void)


void FUN_00794e0c(uint *param_1)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  EngineManager *this_00;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pTVar1 != (TransformGroup *)0x0) && (((byte)pTVar1[0x10] >> 5 & 1) != 0)) {
    this_00 = (EngineManager *)EngineManager::getInstance();
    EngineManager::removeScriptContactCallback(this_00,pTVar1);
    return;
  }
  return;
}


