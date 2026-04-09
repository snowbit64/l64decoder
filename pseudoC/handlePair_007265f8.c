// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handlePair
// Entry Point: 007265f8
// Size: 736 bytes
// Signature: undefined __thiscall handlePair(DynamicAvoidance * this, StoppableObstacle * param_1, StoppableObstacle * param_2)


/* DynamicAvoidance::handlePair(StoppableObstacle&, StoppableObstacle&) */

DynamicAvoidance * __thiscall
DynamicAvoidance::handlePair
          (DynamicAvoidance *this,StoppableObstacle *param_1,StoppableObstacle *param_2)

{
  StoppableObstacle *pSVar1;
  StoppableObstacle *pSVar2;
  float *pfVar3;
  bool bVar4;
  DynamicAvoidance *pDVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar7 = *(float **)param_1;
  pfVar8 = *(float **)param_2;
  if (((DAT_01052b58 & 1) == 0) &&
     (this = (DynamicAvoidance *)__cxa_guard_acquire(&DAT_01052b58), (int)this != 0)) {
                    /* try { // try from 0072687c to 00726887 has its CatchHandler @ 007268e8 */
    fVar9 = (float)MathUtil::degreeToRadian(45.0);
    DAT_01052b50 = cosf(fVar9);
    this = (DynamicAvoidance *)__cxa_guard_release(&DAT_01052b58);
  }
  fVar10 = DAT_01052b50;
  pfVar6 = *(float **)param_2;
  pfVar3 = *(float **)(param_2 + 8);
  pSVar1 = param_1 + 0x39;
  fVar17 = -1.0;
  fVar9 = -1.0;
  if (pfVar6 != pfVar3) {
    fVar11 = *pfVar7;
    fVar12 = pfVar7[1];
    fVar9 = -1.0;
    fVar13 = pfVar7[2];
    fVar14 = pfVar7[3];
    do {
      fVar16 = pfVar6[1] - fVar12;
      fVar15 = *pfVar6 - fVar11;
      fVar19 = (float)NEON_fmadd(fVar15,fVar15,fVar16 * fVar16);
      fVar18 = 1.0;
      if (1e-06 < fVar19) {
        fVar18 = 1.0 / SQRT(fVar19);
      }
      fVar15 = (float)NEON_fmadd(fVar15 * fVar18,fVar13,fVar16 * fVar18 * fVar14);
      if (fVar10 <= fVar15) {
        *pSVar1 = (StoppableObstacle)0x1;
      }
      pfVar6 = pfVar6 + 7;
      if (fVar9 < fVar15) {
        fVar9 = fVar15;
      }
    } while (pfVar6 != pfVar3);
  }
  pfVar6 = *(float **)param_1;
  pfVar3 = *(float **)(param_1 + 8);
  pSVar2 = param_2 + 0x39;
  if (pfVar6 != pfVar3) {
    fVar11 = *pfVar8;
    fVar12 = pfVar8[1];
    fVar17 = -1.0;
    fVar13 = pfVar8[2];
    fVar14 = pfVar8[3];
    do {
      fVar16 = pfVar6[1] - fVar12;
      fVar15 = *pfVar6 - fVar11;
      fVar19 = (float)NEON_fmadd(fVar15,fVar15,fVar16 * fVar16);
      fVar18 = 1.0;
      if (1e-06 < fVar19) {
        fVar18 = 1.0 / SQRT(fVar19);
      }
      fVar15 = (float)NEON_fmadd(fVar15 * fVar18,fVar13,fVar16 * fVar18 * fVar14);
      if (fVar10 <= fVar15) {
        *pSVar2 = (StoppableObstacle)0x1;
      }
      pfVar6 = pfVar6 + 7;
      if (fVar17 < fVar15) {
        fVar17 = fVar15;
      }
    } while (pfVar6 != pfVar3);
  }
  if (((byte)*pSVar1 | (byte)*pSVar2) == 0) {
    if (fVar17 <= fVar9) {
      pSVar2 = pSVar1;
    }
    *pSVar2 = (StoppableObstacle)0x1;
  }
  if (((DAT_01052b68 & 1) == 0) &&
     (this = (DynamicAvoidance *)__cxa_guard_acquire(&DAT_01052b68), (int)this != 0)) {
                    /* try { // try from 007268b0 to 007268bb has its CatchHandler @ 007268d8 */
    fVar10 = (float)MathUtil::degreeToRadian(90.0);
    DAT_01052b60 = cosf(fVar10);
    this = (DynamicAvoidance *)__cxa_guard_release(&DAT_01052b68);
  }
  bVar4 = false;
  if ((0.0 < fVar9) && (0.0 < fVar17)) {
    fVar9 = (float)NEON_fmadd(pfVar7[2],pfVar8[2],pfVar7[3] * pfVar8[3]);
    bVar4 = fVar9 < DAT_01052b60;
  }
  if (((param_1[0x39] != (StoppableObstacle)0x0) && (*(int *)(param_1 + 0x1c) == 3)) &&
     ((bool)(bVar4 | param_2[0x38] != (StoppableObstacle)0x0))) {
    this = (DynamicAvoidance *)
           EvasiveObstacle::addObstacles((EvasiveObstacle *)param_1,(vector *)param_2);
  }
  if (((param_2[0x39] != (StoppableObstacle)0x0) && (*(int *)(param_2 + 0x1c) == 3)) &&
     ((bool)(bVar4 | param_1[0x38] != (StoppableObstacle)0x0))) {
    pDVar5 = (DynamicAvoidance *)
             EvasiveObstacle::addObstacles((EvasiveObstacle *)param_2,(vector *)param_1);
    return pDVar5;
  }
  return this;
}


