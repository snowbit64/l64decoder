// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794c5c
// Entry Point: 00794c5c
// Size: 152 bytes
// Signature: undefined FUN_00794c5c(void)


void FUN_00794c5c(uint *param_1)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  LuauScriptSystem *this_00;
  EngineManager *this_01;
  void *pvVar2;
  
  if (param_1[10] == 8) {
    pvVar2 = *(void **)(param_1 + 8);
  }
  else {
    pvVar2 = (void *)0x0;
  }
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pTVar1 != (TransformGroup *)0x0) && (((byte)pTVar1[0x10] >> 5 & 1) != 0)) {
    this_01 = (EngineManager *)EngineManager::getInstance();
    EngineManager::addScriptWakeUpCallback(this_01,pTVar1,*(char **)(param_1 + 4),pvVar2);
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


