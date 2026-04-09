// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dequant_decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyivyi
// Entry Point: 00e56a90
// Size: 344 bytes
// Signature: undefined dequant_decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyivyi(void)


void dequant_decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyivyi
               (undefined param_1 [16],undefined param_2 [16],undefined param_3 [16],
               undefined8 param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  undefined auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined4 local_30;
  undefined local_2c [28];
  
  iVar7 = param_1._0_4_;
  auVar11._8_4_ = 0xfffffffc;
  auVar11._0_8_ = 0xfffffffcfffffffc;
  auVar11._12_4_ = 0xfffffffc;
  auVar11 = NEON_cmgt(param_1,auVar11,4);
  auVar15[0] = auVar11[0] & param_3[0];
  auVar15[1] = auVar11[1] & param_3[1];
  auVar15[2] = auVar11[2] & param_3[2];
  auVar15[3] = auVar11[3] & param_3[3];
  auVar15[4] = auVar11[4] & param_3[4];
  auVar15[5] = auVar11[5] & param_3[5];
  auVar15[6] = auVar11[6] & param_3[6];
  auVar15[7] = auVar11[7] & param_3[7];
  auVar15[8] = auVar11[8] & param_3[8];
  auVar15[9] = auVar11[9] & param_3[9];
  auVar15[10] = auVar11[10] & param_3[10];
  auVar15[11] = auVar11[11] & param_3[11];
  auVar15[12] = auVar11[12] & param_3[12];
  auVar15[13] = auVar11[13] & param_3[13];
  auVar15[14] = auVar11[14] & param_3[14];
  auVar15[15] = auVar11[15] & param_3[15];
  iVar13 = NEON_umaxv(auVar15,4);
  if (iVar13 != 0) {
    uVar5 = 0;
    iVar14 = param_2._0_4_ * 0x5556 >> 0x10;
    iVar18 = param_2._4_4_ * 0x5556 >> 0x10;
    iVar19 = param_2._8_4_ * 0x5556 >> 0x10;
    iVar20 = param_2._12_4_ * 0x5556 >> 0x10;
    iVar13 = param_2._0_4_ + iVar14 * -3;
    iVar8 = param_2._4_4_ + iVar18 * -3;
    iVar9 = param_2._8_4_ + iVar19 * -3;
    iVar10 = param_2._12_4_ + iVar20 * -3;
    auVar28._8_4_ = 2;
    auVar28._0_8_ = 0x200000002;
    auVar28._12_4_ = 2;
    auVar31._0_4_ = iVar13 * -2 + 5;
    auVar31._4_4_ = iVar8 * -2 + 5;
    auVar31._8_4_ = iVar9 * -2 + 5;
    auVar31._12_4_ = iVar10 * -2 + 5;
    auVar16._0_4_ = iVar13 + iVar14;
    auVar16._4_4_ = iVar8 + iVar18;
    auVar16._8_4_ = iVar9 + iVar19;
    auVar16._12_4_ = iVar10 + iVar20;
    auVar15 = NEON_smax(auVar28,auVar31,4);
    auVar15 = NEON_ushl(auVar15,auVar16,4);
    auVar21._0_4_ = (auVar15._0_4_ >> 1) + -1;
    auVar21._4_4_ = (auVar15._4_4_ >> 1) + -1;
    auVar21._8_4_ = (auVar15._8_4_ >> 1) + -1;
    auVar21._12_4_ = (auVar15._12_4_ >> 1) + -1;
    auVar15 = NEON_scvtf(auVar21,4);
    auVar22 = NEON_frecpe(auVar15,4);
    auVar16 = NEON_frecps(auVar15,auVar22,4);
    auVar17._0_4_ = auVar22._0_4_ * auVar16._0_4_;
    auVar17._4_4_ = auVar22._4_4_ * auVar16._4_4_;
    auVar17._8_4_ = auVar22._8_4_ * auVar16._8_4_;
    auVar17._12_4_ = auVar22._12_4_ * auVar16._12_4_;
    auVar15 = NEON_frecps(auVar15,auVar17,4);
    auVar22._0_4_ = ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1e)) >> 2) * 2 + 2;
    auVar22._4_4_ = ((int)(param_1._4_4_ + ((uint)(param_1._4_4_ >> 0x1f) >> 0x1e)) >> 2) * 2 + 2;
    auVar22._8_4_ = ((int)(param_1._8_4_ + ((uint)(param_1._8_4_ >> 0x1f) >> 0x1e)) >> 2) * 2 + 2;
    auVar22._12_4_ = ((int)(param_1._12_4_ + ((uint)(param_1._12_4_ >> 0x1f) >> 0x1e)) >> 2) * 2 + 2
    ;
    fVar23 = auVar15._0_4_;
    fVar25 = auVar15._4_4_;
    fVar26 = auVar15._8_4_;
    fVar27 = auVar15._12_4_;
    while( true ) {
      uVar6 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
      pbVar3 = (byte *)(param_5 + uVar6);
      auVar29._6_2_ = 0;
      auVar29._0_6_ =
           (uint6)CONCAT14(pbVar3[1],(uint)CONCAT12(pbVar3[1],(ushort)*pbVar3)) & 0xffff0000ffff;
      auVar29[8] = pbVar3[2];
      auVar29._9_3_ = 0;
      auVar29[12] = pbVar3[3];
      auVar29._13_3_ = 0;
      auVar16 = NEON_ucvtf(auVar29,4);
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar2;
      auVar30._4_4_ = uVar2;
      auVar30._0_4_ = uVar2;
      auVar30._8_4_ = uVar2;
      auVar30._12_4_ = uVar2;
      auVar31 = NEON_cmgt(auVar22,auVar30,4);
      auVar12[0] = auVar11[0] & auVar31[0];
      auVar12[1] = auVar11[1] & auVar31[1];
      auVar12[2] = auVar11[2] & auVar31[2];
      auVar12[3] = auVar11[3] & auVar31[3];
      auVar12[4] = auVar11[4] & auVar31[4];
      auVar12[5] = auVar11[5] & auVar31[5];
      auVar12[6] = auVar11[6] & auVar31[6];
      auVar12[7] = auVar11[7] & auVar31[7];
      auVar12[8] = auVar11[8] & auVar31[8];
      auVar12[9] = auVar11[9] & auVar31[9];
      auVar12[10] = auVar11[10] & auVar31[10];
      auVar12[11] = auVar11[11] & auVar31[11];
      auVar12[12] = auVar11[12] & auVar31[12];
      auVar12[13] = auVar11[13] & auVar31[13];
      auVar12[14] = auVar11[14] & auVar31[14];
      auVar12[15] = auVar11[15] & auVar31[15];
      uVar24 = NEON_bit(auVar15._0_8_,
                        CONCAT26((short)(int)(auVar16._12_4_ * 255.0 * auVar17._12_4_ * fVar27 + 0.5
                                             ),
                                 CONCAT24((short)(int)(auVar16._8_4_ * 255.0 *
                                                       auVar17._8_4_ * fVar26 + 0.5),
                                          CONCAT22((short)(int)(auVar16._4_4_ * 255.0 *
                                                                auVar17._4_4_ * fVar25 + 0.5),
                                                   (short)(int)(auVar16._0_4_ * 255.0 *
                                                                auVar17._0_4_ * fVar23 + 0.5)))),
                        CONCAT26((short)(char)((ushort)(auVar11._12_2_ << 0xf) >> 8) >> 7,
                                 CONCAT24((short)(char)((ushort)(auVar11._8_2_ << 0xf) >> 8) >> 7,
                                          CONCAT22((short)(char)((ushort)(auVar11._4_2_ << 0xf) >> 8
                                                                ) >> 7,
                                                   (short)(char)((ushort)(auVar11._0_2_ << 0xf) >> 8
                                                                ) >> 7))),1);
      auVar4[1] = auVar12[1] & param_3[1];
      auVar4[0] = auVar12[0] & param_3[0];
      auVar4[2] = auVar12[2] & param_3[2];
      auVar4[3] = auVar12[3] & param_3[3];
      auVar4[4] = auVar12[4] & param_3[4];
      auVar4[5] = auVar12[5] & param_3[5];
      auVar4[6] = auVar12[6] & param_3[6];
      auVar4[7] = auVar12[7] & param_3[7];
      auVar4[8] = auVar12[8] & param_3[8];
      auVar4[9] = auVar12[9] & param_3[9];
      auVar4[10] = auVar12[10] & param_3[10];
      auVar4[11] = auVar12[11] & param_3[11];
      auVar4[12] = auVar12[12] & param_3[12];
      auVar4[13] = auVar12[13] & param_3[13];
      auVar4[14] = auVar12[14] & param_3[14];
      auVar4[15] = auVar12[15] & param_3[15];
      iVar13 = NEON_umaxv(auVar4,4);
      *(uint *)((long)&local_30 + uVar6) =
           CONCAT13((char)((ulong)uVar24 >> 0x30),
                    CONCAT12((char)((ulong)uVar24 >> 0x20),
                             CONCAT11((char)((ulong)uVar24 >> 0x10),(char)uVar24)));
      if (iVar13 == 0) break;
      lVar1 = (long)(int)uVar2 * 4;
      auVar15 = ZEXT716(CONCAT16(*(undefined *)((long)&local_30 + lVar1 + 3),
                                 (uint6)CONCAT14(*(undefined *)((long)&local_30 + lVar1 + 2),
                                                 (uint)CONCAT12(*(undefined *)
                                                                 ((long)&local_30 + lVar1 + 1),
                                                                (ushort)*(byte *)(&local_30 +
                                                                                 (int)uVar2)))));
      auVar11 = auVar12;
    }
  }
  decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyi(iVar7,param_3,param_4,&local_30);
  return;
}


