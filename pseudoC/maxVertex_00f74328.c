// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: maxVertex
// Entry Point: 00f74328
// Size: 300 bytes
// Signature: undefined maxVertex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btVoronoiSimplexSolver::maxVertex() */

float btVoronoiSimplexSolver::maxVertex(void)

{
  ulong uVar1;
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint *in_x0;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined auVar14 [16];
  undefined4 uVar15;
  float fVar16;
  undefined auVar17 [16];
  float fVar18;
  float fVar19;
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
  undefined in_q18 [16];
  undefined auVar34 [16];
  undefined in_q20 [16];
  undefined auVar38 [16];
  undefined in_q22 [16];
  undefined auVar42 [16];
  undefined in_q23 [16];
  undefined auVar46 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  
  uVar2 = *in_x0;
  uVar9 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    if (uVar2 < 9) {
      fVar18 = 0.0;
      lVar11 = 0;
    }
    else {
      uVar1 = 8;
      if ((uVar2 & 7) != 0) {
        uVar1 = uVar9 & 7;
      }
      lVar11 = uVar9 - uVar1;
      auVar14 = ZEXT816(0);
      auVar17 = ZEXT816(0);
      puVar13 = (undefined8 *)(in_x0 + 0x11);
      lVar10 = lVar11;
      do {
        fVar19 = (float)puVar13[-3];
        fVar20 = (float)((ulong)puVar13[-3] >> 0x20);
        fVar18 = (float)puVar13[-4];
        fVar16 = (float)((ulong)puVar13[-4] >> 0x20);
        fVar21 = (float)puVar13[-2];
        fVar22 = (float)((ulong)puVar13[-2] >> 0x20);
        lVar10 = lVar10 + -8;
        fVar18 = fVar18 * fVar18;
        fVar16 = fVar16 * fVar16;
        fVar19 = fVar19 * fVar19;
        fVar20 = fVar20 * fVar20;
        fVar28 = (float)puVar13[5];
        fVar29 = (float)((ulong)puVar13[5] >> 0x20);
        fVar26 = (float)puVar13[4];
        fVar27 = (float)((ulong)puVar13[4] >> 0x20);
        fVar30 = (float)puVar13[6];
        fVar31 = (float)((ulong)puVar13[6] >> 0x20);
        fVar22 = fVar22 * fVar22;
        fVar26 = fVar26 * fVar26;
        fVar27 = fVar27 * fVar27;
        fVar28 = fVar28 * fVar28;
        fVar29 = fVar29 * fVar29;
        auVar34._4_12_ = in_q18._4_12_;
        auVar34._0_4_ = fVar18;
        auVar36._12_4_ = in_q18._12_4_;
        auVar36._0_8_ = auVar34._0_8_;
        auVar36._8_4_ = fVar16;
        auVar35._8_8_ = auVar36._8_8_;
        auVar35._4_4_ = fVar21 * fVar21;
        auVar35._0_4_ = fVar18;
        auVar37._0_12_ = auVar35._0_12_;
        auVar37._12_4_ = fVar22;
        fVar21 = (float)puVar13[-8];
        fVar23 = (float)((ulong)puVar13[-8] >> 0x20);
        fVar24 = (float)puVar13[-6];
        fVar25 = (float)((ulong)puVar13[-6] >> 0x20);
        fVar31 = fVar31 * fVar31;
        auVar42._4_12_ = in_q22._4_12_;
        auVar42._0_4_ = fVar16;
        auVar44._12_4_ = in_q22._12_4_;
        auVar44._0_8_ = auVar42._0_8_;
        auVar44._8_4_ = fVar16;
        auVar43._8_8_ = auVar44._8_8_;
        auVar43._4_4_ = fVar22;
        auVar43._0_4_ = fVar16;
        auVar45._0_12_ = auVar43._0_12_;
        auVar45._12_4_ = fVar22;
        auVar3._4_4_ = fVar16;
        auVar3._0_4_ = fVar18;
        auVar3._8_4_ = fVar19;
        auVar3._12_4_ = fVar20;
        in_q18 = NEON_ext(auVar3,auVar37,8,1);
        auVar38._4_12_ = in_q20._4_12_;
        auVar38._0_4_ = fVar26;
        auVar40._12_4_ = in_q20._12_4_;
        auVar40._0_8_ = auVar38._0_8_;
        auVar40._8_4_ = fVar27;
        auVar39._8_8_ = auVar40._8_8_;
        auVar39._4_4_ = fVar30 * fVar30;
        auVar39._0_4_ = fVar26;
        auVar41._0_12_ = auVar39._0_12_;
        auVar41._12_4_ = fVar31;
        fVar22 = (float)*puVar13;
        fVar30 = (float)((ulong)*puVar13 >> 0x20);
        fVar32 = (float)puVar13[2];
        fVar33 = (float)((ulong)puVar13[2] >> 0x20);
        auVar46._4_12_ = in_q23._4_12_;
        auVar46._0_4_ = fVar27;
        auVar48._12_4_ = in_q23._12_4_;
        auVar48._0_8_ = auVar46._0_8_;
        auVar48._8_4_ = fVar27;
        auVar47._8_8_ = auVar48._8_8_;
        auVar47._4_4_ = fVar31;
        auVar47._0_4_ = fVar27;
        auVar49._0_12_ = auVar47._0_12_;
        auVar49._12_4_ = fVar31;
        auVar7._4_4_ = fVar27;
        auVar7._0_4_ = fVar26;
        auVar7._8_4_ = fVar28;
        auVar7._12_4_ = fVar29;
        in_q20 = NEON_ext(auVar7,auVar41,8,1);
        auVar4._4_4_ = fVar16;
        auVar4._0_4_ = fVar18;
        auVar4._8_4_ = fVar19;
        auVar4._12_4_ = fVar20;
        in_q22 = NEON_ext(auVar4,auVar45,8,1);
        auVar8._4_4_ = fVar27;
        auVar8._0_4_ = fVar26;
        auVar8._8_4_ = fVar28;
        auVar8._12_4_ = fVar29;
        in_q23 = NEON_ext(auVar8,auVar49,8,1);
        auVar5._4_4_ = fVar25 * fVar25 + fVar24 * fVar24 + (float)puVar13[-5] * (float)puVar13[-5];
        auVar5._0_4_ = fVar23 * fVar23 + fVar21 * fVar21 + (float)puVar13[-7] * (float)puVar13[-7];
        auVar5._8_4_ = in_q22._8_4_ + in_q18._8_4_ + fVar19;
        auVar5._12_4_ = in_q22._12_4_ + in_q18._12_4_ + (float)puVar13[-1] * (float)puVar13[-1];
        auVar14 = NEON_fmaxnm(auVar14,auVar5,4);
        auVar6._4_4_ = fVar33 * fVar33 + fVar32 * fVar32 + (float)puVar13[3] * (float)puVar13[3];
        auVar6._0_4_ = fVar30 * fVar30 + fVar22 * fVar22 + (float)puVar13[1] * (float)puVar13[1];
        auVar6._8_4_ = in_q23._8_4_ + in_q20._8_4_ + fVar28;
        auVar6._12_4_ = in_q23._12_4_ + in_q20._12_4_ + (float)puVar13[7] * (float)puVar13[7];
        auVar17 = NEON_fmaxnm(auVar17,auVar6,4);
        puVar13 = puVar13 + 0x10;
      } while (lVar10 != 0);
      auVar14 = NEON_fmaxnm(auVar14,auVar17,4);
      fVar18 = (float)NEON_fmaxnmv(auVar14,4);
    }
    lVar10 = uVar9 - lVar11;
    puVar12 = in_x0 + lVar11 * 4 + 3;
    do {
      lVar10 = lVar10 + -1;
      uVar15 = NEON_fmadd(puVar12[-1],puVar12[-1],(float)puVar12[-2] * (float)puVar12[-2]);
      fVar16 = (float)NEON_fmadd(*puVar12,*puVar12,uVar15);
      if (fVar18 <= fVar16) {
        fVar18 = fVar16;
      }
      puVar12 = puVar12 + 4;
    } while (lVar10 != 0);
    return fVar18;
  }
  return 0.0;
}


