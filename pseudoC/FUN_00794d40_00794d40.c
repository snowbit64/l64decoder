// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794d40
// Entry Point: 00794d40
// Size: 48 bytes
// Signature: undefined FUN_00794d40(void)


void FUN_00794d40(long param_1)

{
  undefined4 uVar1;
  
  EngineManager::getInstance();
  uVar1 = EngineManager::getNumScriptWakeUpCallbacks();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


