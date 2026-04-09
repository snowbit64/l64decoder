// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computePlanarReflectionMatrix
// Entry Point: 00a35950
// Size: 240 bytes
// Signature: undefined __cdecl computePlanarReflectionMatrix(float * param_1, Matrix4x4 * param_2)


/* RenderQueueUtil::computePlanarReflectionMatrix(float*, Matrix4x4&) */

void RenderQueueUtil::computePlanarReflectionMatrix(float *param_1,Matrix4x4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = NEON_fmadd(*param_1 * -2.0,*param_1,0x3f800000);
  *(undefined4 *)param_2 = uVar1;
  *(float *)(param_2 + 0x10) = *param_1 * -2.0 * param_1[1];
  *(float *)(param_2 + 0x20) = *param_1 * -2.0 * param_1[2];
  *(float *)(param_2 + 0x30) = param_1[3] * -2.0 * *param_1;
  *(float *)(param_2 + 4) = param_1[1] * -2.0 * *param_1;
  uVar1 = NEON_fmadd(param_1[1] * -2.0,param_1[1],0x3f800000);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(float *)(param_2 + 0x24) = param_1[1] * -2.0 * param_1[2];
  *(float *)(param_2 + 0x34) = param_1[3] * -2.0 * param_1[1];
  *(float *)(param_2 + 8) = param_1[2] * -2.0 * *param_1;
  *(float *)(param_2 + 0x18) = param_1[2] * -2.0 * param_1[1];
  uVar1 = NEON_fmadd(param_1[2] * -2.0,param_1[2],0x3f800000);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  fVar3 = param_1[2];
  fVar2 = param_1[3];
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  *(float *)(param_2 + 0x38) = fVar2 * -2.0 * fVar3;
  return;
}


