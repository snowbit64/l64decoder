// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makePerspProjectionMatrix
// Entry Point: 00aa7c5c
// Size: 160 bytes
// Signature: undefined __cdecl makePerspProjectionMatrix(float param_1, float param_2, float param_3, float param_4, bool param_5, float * param_6)


/* RenderDeviceUtil::makePerspProjectionMatrix(float, float, float, float, bool, float*) */

void RenderDeviceUtil::makePerspProjectionMatrix
               (float param_1,float param_2,float param_3,float param_4,bool param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = tanf(param_1 * 0.5);
  fVar2 = 0.0;
  if (!param_5) {
    fVar2 = -param_3 / (param_3 - param_4);
    param_3 = (-param_3 * param_4) / (param_3 - param_4);
  }
  param_6[10] = fVar2;
  *(undefined8 *)(param_6 + 3) = 0;
  *(undefined8 *)(param_6 + 1) = 0;
  param_6[5] = 1.0 / fVar1;
  *(undefined8 *)(param_6 + 6) = 0;
  *(undefined8 *)(param_6 + 8) = 0;
  param_6[0xd] = 0.0;
  param_6[0xe] = param_3;
  *(undefined8 *)(param_6 + 0xb) = 0xbf800000;
  param_6[0xf] = 0.0;
  *param_6 = (1.0 / fVar1) / param_2;
  return;
}


