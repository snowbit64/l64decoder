// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794a7c
// Entry Point: 00794a7c
// Size: 164 bytes
// Signature: undefined FUN_00794a7c(void)


void FUN_00794a7c(uint *param_1)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  EngineManager *pEVar2;
  uint uVar3;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((pTVar1 != (TransformGroup *)0x0) && (((byte)pTVar1[0x10] >> 5 & 1) != 0)) {
    if (param_1[6] == 0) {
      pEVar2 = (EngineManager *)EngineManager::getInstance();
      EngineManager::removeFunctionNameScriptTriggerCallback(pEVar2,pTVar1);
    }
    else {
      pEVar2 = (EngineManager *)EngineManager::getInstance();
      uVar3 = 0;
      switch(param_1[6]) {
      case 1:
      case 2:
        uVar3 = param_1[4];
        break;
      case 4:
        uVar3 = (uint)(float)param_1[4];
        break;
      case 5:
        uVar3 = (uint)*(double *)(param_1 + 4);
      }
      EngineManager::removeScriptTriggerCallback(pEVar2,pTVar1,uVar3);
    }
  }
  return;
}


