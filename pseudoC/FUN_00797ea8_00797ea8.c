// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797ea8
// Entry Point: 00797ea8
// Size: 56 bytes
// Signature: undefined FUN_00797ea8(void)


void FUN_00797ea8(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  if (1 < (int)uVar1) {
    uVar1 = 2;
  }
  lVar2 = EngineManager::getInstance();
  HardwareScalability::setShadowDistanceQuality
            ((HardwareScalability *)(lVar2 + 0x198),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  return;
}


