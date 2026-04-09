// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794e58
// Entry Point: 00794e58
// Size: 48 bytes
// Signature: undefined FUN_00794e58(void)


void FUN_00794e58(long param_1)

{
  undefined4 uVar1;
  
  EngineManager::getInstance();
  uVar1 = EngineManager::getNumScriptContactCallbacks();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


