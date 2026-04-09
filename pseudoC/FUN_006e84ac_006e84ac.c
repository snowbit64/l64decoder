// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e84ac
// Entry Point: 006e84ac
// Size: 72 bytes
// Signature: undefined FUN_006e84ac(void)


void FUN_006e84ac(long param_1)

{
  EngineManager::getInstance();
  EngineManager::getInputDevice();
  *(undefined **)(param_1 + 0x100) = &DAT_0050a39f;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


