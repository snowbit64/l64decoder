// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00798f00
// Entry Point: 00798f00
// Size: 96 bytes
// Signature: undefined FUN_00798f00(void)


void FUN_00798f00(float *param_1)

{
  long lVar1;
  float fVar2;
  float __x;
  float fVar3;
  
  EngineManager::getInstance();
  lVar1 = Renderer::getPostFxParams();
  fVar3 = *param_1;
  fVar2 = param_1[8];
  __x = param_1[4];
  *(float *)(lVar1 + 0x38) = fVar3;
  fVar2 = exp2f(fVar2);
  *(float *)(lVar1 + 8) = fVar3 / fVar2;
  fVar2 = exp2f(__x);
  *(float *)(lVar1 + 0xc) = fVar3 / fVar2;
  return;
}


