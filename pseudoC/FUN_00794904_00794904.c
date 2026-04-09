// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794904
// Entry Point: 00794904
// Size: 72 bytes
// Signature: undefined FUN_00794904(void)


void FUN_00794904(uint *param_1)

{
  EntityRegistryManager *this;
  GsShape *pGVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    pGVar1 = (GsShape *)0x0;
  }
  else {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pGVar1 = (GsShape *)EntityRegistryManager::getEntityById(this,*param_1);
  }
  lVar2 = EngineManager::getInstance();
  Renderer::setShadowFocusBox(*(Renderer **)(lVar2 + 0xb8),pGVar1);
  return;
}


