// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9e68
// Entry Point: 006e9e68
// Size: 108 bytes
// Signature: undefined FUN_006e9e68(void)


void FUN_006e9e68(uint *param_1)

{
  LANGUAGE_TYPE LVar1;
  char *pcVar2;
  MasterServerManager *this;
  ulonglong uVar3;
  
  EngineManager::getInstance();
  pcVar2 = (char *)EngineManager::getUniqueUserId();
  LVar1 = param_1[4];
  if (0x17 < (int)LVar1) {
    LVar1 = 0x18;
  }
  this = (MasterServerManager *)MasterServerManager::getInstance();
  EngineManager::getInstance();
  EngineManager::getCopyProtection();
  uVar3 = CopyProtection::getNetworkKey();
  MasterServerManager::init(this,1,uVar3,pcVar2,*param_1,LVar1);
  return;
}


