// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799a98
// Entry Point: 00799a98
// Size: 136 bytes
// Signature: undefined FUN_00799a98(void)


void FUN_00799a98(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  uVar4 = NEON_smax(CONCAT44(param_1[4],*param_1),0,4);
  uVar4 = NEON_umin(uVar4,0xf0000000f,4);
  uVar4 = NEON_ucvtf(uVar4,4);
  *(undefined8 *)(lVar1 + 0x1dc) = uVar4;
  uVar2 = NEON_fmin(param_1[8],0x3f800000);
  *(undefined4 *)(lVar1 + 0x1e4) = uVar2;
  fVar3 = (float)param_1[0xc];
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  *(float *)(lVar1 + 0x26c) = 1.0 / fVar3;
  fVar3 = (float)param_1[0x10];
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  *(float *)(lVar1 + 0x270) = 1.0 / fVar3;
  return;
}


