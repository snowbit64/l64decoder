// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SplitTest
// Entry Point: 00f9ba28
// Size: 356 bytes
// Signature: undefined __cdecl SplitTest(ConvexH * param_1, btPlane * param_2)


/* SplitTest(ConvexH&, btPlane const&) */

uint SplitTest(ConvexH *param_1,btPlane *param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  float fVar3;
  undefined auVar4 [16];
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte bVar17;
  byte bVar19;
  ulong uVar18;
  byte bVar20;
  byte bVar22;
  ulong uVar21;
  byte bVar23;
  byte bVar25;
  ulong uVar24;
  byte bVar26;
  byte bVar28;
  ulong uVar27;
  uint5 uVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  uint5 uVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  uint5 uVar35;
  undefined auVar36 [16];
  uint5 uVar37;
  undefined auVar38 [16];
  
  uVar5 = *(uint *)(param_1 + 4);
  uVar6 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    fVar12 = *(float *)param_2;
    fVar13 = *(float *)(param_2 + 4);
    fVar14 = *(float *)(param_2 + 8);
    fVar16 = *(float *)(param_2 + 0x10);
    fVar15 = -planetestepsilon;
    if (uVar5 < 9) {
      lVar10 = 0;
      uVar5 = 0;
    }
    else {
      uVar18 = 8;
      if ((uVar5 & 7) != 0) {
        uVar18 = uVar6 & 7;
      }
      lVar10 = uVar6 - uVar18;
      uVar18 = 0;
      uVar21 = 0;
      uVar24 = 0;
      uVar27 = 0;
      pfVar11 = (float *)(*(long *)(param_1 + 0x10) + 0x40);
      lVar7 = lVar10;
      do {
        lVar7 = lVar7 + -8;
        auVar30._0_4_ = *pfVar11 * fVar12 + pfVar11[1] * fVar13 + pfVar11[2] * fVar14 + fVar16;
        auVar30._4_4_ = pfVar11[4] * fVar12 + pfVar11[5] * fVar13 + pfVar11[6] * fVar14 + fVar16;
        auVar30._8_4_ = pfVar11[8] * fVar12 + pfVar11[9] * fVar13 + pfVar11[10] * fVar14 + fVar16;
        auVar30._12_4_ =
             pfVar11[0xc] * fVar12 + pfVar11[0xd] * fVar13 + pfVar11[0xe] * fVar14 + fVar16;
        auVar31._4_4_ = planetestepsilon;
        auVar31._0_4_ = planetestepsilon;
        auVar31._8_4_ = planetestepsilon;
        auVar31._12_4_ = planetestepsilon;
        auVar36 = NEON_fcmgt(auVar30,auVar31,4);
        auVar38._4_4_ = fVar15;
        auVar38._0_4_ = fVar15;
        auVar38._8_4_ = fVar15;
        auVar38._12_4_ = fVar15;
        auVar31 = NEON_fcmgt(auVar38,auVar30,4);
        auVar33._0_4_ =
             pfVar11[-0x10] * fVar12 + pfVar11[-0xf] * fVar13 + pfVar11[-0xe] * fVar14 + fVar16;
        auVar33._4_4_ =
             pfVar11[-0xc] * fVar12 + pfVar11[-0xb] * fVar13 + pfVar11[-10] * fVar14 + fVar16;
        auVar33._8_4_ = pfVar11[-8] * fVar12 + pfVar11[-7] * fVar13 + pfVar11[-6] * fVar14 + fVar16;
        auVar33._12_4_ = pfVar11[-4] * fVar12 + pfVar11[-3] * fVar13 + pfVar11[-2] * fVar14 + fVar16
        ;
        uVar35 = CONCAT14(auVar36[4],(uint)(auVar36[0] & 2)) & 0x2ffffffff;
        auVar34._4_4_ = planetestepsilon;
        auVar34._0_4_ = planetestepsilon;
        auVar34._8_4_ = planetestepsilon;
        auVar34._12_4_ = planetestepsilon;
        auVar38 = NEON_fcmgt(auVar33,auVar34,4);
        auVar4._4_4_ = fVar15;
        auVar4._0_4_ = fVar15;
        auVar4._8_4_ = fVar15;
        auVar4._12_4_ = fVar15;
        auVar34 = NEON_fcmgt(auVar4,auVar33,4);
        uVar29 = CONCAT14(auVar31[4] & ~auVar36[4],(uint)(auVar31[0] & ~auVar36[0] & 1)) &
                 0x1ffffffff;
        uVar37 = CONCAT14(auVar38[4],(uint)(auVar38[0] & 2)) & 0x2ffffffff;
        uVar32 = CONCAT14(auVar34[4] & ~auVar38[4],(uint)(auVar34[0] & ~auVar38[0] & 1)) &
                 0x1ffffffff;
        bVar23 = (byte)uVar35 | (byte)uVar29 | (byte)uVar24;
        bVar25 = (byte)(uVar35 >> 0x20) | (byte)(uVar29 >> 0x20) | (byte)(uVar24 >> 0x20);
        uVar24 = (ulong)CONCAT14(bVar25,(uint)bVar23);
        bVar26 = auVar36[8] & 2 | auVar31[8] & ~auVar36[8] & 1 | (byte)uVar27;
        bVar28 = auVar36[12] & 2 | auVar31[12] & ~auVar36[12] & 1 | (byte)(uVar27 >> 0x20);
        uVar27 = (ulong)CONCAT14(bVar28,(uint)bVar26);
        bVar17 = (byte)uVar37 | (byte)uVar32 | (byte)uVar18;
        bVar19 = (byte)(uVar37 >> 0x20) | (byte)(uVar32 >> 0x20) | (byte)(uVar18 >> 0x20);
        uVar18 = (ulong)CONCAT14(bVar19,(uint)bVar17);
        bVar20 = auVar38[8] & 2 | auVar34[8] & ~auVar38[8] & 1 | (byte)uVar21;
        bVar22 = auVar38[12] & 2 | auVar34[12] & ~auVar38[12] & 1 | (byte)(uVar21 >> 0x20);
        uVar21 = (ulong)CONCAT14(bVar22,(uint)bVar20);
        pfVar11 = pfVar11 + 0x20;
      } while (lVar7 != 0);
      bVar23 = bVar23 | bVar17;
      bVar25 = bVar25 | bVar19;
      bVar26 = bVar26 | bVar20;
      bVar28 = bVar28 | bVar22;
      auVar36._1_3_ = 0;
      auVar36[0] = bVar23;
      auVar36[4] = bVar25;
      auVar36._5_3_ = 0;
      auVar36[8] = bVar26;
      auVar36._9_3_ = 0;
      auVar36[12] = bVar28;
      auVar36._13_3_ = 0;
      auVar1._1_3_ = 0;
      auVar1[0] = bVar23;
      auVar1[4] = bVar25;
      auVar1._5_3_ = 0;
      auVar1[8] = bVar26;
      auVar1._9_3_ = 0;
      auVar1[12] = bVar28;
      auVar1._13_3_ = 0;
      auVar31 = NEON_ext(auVar36,auVar1,8,1);
      uVar5 = CONCAT13(auVar31[3],CONCAT12(auVar31[2],CONCAT11(auVar31[1],bVar23 | auVar31[0]))) |
              CONCAT13(auVar31[7],CONCAT12(auVar31[6],CONCAT11(auVar31[5],bVar25 | auVar31[4])));
    }
    lVar7 = uVar6 - lVar10;
    puVar8 = (undefined4 *)(*(long *)(param_1 + 0x10) + lVar10 * 0x10 + 8);
    do {
      uVar2 = NEON_fmadd(fVar13,puVar8[-1],fVar12 * (float)puVar8[-2]);
      fVar3 = (float)NEON_fmadd(fVar14,*puVar8,uVar2);
      uVar9 = 2;
      if (fVar3 + fVar16 <= planetestepsilon) {
        uVar9 = (uint)(fVar3 + fVar16 < fVar15);
      }
      lVar7 = lVar7 + -1;
      uVar5 = uVar9 | uVar5;
      puVar8 = puVar8 + 4;
    } while (lVar7 != 0);
    return uVar5;
  }
  return 0;
}


