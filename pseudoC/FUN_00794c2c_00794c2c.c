// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794c2c
// Entry Point: 00794c2c
// Size: 48 bytes
// Signature: undefined FUN_00794c2c(void)


void FUN_00794c2c(long param_1)

{
  undefined4 uVar1;
  
  EngineManager::getInstance();
  uVar1 = EngineManager::getNumScriptTriggerCallbacks();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


