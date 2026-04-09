// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointOutsideOfPlane
// Entry Point: 00b5e8b0
// Size: 188 bytes
// Signature: undefined __thiscall pointOutsideOfPlane(SimplexSolver * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5)


/* SimplexSolver::pointOutsideOfPlane(Vector3 const&, Vector3 const&, Vector3 const&, Vector3
   const&, Vector3 const&) */

uint __thiscall
SimplexSolver::pointOutsideOfPlane
          (SimplexSolver *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,
          Vector3 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  fVar4 = *(float *)param_2;
  fVar7 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_2 + 8);
  fVar5 = (float)NEON_fmadd(*(float *)(param_3 + 8) - fVar6,*(float *)param_4 - fVar4,
                            (*(float *)(param_4 + 8) - fVar6) * -(*(float *)param_3 - fVar4));
  uVar3 = NEON_fmadd(*(float *)(param_3 + 4) - fVar7,*(float *)(param_4 + 8) - fVar6,
                     (*(float *)(param_4 + 4) - fVar7) * -(*(float *)(param_3 + 8) - fVar6));
  uVar2 = NEON_fmadd(*(float *)param_3 - fVar4,*(float *)(param_4 + 4) - fVar7,
                     (*(float *)param_4 - fVar4) * -(*(float *)(param_3 + 4) - fVar7));
  uVar8 = NEON_fmadd(*(float *)param_1 - fVar4,uVar3,(*(float *)(param_1 + 4) - fVar7) * fVar5);
  uVar3 = NEON_fmadd(*(float *)param_5 - fVar4,uVar3,fVar5 * (*(float *)(param_5 + 4) - fVar7));
  fVar5 = (float)NEON_fmadd(*(float *)(param_1 + 8) - fVar6,uVar2,uVar8);
  fVar4 = (float)NEON_fmadd(*(float *)(param_5 + 8) - fVar6,uVar2,uVar3);
  uVar1 = (uint)(fVar5 * fVar4 < 0.0);
  if (fVar4 * fVar4 < 9.999999e-09) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


