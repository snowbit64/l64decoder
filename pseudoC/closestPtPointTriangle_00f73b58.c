// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPtPointTriangle
// Entry Point: 00f73b58
// Size: 644 bytes
// Signature: undefined __thiscall closestPtPointTriangle(btVoronoiSimplexSolver * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btSubSimplexClosestResult * param_5)


/* btVoronoiSimplexSolver::closestPtPointTriangle(btVector3 const&, btVector3 const&, btVector3
   const&, btVector3 const&, btSubSimplexClosestResult&) */

undefined8 __thiscall
btVoronoiSimplexSolver::closestPtPointTriangle
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          btVector3 *param_4,btSubSimplexClosestResult *param_5)

{
  btSubSimplexClosestResult bVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  bVar1 = (btSubSimplexClosestResult)((byte)param_5[0x10] & 0xf0);
  param_5[0x10] = bVar1;
  fVar2 = (float)*(undefined8 *)param_2;
  fVar12 = (float)*(undefined8 *)param_3;
  fVar14 = fVar12 - fVar2;
  fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar15 = fVar13 - fVar4;
  fVar18 = *(float *)(param_3 + 8);
  fVar16 = (float)*(undefined8 *)param_4;
  fVar7 = fVar16 - fVar2;
  fVar17 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar9 = fVar17 - fVar4;
  fVar6 = *(float *)(param_2 + 8);
  fVar8 = (float)*(undefined8 *)param_1;
  fVar27 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar19 = *(float *)(param_4 + 8);
  fVar28 = *(float *)(param_1 + 8);
  fVar10 = fVar18 - fVar6;
  fVar11 = fVar19 - fVar6;
  fVar24 = (fVar27 - fVar4) * fVar15 + (fVar8 - fVar2) * fVar14 + fVar10 * (fVar28 - fVar6);
  fVar25 = (fVar27 - fVar4) * fVar9 + (fVar8 - fVar2) * fVar7 + fVar11 * (fVar28 - fVar6);
  uVar21 = NEON_fcmle(CONCAT44(fVar25,fVar24),0,2);
  if (((uint)uVar21 & (uint)((ulong)uVar21 >> 0x20) & 1) == 0) {
    fVar20 = (fVar27 - fVar13) * fVar15 + (fVar8 - fVar12) * fVar14 + fVar10 * (fVar28 - fVar18);
    fVar22 = (fVar27 - fVar13) * fVar9 + (fVar8 - fVar12) * fVar7 + fVar11 * (fVar28 - fVar18);
    if (0.0 <= fVar20 && fVar22 == fVar20 || 0.0 <= fVar20 && fVar22 < fVar20) {
      uVar5 = *(undefined8 *)(param_3 + 8);
      uVar21 = *(undefined8 *)param_3;
      bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 2);
      fVar8 = 0.0;
      fVar25 = 0.0;
      fVar24 = 1.0;
    }
    else {
      fVar23 = -(fVar20 * fVar25) + fVar22 * fVar24;
      if (((fVar23 <= 0.0) && (0.0 <= fVar24)) && (fVar20 <= 0.0)) {
        *(undefined4 *)(param_5 + 0xc) = 0;
        bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 3);
        fVar25 = 0.0;
        fVar24 = fVar24 / (fVar24 - fVar20);
        fVar8 = 1.0 - fVar24;
        *(ulong *)param_5 = CONCAT44(fVar4 + fVar15 * fVar24,fVar2 + fVar14 * fVar24);
        *(float *)(param_5 + 8) = fVar24 * fVar10 + fVar6;
        goto LAB_00f73c88;
      }
      fVar26 = (fVar27 - fVar17) * fVar15 + (fVar8 - fVar16) * fVar14 + fVar10 * (fVar28 - fVar19);
      fVar27 = (fVar27 - fVar17) * fVar9 + (fVar8 - fVar16) * fVar7 + fVar11 * (fVar28 - fVar19);
      if ((fVar27 < 0.0) || (fVar27 < fVar26)) {
        fVar24 = (float)NEON_fnmsub(fVar26,fVar25,fVar24 * fVar27);
        if ((0.0 < fVar24) || ((fVar25 < 0.0 || (0.0 < fVar27)))) {
          fVar25 = (float)NEON_fnmsub(fVar20,fVar27,fVar26 * fVar22);
          if ((fVar25 <= 0.0) &&
             ((fVar22 = fVar22 - fVar20, 0.0 <= fVar22 && (0.0 <= fVar26 - fVar27)))) {
            *(undefined4 *)(param_5 + 0xc) = 0;
            bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 6);
            fVar8 = 0.0;
            fVar25 = fVar22 / (fVar22 + (fVar26 - fVar27));
            uVar3 = NEON_fmadd(fVar25,fVar19 - fVar18,fVar18);
            fVar24 = 1.0 - fVar25;
            *(ulong *)param_5 =
                 CONCAT44(fVar13 + (fVar17 - fVar13) * fVar25,fVar12 + (fVar16 - fVar12) * fVar25);
            *(undefined4 *)(param_5 + 8) = uVar3;
            goto LAB_00f73c88;
          }
          bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 7);
          *(undefined4 *)(param_5 + 0xc) = 0;
          fVar25 = 1.0 / (fVar25 + fVar24 + fVar23);
          fVar24 = fVar25 * fVar24;
          fVar25 = fVar25 * fVar23;
          fVar8 = fVar25 + fVar24;
          uVar21 = CONCAT44(fVar4 + fVar15 * fVar24 + fVar9 * fVar25,
                            fVar2 + fVar14 * fVar24 + fVar7 * fVar25);
          fVar6 = fVar6 + fVar24 * fVar10 + fVar25 * fVar11;
        }
        else {
          *(undefined4 *)(param_5 + 0xc) = 0;
          fVar24 = 0.0;
          bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 5);
          fVar25 = fVar25 / (fVar25 - fVar27);
          uVar21 = CONCAT44(fVar4 + fVar9 * fVar25,fVar2 + fVar7 * fVar25);
          fVar6 = fVar6 + fVar25 * fVar11;
          fVar8 = fVar25;
        }
        fVar8 = 1.0 - fVar8;
        *(undefined8 *)param_5 = uVar21;
        *(float *)(param_5 + 8) = fVar6;
        goto LAB_00f73c88;
      }
      uVar5 = *(undefined8 *)(param_4 + 8);
      uVar21 = *(undefined8 *)param_4;
      bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 4);
      fVar8 = 0.0;
      fVar24 = 0.0;
      fVar25 = 1.0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar21 = *(undefined8 *)param_2;
    bVar1 = (btSubSimplexClosestResult)((byte)bVar1 | 1);
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar8 = 1.0;
  }
  *(undefined8 *)(param_5 + 8) = uVar5;
  *(undefined8 *)param_5 = uVar21;
LAB_00f73c88:
  param_5[0x10] = bVar1;
  *(float *)(param_5 + 0x14) = fVar8;
  *(float *)(param_5 + 0x18) = fVar24;
  *(float *)(param_5 + 0x1c) = fVar25;
  *(undefined4 *)(param_5 + 0x20) = 0;
  return 1;
}


