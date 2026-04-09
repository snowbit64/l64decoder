// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quatTransToDualQuaternion
// Entry Point: 00b59148
// Size: 196 bytes
// Signature: undefined __cdecl quatTransToDualQuaternion(GsQuaternion * param_1, Vector3 * param_2, float * param_3)


/* MathUtil::quatTransToDualQuaternion(GsQuaternion const&, Vector3 const&, float (*) [4]) */

void MathUtil::quatTransToDualQuaternion(GsQuaternion *param_1,Vector3 *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  *param_3 = *(float *)param_1;
  param_3[1] = *(float *)(param_1 + 4);
  param_3[2] = *(float *)(param_1 + 8);
  param_3[3] = *(float *)(param_1 + 0xc);
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)(param_1 + 4),
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 8));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0xc),uVar1);
  param_3[4] = fVar2 * -0.5;
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)param_1,
                     *(float *)(param_2 + 4) * *(float *)(param_1 + 0xc));
  fVar2 = (float)NEON_fmsub(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),uVar1);
  param_3[5] = fVar2 * 0.5;
  uVar1 = NEON_fmsub(*(undefined4 *)param_2,*(undefined4 *)(param_1 + 0xc),
                     *(float *)(param_2 + 4) * *(float *)param_1);
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 4),uVar1);
  param_3[6] = fVar2 * 0.5;
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)(param_1 + 8),
                     *(float *)(param_1 + 4) * -*(float *)(param_2 + 4));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)param_1,uVar1);
  param_3[7] = fVar2 * 0.5;
  return;
}


