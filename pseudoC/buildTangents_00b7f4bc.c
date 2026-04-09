// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildTangents
// Entry Point: 00b7f4bc
// Size: 756 bytes
// Signature: undefined buildTangents(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetBuilder::buildTangents() */

void IndexedTriangleSetBuilder::buildTangents(void)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined auVar4 [16];
  bool bVar5;
  bool bVar6;
  float **in_x0;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
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
  
  pfVar11 = in_x0[3];
  uVar20 = (long)in_x0[4] - (long)pfVar11;
  uVar19 = (uint)(uVar20 >> 4);
  pfVar7 = (float *)operator_new__((ulong)(uVar19 * 3) << 2);
  if (uVar19 == 0) goto LAB_00b7f544;
  uVar13 = uVar20 >> 4 & 0xffffffff;
  if (uVar13 < 5) {
LAB_00b7f504:
    lVar15 = 0;
  }
  else {
    uVar16 = uVar13 - 1;
    lVar15 = 0;
    uVar17 = (uVar16 & 0xffffffff) + (uVar16 & 0xffffffff) * 2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar16;
    bVar5 = (uVar17 & 0xffffffff00000000) == 0;
    bVar6 = SUB168(auVar4 * ZEXT816(0xc),8) == 0;
    uVar18 = (uint)uVar17;
    if (((((((uVar18 != 0xffffffff) && (bVar5)) && (uVar16 >> 0x20 == 0)) &&
          ((uVar18 < 0xfffffffe && (bVar5)))) &&
         ((pfVar7 + 1 <= pfVar7 + 1 + uVar16 * 3 &&
          ((bVar6 && (pfVar7 + 2 <= pfVar7 + 2 + uVar16 * 3)))))) && (bVar6)) &&
       ((pfVar7 <= pfVar7 + uVar16 * 3 && (bVar6)))) {
      if ((pfVar11 < pfVar7 + uVar13 * 3) && (pfVar7 < pfVar11 + uVar13 * 4 + -1))
      goto LAB_00b7f504;
      uVar17 = 4;
      if ((uVar20 >> 4 & 3) != 0) {
        uVar17 = uVar20 >> 4 & 3;
      }
      uVar20 = 0;
      lVar15 = uVar13 - uVar17;
      lVar14 = uVar17 - uVar13;
      pfVar8 = pfVar11;
      do {
        fVar21 = *pfVar8;
        fVar25 = pfVar8[1];
        fVar29 = pfVar8[2];
        fVar22 = pfVar8[4];
        fVar26 = pfVar8[5];
        fVar30 = pfVar8[6];
        fVar23 = pfVar8[8];
        fVar27 = pfVar8[9];
        fVar31 = pfVar8[10];
        fVar24 = pfVar8[0xc];
        fVar28 = pfVar8[0xd];
        fVar32 = pfVar8[0xe];
        pfVar8 = pfVar8 + 0x10;
        uVar17 = uVar20 & 0xfffffffc;
        uVar20 = uVar20 + 0xc;
        lVar14 = lVar14 + 4;
        pfVar7[uVar17] = fVar21;
        pfVar7[uVar17 + 1] = fVar25;
        pfVar7[uVar17 + 2] = fVar29;
        pfVar7[uVar17 + 3] = fVar22;
        pfVar7[uVar17 + 4] = fVar26;
        pfVar7[uVar17 + 5] = fVar30;
        pfVar7[uVar17 + 6] = fVar23;
        pfVar7[uVar17 + 7] = fVar27;
        pfVar7[uVar17 + 8] = fVar31;
        pfVar7[uVar17 + 9] = fVar24;
        pfVar7[uVar17 + 10] = fVar28;
        pfVar7[uVar17 + 0xb] = fVar32;
      } while (lVar14 != 0);
    }
  }
  uVar18 = (int)lVar15 * 3;
  lVar14 = lVar15 - uVar13;
  pfVar11 = pfVar11 + lVar15 * 4 + 2;
  do {
    uVar12 = uVar18 + 1;
    uVar2 = uVar18 + 2;
    bVar5 = lVar14 != -1;
    lVar14 = lVar14 + 1;
    pfVar7[uVar18] = pfVar11[-2];
    uVar18 = uVar18 + 3;
    pfVar7[uVar12] = pfVar11[-1];
    pfVar7[uVar2] = *pfVar11;
    pfVar11 = pfVar11 + 4;
  } while (bVar5);
LAB_00b7f544:
  pfVar11 = *in_x0;
  lVar15 = (long)in_x0[1] - (long)pfVar11 >> 4;
  uVar20 = lVar15 * 0x6db6db6db6db6db7;
  uVar13 = lVar15 * 0x92492494 & 0x3fffffffc;
  pfVar8 = (float *)operator_new__(uVar13);
  pfVar9 = (float *)operator_new__(uVar13);
  pfVar10 = (float *)operator_new__((uVar20 & 0x7fffffff) << 3);
  uVar18 = (uint)uVar20;
  if (uVar18 != 0) {
    uVar12 = 0;
    uVar13 = 0;
    do {
      uVar2 = uVar12 + 1;
      pfVar8[uVar12] = *pfVar11;
      pfVar9[uVar12] = pfVar11[0xb];
      uVar3 = uVar12 + 2;
      uVar12 = uVar12 + 3;
      pfVar8[uVar2] = pfVar11[1];
      pfVar9[uVar2] = pfVar11[0xc];
      uVar17 = uVar13 & 0xfffffffe;
      uVar13 = uVar13 + 2;
      pfVar8[uVar3] = pfVar11[2];
      pfVar9[uVar3] = pfVar11[0xd];
      pfVar10[uVar17] = pfVar11[3];
      pfVar1 = pfVar11 + 4;
      pfVar11 = pfVar11 + 0x1c;
      (pfVar10 + uVar17)[1] = *pfVar1;
    } while ((uVar20 & 0xffffffff) * 2 - uVar13 != 0);
  }
  pfVar11 = (float *)operator_new__((uVar20 & 0x3fffffff) << 4);
  MathUtil::tangentArray(uVar18,pfVar8,pfVar9,pfVar10,uVar19,(uint *)pfVar7,pfVar11);
  if (uVar18 != 0) {
    uVar13 = 0;
    pfVar7 = *in_x0 + 0x15;
    do {
      uVar17 = uVar13 & 0xfffffffc;
      uVar13 = uVar13 + 4;
      pfVar8 = pfVar11 + uVar17;
      pfVar7[-3] = *pfVar8;
      pfVar7[-2] = pfVar8[1];
      pfVar7[-1] = pfVar8[2];
      *pfVar7 = pfVar8[3];
      pfVar7 = pfVar7 + 0x1c;
    } while ((uVar20 & 0xffffffff) * 4 - uVar13 != 0);
  }
  return;
}


