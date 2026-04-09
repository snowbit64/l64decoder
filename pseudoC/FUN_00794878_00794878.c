// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794878
// Entry Point: 00794878
// Size: 72 bytes
// Signature: undefined FUN_00794878(void)


void FUN_00794878(uint *param_1)

{
  EntityRegistryManager *this;
  Camera *pCVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    pCVar1 = (Camera *)0x0;
  }
  else {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pCVar1 = (Camera *)EntityRegistryManager::getEntityById(this,*param_1);
  }
  lVar2 = EngineManager::getInstance();
  Renderer::setCamera(*(Renderer **)(lVar2 + 0xb8),pCVar1);
  return;
}


