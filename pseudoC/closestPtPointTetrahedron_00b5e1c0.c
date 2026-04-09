// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPtPointTetrahedron
// Entry Point: 00b5e1c0
// Size: 1656 bytes
// Signature: undefined __thiscall closestPtPointTetrahedron(SimplexSolver * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, bool * param_6, bool * param_7, bool * param_8, bool * param_9, float * param_10, float * param_11, float * param_12, float * param_13, Vector3 * param_14, bool * param_15)


/* SimplexSolver::closestPtPointTetrahedron(Vector3 const&, Vector3 const&, Vector3 const&, Vector3
   const&, Vector3 const&, bool&, bool&, bool&, bool&, float&, float&, float&, float&, Vector3&,
   bool&) */

void __thiscall
SimplexSolver::closestPtPointTetrahedron
          (SimplexSolver *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,
          Vector3 *param_5,bool *param_6,bool *param_7,bool *param_8,bool *param_9,float *param_10,
          float *param_11,float *param_12,float *param_13,Vector3 *param_14,bool *param_15)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
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
  bool local_d8 [4];
  bool local_d4 [4];
  bool local_d0 [4];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  uVar4 = *(undefined8 *)param_1;
  *(undefined4 *)(param_14 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)param_14 = uVar4;
  *param_15 = false;
  *param_13 = 0.0;
  *param_12 = 0.0;
  *param_11 = 0.0;
  *param_10 = 0.0;
  *param_6 = true;
  *param_7 = true;
  *param_8 = true;
  *param_9 = true;
  fVar25 = *(float *)param_2;
  fVar11 = *(float *)(param_2 + 4);
  fVar8 = *(float *)param_3;
  fVar10 = *(float *)(param_3 + 4);
  fVar29 = *(float *)(param_3 + 8);
  fVar23 = fVar8 - fVar25;
  fVar24 = *(float *)(param_2 + 8);
  fVar26 = fVar10 - fVar11;
  fVar28 = fVar29 - fVar24;
  fVar9 = *(float *)(param_4 + 8) - fVar24;
  fVar27 = *(float *)(param_4 + 4) - fVar11;
  fVar12 = *(float *)param_4 - fVar25;
  fVar21 = *(float *)(param_5 + 8) - fVar24;
  fVar13 = *(float *)(param_5 + 4) - fVar11;
  fVar34 = *(float *)param_5 - fVar25;
  fVar30 = (float)NEON_fmadd(fVar28,fVar12,fVar9 * -fVar23);
  fVar33 = *(float *)(param_1 + 4) - fVar11;
  fVar32 = *(float *)param_1 - fVar25;
  uVar14 = NEON_fmadd(fVar26,fVar9,fVar27 * -fVar28);
  uVar17 = NEON_fmadd(fVar23,fVar27,fVar12 * -fVar26);
  fVar31 = *(float *)(param_1 + 8) - fVar24;
  fVar36 = *(float *)param_5 - fVar8;
  fVar35 = *(float *)(param_5 + 4) - fVar10;
  uVar19 = NEON_fmadd(fVar32,uVar14,fVar33 * fVar30);
  uVar14 = NEON_fmadd(fVar34,uVar14,fVar30 * fVar13);
  fVar22 = (float)NEON_fmadd(fVar9,fVar34,fVar21 * -fVar12);
  fVar20 = (float)NEON_fmadd(fVar31,uVar17,uVar19);
  fVar15 = (float)NEON_fmadd(fVar21,uVar17,uVar14);
  fVar30 = (float)NEON_fmadd(fVar21,fVar23,fVar28 * -fVar34);
  uVar19 = NEON_fmadd(fVar27,fVar21,fVar13 * -fVar9);
  uVar17 = NEON_fmadd(fVar12,fVar13,fVar34 * -fVar27);
  uVar14 = NEON_fmadd(fVar23,uVar19,fVar26 * fVar22);
  uVar19 = NEON_fmadd(fVar32,uVar19,fVar33 * fVar22);
  fVar22 = (float)NEON_fmadd(fVar28,uVar17,uVar14);
  fVar16 = (float)NEON_fmadd(fVar31,uVar17,uVar19);
  fVar18 = *(float *)(param_5 + 8) - fVar29;
  uVar17 = NEON_fmadd(fVar13,fVar28,fVar26 * -fVar21);
  fVar21 = *(float *)(param_4 + 8) - fVar29;
  uVar14 = NEON_fmadd(fVar12,uVar17,fVar27 * fVar30);
  uVar3 = (uint)(fVar20 * fVar15 < 0.0);
  if (fVar15 * fVar15 < 9.999999e-09) {
    uVar3 = 0xffffffff;
  }
  uVar19 = NEON_fmadd(fVar34,fVar26,fVar23 * -fVar13);
  fVar12 = *(float *)(param_4 + 4) - fVar10;
  fVar13 = *(float *)param_4 - fVar8;
  uVar17 = NEON_fmadd(fVar32,uVar17,fVar33 * fVar30);
  fVar30 = (float)NEON_fmadd(fVar9,uVar19,uVar14);
  fVar15 = (float)NEON_fmadd(fVar18,fVar13,fVar21 * -fVar36);
  fVar9 = (float)NEON_fmadd(fVar31,uVar19,uVar17);
  uVar14 = NEON_fmadd(fVar35,fVar21,fVar12 * -fVar18);
  uVar5 = (uint)(fVar16 * fVar22 < 0.0);
  if (fVar22 * fVar22 < 9.999999e-09) {
    uVar5 = 0xffffffff;
  }
  uVar17 = NEON_fmadd(fVar36,fVar12,fVar13 * -fVar35);
  uVar19 = NEON_fmadd(*(float *)param_1 - fVar8,uVar14,(*(float *)(param_1 + 4) - fVar10) * fVar15);
  uVar14 = NEON_fmadd(fVar25 - fVar8,uVar14,(fVar11 - fVar10) * fVar15);
  fVar8 = (float)NEON_fmadd(*(float *)(param_1 + 8) - fVar29,uVar17,uVar19);
  fVar22 = (float)NEON_fmadd(fVar24 - fVar29,uVar17,uVar14);
  uVar6 = (uint)(fVar9 * fVar30 < 0.0);
  if (fVar30 * fVar30 < 9.999999e-09) {
    uVar6 = 0xffffffff;
  }
  uVar7 = (uint)(fVar8 * fVar22 < 0.0);
  if (fVar22 * fVar22 < 9.999999e-09) {
    uVar7 = 0xffffffff;
  }
  uVar1 = uVar6 | uVar3 | uVar7 | uVar5;
  if ((int)uVar1 < 0) {
    uVar4 = 0;
    *param_15 = true;
  }
  else if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if (uVar3 == 0) {
      fVar30 = 3.402823e+38;
    }
    else {
      this = (SimplexSolver *)
             closestPtPointTriangle
                       (this,param_1,param_2,param_3,param_4,local_d0,local_d4,local_d8,&local_c4,
                        &local_c8,&local_cc,(Vector3 *)&local_c0);
      uVar14 = NEON_fmadd(local_c0 - *(float *)param_1,local_c0 - *(float *)param_1,
                          (fStack_bc - *(float *)(param_1 + 4)) *
                          (fStack_bc - *(float *)(param_1 + 4)));
      fVar22 = (float)NEON_fmadd(local_b8 - *(float *)(param_1 + 8),
                                 local_b8 - *(float *)(param_1 + 8),uVar14);
      fVar30 = 3.402823e+38;
      if (fVar22 < 3.402823e+38) {
        *(ulong *)param_14 = CONCAT44(fStack_bc,local_c0);
        *(float *)(param_14 + 8) = local_b8;
        *param_6 = local_d0[0];
        *param_7 = local_d4[0];
        *param_8 = local_d8[0];
        *param_9 = false;
        *param_10 = local_c4;
        *param_11 = local_c8;
        *param_12 = local_cc;
        *param_13 = 0.0;
        fVar30 = fVar22;
      }
    }
    if (uVar5 != 0) {
      this = (SimplexSolver *)
             closestPtPointTriangle
                       (this,param_1,param_2,param_4,param_5,local_d0,local_d4,local_d8,&local_c4,
                        &local_c8,&local_cc,(Vector3 *)&local_c0);
      uVar14 = NEON_fmadd(local_c0 - *(float *)param_1,local_c0 - *(float *)param_1,
                          (fStack_bc - *(float *)(param_1 + 4)) *
                          (fStack_bc - *(float *)(param_1 + 4)));
      fVar22 = (float)NEON_fmadd(local_b8 - *(float *)(param_1 + 8),
                                 local_b8 - *(float *)(param_1 + 8),uVar14);
      if (fVar22 < fVar30) {
        *(float *)(param_14 + 8) = local_b8;
        *(ulong *)param_14 = CONCAT44(fStack_bc,local_c0);
        *param_6 = local_d0[0];
        *param_7 = false;
        *param_8 = local_d4[0];
        *param_9 = local_d8[0];
        *param_10 = local_c4;
        *param_11 = 0.0;
        *param_12 = local_c8;
        *param_13 = local_cc;
        fVar30 = fVar22;
      }
    }
    if (uVar6 != 0) {
      this = (SimplexSolver *)
             closestPtPointTriangle
                       (this,param_1,param_2,param_5,param_3,local_d0,local_d4,local_d8,&local_c4,
                        &local_c8,&local_cc,(Vector3 *)&local_c0);
      uVar14 = NEON_fmadd(local_c0 - *(float *)param_1,local_c0 - *(float *)param_1,
                          (fStack_bc - *(float *)(param_1 + 4)) *
                          (fStack_bc - *(float *)(param_1 + 4)));
      fVar22 = (float)NEON_fmadd(local_b8 - *(float *)(param_1 + 8),
                                 local_b8 - *(float *)(param_1 + 8),uVar14);
      if (fVar22 < fVar30) {
        *(float *)(param_14 + 8) = local_b8;
        *(ulong *)param_14 = CONCAT44(fStack_bc,local_c0);
        *param_6 = local_d0[0];
        *param_7 = local_d8[0];
        *param_8 = false;
        *param_9 = local_d4[0];
        *param_10 = local_c4;
        *param_11 = local_cc;
        *param_12 = 0.0;
        *param_13 = local_c8;
        fVar30 = fVar22;
      }
    }
    if (uVar7 != 0) {
      closestPtPointTriangle
                (this,param_1,param_3,param_5,param_4,local_d0,local_d4,local_d8,&local_c4,&local_c8
                 ,&local_cc,(Vector3 *)&local_c0);
      uVar14 = NEON_fmadd(local_c0 - *(float *)param_1,local_c0 - *(float *)param_1,
                          (fStack_bc - *(float *)(param_1 + 4)) *
                          (fStack_bc - *(float *)(param_1 + 4)));
      fVar22 = (float)NEON_fmadd(local_b8 - *(float *)(param_1 + 8),
                                 local_b8 - *(float *)(param_1 + 8),uVar14);
      if (fVar22 < fVar30) {
        *(ulong *)param_14 = CONCAT44(fStack_bc,local_c0);
        *(float *)(param_14 + 8) = local_b8;
        *param_6 = false;
        *param_7 = local_d0[0];
        *param_8 = local_d8[0];
        *param_9 = local_d4[0];
        *param_10 = 0.0;
        *param_11 = local_c4;
        *param_12 = local_cc;
        *param_13 = local_c8;
      }
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


