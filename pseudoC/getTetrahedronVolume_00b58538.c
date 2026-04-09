// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTetrahedronVolume
// Entry Point: 00b58538
// Size: 128 bytes
// Signature: undefined __cdecl getTetrahedronVolume(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4)


/* MathUtil::getTetrahedronVolume(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&) */

float MathUtil::getTetrahedronVolume
                (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)param_4;
  fVar2 = *(float *)(param_4 + 4);
  fVar5 = *(float *)(param_4 + 8);
  fVar6 = (float)NEON_fmadd(*(float *)(param_2 + 8) - fVar5,*(float *)param_3 - fVar1,
                            (*(float *)(param_3 + 8) - fVar5) * -(*(float *)param_2 - fVar1));
  uVar4 = NEON_fmadd(*(float *)(param_2 + 4) - fVar2,*(float *)(param_3 + 8) - fVar5,
                     (*(float *)(param_3 + 4) - fVar2) * -(*(float *)(param_2 + 8) - fVar5));
  uVar4 = NEON_fmadd(*(float *)param_1 - fVar1,uVar4,(*(float *)(param_1 + 4) - fVar2) * fVar6);
  uVar3 = NEON_fmadd(*(float *)param_2 - fVar1,*(float *)(param_3 + 4) - fVar2,
                     (*(float *)param_3 - fVar1) * -(*(float *)(param_2 + 4) - fVar2));
  fVar1 = (float)NEON_fmadd(*(float *)(param_1 + 8) - fVar5,uVar3,uVar4);
  return fVar1 / 6.0;
}


