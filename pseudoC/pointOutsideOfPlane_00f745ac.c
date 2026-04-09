// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointOutsideOfPlane
// Entry Point: 00f745ac
// Size: 176 bytes
// Signature: undefined __thiscall pointOutsideOfPlane(btVoronoiSimplexSolver * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5)


/* btVoronoiSimplexSolver::pointOutsideOfPlane(btVector3 const&, btVector3 const&, btVector3 const&,
   btVector3 const&, btVector3 const&) */

uint __thiscall
btVoronoiSimplexSolver::pointOutsideOfPlane
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          btVector3 *param_4,btVector3 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 8);
  fVar7 = (float)NEON_fnmsub(*(float *)(param_4 + 8) - fVar5,*(float *)(param_3 + 4) - fVar4,
                             (*(float *)(param_4 + 4) - fVar4) * (*(float *)(param_3 + 8) - fVar5));
  uVar6 = NEON_fnmsub(*(float *)param_4 - fVar3,*(float *)(param_3 + 8) - fVar5,
                      (*(float *)(param_4 + 8) - fVar5) * (*(float *)param_3 - fVar3));
  uVar2 = NEON_fnmsub(*(float *)(param_4 + 4) - fVar4,*(float *)param_3 - fVar3,
                      (*(float *)param_4 - fVar3) * (*(float *)(param_3 + 4) - fVar4));
  uVar8 = NEON_fmadd(uVar6,*(float *)(param_1 + 4) - fVar4,fVar7 * (*(float *)param_1 - fVar3));
  uVar6 = NEON_fmadd(*(float *)(param_5 + 4) - fVar4,uVar6,(*(float *)param_5 - fVar3) * fVar7);
  fVar4 = (float)NEON_fmadd(*(float *)(param_1 + 8) - fVar5,uVar2,uVar8);
  fVar3 = (float)NEON_fmadd(*(float *)(param_5 + 8) - fVar5,uVar2,uVar6);
  uVar1 = (uint)(fVar3 * fVar4 < 0.0);
  if (fVar3 * fVar3 < 9.999999e-09) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


