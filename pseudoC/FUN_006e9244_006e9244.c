// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9244
// Entry Point: 006e9244
// Size: 80 bytes
// Signature: undefined FUN_006e9244(void)


void FUN_006e9244(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  EngineManager::getInstance();
  puVar2 = (undefined *)EngineManager::getUniqueUserId();
  puVar1 = &DAT_0050a39f;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  *(undefined **)(param_1 + 0x100) = puVar1;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


