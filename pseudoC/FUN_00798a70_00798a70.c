// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798a70
// Entry Point: 00798a70
// Size: 56 bytes
// Signature: undefined FUN_00798a70(void)


void FUN_00798a70(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = EngineManager::getInstance();
  uVar1 = *param_1;
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  HardwareScalability::setFidelityFxSR20Quality
            ((HardwareScalability *)(lVar2 + 0x198),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  return;
}


