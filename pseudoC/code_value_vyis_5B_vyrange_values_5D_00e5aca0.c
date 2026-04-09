// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: code_value___vyis_5B_vyrange_values_5D_
// Entry Point: 00e5aca0
// Size: 148 bytes
// Signature: undefined code_value___vyis_5B_vyrange_values_5D_(void)


undefined  [16]
code_value___vyis_5B_vyrange_values_5D_
          (undefined param_1 [16],undefined param_2 [16],undefined param_3 [16],
          undefined param_4 [16],undefined param_5 [16],undefined param_6 [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  uint6 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  int iVar16;
  undefined auVar17 [16];
  byte bVar18;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  ushort uVar25;
  byte bVar27;
  byte bVar28;
  undefined auVar19 [16];
  int iVar29;
  ulong uVar30;
  int iVar33;
  int iVar34;
  undefined auVar31 [16];
  undefined auVar32 [16];
  int iVar35;
  
  auVar19._8_4_ = 2;
  auVar19._0_8_ = 0x200000002;
  auVar19._12_4_ = 2;
  auVar31._8_4_ = 5;
  auVar31._0_8_ = 0x500000005;
  auVar31._12_4_ = 5;
  auVar19 = NEON_cmeq(param_2,auVar19,4);
  auVar31 = NEON_cmgt(param_5,auVar31,4);
  bVar18 = auVar31[0] & ~auVar19[0];
  bVar20 = auVar31[1] & ~auVar19[1];
  bVar21 = auVar31[4] & ~auVar19[4];
  bVar22 = auVar31[5] & ~auVar19[5];
  uVar4 = CONCAT11(bVar22,bVar21);
  bVar23 = auVar31[7] & ~auVar19[7];
  bVar24 = auVar31[8] & ~auVar19[8];
  bVar26 = auVar31[9] & ~auVar19[9];
  bVar27 = auVar31[12] & ~auVar19[12];
  bVar28 = auVar31[13] & ~auVar19[13];
  uVar5 = CONCAT11(bVar28,bVar27);
  auVar14[0] = param_6[0] & bVar18;
  auVar14[1] = param_6[1] & bVar20;
  auVar14[2] = param_6[2] & auVar31[2] & ~auVar19[2];
  auVar14[3] = param_6[3] & auVar31[3] & ~auVar19[3];
  auVar14[4] = param_6[4] & bVar21;
  auVar14[5] = param_6[5] & bVar22;
  auVar14[6] = param_6[6] & auVar31[6] & ~auVar19[6];
  auVar14[7] = param_6[7] & bVar23;
  auVar14[8] = param_6[8] & bVar24;
  auVar14[9] = param_6[9] & bVar26;
  auVar14[10] = param_6[10] & auVar31[10] & ~auVar19[10];
  auVar14[11] = param_6[11] & auVar31[11] & ~auVar19[11];
  auVar14[12] = param_6[12] & bVar27;
  auVar14[13] = param_6[13] & bVar28;
  auVar14[14] = param_6[14] & auVar31[14] & ~auVar19[14];
  auVar14[15] = param_6[15] & auVar31[15] & ~auVar19[15];
  iVar16 = NEON_umaxv(auVar14,4);
  if (iVar16 != 0) {
    auVar17._0_4_ = param_5._0_4_ / 2;
    auVar17._4_4_ = param_5._4_4_ / 2;
    auVar17._8_4_ = param_5._8_4_ / 2;
    auVar17._12_4_ = param_5._12_4_ / 2;
    auVar19 = NEON_cmge(param_1,auVar17,4);
    uVar6 = CONCAT22(uVar4,CONCAT11(bVar20,bVar18));
    uVar25 = (ushort)(CONCAT12(bVar26,CONCAT11(bVar24,bVar23)) >> 8);
    uVar30 = CONCAT26(uVar5,CONCAT24(uVar25,uVar6)) &
             CONCAT26(auVar19._12_2_,CONCAT24(auVar19._8_2_,CONCAT22(auVar19._4_2_,auVar19._0_2_)));
    iVar16 = CONCAT13(~param_1[3],CONCAT12(~param_1[2],CONCAT11(~param_1[1],~param_1[0])));
    iVar10 = CONCAT13(~param_1[11],CONCAT12(~param_1[10],CONCAT11(~param_1[9],~param_1[8])));
    auVar13._0_4_ = param_5._0_4_ + iVar16;
    auVar13._4_4_ =
         param_5._4_4_ +
         (int)(CONCAT17(~param_1[7],
                        CONCAT16(~param_1[6],CONCAT15(~param_1[5],CONCAT14(~param_1[4],iVar16)))) >>
              0x20);
    auVar13._8_4_ = param_5._8_4_ + iVar10;
    auVar13._12_4_ =
         param_5._12_4_ +
         (int)(CONCAT17(~param_1[15],
                        CONCAT16(~param_1[14],CONCAT15(~param_1[13],CONCAT14(~param_1[12],iVar10))))
              >> 0x20);
    auVar32._0_4_ = (int)((uint)(ushort)uVar30 << 0x1f) >> 0x1f;
    auVar32._4_4_ = (int)((uint)(ushort)(uVar30 >> 0x10) << 0x1f) >> 0x1f;
    auVar32._8_4_ = (int)((uint)(ushort)(uVar30 >> 0x20) << 0x1f) >> 0x1f;
    auVar32._12_4_ = (int)((uint)(ushort)(uVar30 >> 0x30) << 0x1f) >> 0x1f;
    auVar14 = NEON_bif(auVar13,param_1,auVar32,1);
    iVar29 = auVar14._0_4_ * param_3._0_4_ >> 0x10;
    iVar33 = auVar14._4_4_ * param_3._4_4_ >> 0x10;
    iVar34 = auVar14._8_4_ * param_3._8_4_ >> 0x10;
    iVar35 = auVar14._12_4_ * param_3._12_4_ >> 0x10;
    uVar3 = CONCAT24(uVar4,uVar6) & 0xffff0000ffff;
    auVar15._0_4_ = auVar14._0_4_ - iVar29 * param_2._0_4_;
    auVar15._4_4_ = auVar14._4_4_ - iVar33 * param_2._4_4_;
    auVar15._8_4_ = auVar14._8_4_ - iVar34 * param_2._8_4_;
    auVar15._12_4_ = auVar14._12_4_ - iVar35 * param_2._12_4_;
    auVar7._0_4_ = param_4._0_4_ + -1;
    auVar7._4_4_ = param_4._4_4_ + -1;
    auVar7._8_4_ = param_4._8_4_ + -1;
    auVar7._12_4_ = param_4._12_4_ + -1;
    auVar14 = NEON_ushl(auVar15,auVar7,4);
    iVar16 = ((int)uVar3 << 0x1f) >> 0x1f;
    iVar10 = (int)((uint)(ushort)(uVar3 >> 0x20) << 0x1f) >> 0x1f;
    iVar11 = (int)((uint)uVar25 << 0x1f) >> 0x1f;
    iVar12 = (int)((uint)uVar5 << 0x1f) >> 0x1f;
    auVar8._0_4_ = auVar14._0_4_ + iVar29;
    auVar8._4_4_ = auVar14._4_4_ + iVar33;
    auVar8._8_4_ = auVar14._8_4_ + iVar34;
    auVar8._12_4_ = auVar14._12_4_ + iVar35;
    auVar1._4_4_ = iVar10;
    auVar1._0_4_ = iVar16;
    auVar1._8_4_ = iVar11;
    auVar1._12_4_ = iVar12;
    auVar14 = NEON_bif(auVar8,param_1,auVar1,1);
    auVar9._0_4_ = auVar14._0_4_ * 2 - auVar19._0_4_;
    auVar9._4_4_ = auVar14._4_4_ * 2 - auVar19._4_4_;
    auVar9._8_4_ = auVar14._8_4_ * 2 - auVar19._8_4_;
    auVar9._12_4_ = auVar14._12_4_ * 2 - auVar19._12_4_;
    auVar2._4_4_ = iVar10;
    auVar2._0_4_ = iVar16;
    auVar2._8_4_ = iVar11;
    auVar2._12_4_ = iVar12;
    param_1 = NEON_bit(param_1,auVar9,auVar2,1);
  }
  return param_1;
}


