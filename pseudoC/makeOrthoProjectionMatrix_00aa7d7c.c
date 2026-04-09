// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeOrthoProjectionMatrix
// Entry Point: 00aa7d7c
// Size: 112 bytes
// Signature: undefined __cdecl makeOrthoProjectionMatrix(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float * param_7)


/* RenderDeviceUtil::makeOrthoProjectionMatrix(float, float, float, float, float, float, float*) */

void RenderDeviceUtil::makeOrthoProjectionMatrix
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float *param_7)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_7 + 3) = 0;
  *(undefined8 *)(param_7 + 1) = 0;
  *(undefined8 *)(param_7 + 6) = 0;
  *(undefined8 *)(param_7 + 8) = 0;
  param_7[0xb] = 0.0;
  param_7[0xf] = 1.0;
  fVar1 = (float)uVar3 / (param_2 - param_1);
  fVar2 = (float)((ulong)uVar3 >> 0x20) / (param_4 - param_3);
  param_7[0xe] = param_5 / (param_6 - param_5) + 1.0;
  *param_7 = fVar1 + fVar1;
  *(ulong *)(param_7 + 0xc) = CONCAT44(fVar2 * -(param_3 + param_4),fVar1 * -(param_1 + param_2));
  param_7[5] = fVar2 + fVar2;
  param_7[10] = 1.0 / (param_6 - param_5);
  return;
}


