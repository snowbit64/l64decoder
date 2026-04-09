// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyi
// Entry Point: 00e55f2c
// Size: 2916 bytes
// Signature: undefined decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyi(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyi
               (undefined param_1 [16],undefined param_2 [16],undefined4 *param_3,byte *param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  ushort uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  int iVar20;
  undefined auVar11 [12];
  byte bVar21;
  undefined auVar13 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar12 [12];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  byte bVar25;
  uint6 uVar26;
  undefined auVar27 [12];
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  byte bVar49;
  byte bVar51;
  byte bVar52;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar34 [16];
  byte bVar41;
  byte bVar48;
  undefined auVar28 [12];
  undefined8 uVar45;
  byte bVar53;
  undefined auVar36 [16];
  undefined4 uVar50;
  byte bVar54;
  byte bVar55;
  undefined uVar56;
  byte bVar57;
  undefined uVar58;
  byte bVar59;
  char cVar60;
  undefined uVar61;
  undefined uVar62;
  char cVar63;
  undefined uVar64;
  undefined uVar65;
  char cVar66;
  undefined uVar67;
  undefined uVar68;
  char cVar69;
  int iVar70;
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  uint uVar78;
  undefined auVar79 [12];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar80 [12];
  undefined auVar88 [16];
  undefined auVar89 [16];
  ushort uVar90;
  undefined auVar91 [12];
  undefined auVar92 [12];
  undefined auVar93 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined auVar100 [12];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [12];
  undefined auVar112 [12];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar121 [12];
  undefined auVar122 [12];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar126 [16];
  undefined auVar127 [16];
  undefined auVar128 [16];
  undefined auVar129 [16];
  int iVar131;
  undefined auVar132 [12];
  undefined auVar135 [13];
  undefined auVar133 [12];
  undefined auVar136 [13];
  undefined auVar137 [16];
  undefined auVar138 [16];
  undefined auVar139 [16];
  undefined auVar141 [16];
  undefined auVar142 [16];
  undefined auVar143 [16];
  undefined auVar144 [16];
  uint uVar146;
  undefined auVar147 [12];
  undefined auVar148 [16];
  undefined auVar149 [16];
  undefined auVar150 [16];
  undefined auVar151 [16];
  undefined auVar152 [16];
  undefined auVar154 [12];
  undefined auVar155 [12];
  undefined auVar156 [16];
  undefined auVar159 [12];
  undefined auVar160 [16];
  undefined auVar161 [16];
  undefined auVar162 [16];
  undefined auVar164 [16];
  undefined auVar14 [16];
  undefined auVar17 [16];
  undefined auVar33 [16];
  undefined auVar35 [16];
  undefined auVar84 [16];
  undefined auVar87 [16];
  undefined auVar94 [16];
  undefined auVar99 [16];
  undefined auVar105 [16];
  undefined auVar115 [16];
  undefined auVar120 [16];
  undefined auVar125 [16];
  undefined auVar130 [16];
  undefined auVar134 [13];
  undefined auVar140 [16];
  undefined auVar145 [16];
  undefined auVar153 [16];
  undefined auVar157 [16];
  undefined auVar158 [16];
  undefined auVar163 [16];
  
  auVar29._8_4_ = 2;
  auVar29._0_8_ = 0x200000002;
  auVar29._12_4_ = 2;
  auVar22._0_4_ = param_1._0_4_ % 4;
  auVar22._4_4_ = param_1._4_4_ % 4;
  auVar22._8_4_ = param_1._8_4_ % 4;
  auVar22._12_4_ = param_1._12_4_ % 4;
  auVar29 = NEON_cmeq(auVar22,auVar29,4);
  auVar138[0] = param_2[0] & auVar29[0];
  auVar138[1] = param_2[1] & auVar29[1];
  auVar138[2] = param_2[2] & auVar29[2];
  auVar138[3] = param_2[3] & auVar29[3];
  auVar138[4] = param_2[4] & auVar29[4];
  auVar138[5] = param_2[5] & auVar29[5];
  auVar138[6] = param_2[6] & auVar29[6];
  auVar138[7] = param_2[7] & auVar29[7];
  auVar138[8] = param_2[8] & auVar29[8];
  auVar138[9] = param_2[9] & auVar29[9];
  auVar138[10] = param_2[10] & auVar29[10];
  auVar138[11] = param_2[11] & auVar29[11];
  auVar138[12] = param_2[12] & auVar29[12];
  auVar138[13] = param_2[13] & auVar29[13];
  auVar138[14] = param_2[14] & auVar29[14];
  auVar138[15] = param_2[15] & auVar29[15];
  iVar70 = NEON_umaxv(auVar138,4);
  if (iVar70 == 0) goto LAB_00e5619c;
  bVar54 = *param_4;
  bVar55 = param_4[1];
  bVar57 = param_4[2];
  bVar59 = param_4[3];
  bVar25 = param_4[0xd];
  uVar78 = (uint)param_4[0xc];
  bVar37 = param_4[0xe];
  bVar38 = param_4[0xf];
  bVar39 = param_4[5];
  uVar90 = (ushort)param_4[4];
  bVar40 = param_4[6];
  bVar41 = param_4[8];
  bVar42 = param_4[7];
  auVar149._0_4_ = uVar78 * bVar54 >> 8;
  auVar149._4_4_ = (uint)bVar25 * (uint)bVar55 >> 8;
  auVar149._8_4_ = (uint)bVar37 * (uint)bVar57 >> 8;
  auVar149._12_4_ = (uint)bVar38 * (uint)bVar59 >> 8;
  bVar43 = param_4[9];
  uVar146 = (uint)(auVar138[0] & 1) + (uint)(auVar138[4] & 2) +
            (uint)(auVar138[8] & 4) + (uint)(auVar138[12] & 8);
  auVar29 = NEON_scvtf(auVar149,4);
  bVar44 = param_4[10];
  if ((uVar146 & 1) == 0) {
    auVar149 = ZEXT516(CONCAT14(bVar44,(uint)CONCAT12(bVar43,(ushort)bVar41)));
    if ((uVar146 >> 1 & 1) != 0) goto LAB_00e56710;
LAB_00e56004:
    auVar135._6_2_ = 0;
    auVar135._0_6_ = (uint6)CONCAT14(bVar39,(uint)CONCAT12(bVar39,uVar90)) & 0xffff0000ffff;
    auVar135[8] = bVar40;
    auVar135._9_3_ = 0;
    auVar135[12] = bVar42;
    if ((uVar146 >> 2 & 1) != 0) goto LAB_00e56720;
LAB_00e5600c:
    auVar134[0] = auVar135[0];
    auVar134._1_3_ = 0;
    auVar134[4] = auVar135[4];
    auVar134._5_3_ = 0;
    auVar134[8] = auVar135[8];
    auVar134._9_3_ = 0;
    auVar134[12] = auVar135[12];
    bVar41 = param_4[0xb];
  }
  else {
    *param_3 = auVar29._0_4_;
    auVar149 = ZEXT516(CONCAT14(bVar44,(uint)CONCAT12(bVar43,(ushort)bVar41)));
    if ((uVar146 >> 1 & 1) == 0) goto LAB_00e56004;
LAB_00e56710:
    param_3[1] = auVar29._4_4_;
    auVar135._6_2_ = 0;
    auVar135._0_6_ = (uint6)CONCAT14(bVar39,(uint)CONCAT12(bVar39,uVar90)) & 0xffff0000ffff;
    auVar135[8] = bVar40;
    auVar135._9_3_ = 0;
    auVar135[12] = bVar42;
    if ((uVar146 >> 2 & 1) == 0) goto LAB_00e5600c;
LAB_00e56720:
    param_3[2] = auVar29._8_4_;
    auVar134[0] = auVar135[0];
    auVar134._1_3_ = 0;
    auVar134[4] = auVar135[4];
    auVar134._5_3_ = 0;
    auVar134[8] = auVar135[8];
    auVar134._9_3_ = 0;
    auVar134[12] = auVar135[12];
    bVar41 = param_4[0xb];
  }
  if ((uVar146 >> 3 & 1) != 0) {
    param_3[3] = auVar29._12_4_;
  }
  auVar123._0_4_ = uVar78 * auVar134._0_4_ >> 8;
  auVar123._4_4_ = (uint)bVar25 * auVar134._4_4_ >> 8;
  auVar123._8_4_ = (uint)bVar37 * auVar134._8_4_ >> 8;
  auVar123._12_4_ = (uint)bVar38 * (uint)auVar134[12] >> 8;
  auVar29 = NEON_scvtf(auVar123,4);
  auVar161._0_2_ = auVar149._0_2_;
  uVar7 = auVar149._2_2_;
  uVar8 = auVar149._4_2_;
  if ((uVar146 & 1) == 0) {
    if ((uVar146 >> 1 & 1) != 0) goto LAB_00e56740;
LAB_00e56038:
    auVar136._2_2_ = 0;
    auVar136._0_2_ = auVar161._0_2_;
    auVar136._4_2_ = uVar7;
    auVar136._6_2_ = 0;
    auVar136._8_2_ = uVar8;
    auVar136._10_2_ = 0;
    auVar136[12] = bVar41;
    if ((uVar146 >> 2 & 1) != 0) goto LAB_00e56750;
LAB_00e56040:
    auVar113._1_3_ = 0;
    auVar113[0] = auVar136[0];
    auVar113[4] = auVar136[4];
    auVar113._5_3_ = 0;
    auVar113[8] = auVar136[8];
    auVar113._9_3_ = 0;
    auVar113[12] = auVar136[12];
    auVar113._13_3_ = 0;
    if ((uVar146 >> 3 & 1) != 0) goto LAB_00e56760;
LAB_00e56048:
    auVar101._0_4_ = uVar78 * auVar113._0_4_ >> 8;
    auVar101._4_4_ = (uint)bVar25 * auVar113._4_4_ >> 8;
    auVar101._8_4_ = (uint)bVar37 * auVar113._8_4_ >> 8;
    auVar101._12_4_ = (uint)bVar38 * auVar113._12_4_ >> 8;
    auVar29 = NEON_scvtf(auVar101,4);
    if ((uVar146 & 1) != 0) goto LAB_00e56778;
LAB_00e56058:
    uVar45 = auVar29._8_8_;
    if ((uVar146 >> 1 & 1) != 0) goto LAB_00e56780;
LAB_00e5605c:
    uVar50 = (undefined4)((ulong)uVar45 >> 0x20);
    if ((uVar146 >> 2 & 1) != 0) goto LAB_00e5678c;
LAB_00e56060:
    if ((uVar146 >> 3 & 1) != 0) goto LAB_00e56798;
LAB_00e56064:
    if ((uVar146 & 1) != 0) goto LAB_00e567a4;
LAB_00e56068:
    if ((uVar146 >> 1 & 1) != 0) goto LAB_00e567b0;
LAB_00e5606c:
    if ((uVar146 >> 2 & 1) != 0) goto LAB_00e567bc;
LAB_00e56070:
    if ((uVar146 >> 3 & 1) != 0) goto LAB_00e567c8;
LAB_00e56074:
    auVar81._6_2_ = 0;
    auVar81._0_6_ = (uint6)CONCAT14(bVar55,(uint)CONCAT12(bVar55,(ushort)bVar54)) & 0xffff0000ffff;
    auVar81[8] = bVar57;
    auVar81._9_3_ = 0;
    auVar81[12] = bVar59;
    auVar81._13_3_ = 0;
    auVar29 = NEON_ucvtf(auVar81,4);
    if ((uVar146 & 1) != 0) goto LAB_00e567e0;
LAB_00e56084:
    if ((uVar146 >> 1 & 1) != 0) goto LAB_00e567e8;
LAB_00e56088:
    auVar27 = auVar29._4_12_;
    if ((uVar146 >> 2 & 1) != 0) goto LAB_00e567f4;
LAB_00e5608c:
    if ((uVar146 >> 3 & 1) != 0) goto LAB_00e56800;
LAB_00e56090:
    auVar82._6_2_ = 0;
    auVar82._0_6_ = (uint6)CONCAT14(bVar39,(uint)CONCAT12(bVar39,uVar90)) & 0xffff0000ffff;
    auVar82[8] = bVar40;
    auVar82._9_3_ = 0;
    auVar82[12] = bVar42;
    auVar82._13_3_ = 0;
    auVar29 = NEON_ucvtf(auVar82,4);
    if ((uVar146 & 1) != 0) goto LAB_00e56818;
LAB_00e560a0:
    uVar45 = auVar29._8_8_;
    if ((uVar146 >> 1 & 1) != 0) goto LAB_00e56820;
LAB_00e560a4:
    uVar50 = (undefined4)((ulong)uVar45 >> 0x20);
    if ((uVar146 >> 2 & 1) != 0) goto LAB_00e5682c;
LAB_00e560a8:
    if ((uVar146 >> 3 & 1) != 0) goto LAB_00e56838;
LAB_00e560ac:
    auVar161._2_2_ = 0;
    auVar161._4_2_ = uVar7;
    auVar161._6_2_ = 0;
    auVar161._8_2_ = uVar8;
    auVar161._10_2_ = 0;
    auVar161[12] = bVar41;
    auVar161._13_3_ = 0;
    auVar29 = NEON_ucvtf(auVar161,4);
    if ((uVar146 & 1) != 0) goto LAB_00e56850;
LAB_00e560bc:
    uVar45 = auVar29._8_8_;
    if ((uVar146 >> 1 & 1) != 0) goto LAB_00e56858;
LAB_00e560c0:
    uVar50 = (undefined4)((ulong)uVar45 >> 0x20);
  }
  else {
    param_3[4] = auVar29._0_4_;
    if ((uVar146 >> 1 & 1) == 0) goto LAB_00e56038;
LAB_00e56740:
    param_3[5] = auVar29._4_4_;
    auVar136._2_2_ = 0;
    auVar136._0_2_ = auVar161._0_2_;
    auVar136._4_2_ = uVar7;
    auVar136._6_2_ = 0;
    auVar136._8_2_ = uVar8;
    auVar136._10_2_ = 0;
    auVar136[12] = bVar41;
    if ((uVar146 >> 2 & 1) == 0) goto LAB_00e56040;
LAB_00e56750:
    param_3[6] = auVar29._8_4_;
    auVar113._1_3_ = 0;
    auVar113[0] = auVar136[0];
    auVar113[4] = auVar136[4];
    auVar113._5_3_ = 0;
    auVar113[8] = auVar136[8];
    auVar113._9_3_ = 0;
    auVar113[12] = auVar136[12];
    auVar113._13_3_ = 0;
    if ((uVar146 >> 3 & 1) == 0) goto LAB_00e56048;
LAB_00e56760:
    param_3[7] = auVar29._12_4_;
    auVar110._0_4_ = uVar78 * auVar113._0_4_ >> 8;
    auVar110._4_4_ = (uint)bVar25 * auVar113._4_4_ >> 8;
    auVar110._8_4_ = (uint)bVar37 * auVar113._8_4_ >> 8;
    auVar110._12_4_ = (uint)bVar38 * auVar113._12_4_ >> 8;
    auVar29 = NEON_scvtf(auVar110,4);
    if ((uVar146 & 1) == 0) goto LAB_00e56058;
LAB_00e56778:
    uVar45 = auVar29._8_8_;
    param_3[8] = auVar29._0_4_;
    if ((uVar146 >> 1 & 1) == 0) goto LAB_00e5605c;
LAB_00e56780:
    uVar45 = auVar29._8_8_;
    uVar50 = auVar29._12_4_;
    param_3[9] = auVar29._4_4_;
    if ((uVar146 >> 2 & 1) == 0) goto LAB_00e56060;
LAB_00e5678c:
    uVar50 = (undefined4)((ulong)uVar45 >> 0x20);
    param_3[10] = (int)uVar45;
    if ((uVar146 >> 3 & 1) == 0) goto LAB_00e56064;
LAB_00e56798:
    param_3[0xb] = uVar50;
    if ((uVar146 & 1) == 0) goto LAB_00e56068;
LAB_00e567a4:
    param_3[0xc] = 0x437f0000;
    if ((uVar146 >> 1 & 1) == 0) goto LAB_00e5606c;
LAB_00e567b0:
    param_3[0xd] = 0x437f0000;
    if ((uVar146 >> 2 & 1) == 0) goto LAB_00e56070;
LAB_00e567bc:
    param_3[0xe] = 0x437f0000;
    if ((uVar146 >> 3 & 1) == 0) goto LAB_00e56074;
LAB_00e567c8:
    param_3[0xf] = 0x437f0000;
    auVar88._6_2_ = 0;
    auVar88._0_6_ = (uint6)CONCAT14(bVar55,(uint)CONCAT12(bVar55,(ushort)bVar54)) & 0xffff0000ffff;
    auVar88[8] = bVar57;
    auVar88._9_3_ = 0;
    auVar88[12] = bVar59;
    auVar88._13_3_ = 0;
    auVar29 = NEON_ucvtf(auVar88,4);
    if ((uVar146 & 1) == 0) goto LAB_00e56084;
LAB_00e567e0:
    param_3[0x10] = auVar29._0_4_;
    if ((uVar146 >> 1 & 1) == 0) goto LAB_00e56088;
LAB_00e567e8:
    auVar27 = auVar29._4_12_;
    param_3[0x11] = auVar29._4_4_;
    if ((uVar146 >> 2 & 1) == 0) goto LAB_00e5608c;
LAB_00e567f4:
    param_3[0x12] = auVar27._4_4_;
    if ((uVar146 >> 3 & 1) == 0) goto LAB_00e56090;
LAB_00e56800:
    param_3[0x13] = auVar27._8_4_;
    auVar89._6_2_ = 0;
    auVar89._0_6_ = (uint6)CONCAT14(bVar39,(uint)CONCAT12(bVar39,uVar90)) & 0xffff0000ffff;
    auVar89[8] = bVar40;
    auVar89._9_3_ = 0;
    auVar89[12] = bVar42;
    auVar89._13_3_ = 0;
    auVar29 = NEON_ucvtf(auVar89,4);
    if ((uVar146 & 1) == 0) goto LAB_00e560a0;
LAB_00e56818:
    uVar45 = auVar29._8_8_;
    param_3[0x14] = auVar29._0_4_;
    if ((uVar146 >> 1 & 1) == 0) goto LAB_00e560a4;
LAB_00e56820:
    uVar45 = auVar29._8_8_;
    uVar50 = auVar29._12_4_;
    param_3[0x15] = auVar29._4_4_;
    if ((uVar146 >> 2 & 1) == 0) goto LAB_00e560a8;
LAB_00e5682c:
    uVar50 = (undefined4)((ulong)uVar45 >> 0x20);
    param_3[0x16] = (int)uVar45;
    if ((uVar146 >> 3 & 1) == 0) goto LAB_00e560ac;
LAB_00e56838:
    param_3[0x17] = uVar50;
    auVar77._2_2_ = 0;
    auVar77._0_2_ = auVar161._0_2_;
    auVar77._4_2_ = uVar7;
    auVar77._6_2_ = 0;
    auVar77._8_2_ = uVar8;
    auVar77._10_2_ = 0;
    auVar77[12] = bVar41;
    auVar77._13_3_ = 0;
    auVar29 = NEON_ucvtf(auVar77,4);
    if ((uVar146 & 1) == 0) goto LAB_00e560bc;
LAB_00e56850:
    uVar45 = auVar29._8_8_;
    param_3[0x18] = auVar29._0_4_;
    if ((uVar146 >> 1 & 1) == 0) goto LAB_00e560c0;
LAB_00e56858:
    uVar45 = auVar29._8_8_;
    uVar50 = auVar29._12_4_;
    param_3[0x19] = auVar29._4_4_;
  }
  if ((uVar146 >> 2 & 1) != 0) {
    uVar50 = (undefined4)((ulong)uVar45 >> 0x20);
    param_3[0x1a] = (int)uVar45;
  }
  if ((uVar146 >> 3 & 1) != 0) {
    param_3[0x1b] = uVar50;
  }
  if ((uVar146 & 1) != 0) {
    param_3[0x1c] = 0x437f0000;
  }
  if ((uVar146 >> 1 & 1) != 0) {
    param_3[0x1d] = 0x437f0000;
  }
  if ((uVar146 >> 2 & 1) != 0) {
    param_3[0x1e] = 0x437f0000;
  }
  if ((uVar146 >> 3 & 1) != 0) {
    param_3[0x1f] = 0x437f0000;
  }
  auVar71._8_4_ = 8;
  auVar71._0_8_ = 0x800000008;
  auVar71._12_4_ = 8;
  auVar29 = NEON_cmgt(param_1,auVar71,4);
  auVar30[0] = auVar138[0] & auVar29[0];
  auVar30[1] = auVar138[1] & auVar29[1];
  auVar30[2] = auVar138[2] & auVar29[2];
  auVar30[3] = auVar138[3] & auVar29[3];
  auVar30[4] = auVar138[4] & auVar29[4];
  auVar30[5] = auVar138[5] & auVar29[5];
  auVar30[6] = auVar138[6] & auVar29[6];
  auVar30[7] = auVar138[7] & auVar29[7];
  auVar30[8] = auVar138[8] & auVar29[8];
  auVar30[9] = auVar138[9] & auVar29[9];
  auVar30[10] = auVar138[10] & auVar29[10];
  auVar30[11] = auVar138[11] & auVar29[11];
  auVar30[12] = auVar138[12] & auVar29[12];
  auVar30[13] = auVar138[13] & auVar29[13];
  auVar30[14] = auVar138[14] & auVar29[14];
  auVar30[15] = auVar138[15] & auVar29[15];
  iVar70 = NEON_umaxv(auVar30,4);
  if (iVar70 == 0) goto LAB_00e5619c;
  uVar78 = (uint)(auVar30[0] & 1) + (uint)(auVar30[4] & 2) +
           (uint)(auVar30[8] & 4) + (uint)(auVar30[12] & 8);
  auVar29 = NEON_cmeq(ZEXT416(uVar78),ZEXT416(0),4);
  bVar54 = ~auVar29[0];
  bVar55 = ~auVar29[1];
  bVar57 = ~auVar29[2];
  bVar59 = ~auVar29[3];
  auVar72._6_2_ = 0;
  auVar72._0_6_ =
       (uint6)CONCAT14(param_4[0x11],(uint)CONCAT12(param_4[0x11],(ushort)param_4[0x10])) &
       0xffff0000ffff;
  auVar72[8] = param_4[0x12];
  auVar72._9_3_ = 0;
  auVar72[12] = param_4[0x13];
  auVar72._13_3_ = 0;
  auVar29 = NEON_ucvtf(auVar72,4);
  uVar26 = (uint6)CONCAT14(param_4[0x16],(uint)CONCAT12(param_4[0x15],(ushort)param_4[0x14]));
  if ((uVar78 & 1) == 0) {
    uVar6 = (ushort)param_4[0x17];
    uVar90 = uVar6;
    if ((uVar78 >> 1 & 1) != 0) goto LAB_00e569e8;
LAB_00e5616c:
    uVar45 = CONCAT26(uVar6,uVar26);
    if ((uVar78 >> 2 & 1) != 0) goto LAB_00e569f8;
LAB_00e56174:
    if ((uVar78 >> 3 & 1) != 0) goto LAB_00e56a04;
LAB_00e56178:
    auVar31._2_2_ = 0;
    auVar31._0_2_ = (ushort)uVar45;
    auVar31._4_2_ = (short)((ulong)uVar45 >> 0x10);
    auVar31._6_2_ = 0;
    auVar31._8_2_ = (short)((ulong)uVar45 >> 0x20);
    auVar31._10_2_ = 0;
    auVar31._12_2_ = (short)((ulong)uVar45 >> 0x30);
    auVar31._14_2_ = 0;
    auVar29 = NEON_ucvtf(auVar31,4);
    if ((uVar78 & 1) != 0) goto LAB_00e56a1c;
LAB_00e56188:
    uVar45 = auVar29._8_8_;
    if ((uVar78 >> 1 & 1) != 0) goto LAB_00e56a24;
LAB_00e5618c:
    uVar50 = (undefined4)((ulong)uVar45 >> 0x20);
  }
  else {
    param_3[0xc] = CONCAT13(auVar29[3] & bVar59,
                            CONCAT12(auVar29[2] & bVar57,
                                     CONCAT11(auVar29[1] & bVar55,auVar29[0] & bVar54)));
    uVar90 = (ushort)param_4[0x17];
    uVar6 = (ushort)param_4[0x17];
    if ((uVar78 >> 1 & 1) == 0) goto LAB_00e5616c;
LAB_00e569e8:
    param_3[0xd] = CONCAT13(auVar29[7] & bVar59,
                            CONCAT12(auVar29[6] & bVar57,
                                     CONCAT11(auVar29[5] & bVar55,auVar29[4] & bVar54)));
    uVar45 = CONCAT26(uVar90,uVar26);
    if ((uVar78 >> 2 & 1) == 0) goto LAB_00e56174;
LAB_00e569f8:
    param_3[0xe] = CONCAT13(auVar29[11] & bVar59,
                            CONCAT12(auVar29[10] & bVar57,
                                     CONCAT11(auVar29[9] & bVar55,auVar29[8] & bVar54)));
    if ((uVar78 >> 3 & 1) == 0) goto LAB_00e56178;
LAB_00e56a04:
    param_3[0xf] = CONCAT13(auVar29[15] & bVar59,
                            CONCAT12(auVar29[14] & bVar57,
                                     CONCAT11(auVar29[13] & bVar55,auVar29[12] & bVar54)));
    auVar36._2_2_ = 0;
    auVar36._0_2_ = (ushort)uVar45;
    auVar36._4_2_ = (short)((ulong)uVar45 >> 0x10);
    auVar36._6_2_ = 0;
    auVar36._8_2_ = (short)((ulong)uVar45 >> 0x20);
    auVar36._10_2_ = 0;
    auVar36._12_2_ = (short)((ulong)uVar45 >> 0x30);
    auVar36._14_2_ = 0;
    auVar29 = NEON_ucvtf(auVar36,4);
    if ((uVar78 & 1) == 0) goto LAB_00e56188;
LAB_00e56a1c:
    uVar45 = auVar29._8_8_;
    param_3[0x1c] = auVar29._0_4_;
    if ((uVar78 >> 1 & 1) == 0) goto LAB_00e5618c;
LAB_00e56a24:
    uVar50 = auVar29._12_4_;
    uVar45 = auVar29._8_8_;
    param_3[0x1d] = auVar29._4_4_;
  }
  if ((uVar78 >> 2 & 1) != 0) {
    uVar50 = (undefined4)((ulong)uVar45 >> 0x20);
    param_3[0x1e] = (int)uVar45;
  }
  if ((uVar78 >> 3 & 1) != 0) {
    param_3[0x1f] = uVar50;
  }
LAB_00e5619c:
  auVar22 = NEON_cmeq(auVar22,0,2);
  auVar13[0] = param_2[0] & auVar22[0];
  auVar13[1] = param_2[1] & auVar22[1];
  auVar13[2] = param_2[2] & auVar22[2];
  auVar13[3] = param_2[3] & auVar22[3];
  auVar13[4] = param_2[4] & auVar22[4];
  auVar13[5] = param_2[5] & auVar22[5];
  auVar13[6] = param_2[6] & auVar22[6];
  auVar13[7] = param_2[7] & auVar22[7];
  auVar13[8] = param_2[8] & auVar22[8];
  auVar13[9] = param_2[9] & auVar22[9];
  auVar13[10] = param_2[10] & auVar22[10];
  auVar13[11] = param_2[11] & auVar22[11];
  auVar13[12] = param_2[12] & auVar22[12];
  auVar13[13] = param_2[13] & auVar22[13];
  auVar13[14] = param_2[14] & auVar22[14];
  auVar13[15] = param_2[15] & auVar22[15];
  iVar70 = NEON_umaxv(auVar13,4);
  if (iVar70 != 0) {
    auVar124[4] = param_4[1];
    auVar124._0_4_ = CONCAT31(0,*param_4);
    auVar93[4] = param_4[5];
    auVar93._0_4_ = CONCAT31(0,param_4[4]);
    auVar83[4] = param_4[0xd];
    auVar83._0_4_ = CONCAT31(0,param_4[0xc]);
    auVar114[4] = param_4[9];
    auVar114._0_4_ = CONCAT31(0,param_4[8]);
    auVar124._5_3_ = 0;
    auVar124[8] = param_4[2];
    auVar93._5_3_ = 0;
    auVar93[8] = param_4[6];
    auVar102[4] = param_4[0x11];
    auVar102._0_4_ = CONCAT31(0,param_4[0x10]);
    auVar73[4] = param_4[0x15];
    auVar73._0_4_ = CONCAT31(0,param_4[0x14]);
    auVar83._5_3_ = 0;
    auVar83[8] = param_4[0xe];
    auVar114._5_3_ = 0;
    auVar114[8] = param_4[10];
    auVar124._9_3_ = 0;
    auVar124[12] = param_4[3];
    auVar124._13_3_ = 0;
    auVar93._9_3_ = 0;
    auVar93[12] = param_4[7];
    auVar93._13_3_ = 0;
    auVar102._5_3_ = 0;
    auVar102[8] = param_4[0x12];
    auVar73._5_3_ = 0;
    auVar73[8] = param_4[0x16];
    auVar83._9_3_ = 0;
    auVar83[12] = param_4[0xf];
    auVar83._13_3_ = 0;
    auVar114._9_3_ = 0;
    auVar114[12] = param_4[0xb];
    auVar114._13_3_ = 0;
    auVar102._9_3_ = 0;
    auVar102[12] = param_4[0x13];
    auVar102._13_3_ = 0;
    auVar73._9_3_ = 0;
    auVar73[12] = param_4[0x17];
    auVar73._13_3_ = 0;
    auVar23._0_4_ = CONCAT31(0,param_4[0xc]) + CONCAT31(0,param_4[4]) + CONCAT31(0,param_4[0x14]);
    auVar23._4_4_ = (uint)param_4[0xd] + (uint)param_4[5] + (uint)param_4[0x15];
    auVar23._8_4_ = (uint)param_4[0xe] + (uint)param_4[6] + (uint)param_4[0x16];
    auVar23._12_4_ = (uint)param_4[0xf] + (uint)param_4[7] + (uint)param_4[0x17];
    auVar32._0_4_ = CONCAT31(0,param_4[8]) + CONCAT31(0,*param_4) + CONCAT31(0,param_4[0x10]);
    auVar32._4_4_ = (uint)param_4[9] + (uint)param_4[1] + (uint)param_4[0x11];
    auVar32._8_4_ = (uint)param_4[10] + (uint)param_4[2] + (uint)param_4[0x12];
    auVar32._12_4_ = (uint)param_4[0xb] + (uint)param_4[3] + (uint)param_4[0x13];
    bVar54 = param_4[0x18];
    uVar56 = 0;
    uVar58 = 0;
    cVar60 = '\0';
    bVar55 = param_4[0x19];
    auVar22 = NEON_cmhi(auVar32,auVar23,4);
    auVar24._1_3_ = 0;
    auVar24[0] = param_4[0x1c];
    uVar61 = 0;
    uVar62 = 0;
    cVar63 = '\0';
    auVar24[4] = param_4[0x1d];
    bVar57 = param_4[0x1a];
    iVar70 = CONCAT13(auVar13[3] & auVar22[3],
                      CONCAT12(auVar13[2] & auVar22[2],
                               CONCAT11(auVar13[1] & auVar22[1],auVar13[0] & auVar22[0])));
    auVar27._0_8_ =
         CONCAT17(auVar13[7] & auVar22[7],
                  CONCAT16(auVar13[6] & auVar22[6],
                           CONCAT15(auVar13[5] & auVar22[5],CONCAT14(auVar13[4] & auVar22[4],iVar70)
                                   )));
    auVar27[8] = auVar13[8] & auVar22[8];
    auVar27[9] = auVar13[9] & auVar22[9];
    auVar27[10] = auVar13[10] & auVar22[10];
    auVar27[11] = auVar13[11] & auVar22[11];
    auVar33[12] = auVar13[12] & auVar22[12];
    auVar33._0_12_ = auVar27;
    auVar33[13] = auVar13[13] & auVar22[13];
    auVar33[14] = auVar13[14] & auVar22[14];
    auVar33[15] = auVar13[15] & auVar22[15];
    uVar64 = 0;
    uVar65 = 0;
    cVar66 = '\0';
    auVar24._5_3_ = 0;
    auVar24[8] = param_4[0x1e];
    bVar59 = param_4[0x1b];
    iVar131 = NEON_umaxv(auVar33,4);
    uVar67 = 0;
    uVar68 = 0;
    cVar69 = '\0';
    auVar24._9_3_ = 0;
    auVar24[12] = param_4[0x1f];
    auVar24._13_3_ = 0;
    auVar22 = auVar102;
    if (iVar131 != 0) {
      auVar34._0_8_ =
           CONCAT44(((int)((ulong)auVar27._0_8_ >> 0x20) << 0x1f) >> 0x1f,(iVar70 << 0x1f) >> 0x1f);
      auVar34._8_4_ = (auVar27._8_4_ << 0x1f) >> 0x1f;
      auVar34._12_4_ = (auVar33._12_4_ << 0x1f) >> 0x1f;
      uVar45 = auVar34._8_8_;
      auVar137._8_8_ = uVar45;
      auVar137._0_8_ = auVar34._0_8_;
      auVar138 = NEON_bsl(auVar137,auVar93,auVar124,1);
      auVar148._8_8_ = uVar45;
      auVar148._0_8_ = auVar34._0_8_;
      auVar149 = NEON_bsl(auVar148,auVar124,auVar93,1);
      auVar156._8_8_ = uVar45;
      auVar156._0_8_ = auVar34._0_8_;
      auVar22 = NEON_bsl(auVar156,auVar73,auVar102,1);
      auVar160._8_8_ = uVar45;
      auVar160._0_8_ = auVar34._0_8_;
      auVar161 = NEON_bsl(auVar160,auVar83,auVar114,1);
      auVar73 = NEON_bit(auVar73,auVar102,auVar34,1);
      auVar103._8_8_ = uVar45;
      auVar103._0_8_ = auVar34._0_8_;
      auVar29 = NEON_bsl(auVar103,auVar114,auVar83,1);
      auVar139._0_4_ = (uint)(auVar22._0_4_ + auVar138._0_4_) >> 1;
      auVar139._4_4_ = (uint)(auVar22._4_4_ + auVar138._4_4_) >> 1;
      auVar139._8_4_ = (uint)(auVar22._8_4_ + auVar138._8_4_) >> 1;
      auVar139._12_4_ = (uint)(auVar22._12_4_ + auVar138._12_4_) >> 1;
      auVar162._0_4_ = (uint)(auVar161._0_4_ + auVar22._0_4_) >> 1;
      auVar162._4_4_ = (uint)(auVar161._4_4_ + auVar22._4_4_) >> 1;
      auVar162._8_4_ = (uint)(auVar161._8_4_ + auVar22._8_4_) >> 1;
      auVar162._12_4_ = (uint)(auVar161._12_4_ + auVar22._12_4_) >> 1;
      auVar150._0_4_ = (uint)(auVar73._0_4_ + auVar149._0_4_) >> 1;
      auVar150._4_4_ = (uint)(auVar73._4_4_ + auVar149._4_4_) >> 1;
      auVar150._8_4_ = (uint)(auVar73._8_4_ + auVar149._8_4_) >> 1;
      auVar150._12_4_ = (uint)(auVar73._12_4_ + auVar149._12_4_) >> 1;
      auVar104._0_4_ = (uint)(auVar29._0_4_ + auVar73._0_4_) >> 1;
      auVar104._4_4_ = (uint)(auVar29._4_4_ + auVar73._4_4_) >> 1;
      auVar104._8_4_ = (uint)(auVar29._8_4_ + auVar73._8_4_) >> 1;
      auVar104._12_4_ = (uint)(auVar29._12_4_ + auVar73._12_4_) >> 1;
      auVar164._8_8_ = uVar45;
      auVar164._0_8_ = auVar34._0_8_;
      auVar1._1_3_ = 0;
      auVar1[0] = bVar54;
      auVar1[4] = bVar55;
      auVar1._5_3_ = 0;
      auVar1[8] = bVar57;
      auVar1._9_3_ = 0;
      auVar1[12] = bVar59;
      auVar1._13_3_ = 0;
      auVar29 = NEON_bsl(auVar164,auVar24,auVar1,1);
      auVar2._1_3_ = 0;
      auVar2[0] = bVar54;
      auVar2[4] = bVar55;
      auVar2._5_3_ = 0;
      auVar2[8] = bVar57;
      auVar2._9_3_ = 0;
      auVar2[12] = bVar59;
      auVar2._13_3_ = 0;
      auVar24 = NEON_bit(auVar24,auVar2,auVar34,1);
      auVar124 = NEON_bit(auVar124,auVar139,auVar34,1);
      auVar114 = NEON_bit(auVar114,auVar162,auVar34,1);
      auVar93 = NEON_bit(auVar93,auVar150,auVar34,1);
      auVar83 = NEON_bit(auVar83,auVar104,auVar34,1);
      bVar57 = auVar29[8];
      uVar64 = auVar29[9];
      uVar65 = auVar29[10];
      cVar66 = auVar29[11];
      bVar59 = auVar29[12];
      uVar67 = auVar29[13];
      uVar68 = auVar29[14];
      cVar69 = auVar29[15];
      bVar54 = auVar29[0];
      uVar56 = auVar29[1];
      uVar58 = auVar29[2];
      cVar60 = auVar29[3];
      bVar55 = auVar29[4];
      uVar61 = auVar29[5];
      uVar62 = auVar29[6];
      cVar63 = auVar29[7];
    }
    bVar25 = auVar124[3] >> 7;
    auVar151[0] = bVar25 & auVar13[0];
    auVar151[1] = bVar25 & auVar13[1];
    auVar151[2] = bVar25 & auVar13[2];
    auVar151[3] = bVar25 & auVar13[3];
    bVar25 = auVar124[7] >> 7;
    auVar151[4] = bVar25 & auVar13[4];
    auVar151[5] = bVar25 & auVar13[5];
    auVar151[6] = bVar25 & auVar13[6];
    auVar151[7] = bVar25 & auVar13[7];
    bVar25 = auVar124[11] >> 7;
    auVar151[8] = bVar25 & auVar13[8];
    auVar151[9] = bVar25 & auVar13[9];
    auVar151[10] = bVar25 & auVar13[10];
    auVar151[11] = bVar25 & auVar13[11];
    bVar25 = auVar124[15] >> 7;
    auVar151[12] = bVar25 & auVar13[12];
    auVar151[13] = bVar25 & auVar13[13];
    auVar151[14] = bVar25 & auVar13[14];
    auVar151[15] = bVar25 & auVar13[15];
    bVar25 = SUB161(_DAT_004c4480,0);
    bVar37 = SUB161(_DAT_004c4480,1);
    bVar38 = SUB161(_DAT_004c4480,2);
    bVar39 = SUB161(_DAT_004c4480,3);
    iVar70 = CONCAT13(auVar13[3] & bVar39,
                      CONCAT12(auVar13[2] & bVar38,CONCAT11(auVar13[1] & bVar37,auVar13[0] & bVar25)
                              ));
    bVar40 = SUB161(_DAT_004c4480,4);
    bVar41 = SUB161(_DAT_004c4480,5);
    bVar42 = SUB161(_DAT_004c4480,6);
    bVar43 = SUB161(_DAT_004c4480,7);
    auVar132._0_8_ =
         CONCAT17(auVar13[7] & bVar43,
                  CONCAT16(auVar13[6] & bVar42,
                           CONCAT15(auVar13[5] & bVar41,CONCAT14(auVar13[4] & bVar40,iVar70))));
    bVar44 = SUB161(_DAT_004c4480,8);
    auVar132[8] = auVar13[8] & bVar44;
    bVar46 = SUB161(_DAT_004c4480,9);
    auVar132[9] = auVar13[9] & bVar46;
    bVar47 = SUB161(_DAT_004c4480,10);
    auVar132[10] = auVar13[10] & bVar47;
    bVar48 = SUB161(_DAT_004c4480,0xb);
    auVar132[11] = auVar13[11] & bVar48;
    bVar49 = SUB161(_DAT_004c4480,0xc);
    auVar140[12] = auVar13[12] & bVar49;
    auVar140._0_12_ = auVar132;
    bVar51 = SUB161(_DAT_004c4480,0xd);
    auVar140[13] = auVar13[13] & bVar51;
    bVar52 = SUB161(_DAT_004c4480,0xe);
    auVar140[14] = auVar13[14] & bVar52;
    bVar53 = SUB161(_DAT_004c4480,0xf);
    auVar140[15] = auVar13[15] & bVar53;
    iVar131 = CONCAT13(auVar151[3] & bVar39,
                       CONCAT12(auVar151[2] & bVar38,
                                CONCAT11(auVar151[1] & bVar37,auVar151[0] & bVar25)));
    auVar154._0_8_ =
         CONCAT17(auVar151[7] & bVar43,
                  CONCAT16(auVar151[6] & bVar42,
                           CONCAT15(auVar151[5] & bVar41,CONCAT14(auVar151[4] & bVar40,iVar131))));
    auVar154[8] = auVar151[8] & bVar44;
    auVar154[9] = auVar151[9] & bVar46;
    auVar154[10] = auVar151[10] & bVar47;
    auVar154[11] = auVar151[11] & bVar48;
    auVar157[12] = auVar151[12] & bVar49;
    auVar157._0_12_ = auVar154;
    auVar157[13] = auVar151[13] & bVar51;
    auVar157[14] = auVar151[14] & bVar52;
    auVar157[15] = auVar151[15] & bVar53;
    uVar78 = iVar70 + (int)((ulong)auVar132._0_8_ >> 0x20) + auVar132._8_4_ + auVar140._12_4_;
    auVar142 = ZEXT816(0);
    if (uVar78 != iVar131 + (int)((ulong)auVar154._0_8_ >> 0x20) + auVar154._8_4_ + auVar157._12_4_)
    {
      auVar141._8_8_ = 0xff000000ff;
      auVar141._0_8_ = 0xff000000ff;
      auVar138 = NEON_cmgt(auVar124,auVar141,4);
      auVar29 = NEON_bit(auVar151,auVar13,auVar138,1);
      iVar70 = CONCAT13(auVar29[3] & bVar39,
                        CONCAT12(auVar29[2] & bVar38,
                                 CONCAT11(auVar29[1] & bVar37,auVar29[0] & bVar25)));
      auVar159._0_8_ =
           CONCAT17(auVar29[7] & bVar43,
                    CONCAT16(auVar29[6] & bVar42,
                             CONCAT15(auVar29[5] & bVar41,CONCAT14(auVar29[4] & bVar40,iVar70))));
      auVar159[8] = auVar29[8] & bVar44;
      auVar159[9] = auVar29[9] & bVar46;
      auVar159[10] = auVar29[10] & bVar47;
      auVar159[11] = auVar29[11] & bVar48;
      auVar163[12] = auVar29[12] & bVar49;
      auVar163._0_12_ = auVar159;
      auVar163[13] = auVar29[13] & bVar51;
      auVar163[14] = auVar29[14] & bVar52;
      auVar163[15] = auVar29[15] & bVar53;
      auVar142._1_3_ = 0;
      auVar142[0] = auVar138[0];
      auVar142[4] = auVar138[4];
      auVar142._5_3_ = 0;
      auVar142[8] = auVar138[8];
      auVar142._9_3_ = 0;
      auVar142[12] = auVar138[12];
      auVar142._13_3_ = 0;
      if (uVar78 != iVar70 + (int)((ulong)auVar159._0_8_ >> 0x20) + auVar159._8_4_ + auVar163._12_4_
         ) {
        auVar152._0_4_ = (auVar29._0_4_ << 0x1f) >> 0x1f;
        auVar152._4_4_ = (auVar29._4_4_ << 0x1f) >> 0x1f;
        auVar152._8_4_ = (auVar29._8_4_ << 0x1f) >> 0x1f;
        auVar152._12_4_ = (auVar29._12_4_ << 0x1f) >> 0x1f;
        auVar142 = NEON_bif(auVar142,auVar124,auVar152,1);
      }
    }
    auVar29 = NEON_scvtf(auVar142,4);
    if ((uVar78 & 1) != 0) {
      *param_3 = auVar29._0_4_;
    }
    if ((uVar78 >> 1 & 1) != 0) {
      param_3[1] = auVar29._4_4_;
    }
    if ((uVar78 >> 2 & 1) != 0) {
      param_3[2] = auVar29._8_4_;
    }
    if ((uVar78 >> 3 & 1) != 0) {
      param_3[3] = auVar29._12_4_;
    }
    bVar21 = auVar114[3] >> 7;
    auVar143[0] = bVar21 & auVar13[0];
    auVar143[1] = bVar21 & auVar13[1];
    auVar143[2] = bVar21 & auVar13[2];
    auVar143[3] = bVar21 & auVar13[3];
    bVar21 = auVar114[7] >> 7;
    auVar143[4] = bVar21 & auVar13[4];
    auVar143[5] = bVar21 & auVar13[5];
    auVar143[6] = bVar21 & auVar13[6];
    auVar143[7] = bVar21 & auVar13[7];
    bVar21 = auVar114[11] >> 7;
    auVar143[8] = bVar21 & auVar13[8];
    auVar143[9] = bVar21 & auVar13[9];
    auVar143[10] = bVar21 & auVar13[10];
    auVar143[11] = bVar21 & auVar13[11];
    bVar21 = auVar114[15] >> 7;
    auVar143[12] = bVar21 & auVar13[12];
    auVar143[13] = bVar21 & auVar13[13];
    auVar143[14] = bVar21 & auVar13[14];
    auVar143[15] = bVar21 & auVar13[15];
    iVar70 = CONCAT13(auVar143[3] & bVar39,
                      CONCAT12(auVar143[2] & bVar38,
                               CONCAT11(auVar143[1] & bVar37,auVar143[0] & bVar25)));
    auVar121._0_8_ =
         CONCAT17(auVar143[7] & bVar43,
                  CONCAT16(auVar143[6] & bVar42,
                           CONCAT15(auVar143[5] & bVar41,CONCAT14(auVar143[4] & bVar40,iVar70))));
    auVar121[8] = auVar143[8] & bVar44;
    auVar121[9] = auVar143[9] & bVar46;
    auVar121[10] = auVar143[10] & bVar47;
    auVar121[11] = auVar143[11] & bVar48;
    auVar125[12] = auVar143[12] & bVar49;
    auVar125._0_12_ = auVar121;
    auVar125[13] = auVar143[13] & bVar51;
    auVar125[14] = auVar143[14] & bVar52;
    auVar125[15] = auVar143[15] & bVar53;
    auVar127 = ZEXT816(0);
    if (uVar78 != iVar70 + (int)((ulong)auVar121._0_8_ >> 0x20) + auVar121._8_4_ + auVar125._12_4_)
    {
      auVar126._8_8_ = 0xff000000ff;
      auVar126._0_8_ = 0xff000000ff;
      auVar138 = NEON_cmgt(auVar114,auVar126,4);
      auVar29 = NEON_bit(auVar143,auVar13,auVar138,1);
      iVar70 = CONCAT13(auVar29[3] & bVar39,
                        CONCAT12(auVar29[2] & bVar38,
                                 CONCAT11(auVar29[1] & bVar37,auVar29[0] & bVar25)));
      auVar155._0_8_ =
           CONCAT17(auVar29[7] & bVar43,
                    CONCAT16(auVar29[6] & bVar42,
                             CONCAT15(auVar29[5] & bVar41,CONCAT14(auVar29[4] & bVar40,iVar70))));
      auVar155[8] = auVar29[8] & bVar44;
      auVar155[9] = auVar29[9] & bVar46;
      auVar155[10] = auVar29[10] & bVar47;
      auVar155[11] = auVar29[11] & bVar48;
      auVar158[12] = auVar29[12] & bVar49;
      auVar158._0_12_ = auVar155;
      auVar158[13] = auVar29[13] & bVar51;
      auVar158[14] = auVar29[14] & bVar52;
      auVar158[15] = auVar29[15] & bVar53;
      auVar127._1_3_ = 0;
      auVar127[0] = auVar138[0];
      auVar127[4] = auVar138[4];
      auVar127._5_3_ = 0;
      auVar127[8] = auVar138[8];
      auVar127._9_3_ = 0;
      auVar127[12] = auVar138[12];
      auVar127._13_3_ = 0;
      if (uVar78 != iVar70 + (int)((ulong)auVar155._0_8_ >> 0x20) + auVar155._8_4_ + auVar158._12_4_
         ) {
        auVar144._0_4_ = (auVar29._0_4_ << 0x1f) >> 0x1f;
        auVar144._4_4_ = (auVar29._4_4_ << 0x1f) >> 0x1f;
        auVar144._8_4_ = (auVar29._8_4_ << 0x1f) >> 0x1f;
        auVar144._12_4_ = (auVar29._12_4_ << 0x1f) >> 0x1f;
        auVar127 = NEON_bif(auVar127,auVar114,auVar144,1);
      }
    }
    auVar29 = NEON_scvtf(auVar127,4);
    if ((uVar78 & 1) != 0) {
      param_3[4] = auVar29._0_4_;
    }
    if ((uVar78 >> 1 & 1) != 0) {
      param_3[5] = auVar29._4_4_;
    }
    if ((uVar78 >> 2 & 1) != 0) {
      param_3[6] = auVar29._8_4_;
    }
    if ((uVar78 >> 3 & 1) != 0) {
      param_3[7] = auVar29._12_4_;
    }
    bVar21 = auVar22[3] >> 7;
    auVar128[0] = bVar21 & auVar13[0];
    auVar128[1] = bVar21 & auVar13[1];
    auVar128[2] = bVar21 & auVar13[2];
    auVar128[3] = bVar21 & auVar13[3];
    bVar21 = auVar22[7] >> 7;
    auVar128[4] = bVar21 & auVar13[4];
    auVar128[5] = bVar21 & auVar13[5];
    auVar128[6] = bVar21 & auVar13[6];
    auVar128[7] = bVar21 & auVar13[7];
    bVar21 = auVar22[11] >> 7;
    auVar128[8] = bVar21 & auVar13[8];
    auVar128[9] = bVar21 & auVar13[9];
    auVar128[10] = bVar21 & auVar13[10];
    auVar128[11] = bVar21 & auVar13[11];
    bVar21 = auVar22[15] >> 7;
    auVar128[12] = bVar21 & auVar13[12];
    auVar128[13] = bVar21 & auVar13[13];
    auVar128[14] = bVar21 & auVar13[14];
    auVar128[15] = bVar21 & auVar13[15];
    iVar70 = CONCAT13(auVar128[3] & bVar39,
                      CONCAT12(auVar128[2] & bVar38,
                               CONCAT11(auVar128[1] & bVar37,auVar128[0] & bVar25)));
    auVar111._0_8_ =
         CONCAT17(auVar128[7] & bVar43,
                  CONCAT16(auVar128[6] & bVar42,
                           CONCAT15(auVar128[5] & bVar41,CONCAT14(auVar128[4] & bVar40,iVar70))));
    auVar111[8] = auVar128[8] & bVar44;
    auVar111[9] = auVar128[9] & bVar46;
    auVar111[10] = auVar128[10] & bVar47;
    auVar111[11] = auVar128[11] & bVar48;
    auVar115[12] = auVar128[12] & bVar49;
    auVar115._0_12_ = auVar111;
    auVar115[13] = auVar128[13] & bVar51;
    auVar115[14] = auVar128[14] & bVar52;
    auVar115[15] = auVar128[15] & bVar53;
    auVar117 = ZEXT816(0);
    if (uVar78 != iVar70 + (int)((ulong)auVar111._0_8_ >> 0x20) + auVar111._8_4_ + auVar115._12_4_)
    {
      auVar116._8_8_ = 0xff000000ff;
      auVar116._0_8_ = 0xff000000ff;
      auVar138 = NEON_cmgt(auVar22,auVar116,4);
      auVar29 = NEON_bit(auVar128,auVar13,auVar138,1);
      iVar70 = CONCAT13(auVar29[3] & bVar39,
                        CONCAT12(auVar29[2] & bVar38,
                                 CONCAT11(auVar29[1] & bVar37,auVar29[0] & bVar25)));
      auVar147._0_8_ =
           CONCAT17(auVar29[7] & bVar43,
                    CONCAT16(auVar29[6] & bVar42,
                             CONCAT15(auVar29[5] & bVar41,CONCAT14(auVar29[4] & bVar40,iVar70))));
      auVar147[8] = auVar29[8] & bVar44;
      auVar147[9] = auVar29[9] & bVar46;
      auVar147[10] = auVar29[10] & bVar47;
      auVar147[11] = auVar29[11] & bVar48;
      auVar153[12] = auVar29[12] & bVar49;
      auVar153._0_12_ = auVar147;
      auVar153[13] = auVar29[13] & bVar51;
      auVar153[14] = auVar29[14] & bVar52;
      auVar153[15] = auVar29[15] & bVar53;
      auVar117._1_3_ = 0;
      auVar117[0] = auVar138[0];
      auVar117[4] = auVar138[4];
      auVar117._5_3_ = 0;
      auVar117[8] = auVar138[8];
      auVar117._9_3_ = 0;
      auVar117[12] = auVar138[12];
      auVar117._13_3_ = 0;
      if (uVar78 != iVar70 + (int)((ulong)auVar147._0_8_ >> 0x20) + auVar147._8_4_ + auVar153._12_4_
         ) {
        auVar129._0_4_ = (auVar29._0_4_ << 0x1f) >> 0x1f;
        auVar129._4_4_ = (auVar29._4_4_ << 0x1f) >> 0x1f;
        auVar129._8_4_ = (auVar29._8_4_ << 0x1f) >> 0x1f;
        auVar129._12_4_ = (auVar29._12_4_ << 0x1f) >> 0x1f;
        auVar117 = NEON_bif(auVar117,auVar22,auVar129,1);
      }
    }
    auVar22 = NEON_scvtf(auVar117,4);
    if ((uVar78 & 1) != 0) {
      param_3[8] = auVar22._0_4_;
    }
    if ((uVar78 >> 1 & 1) != 0) {
      param_3[9] = auVar22._4_4_;
    }
    if ((uVar78 >> 2 & 1) != 0) {
      param_3[10] = auVar22._8_4_;
    }
    if ((uVar78 >> 3 & 1) != 0) {
      param_3[0xb] = auVar22._12_4_;
    }
    if ((uVar78 & 1) != 0) {
      param_3[0xc] = 0x437f0000;
    }
    if ((uVar78 >> 1 & 1) != 0) {
      param_3[0xd] = 0x437f0000;
    }
    if ((uVar78 >> 2 & 1) != 0) {
      param_3[0xe] = 0x437f0000;
    }
    if ((uVar78 >> 3 & 1) != 0) {
      param_3[0xf] = 0x437f0000;
    }
    bVar21 = auVar93[3] >> 7;
    auVar118[0] = bVar21 & auVar13[0];
    auVar118[1] = bVar21 & auVar13[1];
    auVar118[2] = bVar21 & auVar13[2];
    auVar118[3] = bVar21 & auVar13[3];
    bVar21 = auVar93[7] >> 7;
    auVar118[4] = bVar21 & auVar13[4];
    auVar118[5] = bVar21 & auVar13[5];
    auVar118[6] = bVar21 & auVar13[6];
    auVar118[7] = bVar21 & auVar13[7];
    bVar21 = auVar93[11] >> 7;
    auVar118[8] = bVar21 & auVar13[8];
    auVar118[9] = bVar21 & auVar13[9];
    auVar118[10] = bVar21 & auVar13[10];
    auVar118[11] = bVar21 & auVar13[11];
    bVar21 = auVar93[15] >> 7;
    auVar118[12] = bVar21 & auVar13[12];
    auVar118[13] = bVar21 & auVar13[13];
    auVar118[14] = bVar21 & auVar13[14];
    auVar118[15] = bVar21 & auVar13[15];
    iVar70 = CONCAT13(auVar118[3] & bVar39,
                      CONCAT12(auVar118[2] & bVar38,
                               CONCAT11(auVar118[1] & bVar37,auVar118[0] & bVar25)));
    auVar100._0_8_ =
         CONCAT17(auVar118[7] & bVar43,
                  CONCAT16(auVar118[6] & bVar42,
                           CONCAT15(auVar118[5] & bVar41,CONCAT14(auVar118[4] & bVar40,iVar70))));
    auVar100[8] = auVar118[8] & bVar44;
    auVar100[9] = auVar118[9] & bVar46;
    auVar100[10] = auVar118[10] & bVar47;
    auVar100[11] = auVar118[11] & bVar48;
    auVar105[12] = auVar118[12] & bVar49;
    auVar105._0_12_ = auVar100;
    auVar105[13] = auVar118[13] & bVar51;
    auVar105[14] = auVar118[14] & bVar52;
    auVar105[15] = auVar118[15] & bVar53;
    auVar107 = ZEXT816(0);
    if (uVar78 != iVar70 + (int)((ulong)auVar100._0_8_ >> 0x20) + auVar100._8_4_ + auVar105._12_4_)
    {
      auVar106._8_8_ = 0xff000000ff;
      auVar106._0_8_ = 0xff000000ff;
      auVar29 = NEON_cmgt(auVar93,auVar106,4);
      auVar22 = NEON_bit(auVar118,auVar13,auVar29,1);
      iVar70 = CONCAT13(auVar22[3] & bVar39,
                        CONCAT12(auVar22[2] & bVar38,
                                 CONCAT11(auVar22[1] & bVar37,auVar22[0] & bVar25)));
      auVar133._0_8_ =
           CONCAT17(auVar22[7] & bVar43,
                    CONCAT16(auVar22[6] & bVar42,
                             CONCAT15(auVar22[5] & bVar41,CONCAT14(auVar22[4] & bVar40,iVar70))));
      auVar133[8] = auVar22[8] & bVar44;
      auVar133[9] = auVar22[9] & bVar46;
      auVar133[10] = auVar22[10] & bVar47;
      auVar133[11] = auVar22[11] & bVar48;
      auVar145[12] = auVar22[12] & bVar49;
      auVar145._0_12_ = auVar133;
      auVar145[13] = auVar22[13] & bVar51;
      auVar145[14] = auVar22[14] & bVar52;
      auVar145[15] = auVar22[15] & bVar53;
      auVar107._1_3_ = 0;
      auVar107[0] = auVar29[0];
      auVar107[4] = auVar29[4];
      auVar107._5_3_ = 0;
      auVar107[8] = auVar29[8];
      auVar107._9_3_ = 0;
      auVar107[12] = auVar29[12];
      auVar107._13_3_ = 0;
      if (uVar78 != iVar70 + (int)((ulong)auVar133._0_8_ >> 0x20) + auVar133._8_4_ + auVar145._12_4_
         ) {
        auVar119._0_4_ = (auVar22._0_4_ << 0x1f) >> 0x1f;
        auVar119._4_4_ = (auVar22._4_4_ << 0x1f) >> 0x1f;
        auVar119._8_4_ = (auVar22._8_4_ << 0x1f) >> 0x1f;
        auVar119._12_4_ = (auVar22._12_4_ << 0x1f) >> 0x1f;
        auVar107 = NEON_bif(auVar107,auVar93,auVar119,1);
      }
    }
    auVar22 = NEON_scvtf(auVar107,4);
    if ((uVar78 & 1) != 0) {
      param_3[0x10] = auVar22._0_4_;
    }
    if ((uVar78 >> 1 & 1) != 0) {
      param_3[0x11] = auVar22._4_4_;
    }
    if ((uVar78 >> 2 & 1) != 0) {
      param_3[0x12] = auVar22._8_4_;
    }
    if ((uVar78 >> 3 & 1) != 0) {
      param_3[0x13] = auVar22._12_4_;
    }
    bVar21 = auVar83[3] >> 7;
    auVar108[0] = bVar21 & auVar13[0];
    auVar108[1] = bVar21 & auVar13[1];
    auVar108[2] = bVar21 & auVar13[2];
    auVar108[3] = bVar21 & auVar13[3];
    bVar21 = auVar83[7] >> 7;
    auVar108[4] = bVar21 & auVar13[4];
    auVar108[5] = bVar21 & auVar13[5];
    auVar108[6] = bVar21 & auVar13[6];
    auVar108[7] = bVar21 & auVar13[7];
    bVar21 = auVar83[11] >> 7;
    auVar108[8] = bVar21 & auVar13[8];
    auVar108[9] = bVar21 & auVar13[9];
    auVar108[10] = bVar21 & auVar13[10];
    auVar108[11] = bVar21 & auVar13[11];
    bVar21 = auVar83[15] >> 7;
    auVar108[12] = bVar21 & auVar13[12];
    auVar108[13] = bVar21 & auVar13[13];
    auVar108[14] = bVar21 & auVar13[14];
    auVar108[15] = bVar21 & auVar13[15];
    iVar70 = CONCAT13(auVar108[3] & bVar39,
                      CONCAT12(auVar108[2] & bVar38,
                               CONCAT11(auVar108[1] & bVar37,auVar108[0] & bVar25)));
    auVar91._0_8_ =
         CONCAT17(auVar108[7] & bVar43,
                  CONCAT16(auVar108[6] & bVar42,
                           CONCAT15(auVar108[5] & bVar41,CONCAT14(auVar108[4] & bVar40,iVar70))));
    auVar91[8] = auVar108[8] & bVar44;
    auVar91[9] = auVar108[9] & bVar46;
    auVar91[10] = auVar108[10] & bVar47;
    auVar91[11] = auVar108[11] & bVar48;
    auVar94[12] = auVar108[12] & bVar49;
    auVar94._0_12_ = auVar91;
    auVar94[13] = auVar108[13] & bVar51;
    auVar94[14] = auVar108[14] & bVar52;
    auVar94[15] = auVar108[15] & bVar53;
    auVar96 = ZEXT816(0);
    if (uVar78 != iVar70 + (int)((ulong)auVar91._0_8_ >> 0x20) + auVar91._8_4_ + auVar94._12_4_) {
      auVar95._8_8_ = 0xff000000ff;
      auVar95._0_8_ = 0xff000000ff;
      auVar29 = NEON_cmgt(auVar83,auVar95,4);
      auVar22 = NEON_bit(auVar108,auVar13,auVar29,1);
      iVar70 = CONCAT13(auVar22[3] & bVar39,
                        CONCAT12(auVar22[2] & bVar38,
                                 CONCAT11(auVar22[1] & bVar37,auVar22[0] & bVar25)));
      auVar122._0_8_ =
           CONCAT17(auVar22[7] & bVar43,
                    CONCAT16(auVar22[6] & bVar42,
                             CONCAT15(auVar22[5] & bVar41,CONCAT14(auVar22[4] & bVar40,iVar70))));
      auVar122[8] = auVar22[8] & bVar44;
      auVar122[9] = auVar22[9] & bVar46;
      auVar122[10] = auVar22[10] & bVar47;
      auVar122[11] = auVar22[11] & bVar48;
      auVar130[12] = auVar22[12] & bVar49;
      auVar130._0_12_ = auVar122;
      auVar130[13] = auVar22[13] & bVar51;
      auVar130[14] = auVar22[14] & bVar52;
      auVar130[15] = auVar22[15] & bVar53;
      auVar96._1_3_ = 0;
      auVar96[0] = auVar29[0];
      auVar96[4] = auVar29[4];
      auVar96._5_3_ = 0;
      auVar96[8] = auVar29[8];
      auVar96._9_3_ = 0;
      auVar96[12] = auVar29[12];
      auVar96._13_3_ = 0;
      if (uVar78 != iVar70 + (int)((ulong)auVar122._0_8_ >> 0x20) + auVar122._8_4_ + auVar130._12_4_
         ) {
        auVar109._0_4_ = (auVar22._0_4_ << 0x1f) >> 0x1f;
        auVar109._4_4_ = (auVar22._4_4_ << 0x1f) >> 0x1f;
        auVar109._8_4_ = (auVar22._8_4_ << 0x1f) >> 0x1f;
        auVar109._12_4_ = (auVar22._12_4_ << 0x1f) >> 0x1f;
        auVar96 = NEON_bif(auVar96,auVar83,auVar109,1);
      }
    }
    auVar22 = NEON_scvtf(auVar96,4);
    if ((uVar78 & 1) != 0) {
      param_3[0x14] = auVar22._0_4_;
    }
    if ((uVar78 >> 1 & 1) != 0) {
      param_3[0x15] = auVar22._4_4_;
    }
    if ((uVar78 >> 2 & 1) != 0) {
      param_3[0x16] = auVar22._8_4_;
    }
    if ((uVar78 >> 3 & 1) != 0) {
      param_3[0x17] = auVar22._12_4_;
    }
    bVar21 = auVar73[3] >> 7;
    auVar97[0] = bVar21 & auVar13[0];
    auVar97[1] = bVar21 & auVar13[1];
    auVar97[2] = bVar21 & auVar13[2];
    auVar97[3] = bVar21 & auVar13[3];
    bVar21 = auVar73[7] >> 7;
    auVar97[4] = bVar21 & auVar13[4];
    auVar97[5] = bVar21 & auVar13[5];
    auVar97[6] = bVar21 & auVar13[6];
    auVar97[7] = bVar21 & auVar13[7];
    bVar21 = auVar73[11] >> 7;
    auVar97[8] = bVar21 & auVar13[8];
    auVar97[9] = bVar21 & auVar13[9];
    auVar97[10] = bVar21 & auVar13[10];
    auVar97[11] = bVar21 & auVar13[11];
    bVar21 = auVar73[15] >> 7;
    auVar97[12] = bVar21 & auVar13[12];
    auVar97[13] = bVar21 & auVar13[13];
    auVar97[14] = bVar21 & auVar13[14];
    auVar97[15] = bVar21 & auVar13[15];
    iVar70 = CONCAT13(auVar97[3] & bVar39,
                      CONCAT12(auVar97[2] & bVar38,CONCAT11(auVar97[1] & bVar37,auVar97[0] & bVar25)
                              ));
    auVar79._0_8_ =
         CONCAT17(auVar97[7] & bVar43,
                  CONCAT16(auVar97[6] & bVar42,
                           CONCAT15(auVar97[5] & bVar41,CONCAT14(auVar97[4] & bVar40,iVar70))));
    auVar79[8] = auVar97[8] & bVar44;
    auVar79[9] = auVar97[9] & bVar46;
    auVar79[10] = auVar97[10] & bVar47;
    auVar79[11] = auVar97[11] & bVar48;
    auVar84[12] = auVar97[12] & bVar49;
    auVar84._0_12_ = auVar79;
    auVar84[13] = auVar97[13] & bVar51;
    auVar84[14] = auVar97[14] & bVar52;
    auVar84[15] = auVar97[15] & bVar53;
    auVar86 = ZEXT816(0);
    if (uVar78 != iVar70 + (int)((ulong)auVar79._0_8_ >> 0x20) + auVar79._8_4_ + auVar84._12_4_) {
      auVar85._8_8_ = 0xff000000ff;
      auVar85._0_8_ = 0xff000000ff;
      auVar29 = NEON_cmgt(auVar73,auVar85,4);
      auVar22 = NEON_bit(auVar97,auVar13,auVar29,1);
      iVar70 = CONCAT13(auVar22[3] & bVar39,
                        CONCAT12(auVar22[2] & bVar38,
                                 CONCAT11(auVar22[1] & bVar37,auVar22[0] & bVar25)));
      auVar112._0_8_ =
           CONCAT17(auVar22[7] & bVar43,
                    CONCAT16(auVar22[6] & bVar42,
                             CONCAT15(auVar22[5] & bVar41,CONCAT14(auVar22[4] & bVar40,iVar70))));
      auVar112[8] = auVar22[8] & bVar44;
      auVar112[9] = auVar22[9] & bVar46;
      auVar112[10] = auVar22[10] & bVar47;
      auVar112[11] = auVar22[11] & bVar48;
      auVar120[12] = auVar22[12] & bVar49;
      auVar120._0_12_ = auVar112;
      auVar120[13] = auVar22[13] & bVar51;
      auVar120[14] = auVar22[14] & bVar52;
      auVar120[15] = auVar22[15] & bVar53;
      auVar86._1_3_ = 0;
      auVar86[0] = auVar29[0];
      auVar86[4] = auVar29[4];
      auVar86._5_3_ = 0;
      auVar86[8] = auVar29[8];
      auVar86._9_3_ = 0;
      auVar86[12] = auVar29[12];
      auVar86._13_3_ = 0;
      if (uVar78 != iVar70 + (int)((ulong)auVar112._0_8_ >> 0x20) + auVar112._8_4_ + auVar120._12_4_
         ) {
        auVar98._0_4_ = (auVar22._0_4_ << 0x1f) >> 0x1f;
        auVar98._4_4_ = (auVar22._4_4_ << 0x1f) >> 0x1f;
        auVar98._8_4_ = (auVar22._8_4_ << 0x1f) >> 0x1f;
        auVar98._12_4_ = (auVar22._12_4_ << 0x1f) >> 0x1f;
        auVar86 = NEON_bif(auVar86,auVar73,auVar98,1);
      }
    }
    auVar22 = NEON_scvtf(auVar86,4);
    if ((uVar78 & 1) != 0) {
      param_3[0x18] = auVar22._0_4_;
    }
    if ((uVar78 >> 1 & 1) != 0) {
      param_3[0x19] = auVar22._4_4_;
    }
    if ((uVar78 >> 2 & 1) != 0) {
      param_3[0x1a] = auVar22._8_4_;
    }
    if ((uVar78 >> 3 & 1) != 0) {
      param_3[0x1b] = auVar22._12_4_;
    }
    if ((uVar78 & 1) != 0) {
      param_3[0x1c] = 0x437f0000;
    }
    if ((uVar78 >> 1 & 1) != 0) {
      param_3[0x1d] = 0x437f0000;
    }
    if ((uVar78 >> 2 & 1) != 0) {
      param_3[0x1e] = 0x437f0000;
    }
    if ((uVar78 >> 3 & 1) != 0) {
      param_3[0x1f] = 0x437f0000;
    }
    auVar74._8_4_ = 8;
    auVar74._0_8_ = 0x800000008;
    auVar74._12_4_ = 8;
    auVar22 = NEON_cmgt(param_1,auVar74,4);
    auVar9[0] = auVar13[0] & auVar22[0];
    auVar9[1] = auVar13[1] & auVar22[1];
    auVar9[2] = auVar13[2] & auVar22[2];
    auVar9[3] = auVar13[3] & auVar22[3];
    auVar9[4] = auVar13[4] & auVar22[4];
    auVar9[5] = auVar13[5] & auVar22[5];
    auVar9[6] = auVar13[6] & auVar22[6];
    auVar9[7] = auVar13[7] & auVar22[7];
    auVar9[8] = auVar13[8] & auVar22[8];
    auVar9[9] = auVar13[9] & auVar22[9];
    auVar9[10] = auVar13[10] & auVar22[10];
    auVar9[11] = auVar13[11] & auVar22[11];
    auVar9[12] = auVar13[12] & auVar22[12];
    auVar9[13] = auVar13[13] & auVar22[13];
    auVar9[14] = auVar13[14] & auVar22[14];
    auVar9[15] = auVar13[15] & auVar22[15];
    iVar70 = NEON_umaxv(auVar9,4);
    if (iVar70 != 0) {
      iVar70 = (int)cVar60 >> 7;
      iVar131 = (int)cVar63 >> 7;
      iVar20 = (int)cVar66 >> 7;
      auVar75[0] = (byte)iVar70 & auVar9[0];
      auVar75[1] = (byte)((uint)iVar70 >> 8) & auVar9[1];
      auVar75[2] = (byte)((uint)iVar70 >> 0x10) & auVar9[2];
      auVar75[3] = cVar60 >> 7 & auVar9[3];
      auVar75[4] = (byte)iVar131 & auVar9[4];
      auVar75[5] = (byte)((uint)iVar131 >> 8) & auVar9[5];
      auVar75[6] = (byte)((uint)iVar131 >> 0x10) & auVar9[6];
      auVar75[7] = cVar63 >> 7 & auVar9[7];
      auVar75[8] = (byte)iVar20 & auVar9[8];
      auVar75[9] = (byte)((uint)iVar20 >> 8) & auVar9[9];
      auVar75[10] = (byte)((uint)iVar20 >> 0x10) & auVar9[10];
      auVar75[11] = cVar66 >> 7 & auVar9[11];
      bVar21 = cVar69 >> 7;
      auVar75[12] = bVar21 & auVar9[12];
      auVar75[13] = bVar21 & auVar9[13];
      auVar75[14] = bVar21 & auVar9[14];
      auVar75[15] = bVar21 & auVar9[15];
      iVar70 = CONCAT13(auVar9[3] & bVar39,
                        CONCAT12(auVar9[2] & bVar38,CONCAT11(auVar9[1] & bVar37,auVar9[0] & bVar25))
                       );
      auVar11._0_8_ =
           CONCAT17(auVar9[7] & bVar43,
                    CONCAT16(auVar9[6] & bVar42,
                             CONCAT15(auVar9[5] & bVar41,CONCAT14(auVar9[4] & bVar40,iVar70))));
      auVar11[8] = auVar9[8] & bVar44;
      auVar11[9] = auVar9[9] & bVar46;
      auVar11[10] = auVar9[10] & bVar47;
      auVar11[11] = auVar9[11] & bVar48;
      auVar14[12] = auVar9[12] & bVar49;
      auVar14._0_12_ = auVar11;
      auVar14[13] = auVar9[13] & bVar51;
      auVar14[14] = auVar9[14] & bVar52;
      auVar14[15] = auVar9[15] & bVar53;
      iVar131 = CONCAT13(auVar75[3] & bVar39,
                         CONCAT12(auVar75[2] & bVar38,
                                  CONCAT11(auVar75[1] & bVar37,auVar75[0] & bVar25)));
      auVar80._0_8_ =
           CONCAT17(auVar75[7] & bVar43,
                    CONCAT16(auVar75[6] & bVar42,
                             CONCAT15(auVar75[5] & bVar41,CONCAT14(auVar75[4] & bVar40,iVar131))));
      auVar80[8] = auVar75[8] & bVar44;
      auVar80[9] = auVar75[9] & bVar46;
      auVar80[10] = auVar75[10] & bVar47;
      auVar80[11] = auVar75[11] & bVar48;
      auVar87[12] = auVar75[12] & bVar49;
      auVar87._0_12_ = auVar80;
      auVar87[13] = auVar75[13] & bVar51;
      auVar87[14] = auVar75[14] & bVar52;
      auVar87[15] = auVar75[15] & bVar53;
      uVar78 = iVar70 + (int)((ulong)auVar11._0_8_ >> 0x20) + auVar11._8_4_ + auVar14._12_4_;
      auVar16 = ZEXT816(0);
      if (uVar78 != iVar131 + (int)((ulong)auVar80._0_8_ >> 0x20) + auVar80._8_4_ + auVar87._12_4_)
      {
        auVar15._8_8_ = 0xff000000ff;
        auVar15._0_8_ = 0xff000000ff;
        auVar3[1] = uVar56;
        auVar3[0] = bVar54;
        auVar3[2] = uVar58;
        auVar3[3] = cVar60;
        auVar3[4] = bVar55;
        auVar3[5] = uVar61;
        auVar3[6] = uVar62;
        auVar3[7] = cVar63;
        auVar3[8] = bVar57;
        auVar3[9] = uVar64;
        auVar3[10] = uVar65;
        auVar3[11] = cVar66;
        auVar3[12] = bVar59;
        auVar3[13] = uVar67;
        auVar3[14] = uVar68;
        auVar3[15] = cVar69;
        auVar29 = NEON_cmgt(auVar3,auVar15,4);
        auVar22 = NEON_bit(auVar75,auVar9,auVar29,1);
        iVar70 = CONCAT13(auVar22[3] & bVar39,
                          CONCAT12(auVar22[2] & bVar38,
                                   CONCAT11(auVar22[1] & bVar37,auVar22[0] & bVar25)));
        auVar92._0_8_ =
             CONCAT17(auVar22[7] & bVar43,
                      CONCAT16(auVar22[6] & bVar42,
                               CONCAT15(auVar22[5] & bVar41,CONCAT14(auVar22[4] & bVar40,iVar70))));
        auVar92[8] = auVar22[8] & bVar44;
        auVar92[9] = auVar22[9] & bVar46;
        auVar92[10] = auVar22[10] & bVar47;
        auVar92[11] = auVar22[11] & bVar48;
        auVar99[12] = auVar22[12] & bVar49;
        auVar99._0_12_ = auVar92;
        auVar99[13] = auVar22[13] & bVar51;
        auVar99[14] = auVar22[14] & bVar52;
        auVar99[15] = auVar22[15] & bVar53;
        auVar16._1_3_ = 0;
        auVar16[0] = auVar29[0];
        auVar16[4] = auVar29[4];
        auVar16._5_3_ = 0;
        auVar16[8] = auVar29[8];
        auVar16._9_3_ = 0;
        auVar16[12] = auVar29[12];
        auVar16._13_3_ = 0;
        if (uVar78 != iVar70 + (int)((ulong)auVar92._0_8_ >> 0x20) + auVar92._8_4_ + auVar99._12_4_)
        {
          auVar76._0_4_ = (auVar22._0_4_ << 0x1f) >> 0x1f;
          auVar76._4_4_ = (auVar22._4_4_ << 0x1f) >> 0x1f;
          auVar76._8_4_ = (auVar22._8_4_ << 0x1f) >> 0x1f;
          auVar76._12_4_ = (auVar22._12_4_ << 0x1f) >> 0x1f;
          auVar4[1] = uVar56;
          auVar4[0] = bVar54;
          auVar4[2] = uVar58;
          auVar4[3] = cVar60;
          auVar4[4] = bVar55;
          auVar4[5] = uVar61;
          auVar4[6] = uVar62;
          auVar4[7] = cVar63;
          auVar4[8] = bVar57;
          auVar4[9] = uVar64;
          auVar4[10] = uVar65;
          auVar4[11] = cVar66;
          auVar4[12] = bVar59;
          auVar4[13] = uVar67;
          auVar4[14] = uVar68;
          auVar4[15] = cVar69;
          auVar16 = NEON_bif(auVar16,auVar4,auVar76,1);
        }
      }
      auVar22 = NEON_scvtf(auVar16,4);
      if ((uVar78 & 1) != 0) {
        param_3[0xc] = auVar22._0_4_;
      }
      if ((uVar78 >> 1 & 1) != 0) {
        param_3[0xd] = auVar22._4_4_;
      }
      if ((uVar78 >> 2 & 1) != 0) {
        param_3[0xe] = auVar22._8_4_;
      }
      if ((uVar78 >> 3 & 1) != 0) {
        param_3[0xf] = auVar22._12_4_;
      }
      bVar54 = auVar24[3] >> 7;
      bVar55 = auVar24[7] >> 7;
      bVar57 = auVar24[11] >> 7;
      bVar59 = auVar24[15] >> 7;
      iVar70 = CONCAT13(bVar54 & auVar9[3] & bVar39,
                        CONCAT12(bVar54 & auVar9[2] & bVar38,
                                 CONCAT11(bVar54 & auVar9[1] & bVar37,bVar54 & auVar9[0] & bVar25)))
      ;
      auVar12._0_8_ =
           CONCAT17(bVar55 & auVar9[7] & bVar43,
                    CONCAT16(bVar55 & auVar9[6] & bVar42,
                             CONCAT15(bVar55 & auVar9[5] & bVar41,
                                      CONCAT14(bVar55 & auVar9[4] & bVar40,iVar70))));
      auVar12[8] = bVar57 & auVar9[8] & bVar44;
      auVar12[9] = bVar57 & auVar9[9] & bVar46;
      auVar12[10] = bVar57 & auVar9[10] & bVar47;
      auVar12[11] = bVar57 & auVar9[11] & bVar48;
      auVar17[12] = bVar59 & auVar9[12] & bVar49;
      auVar17._0_12_ = auVar12;
      auVar17[13] = bVar59 & auVar9[13] & bVar51;
      auVar17[14] = bVar59 & auVar9[14] & bVar52;
      auVar17[15] = bVar59 & auVar9[15] & bVar53;
      auVar19 = ZEXT816(0);
      if (uVar78 != iVar70 + (int)((ulong)auVar12._0_8_ >> 0x20) + auVar12._8_4_ + auVar17._12_4_) {
        auVar18._8_8_ = 0xff000000ff;
        auVar18._0_8_ = 0xff000000ff;
        auVar29 = NEON_cmgt(auVar24,auVar18,4);
        auVar5[1] = bVar54 & auVar9[1];
        auVar5[0] = bVar54 & auVar9[0];
        auVar5[2] = bVar54 & auVar9[2];
        auVar5[3] = bVar54 & auVar9[3];
        auVar5[4] = bVar55 & auVar9[4];
        auVar5[5] = bVar55 & auVar9[5];
        auVar5[6] = bVar55 & auVar9[6];
        auVar5[7] = bVar55 & auVar9[7];
        auVar5[8] = bVar57 & auVar9[8];
        auVar5[9] = bVar57 & auVar9[9];
        auVar5[10] = bVar57 & auVar9[10];
        auVar5[11] = bVar57 & auVar9[11];
        auVar5[12] = bVar59 & auVar9[12];
        auVar5[13] = bVar59 & auVar9[13];
        auVar5[14] = bVar59 & auVar9[14];
        auVar5[15] = bVar59 & auVar9[15];
        auVar22 = NEON_bif(auVar9,auVar5,auVar29,1);
        iVar70 = CONCAT13(auVar22[3] & bVar39,
                          CONCAT12(auVar22[2] & bVar38,
                                   CONCAT11(auVar22[1] & bVar37,auVar22[0] & bVar25)));
        auVar28._0_8_ =
             CONCAT17(auVar22[7] & bVar43,
                      CONCAT16(auVar22[6] & bVar42,
                               CONCAT15(auVar22[5] & bVar41,CONCAT14(auVar22[4] & bVar40,iVar70))));
        auVar28[8] = auVar22[8] & bVar44;
        auVar28[9] = auVar22[9] & bVar46;
        auVar28[10] = auVar22[10] & bVar47;
        auVar28[11] = auVar22[11] & bVar48;
        auVar35[12] = auVar22[12] & bVar49;
        auVar35._0_12_ = auVar28;
        auVar35[13] = auVar22[13] & bVar51;
        auVar35[14] = auVar22[14] & bVar52;
        auVar35[15] = auVar22[15] & bVar53;
        auVar19._1_3_ = 0;
        auVar19[0] = auVar29[0];
        auVar19[4] = auVar29[4];
        auVar19._5_3_ = 0;
        auVar19[8] = auVar29[8];
        auVar19._9_3_ = 0;
        auVar19[12] = auVar29[12];
        auVar19._13_3_ = 0;
        if (uVar78 != iVar70 + (int)((ulong)auVar28._0_8_ >> 0x20) + auVar28._8_4_ + auVar35._12_4_)
        {
          auVar10._0_4_ = (auVar22._0_4_ << 0x1f) >> 0x1f;
          auVar10._4_4_ = (auVar22._4_4_ << 0x1f) >> 0x1f;
          auVar10._8_4_ = (auVar22._8_4_ << 0x1f) >> 0x1f;
          auVar10._12_4_ = (auVar22._12_4_ << 0x1f) >> 0x1f;
          auVar19 = NEON_bif(auVar19,auVar24,auVar10,1);
        }
      }
      auVar22 = NEON_scvtf(auVar19,4);
      if ((uVar78 & 1) != 0) {
        param_3[0x1c] = auVar22._0_4_;
      }
      if ((uVar78 >> 1 & 1) != 0) {
        param_3[0x1d] = auVar22._4_4_;
      }
      if ((uVar78 >> 2 & 1) != 0) {
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
        param_3[0x1e] = auVar22._8_4_;
      }
      if ((uVar78 >> 3 & 1) != 0) {
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
        param_3[0x1f] = auVar22._12_4_;
        return;
      }
    }
  }
  return;
}


