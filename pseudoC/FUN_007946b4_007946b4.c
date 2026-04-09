// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007946b4
// Entry Point: 007946b4
// Size: 72 bytes
// Signature: undefined FUN_007946b4(void)


void FUN_007946b4(uint *param_1)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    pTVar1 = (TransformGroup *)0x0;
  }
  else {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_1);
  }
  lVar2 = EngineManager::getInstance();
  Renderer::setRootNode(*(Renderer **)(lVar2 + 0xb8),pTVar1);
  return;
}


