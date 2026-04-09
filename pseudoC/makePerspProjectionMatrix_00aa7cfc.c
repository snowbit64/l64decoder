// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makePerspProjectionMatrix
// Entry Point: 00aa7cfc
// Size: 128 bytes
// Signature: undefined __cdecl makePerspProjectionMatrix(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, bool param_7, float * param_8)


/* RenderDeviceUtil::makePerspProjectionMatrix(float, float, float, float, float, float, bool,
   float*) */

void RenderDeviceUtil::makePerspProjectionMatrix
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               bool param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 1.0 / (param_4 - param_3);
  fVar2 = 1.0 / (param_2 - param_1);
  fVar3 = 0.0;
  if (!param_7) {
    fVar3 = -param_5 / (param_5 - param_6);
    param_5 = (-param_5 * param_6) / (param_5 - param_6);
  }
  *(undefined8 *)(param_8 + 3) = 0;
  *(undefined8 *)(param_8 + 1) = 0;
  *param_8 = fVar2 + fVar2;
  *(undefined8 *)(param_8 + 6) = 0;
  param_8[5] = fVar1 + fVar1;
  param_8[8] = (param_1 + param_2) * fVar2;
  param_8[9] = (param_3 + param_4) * fVar1;
  param_8[10] = fVar3;
  *(undefined8 *)(param_8 + 0xb) = 0xbf800000;
  param_8[0xd] = 0.0;
  param_8[0xe] = param_5;
  param_8[0xf] = 0.0;
  return;
}


