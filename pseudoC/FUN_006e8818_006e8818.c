// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8818
// Entry Point: 006e8818
// Size: 84 bytes
// Signature: undefined FUN_006e8818(void)


void FUN_006e8818(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getHeadTrackingDevice();
  if (lVar1 == 0) {
    puVar2 = &DAT_0050a39f;
  }
  else {
    puVar2 = (undefined *)HeadTrackingDevice::getType();
  }
  *(undefined **)(param_1 + 0x100) = puVar2;
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


