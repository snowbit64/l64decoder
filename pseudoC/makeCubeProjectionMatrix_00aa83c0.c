// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeCubeProjectionMatrix
// Entry Point: 00aa83c0
// Size: 76 bytes
// Signature: undefined __cdecl makeCubeProjectionMatrix(float param_1, float param_2, float * param_3)


/* RenderDeviceUtil::makeCubeProjectionMatrix(float, float, float*) */

void RenderDeviceUtil::makeCubeProjectionMatrix(float param_1,float param_2,float *param_3)

{
  *(undefined8 *)(param_3 + 3) = 0;
  *(undefined8 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *param_3 = 1.0;
  param_3[5] = 1.0;
  param_3[0xd] = 0.0;
  param_3[0xf] = 0.0;
  *(undefined8 *)(param_3 + 0xb) = 0xbf800000;
  param_3[10] = -param_1 / (param_1 - param_2);
  param_3[0xe] = (-param_1 * param_2) / (param_1 - param_2);
  return;
}


