// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794e88
// Entry Point: 00794e88
// Size: 68 bytes
// Signature: undefined FUN_00794e88(void)


void FUN_00794e88(uint *param_1)

{
  EngineManager *this;
  void *pvVar1;
  
  if (param_1[10] == 8) {
    pvVar1 = *(void **)(param_1 + 8);
  }
  else {
    pvVar1 = (void *)0x0;
  }
  this = (EngineManager *)EngineManager::getInstance();
  EngineManager::addScriptJointBreakCallback(this,*param_1,*(char **)(param_1 + 4),pvVar1);
  return;
}


