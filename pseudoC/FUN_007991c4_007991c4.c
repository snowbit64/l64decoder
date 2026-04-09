// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007991c4
// Entry Point: 007991c4
// Size: 112 bytes
// Signature: undefined FUN_007991c4(void)


void FUN_007991c4(float *param_1)

{
  long lVar1;
  float fVar2;
  undefined auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  fVar5 = *param_1;
  *(float *)(lVar1 + 0x50) = fVar5;
  fVar2 = param_1[4];
  *(float *)(lVar1 + 0x54) = fVar2;
  fVar6 = param_1[8];
  *(float *)(lVar1 + 0x58) = fVar6;
  fVar4 = param_1[0xc];
  *(float *)(lVar1 + 0x5c) = fVar4;
  if ((fVar6 <= fVar5) || (fVar4 <= fVar2)) {
    auVar3 = NEON_fmov(0xbf800000,4);
    *(long *)(lVar1 + 0x58) = auVar3._8_8_;
    *(long *)(lVar1 + 0x50) = auVar3._0_8_;
  }
  lVar1 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar1 + 0xb8) + 0xf06) = 1;
  return;
}


