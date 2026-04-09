// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transformVector
// Entry Point: 009f14a4
// Size: 132 bytes
// Signature: undefined __cdecl transformVector(Matrix4x4 * param_1, Vector3 param_2, Vector3 * param_3)


/* DeferredDebugRenderer::transformVector(Matrix4x4*, Vector3, Vector3&) */

void DeferredDebugRenderer::transformVector
               (float param_1,float param_2,float param_3,undefined8 param_4,undefined4 *param_5,
               float *param_6)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_5 != (undefined4 *)0x0) {
    uVar1 = NEON_fmadd(param_1,*param_5,param_2 * (float)param_5[4]);
    fVar2 = (float)NEON_fmadd(param_3,param_5[8],uVar1);
    *param_6 = (float)param_5[0xc] + fVar2;
    uVar1 = NEON_fmadd(param_1,param_5[1],param_2 * (float)param_5[5]);
    fVar2 = (float)NEON_fmadd(param_3,param_5[9],uVar1);
    param_6[1] = (float)param_5[0xd] + fVar2;
    uVar1 = NEON_fmadd(param_1,param_5[2],param_2 * (float)param_5[6]);
    fVar2 = (float)NEON_fmadd(param_3,param_5[10],uVar1);
    param_6[2] = (float)param_5[0xe] + fVar2;
    return;
  }
  *param_6 = param_1;
  param_6[1] = param_2;
  param_6[2] = param_3;
  return;
}


