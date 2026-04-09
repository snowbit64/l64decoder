// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sgesv2___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_vyf_3E_
// Entry Point: 00e58288
// Size: 296 bytes
// Signature: undefined sgesv2___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_vyf_3E_(void)


/* WARNING: Type propagation algorithm not settling */

undefined  [16]
sgesv2___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_vyf_3E_
          (undefined param_1 [16],undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  byte bVar3;
  float fVar4;
  byte bVar6;
  float fVar7;
  byte bVar8;
  float fVar9;
  byte bVar10;
  float fVar11;
  undefined auVar5 [16];
  byte bVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined auVar13 [16];
  float fVar17;
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
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  
  auVar5 = *(undefined (*) [16])(param_2 + 6);
  fVar17 = (float)*param_2;
  fVar18 = (float)((ulong)*param_2 >> 0x20);
  fVar19 = (float)param_2[1];
  fVar20 = (float)((ulong)param_2[1] >> 0x20);
  fVar4 = (float)param_2[2];
  fVar29 = (float)param_2[4];
  fVar7 = (float)((ulong)param_2[2] >> 0x20);
  fVar30 = (float)((ulong)param_2[4] >> 0x20);
  fVar9 = (float)param_2[3];
  fVar31 = (float)param_2[5];
  fVar11 = (float)((ulong)param_2[3] >> 0x20);
  fVar32 = (float)((ulong)param_2[5] >> 0x20);
  fVar33 = fVar17 * auVar5._0_4_ - fVar4 * fVar29;
  fVar35 = fVar18 * auVar5._4_4_ - fVar7 * fVar30;
  fVar36 = fVar19 * auVar5._8_4_ - fVar9 * fVar31;
  fVar37 = fVar20 * auVar5._12_4_ - fVar11 * fVar32;
  auVar13._4_4_ = fVar35;
  auVar13._0_4_ = fVar33;
  auVar13._8_4_ = fVar36;
  auVar13._12_4_ = fVar37;
  auVar13 = NEON_fcmeq(auVar13,0,4);
  bVar3 = param_1[0];
  bVar12 = bVar3 & auVar13[0];
  bVar6 = param_1[4];
  bVar14 = bVar6 & auVar13[4];
  bVar8 = param_1[8];
  bVar15 = bVar8 & auVar13[8];
  bVar10 = param_1[12];
  bVar16 = bVar10 & auVar13[12];
  if ((byte)((bVar3 & 1) + (bVar6 & 2) + (bVar8 & 4) + (bVar10 & 8)) ==
      (byte)((bVar12 & 1) + (bVar14 & 2) + (bVar15 & 4) + (bVar16 & 8))) {
    return ZEXT816(0);
  }
  auVar39._4_4_ = fVar35;
  auVar39._0_4_ = fVar33;
  auVar39._8_4_ = fVar36;
  auVar39._12_4_ = fVar37;
  auVar13 = NEON_frecpe(auVar39,4);
  auVar1._4_4_ = fVar35;
  auVar1._0_4_ = fVar33;
  auVar1._8_4_ = fVar36;
  auVar1._12_4_ = fVar37;
  auVar39 = NEON_frecps(auVar1,auVar13,4);
  auVar38._0_4_ = auVar13._0_4_ * auVar39._0_4_;
  auVar38._4_4_ = auVar13._4_4_ * auVar39._4_4_;
  auVar38._8_4_ = auVar13._8_4_ * auVar39._8_4_;
  auVar38._12_4_ = auVar13._12_4_ * auVar39._12_4_;
  fVar21 = (float)*param_4;
  fVar22 = (float)((ulong)*param_4 >> 0x20);
  fVar23 = (float)param_4[1];
  fVar24 = (float)((ulong)param_4[1] >> 0x20);
  auVar2._4_4_ = fVar35;
  auVar2._0_4_ = fVar33;
  auVar2._8_4_ = fVar36;
  auVar2._12_4_ = fVar37;
  auVar13 = NEON_frecps(auVar2,auVar38,4);
  fVar33 = (float)param_4[2];
  fVar35 = (float)((ulong)param_4[2] >> 0x20);
  fVar36 = (float)param_4[3];
  fVar37 = (float)((ulong)param_4[3] >> 0x20);
  fVar25 = auVar38._0_4_ * auVar13._0_4_;
  fVar26 = auVar38._4_4_ * auVar13._4_4_;
  fVar27 = auVar38._8_4_ * auVar13._8_4_;
  fVar28 = auVar38._12_4_ * auVar13._12_4_;
  uVar34 = (uint)((bVar12 ^ bVar3) & 1) + (uint)((bVar14 ^ bVar6) & 2) +
           (uint)((bVar15 ^ bVar8) & 4) + (uint)((bVar16 ^ bVar10) & 8);
  if ((uVar34 & 1) != 0) {
    *param_3 = fVar25 * (fVar21 * auVar5._0_4_ - fVar33 * fVar29);
  }
  if ((uVar34 >> 1 & 1) != 0) {
    param_3[1] = fVar26 * (fVar22 * auVar5._4_4_ - fVar35 * fVar30);
  }
  if ((uVar34 >> 2 & 1) != 0) {
    param_3[2] = fVar27 * (fVar23 * auVar5._8_4_ - fVar36 * fVar31);
  }
  if ((uVar34 >> 3 & 1) == 0) {
    fVar4 = fVar33 * fVar17 - fVar21 * fVar4;
    fVar7 = fVar35 * fVar18 - fVar22 * fVar7;
    fVar9 = fVar36 * fVar19 - fVar23 * fVar9;
    fVar11 = fVar37 * fVar20 - fVar24 * fVar11;
  }
  else {
    param_3[3] = fVar28 * (fVar24 * auVar5._12_4_ - fVar37 * fVar32);
    fVar4 = fVar33 * fVar17 - fVar21 * fVar4;
    fVar7 = fVar35 * fVar18 - fVar22 * fVar7;
    fVar9 = fVar36 * fVar19 - fVar23 * fVar9;
    fVar11 = fVar37 * fVar20 - fVar24 * fVar11;
  }
  if ((uVar34 & 1) != 0) {
    param_3[4] = fVar25 * fVar4;
  }
  if ((uVar34 >> 1 & 1) != 0) {
    param_3[5] = fVar26 * fVar7;
  }
  if ((uVar34 >> 2 & 1) != 0) {
    param_3[6] = fVar27 * fVar9;
  }
  if ((uVar34 >> 3 & 1) != 0) {
    param_3[7] = fVar28 * fVar11;
  }
  auVar13 = ZEXT816(0x1000100010001);
  bVar14 = bVar14 ^ auVar13[2];
  auVar5._0_4_ = (int)((uint)CONCAT12(bVar14,(ushort)(byte)(bVar12 ^ auVar13[0])) << 0x1f) >> 0x1f;
  auVar5._4_4_ = (int)((uint)bVar14 << 0x1f) >> 0x1f;
  auVar5._8_4_ = (int)((uint)(byte)(bVar15 ^ auVar13[4]) << 0x1f) >> 0x1f;
  auVar5._12_4_ = (int)((uint)(byte)(bVar16 ^ auVar13[6]) << 0x1f) >> 0x1f;
  return auVar5;
}


