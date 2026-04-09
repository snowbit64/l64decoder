// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: skinning
// Entry Point: 008d1d24
// Size: 972 bytes
// Signature: undefined skinning(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::skinning() */

void FillPlaneGeometry::skinning(void)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float **ppfVar5;
  ushort uVar6;
  long in_x0;
  long lVar7;
  float **ppfVar8;
  long lVar9;
  float **ppfVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float **ppfVar14;
  float *pfVar15;
  long lVar16;
  ushort *puVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  undefined auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
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
  float fVar39;
  float fVar40;
  undefined auVar37 [16];
  undefined auVar38 [16];
  float fVar41;
  undefined auVar42 [16];
  undefined auVar43 [16];
  
  if (*(char *)(in_x0 + 0x94) != '\0') {
    *(undefined *)(in_x0 + 0x94) = 0;
    if (*(char *)(in_x0 + 0x96) != '\0') {
      ppfVar10 = *(float ***)(in_x0 + 0xb0);
      ppfVar5 = *(float ***)(in_x0 + 0xb8);
      if (ppfVar10 != ppfVar5) {
        ppfVar8 = *(float ***)(in_x0 + 0xb0);
        ppfVar14 = ppfVar10;
        do {
          pfVar18 = *ppfVar10;
          fVar23 = pfVar18[0xd];
          if (fVar23 < 1.0) {
            fVar28 = pfVar18[10];
            fVar34 = pfVar18[0xb];
            fVar24 = fVar23 * ppfVar14[*(ushort *)(pfVar18 + 0xc)][10];
            fVar25 = fVar23 * ppfVar14[*(ushort *)(pfVar18 + 0xc)][0xb];
            pfVar15 = ppfVar8[*(ushort *)((long)pfVar18 + 0x32)];
            pfVar18[10] = fVar24;
            pfVar18[0xb] = fVar25;
            fVar24 = (float)NEON_fmadd(pfVar15[10],1.0 - fVar23,fVar24);
            pfVar18[10] = fVar24;
            fVar23 = (float)NEON_fmadd(pfVar15[0xb],1.0 - fVar23,fVar25);
            pfVar18[0xb] = fVar23;
            *pfVar18 = (fVar24 - fVar28) + *pfVar18;
            pfVar18[2] = (fVar23 - fVar34) + pfVar18[2];
            ppfVar14 = ppfVar8;
          }
          ppfVar10 = ppfVar10 + 1;
        } while (ppfVar10 != ppfVar5);
      }
      *(undefined *)(in_x0 + 0x96) = 0;
    }
    lVar16 = *(long *)(in_x0 + 0xe0);
    lVar9 = *(long *)(in_x0 + 0xe8) - lVar16;
    if (lVar9 != 0) {
      uVar11 = lVar9 >> 5;
      lVar7 = 0;
      lVar9 = 0;
      uVar12 = uVar11;
      if (uVar11 < 2) {
        uVar12 = 1;
      }
      while( true ) {
        uVar12 = uVar12 - 1;
        lVar1 = lVar16 + lVar9;
        lVar20 = *(long *)(in_x0 + 0xb0);
        pfVar18 = *(float **)(lVar20 + (ulong)*(ushort *)(lVar1 + 0x14) * 8);
        fVar24 = *(float *)(lVar1 + 8) * *pfVar18;
        fVar23 = *(float *)(lVar1 + 8) * pfVar18[2];
        if ((ulong)*(ushort *)(lVar1 + 0x16) != 0xffff) {
          puVar21 = *(undefined4 **)(lVar20 + (ulong)*(ushort *)(lVar1 + 0x16) * 8);
          fVar24 = (float)NEON_fmadd(*puVar21,*(undefined4 *)(lVar1 + 0xc),fVar24);
          fVar23 = (float)NEON_fmadd(puVar21[2],*(undefined4 *)(lVar1 + 0xc),fVar23);
          if ((ulong)*(ushort *)(lVar1 + 0x18) != 0xffff) {
            puVar21 = *(undefined4 **)(lVar20 + (ulong)*(ushort *)(lVar1 + 0x18) * 8);
            uVar26 = *(undefined4 *)(lVar16 + lVar9 + 0x10);
            fVar24 = (float)NEON_fmadd(*puVar21,uVar26,fVar24);
            fVar23 = (float)NEON_fmadd(puVar21[2],uVar26,fVar23);
          }
        }
        pfVar18 = (float *)(*(long *)(in_x0 + 0x158) + lVar7);
        fVar25 = (float)NEON_fmadd(*(float *)(lVar16 + lVar9) * (float)(unkuint9)uVar11,
                                   *(undefined4 *)(in_x0 + 0x11c),*(undefined4 *)(in_x0 + 0x9c));
        pfVar18[2] = fVar23;
        *pfVar18 = fVar24;
        pfVar18[1] = fVar25;
        if (uVar12 == 0) break;
        lVar16 = *(long *)(in_x0 + 0xe0);
        lVar9 = lVar9 + 0x20;
        lVar7 = lVar7 + 0xc;
      }
    }
    memset(*(void **)(in_x0 + 0x170),0,*(long *)(in_x0 + 0x178) - (long)*(void **)(in_x0 + 0x170));
    lVar16 = *(long *)(in_x0 + 0x100) - *(long *)(in_x0 + 0xf8);
    pfVar18 = *(float **)(in_x0 + 0x170);
    if (lVar16 != 0) {
      lVar16 = lVar16 >> 1;
      lVar9 = *(long *)(in_x0 + 0x158);
      puVar17 = (ushort *)(*(long *)(in_x0 + 0xf8) + 4);
      do {
        lVar16 = lVar16 + -3;
        uVar6 = *puVar17;
        pfVar15 = (float *)(lVar9 + (ulong)puVar17[-1] * 0xc);
        pfVar13 = (float *)(lVar9 + (ulong)puVar17[-2] * 0xc);
        pfVar2 = pfVar18 + (ulong)puVar17[-2] * 3;
        pfVar3 = pfVar18 + (ulong)puVar17[-1] * 3;
        pfVar4 = (float *)(lVar9 + (ulong)uVar6 * 0xc);
        fVar28 = pfVar15[2] - pfVar13[2];
        fVar23 = *pfVar15 - *pfVar13;
        fVar24 = pfVar15[1] - pfVar13[1];
        fVar35 = pfVar4[1] - pfVar13[1];
        fVar34 = pfVar4[2] - pfVar13[2];
        fVar29 = *pfVar4 - *pfVar13;
        fVar25 = (float)NEON_fmadd(fVar24,fVar34,fVar35 * -fVar28);
        fVar28 = (float)NEON_fmadd(fVar28,fVar29,fVar34 * -fVar23);
        fVar23 = (float)NEON_fmadd(fVar23,fVar35,fVar29 * -fVar24);
        *pfVar2 = fVar25 + *pfVar2;
        pfVar2[1] = fVar28 + pfVar2[1];
        fVar24 = *pfVar3;
        fVar34 = pfVar3[1];
        pfVar2[2] = fVar23 + pfVar2[2];
        pfVar15 = pfVar18 + (ulong)uVar6 * 3;
        *pfVar3 = fVar25 + fVar24;
        pfVar3[1] = fVar28 + fVar34;
        fVar24 = *pfVar15;
        fVar34 = pfVar15[1];
        pfVar3[2] = fVar23 + pfVar3[2];
        *pfVar15 = fVar25 + fVar24;
        pfVar15[1] = fVar28 + fVar34;
        pfVar15[2] = fVar23 + pfVar15[2];
        puVar17 = puVar17 + 3;
      } while (lVar16 != 0);
    }
    pfVar15 = *(float **)(in_x0 + 0x178);
    if (pfVar18 != pfVar15) {
      uVar12 = (long)pfVar15 + (-0xc - (long)pfVar18);
      if (0x23 < uVar12) {
        auVar22 = NEON_fmov(0x3f800000,4);
        uVar12 = uVar12 / 0xc + 1;
        uVar19 = uVar12 & 0x3ffffffffffffffc;
        pfVar13 = pfVar18 + uVar19 * 3;
        uVar11 = uVar19;
        do {
          fVar23 = *pfVar18;
          fVar34 = pfVar18[1];
          fVar30 = pfVar18[2];
          fVar24 = pfVar18[3];
          fVar29 = pfVar18[4];
          fVar31 = pfVar18[5];
          fVar25 = pfVar18[6];
          fVar35 = pfVar18[7];
          fVar32 = pfVar18[8];
          fVar28 = pfVar18[9];
          fVar27 = pfVar18[10];
          fVar33 = pfVar18[0xb];
          uVar11 = uVar11 - 4;
          auVar37._0_4_ = fVar34 * fVar34 + fVar23 * fVar23 + fVar30 * fVar30;
          auVar37._4_4_ = fVar29 * fVar29 + fVar24 * fVar24 + fVar31 * fVar31;
          auVar37._8_4_ = fVar35 * fVar35 + fVar25 * fVar25 + fVar32 * fVar32;
          auVar37._12_4_ = fVar27 * fVar27 + fVar28 * fVar28 + fVar33 * fVar33;
          auVar42 = NEON_fsqrt(auVar37,4);
          auVar38._8_4_ = 0x358637bd;
          auVar38._0_8_ = 0x358637bd358637bd;
          auVar38._12_4_ = 0x358637bd;
          auVar38 = NEON_fcmgt(auVar37,auVar38,4);
          auVar43._0_4_ = auVar22._0_4_ / auVar42._0_4_;
          auVar43._4_4_ = auVar22._4_4_ / auVar42._4_4_;
          auVar43._8_4_ = auVar22._8_4_ / auVar42._8_4_;
          auVar43._12_4_ = auVar22._12_4_ / auVar42._12_4_;
          auVar38 = NEON_bsl(auVar38,auVar43,auVar22,1);
          fVar36 = auVar38._0_4_;
          fVar39 = auVar38._4_4_;
          fVar40 = auVar38._8_4_;
          fVar41 = auVar38._12_4_;
          *pfVar18 = fVar23 * fVar36;
          pfVar18[1] = fVar34 * fVar36;
          pfVar18[2] = fVar30 * fVar36;
          pfVar18[3] = fVar24 * fVar39;
          pfVar18[4] = fVar29 * fVar39;
          pfVar18[5] = fVar31 * fVar39;
          pfVar18[6] = fVar25 * fVar40;
          pfVar18[7] = fVar35 * fVar40;
          pfVar18[8] = fVar32 * fVar40;
          pfVar18[9] = fVar28 * fVar41;
          pfVar18[10] = fVar27 * fVar41;
          pfVar18[0xb] = fVar33 * fVar41;
          pfVar18 = pfVar18 + 0xc;
        } while (uVar11 != 0);
        pfVar18 = pfVar13;
        if (uVar12 == uVar19) {
          return;
        }
      }
      do {
        fVar25 = *pfVar18;
        fVar23 = pfVar18[1];
        uVar26 = NEON_fmadd(fVar25,fVar25,fVar23 * fVar23);
        fVar24 = pfVar18[2];
        fVar34 = (float)NEON_fmadd(fVar24,fVar24,uVar26);
        fVar28 = 1.0;
        if (1e-06 < fVar34) {
          fVar28 = 1.0 / SQRT(fVar34);
        }
        *pfVar18 = fVar25 * fVar28;
        pfVar18[1] = fVar23 * fVar28;
        pfVar18[2] = fVar24 * fVar28;
        pfVar18 = pfVar18 + 3;
      } while (pfVar18 != pfVar15);
    }
  }
  return;
}


