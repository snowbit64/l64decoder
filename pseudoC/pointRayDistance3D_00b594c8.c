// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointRayDistance3D
// Entry Point: 00b594c8
// Size: 92 bytes
// Signature: undefined __cdecl pointRayDistance3D(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* MathUtil::pointRayDistance3D(Vector3 const&, Vector3 const&, Vector3 const&) */

float MathUtil::pointRayDistance3D(Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)NEON_fmadd(*(float *)(param_3 + 8) - *(float *)(param_1 + 8),*(float *)param_2,
                            *(float *)(param_2 + 8) * -(*(float *)param_3 - *(float *)param_1));
  uVar2 = NEON_fmadd(*(float *)(param_3 + 4) - *(float *)(param_1 + 4),*(float *)(param_2 + 8),
                     *(float *)(param_2 + 4) * -(*(float *)(param_3 + 8) - *(float *)(param_1 + 8)))
  ;
  uVar1 = NEON_fmadd(*(float *)param_3 - *(float *)param_1,*(float *)(param_2 + 4),
                     *(float *)param_2 * -(*(float *)(param_3 + 4) - *(float *)(param_1 + 4)));
  uVar2 = NEON_fmadd(uVar2,uVar2,fVar3 * fVar3);
  fVar3 = (float)NEON_fmadd(uVar1,uVar1,uVar2);
  return SQRT(fVar3);
}


