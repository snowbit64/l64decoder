// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8534
// Entry Point: 006e8534
// Size: 52 bytes
// Signature: undefined FUN_006e8534(void)


void FUN_006e8534(long param_1)

{
  EngineManager::getInstance();
  EngineManager::getInputDevice();
  *(undefined4 *)(param_1 + 0x100) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


