// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007989a0
// Entry Point: 007989a0
// Size: 56 bytes
// Signature: undefined FUN_007989a0(void)


void FUN_007989a0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = EngineManager::getInstance();
  uVar1 = *param_1;
  if (4 < (int)uVar1) {
    uVar1 = 5;
  }
  HardwareScalability::setFidelityFxSRQuality
            ((HardwareScalability *)(lVar2 + 0x198),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  return;
}


