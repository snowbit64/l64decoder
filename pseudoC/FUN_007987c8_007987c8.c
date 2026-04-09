// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007987c8
// Entry Point: 007987c8
// Size: 56 bytes
// Signature: undefined FUN_007987c8(void)


void FUN_007987c8(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = EngineManager::getInstance();
  uVar1 = *param_1;
  if (3 < (int)uVar1) {
    uVar1 = 4;
  }
  HardwareScalability::setPostProcessAntiAliasing
            ((HardwareScalability *)(lVar2 + 0x198),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  return;
}


