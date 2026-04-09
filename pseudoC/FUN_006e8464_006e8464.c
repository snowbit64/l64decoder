// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8464
// Entry Point: 006e8464
// Size: 72 bytes
// Signature: undefined FUN_006e8464(void)


void FUN_006e8464(long param_1)

{
  EngineManager::getInstance();
  EngineManager::getInputDevice();
  *(undefined **)(param_1 + 0x100) = &DAT_0050a39f;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


