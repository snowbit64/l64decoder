// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794980
// Entry Point: 00794980
// Size: 252 bytes
// Signature: undefined FUN_00794980(void)


void FUN_00794980(uint *param_1)

{
  EntityRegistryManager *this;
  EngineManager *this_00;
  LuauScriptSystem *pLVar1;
  bool bVar2;
  uint uVar3;
  TransformGroup *pTVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[10] == 8) {
    pvVar5 = *(void **)(param_1 + 8);
  }
  else {
    pvVar5 = (void *)0x0;
  }
  if (param_1[0xe] == 3) {
    bVar2 = *(char *)(param_1 + 0xc) != '\0';
  }
  else {
    bVar2 = false;
  }
  if (param_1[0x12] == 8) {
    pvVar6 = *(void **)(param_1 + 0x10);
  }
  else {
    pvVar6 = (void *)0x0;
  }
  param_1[0x40] = 0;
  param_1[0x42] = 1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar4 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pTVar4 == (TransformGroup *)0x0) || (((byte)pTVar4[0x10] >> 5 & 1) == 0)) {
    if (pvVar6 != (void *)0x0) {
      ScriptSystemManager::getInstance();
      pLVar1 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(pLVar1,pvVar6);
    }
    if (pvVar5 != (void *)0x0) {
      ScriptSystemManager::getInstance();
      pLVar1 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(pLVar1,pvVar5);
      return;
    }
  }
  else {
    this_00 = (EngineManager *)EngineManager::getInstance();
    uVar3 = EngineManager::addScriptTriggerCallback
                      (this_00,pTVar4,pvVar6,*(char **)(param_1 + 4),pvVar5,bVar2);
    param_1[0x40] = uVar3;
  }
  return;
}


