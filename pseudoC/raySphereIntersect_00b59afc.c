// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raySphereIntersect
// Entry Point: 00b59afc
// Size: 116 bytes
// Signature: undefined __cdecl raySphereIntersect(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, float param_4, float * param_5, float * param_6)


/* MathUtil::raySphereIntersect(Vector3 const&, Vector3 const&, Vector3 const&, float, float&,
   float&) */

bool MathUtil::raySphereIntersect
               (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,float param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar1 = *(float *)(param_1 + 4) - *(float *)(param_3 + 4);
  fVar3 = *(float *)param_1 - *(float *)param_3;
  fVar4 = *(float *)(param_1 + 8) - *(float *)(param_3 + 8);
  uVar5 = NEON_fmadd(fVar3,fVar3,fVar1 * fVar1);
  uVar2 = NEON_fmadd(fVar3,*(undefined4 *)param_2,fVar1 * *(float *)(param_2 + 4));
  uVar5 = NEON_fmadd(fVar4,fVar4,uVar5);
  fVar3 = (float)NEON_fmadd(fVar4,*(undefined4 *)(param_2 + 8),uVar2);
  uVar2 = NEON_fmsub(param_4,param_4,uVar5);
  fVar1 = (float)NEON_fnmsub(fVar3,fVar3,uVar2);
  if (0.0 <= fVar1) {
    *param_5 = -fVar3 - SQRT(fVar1);
    *param_6 = SQRT(fVar1) - fVar3;
  }
  return 0.0 <= fVar1;
}


