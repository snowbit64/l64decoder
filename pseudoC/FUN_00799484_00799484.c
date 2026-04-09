// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799484
// Entry Point: 00799484
// Size: 200 bytes
// Signature: undefined FUN_00799484(void)


void FUN_00799484(float *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = param_1[4];
  fVar4 = *param_1;
  uVar5 = NEON_fmadd(fVar4,fVar4,fVar2 * fVar2);
  fVar3 = param_1[8];
  fVar7 = (float)NEON_fmadd(fVar3,fVar3,uVar5);
  fVar6 = 1.0;
  if (1e-06 < fVar7) {
    fVar6 = 1.0 / SQRT(fVar7);
  }
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(float *)(lVar1 + 0x278) = fVar4 * fVar6;
  *(float *)(lVar1 + 0x27c) = fVar2 * fVar6;
  *(float *)(lVar1 + 0x280) = fVar3 * fVar6;
  fVar2 = param_1[0xc];
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(float *)(lVar1 + 0x284) = fVar2;
  fVar2 = param_1[0x10];
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(float *)(lVar1 + 0x288) = fVar2;
  fVar2 = param_1[0x14];
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  *(float *)(lVar1 + 0x28c) = fVar2;
  return;
}


