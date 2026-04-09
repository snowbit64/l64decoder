// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8184
// Entry Point: 006e8184
// Size: 88 bytes
// Signature: undefined FUN_006e8184(void)


void FUN_006e8184(long param_1)

{
  char *pcVar1;
  long lVar2;
  
  EngineManager::getInstance();
  lVar2 = EngineManager::getInputDevice();
  pcVar1 = "";
  if (lVar2 != 0) {
    pcVar1 = "Gamepad 1";
  }
  *(char **)(param_1 + 0x100) = pcVar1;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


