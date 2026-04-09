// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: classify
// Entry Point: 00b66db8
// Size: 368 bytes
// Signature: undefined __thiscall classify(Brep * this, BrepPlane * param_1)


/* Brep::classify(BrepPlane const&) const */

uint __thiscall Brep::classify(Brep *this,BrepPlane *param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  float fVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  byte bVar23;
  byte bVar27;
  uint5 uVar24;
  byte bVar28;
  byte bVar29;
  undefined auVar25 [16];
  undefined auVar26 [16];
  byte bVar30;
  byte bVar33;
  uint5 uVar31;
  byte bVar34;
  byte bVar35;
  undefined auVar32 [16];
  uint5 uVar36;
  undefined auVar37 [16];
  uint5 uVar38;
  undefined auVar39 [16];
  
  puVar12 = *(undefined4 **)(this + 0x2ef0);
  puVar7 = *(undefined4 **)(this + 0x2ef8);
  if (puVar12 != puVar7) {
    fVar19 = *(float *)(param_1 + 0xc);
    fVar14 = *(float *)(param_1 + 0x10);
    fVar15 = *(float *)param_1;
    fVar16 = *(float *)(param_1 + 4);
    fVar18 = *(float *)(param_1 + 8);
    uVar8 = (long)puVar7 + (-0x10 - (long)puVar12);
    fVar17 = -fVar14;
    if (uVar8 < 0x80) {
      uVar6 = 0;
      puVar9 = puVar12;
    }
    else {
      uVar8 = (uVar8 >> 4) + 1;
      uVar20 = 8;
      if ((uVar8 & 7) != 0) {
        uVar20 = uVar8 & 7;
      }
      lVar11 = uVar8 - uVar20;
      uVar8 = 0;
      uVar20 = 0;
      puVar9 = puVar12 + lVar11 * 4;
      uVar21 = 0;
      uVar22 = 0;
      pfVar13 = (float *)(puVar12 + 0x10);
      do {
        lVar11 = lVar11 + -8;
        auVar25._0_4_ = pfVar13[1] * fVar16 + *pfVar13 * fVar15 + pfVar13[2] * fVar18 + fVar19;
        auVar25._4_4_ = pfVar13[5] * fVar16 + pfVar13[4] * fVar15 + pfVar13[6] * fVar18 + fVar19;
        auVar25._8_4_ = pfVar13[9] * fVar16 + pfVar13[8] * fVar15 + pfVar13[10] * fVar18 + fVar19;
        auVar25._12_4_ =
             pfVar13[0xd] * fVar16 + pfVar13[0xc] * fVar15 + pfVar13[0xe] * fVar18 + fVar19;
        auVar26._4_4_ = fVar17;
        auVar26._0_4_ = fVar17;
        auVar26._8_4_ = fVar17;
        auVar26._12_4_ = fVar17;
        auVar37 = NEON_fcmgt(auVar26,auVar25,4);
        auVar4._4_4_ = fVar14;
        auVar4._0_4_ = fVar14;
        auVar4._8_4_ = fVar14;
        auVar4._12_4_ = fVar14;
        auVar26 = NEON_fcmgt(auVar25,auVar4,4);
        auVar32._0_4_ =
             fVar16 * pfVar13[-0xf] + pfVar13[-0x10] * fVar15 + pfVar13[-0xe] * fVar18 + fVar19;
        auVar32._4_4_ =
             fVar16 * pfVar13[-0xb] + pfVar13[-0xc] * fVar15 + pfVar13[-10] * fVar18 + fVar19;
        auVar32._8_4_ = fVar16 * pfVar13[-7] + pfVar13[-8] * fVar15 + pfVar13[-6] * fVar18 + fVar19;
        auVar32._12_4_ = fVar16 * pfVar13[-3] + pfVar13[-4] * fVar15 + pfVar13[-2] * fVar18 + fVar19
        ;
        bVar23 = auVar26[0] & ~auVar37[0];
        bVar27 = auVar26[4] & ~auVar37[4];
        bVar28 = auVar26[8] & ~auVar37[8];
        bVar29 = auVar26[12] & ~auVar37[12];
        auVar39._4_4_ = fVar17;
        auVar39._0_4_ = fVar17;
        auVar39._8_4_ = fVar17;
        auVar39._12_4_ = fVar17;
        auVar39 = NEON_fcmgt(auVar39,auVar32,4);
        auVar5._4_4_ = fVar14;
        auVar5._0_4_ = fVar14;
        auVar5._8_4_ = fVar14;
        auVar5._12_4_ = fVar14;
        auVar26 = NEON_fcmgt(auVar32,auVar5,4);
        uVar24 = CONCAT14(bVar27,(uint)(bVar23 & 2)) & 0x2ffffffff;
        bVar30 = auVar26[0] & ~auVar39[0];
        bVar33 = auVar26[4] & ~auVar39[4];
        bVar34 = auVar26[8] & ~auVar39[8];
        bVar35 = auVar26[12] & ~auVar39[12];
        uVar36 = CONCAT14(auVar37[4] & ~bVar27,(uint)(auVar37[0] & ~bVar23 & 1)) & 0x1ffffffff;
        uVar31 = CONCAT14(bVar33,(uint)(bVar30 & 2)) & 0x2ffffffff;
        uVar38 = CONCAT14(auVar39[4] & ~bVar33,(uint)(auVar39[0] & ~bVar30 & 1)) & 0x1ffffffff;
        bVar23 = (byte)uVar24 | (byte)uVar36 | (byte)uVar21;
        bVar27 = (byte)(uVar24 >> 0x20) | (byte)(uVar36 >> 0x20) | (byte)(uVar21 >> 0x20);
        uVar21 = (ulong)CONCAT14(bVar27,(uint)bVar23);
        bVar28 = bVar28 & 2 | auVar37[8] & ~bVar28 & 1 | (byte)uVar22;
        bVar29 = bVar29 & 2 | auVar37[12] & ~bVar29 & 1 | (byte)(uVar22 >> 0x20);
        uVar22 = (ulong)CONCAT14(bVar29,(uint)bVar28);
        bVar30 = (byte)uVar31 | (byte)uVar38 | (byte)uVar8;
        bVar33 = (byte)(uVar31 >> 0x20) | (byte)(uVar38 >> 0x20) | (byte)(uVar8 >> 0x20);
        uVar8 = (ulong)CONCAT14(bVar33,(uint)bVar30);
        bVar34 = bVar34 & 2 | auVar39[8] & ~bVar34 & 1 | (byte)uVar20;
        bVar35 = bVar35 & 2 | auVar39[12] & ~bVar35 & 1 | (byte)(uVar20 >> 0x20);
        uVar20 = (ulong)CONCAT14(bVar35,(uint)bVar34);
        pfVar13 = pfVar13 + 0x20;
      } while (lVar11 != 0);
      bVar23 = bVar23 | bVar30;
      bVar27 = bVar27 | bVar33;
      bVar28 = bVar28 | bVar34;
      bVar29 = bVar29 | bVar35;
      auVar37._1_3_ = 0;
      auVar37[0] = bVar23;
      auVar37[4] = bVar27;
      auVar37._5_3_ = 0;
      auVar37[8] = bVar28;
      auVar37._9_3_ = 0;
      auVar37[12] = bVar29;
      auVar37._13_3_ = 0;
      auVar1._1_3_ = 0;
      auVar1[0] = bVar23;
      auVar1[4] = bVar27;
      auVar1._5_3_ = 0;
      auVar1[8] = bVar28;
      auVar1._9_3_ = 0;
      auVar1[12] = bVar29;
      auVar1._13_3_ = 0;
      auVar26 = NEON_ext(auVar37,auVar1,8,1);
      uVar6 = CONCAT13(auVar26[3],CONCAT12(auVar26[2],CONCAT11(auVar26[1],bVar23 | auVar26[0]))) |
              CONCAT13(auVar26[7],CONCAT12(auVar26[6],CONCAT11(auVar26[5],bVar27 | auVar26[4])));
    }
    do {
      uVar2 = NEON_fmadd(fVar15,*puVar9,fVar16 * (float)puVar9[1]);
      puVar12 = puVar9 + 4;
      fVar3 = (float)NEON_fmadd(fVar18,puVar9[2],uVar2);
      fVar3 = fVar3 + fVar19;
      uVar10 = 2;
      if (fVar3 <= fVar14 || fVar3 < fVar17) {
        uVar10 = (uint)(fVar3 < fVar17);
      }
      uVar6 = uVar10 | uVar6;
      puVar9 = puVar12;
    } while (puVar12 != puVar7);
    return uVar6;
  }
  return 0;
}


