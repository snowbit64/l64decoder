// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794d70
// Entry Point: 00794d70
// Size: 156 bytes
// Signature: undefined FUN_00794d70(void)


void FUN_00794d70(uint *param_1)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  LuauScriptSystem *this_00;
  EngineManager *this_01;
  void *pvVar2;
  
  if (param_1[0xe] == 8) {
    pvVar2 = *(void **)(param_1 + 0xc);
  }
  else {
    pvVar2 = (void *)0x0;
  }
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pTVar1 != (TransformGroup *)0x0) && (((byte)pTVar1[0x10] >> 5 & 1) != 0)) {
    this_01 = (EngineManager *)EngineManager::getInstance();
    EngineManager::addScriptContactCallback
              (this_01,pTVar1,(float)param_1[4],*(char **)(param_1 + 8),pvVar2);
    return;
  }
  if (pvVar2 != (void *)0x0) {
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::destroyObjectRef(this_00,pvVar2);
    return;
  }
  return;
}


