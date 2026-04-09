// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8374
// Entry Point: 006e8374
// Size: 56 bytes
// Signature: undefined FUN_006e8374(void)


void FUN_006e8374(long param_1)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getInputDevice();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(bool *)(param_1 + 0x100) = lVar1 != 0;
  return;
}


