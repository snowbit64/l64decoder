// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPtPointTetrahedron
// Entry Point: 00f73ddc
// Size: 1304 bytes
// Signature: undefined __thiscall closestPtPointTetrahedron(btVoronoiSimplexSolver * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, btSubSimplexClosestResult * param_6)


/* btVoronoiSimplexSolver::closestPtPointTetrahedron(btVector3 const&, btVector3 const&, btVector3
   const&, btVector3 const&, btVector3 const&, btSubSimplexClosestResult&) */

void __thiscall
btVoronoiSimplexSolver::closestPtPointTetrahedron
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          btVector3 *param_4,btVector3 *param_5,btSubSimplexClosestResult *param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  byte local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  local_c0 = 0;
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(param_6 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_6 = uVar3;
  param_6[0x10] = (btSubSimplexClosestResult)((byte)param_6[0x10] | 0xf);
  fVar11 = *(float *)param_2;
  fVar10 = *(float *)(param_2 + 4);
  fVar26 = *(float *)(param_3 + 8);
  fVar27 = *(float *)(param_2 + 8);
  fVar12 = *(float *)param_3;
  fVar13 = *(float *)(param_3 + 4);
  fVar14 = *(float *)(param_4 + 4) - fVar10;
  fVar35 = fVar26 - fVar27;
  fVar31 = fVar12 - fVar11;
  fVar38 = fVar13 - fVar10;
  fVar33 = *(float *)(param_4 + 8) - fVar27;
  fVar41 = *(float *)param_5 - fVar11;
  fVar30 = *(float *)param_4 - fVar11;
  fVar32 = *(float *)param_1 - fVar11;
  fVar37 = *(float *)(param_5 + 8) - fVar27;
  fVar15 = *(float *)(param_5 + 4) - fVar10;
  fVar17 = (float)NEON_fnmsub(fVar33,fVar38,fVar14 * fVar35);
  fVar36 = *(float *)(param_1 + 8) - fVar27;
  fVar23 = *(float *)(param_5 + 8) - fVar26;
  fVar40 = *(float *)(param_4 + 8) - fVar26;
  fVar29 = *(float *)(param_1 + 4) - fVar10;
  uVar20 = NEON_fnmsub(fVar30,fVar35,fVar33 * fVar31);
  fVar28 = (float)NEON_fnmsub(fVar15,fVar30,fVar41 * fVar14);
  uVar24 = NEON_fnmsub(fVar15,fVar35,fVar37 * fVar38);
  uVar25 = NEON_fmadd(fVar15,uVar20,fVar41 * fVar17);
  uVar18 = NEON_fmadd(uVar20,fVar29,fVar17 * fVar32);
  uVar21 = NEON_fnmsub(fVar14,fVar31,fVar30 * fVar38);
  uVar20 = NEON_fnmsub(fVar37,fVar14,fVar15 * fVar33);
  uVar8 = NEON_fnmsub(fVar41,fVar33,fVar37 * fVar30);
  fVar42 = (float)NEON_fnmsub(fVar41,fVar38,fVar15 * fVar31);
  fVar39 = *(float *)(param_5 + 4) - fVar13;
  fVar16 = (float)NEON_fmadd(fVar36,uVar21,uVar18);
  fVar19 = (float)NEON_fmadd(fVar37,uVar21,uVar25);
  uVar18 = NEON_fmadd(uVar20,fVar31,fVar28 * fVar35);
  uVar20 = NEON_fmadd(uVar20,fVar32,fVar28 * fVar36);
  fVar17 = *(float *)(param_4 + 4) - fVar13;
  fVar34 = *(float *)param_5 - fVar12;
  fVar22 = *(float *)param_4 - fVar12;
  fVar38 = (float)NEON_fmadd(uVar8,fVar38,uVar18);
  fVar15 = (float)NEON_fmadd(uVar8,fVar29,uVar20);
  uVar18 = NEON_fnmsub(fVar37,fVar31,fVar41 * fVar35);
  uVar21 = NEON_fmadd(uVar24,fVar32,fVar42 * fVar36);
  uVar8 = NEON_fmadd(uVar24,fVar30,fVar42 * fVar33);
  fVar28 = (float)NEON_fnmsub(fVar34,fVar17,fVar39 * fVar22);
  uVar20 = NEON_fnmsub(fVar39,fVar40,fVar23 * fVar17);
  uVar4 = (uint)(fVar19 * fVar16 < 0.0);
  if (fVar19 * fVar19 < 9.999999e-09) {
    uVar4 = 0xffffffff;
  }
  fVar17 = (float)NEON_fmadd(uVar18,fVar29,uVar21);
  fVar14 = (float)NEON_fmadd(uVar18,fVar14,uVar8);
  uVar8 = NEON_fnmsub(fVar23,fVar22,fVar34 * fVar40);
  uVar18 = NEON_fmadd(uVar20,*(float *)param_1 - fVar12,fVar28 * (*(float *)(param_1 + 8) - fVar26))
  ;
  uVar20 = NEON_fmadd(uVar20,fVar11 - fVar12,fVar28 * (fVar27 - fVar26));
  fVar11 = (float)NEON_fmadd(uVar8,*(float *)(param_1 + 4) - fVar13,uVar18);
  fVar10 = (float)NEON_fmadd(uVar8,fVar10 - fVar13,uVar20);
  uVar5 = (uint)(fVar38 * fVar15 < 0.0);
  if (fVar38 * fVar38 < 9.999999e-09) {
    uVar5 = 0xffffffff;
  }
  uVar6 = (uint)(fVar14 * fVar17 < 0.0);
  if (fVar14 * fVar14 < 9.999999e-09) {
    uVar6 = 0xffffffff;
  }
  uVar7 = (uint)(fVar10 * fVar11 < 0.0);
  if (fVar10 * fVar10 < 9.999999e-09) {
    uVar7 = 0xffffffff;
  }
  uVar1 = uVar5 | uVar4 | uVar6 | uVar7;
  if ((int)uVar1 < 0) {
    uVar3 = 0;
    param_6[0x24] = (btSubSimplexClosestResult)0x1;
  }
  else if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (uVar4 == 0) {
      fVar15 = 3.402823e+38;
    }
    else {
      this = (btVoronoiSimplexSolver *)
             closestPtPointTriangle
                       (this,param_1,param_2,param_3,param_4,(btSubSimplexClosestResult *)&local_d0)
      ;
      uVar20 = NEON_fmadd(fStack_cc - *(float *)(param_1 + 4),fStack_cc - *(float *)(param_1 + 4),
                          (local_d0 - *(float *)param_1) * (local_d0 - *(float *)param_1));
      fVar10 = (float)NEON_fmadd(local_c8 - *(float *)(param_1 + 8),
                                 local_c8 - *(float *)(param_1 + 8),uVar20);
      fVar15 = 3.402823e+38;
      if (fVar10 < 3.402823e+38) {
        *(float *)param_6 = local_d0;
        *(float *)(param_6 + 4) = fStack_cc;
        *(undefined4 *)(param_6 + 0x20) = 0;
        *(float *)(param_6 + 8) = local_c8;
        *(undefined4 *)(param_6 + 0xc) = local_c4;
        *(ulong *)(param_6 + 0x14) = CONCAT44(uStack_b8,local_bc);
        *(undefined4 *)(param_6 + 0x1c) = local_b4;
        param_6[0x10] =
             (btSubSimplexClosestResult)
             ((byte)param_6[0x10] & 0xf0 | local_c0 & 1 | local_c0 & 2 | local_c0 & 4);
        fVar15 = fVar10;
      }
    }
    if (uVar5 != 0) {
      this = (btVoronoiSimplexSolver *)
             closestPtPointTriangle
                       (this,param_1,param_2,param_4,param_5,(btSubSimplexClosestResult *)&local_d0)
      ;
      uVar20 = NEON_fmadd(fStack_cc - *(float *)(param_1 + 4),fStack_cc - *(float *)(param_1 + 4),
                          (local_d0 - *(float *)param_1) * (local_d0 - *(float *)param_1));
      fVar10 = (float)NEON_fmadd(local_c8 - *(float *)(param_1 + 8),
                                 local_c8 - *(float *)(param_1 + 8),uVar20);
      if (fVar10 < fVar15) {
        *(float *)(param_6 + 4) = fStack_cc;
        *(float *)(param_6 + 8) = local_c8;
        *(float *)param_6 = local_d0;
        *(undefined4 *)(param_6 + 0x18) = 0;
        *(undefined4 *)(param_6 + 0xc) = local_c4;
        *(undefined4 *)(param_6 + 0x14) = local_bc;
        param_6[0x10] =
             (btSubSimplexClosestResult)
             ((byte)param_6[0x10] & 0xf0 | (byte)((local_c0 >> 2 & 1) << 3));
        *(ulong *)(param_6 + 0x1c) = CONCAT44(local_b4,uStack_b8);
        fVar15 = fVar10;
      }
    }
    if (uVar6 != 0) {
      this = (btVoronoiSimplexSolver *)
             closestPtPointTriangle
                       (this,param_1,param_2,param_5,param_3,(btSubSimplexClosestResult *)&local_d0)
      ;
      uVar20 = NEON_fmadd(fStack_cc - *(float *)(param_1 + 4),fStack_cc - *(float *)(param_1 + 4),
                          (local_d0 - *(float *)param_1) * (local_d0 - *(float *)param_1));
      fVar10 = (float)NEON_fmadd(local_c8 - *(float *)(param_1 + 8),
                                 local_c8 - *(float *)(param_1 + 8),uVar20);
      if (fVar10 < fVar15) {
        *(float *)param_6 = local_d0;
        *(float *)(param_6 + 4) = fStack_cc;
        *(undefined4 *)(param_6 + 0x1c) = 0;
        *(float *)(param_6 + 8) = local_c8;
        *(undefined4 *)(param_6 + 0xc) = local_c4;
        *(undefined4 *)(param_6 + 0x14) = local_bc;
        *(undefined4 *)(param_6 + 0x18) = local_b4;
        param_6[0x10] =
             (btSubSimplexClosestResult)
             ((byte)param_6[0x10] & 0xf0 | local_c0 & 1 | (byte)((local_c0 >> 1 & 1) << 3));
        *(undefined4 *)(param_6 + 0x20) = uStack_b8;
        fVar15 = fVar10;
      }
    }
    if (uVar7 != 0) {
      closestPtPointTriangle
                (this,param_1,param_3,param_5,param_4,(btSubSimplexClosestResult *)&local_d0);
      uVar20 = NEON_fmadd(fStack_cc - *(float *)(param_1 + 4),fStack_cc - *(float *)(param_1 + 4),
                          (local_d0 - *(float *)param_1) * (local_d0 - *(float *)param_1));
      fVar10 = (float)NEON_fmadd(local_c8 - *(float *)(param_1 + 8),
                                 local_c8 - *(float *)(param_1 + 8),uVar20);
      if (fVar10 < fVar15) {
        *(float *)param_6 = local_d0;
        *(float *)(param_6 + 4) = fStack_cc;
        uVar3 = 1;
        *(undefined4 *)(param_6 + 0x14) = 0;
        uVar9 = NEON_rev64(CONCAT44(local_b4,uStack_b8),4);
        *(float *)(param_6 + 8) = local_c8;
        *(undefined4 *)(param_6 + 0xc) = local_c4;
        *(undefined8 *)(param_6 + 0x1c) = uVar9;
        *(undefined4 *)(param_6 + 0x18) = local_bc;
        param_6[0x10] =
             (btSubSimplexClosestResult)
             ((byte)param_6[0x10] & 0xf0 | (byte)((local_c0 >> 1 & 1) << 3));
        goto LAB_00f742b0;
      }
    }
    uVar3 = 1;
  }
LAB_00f742b0:
  if (*(long *)(lVar2 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


