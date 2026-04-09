// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007988d4
// Entry Point: 007988d4
// Size: 56 bytes
// Signature: undefined FUN_007988d4(void)


void FUN_007988d4(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = EngineManager::getInstance();
  uVar1 = *param_1;
  if (5 < (int)uVar1) {
    uVar1 = 6;
  }
  HardwareScalability::setDLSSQuality
            ((HardwareScalability *)(lVar2 + 0x198),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  return;
}


