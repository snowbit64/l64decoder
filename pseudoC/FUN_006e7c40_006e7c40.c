// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7c40
// Entry Point: 006e7c40
// Size: 88 bytes
// Signature: undefined FUN_006e7c40(void)


void FUN_006e7c40(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getInputDevice();
  if (lVar1 == 0) {
    puVar2 = &DAT_0050a39f;
  }
  else {
    puVar2 = (undefined *)AndroidInputDevice::getKeyName((KEY_SYM)lVar1);
  }
  *(undefined **)(param_1 + 0x100) = puVar2;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


