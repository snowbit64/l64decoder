// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798888
// Entry Point: 00798888
// Size: 76 bytes
// Signature: undefined FUN_00798888(void)


void FUN_00798888(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = EngineManager::getInstance();
  uVar1 = *param_1;
  if (3 < (int)uVar1) {
    uVar1 = 4;
  }
  bVar2 = Renderer::getSupportsPostProcessAntiAliasing
                    (*(Renderer **)(lVar3 + 0xb8),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  param_1[0x42] = 3;
  *(byte *)(param_1 + 0x40) = bVar2 & 1;
  return;
}


