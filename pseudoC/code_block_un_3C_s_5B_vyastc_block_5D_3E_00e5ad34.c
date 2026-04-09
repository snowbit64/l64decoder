// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: code_block___un_3C_s_5B_vyastc_block_5D__3E_
// Entry Point: 00e5ad34
// Size: 1112 bytes
// Signature: undefined code_block___un_3C_s_5B_vyastc_block_5D__3E_(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void code_block___un_3C_s_5B_vyastc_block_5D__3E_(undefined param_1 [16],int *param_2)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  ushort uVar9;
  ushort uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  byte bVar14;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined auVar15 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined2 uVar32;
  ushort uVar38;
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  uint uVar39;
  int iVar40;
  undefined auVar41 [12];
  int iVar47;
  int iVar48;
  int iVar49;
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar46 [16];
  undefined auVar50 [16];
  byte bVar51;
  byte bVar53;
  byte bVar54;
  int iVar52;
  byte bVar55;
  byte bVar57;
  int iVar56;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  int iVar60;
  byte bVar62;
  byte bVar65;
  int iVar63;
  int iVar64;
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  ulong uVar76;
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar45 [16];
  
  bVar18 = param_1[12];
  bVar17 = param_1[8];
  bVar16 = param_1[4];
  bVar14 = param_1[0];
  auVar19._8_4_ = 0x5556;
  auVar19._0_8_ = 0x555600005556;
  auVar19._12_4_ = 0x5556;
  auVar20._8_4_ = 5;
  auVar20._0_8_ = 0x500000005;
  auVar20._12_4_ = 5;
  auVar28._8_4_ = 2;
  auVar28._0_8_ = 0x200000002;
  auVar28._12_4_ = 2;
  uVar39 = (uint)(bVar14 & SUB161(_DAT_004c4480,0)) + (uint)(bVar16 & SUB161(_DAT_004c4480,4)) +
           (uint)(bVar17 & SUB161(_DAT_004c4480,8)) + (uint)(bVar18 & SUB161(_DAT_004c4480,0xc));
  iVar40 = 1;
  if (*(char *)(param_2 + 2) != '\0') {
    iVar40 = 2;
  }
  auVar26._8_4_ = 3;
  auVar26._0_8_ = 0x300000003;
  auVar26._12_4_ = 3;
  uVar1 = param_2[1] * *param_2 * iVar40;
  if (0 < (int)uVar1) {
    auVar42 = *(undefined (*) [16])(param_2 + 4);
    iVar52 = auVar42._0_4_ * 0x5556 >> 0x10;
    iVar56 = auVar42._4_4_ * 0x5556 >> 0x10;
    iVar60 = auVar42._8_4_ * 0x5556 >> 0x10;
    iVar63 = auVar42._12_4_ * 0x5556 >> 0x10;
    auVar66 = NEON_cmeq(auVar42,0,2);
    iVar40 = auVar42._0_4_ + iVar52 * -3;
    iVar47 = auVar42._4_4_ + iVar56 * -3;
    iVar48 = auVar42._8_4_ + iVar60 * -3;
    iVar49 = auVar42._12_4_ + iVar63 * -3;
    auVar50._0_4_ = iVar40 * -2 + 5;
    auVar50._4_4_ = iVar47 * -2 + 5;
    auVar50._8_4_ = iVar48 * -2 + 5;
    auVar50._12_4_ = iVar49 * -2 + 5;
    auVar42._0_4_ = iVar40 + iVar52 + -1;
    auVar42._4_4_ = iVar47 + iVar56 + -1;
    auVar42._8_4_ = iVar48 + iVar60 + -1;
    auVar42._12_4_ = iVar49 + iVar63 + -1;
    auVar50 = NEON_smax(auVar28,auVar50,4);
    auVar71 = NEON_smax(auVar42,ZEXT816(0),4);
    auVar42 = NEON_bsl(auVar66,auVar28,auVar50,1);
    auVar50 = NEON_ushl(auVar42,auVar71,4);
    auVar66 = NEON_cmeq(auVar42,auVar28,4);
    auVar67 = NEON_cmgt(auVar50,auVar20,4);
    bVar51 = auVar67[0] & ~auVar66[0];
    bVar53 = auVar67[1] & ~auVar66[1];
    uVar32 = CONCAT11(bVar53,bVar51);
    bVar54 = auVar67[2] & ~auVar66[2];
    bVar55 = auVar67[4] & ~auVar66[4];
    bVar57 = auVar67[5] & ~auVar66[5];
    uVar9 = CONCAT11(bVar57,bVar55);
    bVar58 = auVar67[7] & ~auVar66[7];
    bVar59 = auVar67[8] & ~auVar66[8];
    bVar61 = auVar67[9] & ~auVar66[9];
    bVar62 = auVar67[12] & ~auVar66[12];
    bVar65 = auVar67[13] & ~auVar66[13];
    uVar10 = CONCAT11(bVar65,bVar62);
    auVar68[0] = bVar14 & bVar51;
    auVar68[1] = param_1[1] & bVar53;
    auVar68[2] = param_1[2] & bVar54;
    auVar68[3] = param_1[3] & auVar67[3] & ~auVar66[3];
    auVar68[4] = bVar16 & bVar55;
    auVar68[5] = param_1[5] & bVar57;
    auVar68[6] = param_1[6] & auVar67[6] & ~auVar66[6];
    auVar68[7] = param_1[7] & bVar58;
    auVar68[8] = bVar17 & bVar59;
    auVar68[9] = param_1[9] & bVar61;
    auVar68[10] = param_1[10] & auVar67[10] & ~auVar66[10];
    auVar68[11] = param_1[11] & auVar67[11] & ~auVar66[11];
    auVar68[12] = bVar18 & bVar62;
    auVar68[13] = param_1[13] & bVar65;
    auVar68[14] = param_1[14] & auVar67[14] & ~auVar66[14];
    auVar68[15] = param_1[15] & auVar67[15] & ~auVar66[15];
    iVar40 = NEON_umaxv(auVar68,4);
    uVar11 = (ulong)uVar1;
    if (iVar40 == 0) {
      piVar12 = param_2 + 8;
      do {
        if ((uVar39 & 1) != 0) {
          *(undefined *)piVar12 = *(undefined *)piVar12;
        }
        if ((uVar39 >> 1 & 1) != 0) {
          *(undefined *)((long)piVar12 + 1) = *(undefined *)((long)piVar12 + 1);
        }
        if ((uVar39 >> 2 & 1) != 0) {
          *(undefined *)((long)piVar12 + 2) = *(undefined *)((long)piVar12 + 2);
        }
        if ((uVar39 >> 3 & 1) != 0) {
          *(undefined *)((long)piVar12 + 3) = *(undefined *)((long)piVar12 + 3);
        }
        piVar12 = piVar12 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    else {
      auVar69._8_8_ = 0;
      auVar69._0_8_ = (ulong)uVar39 & 8;
      auVar66 = NEON_cmeq(auVar69,ZEXT816(0),8);
      auVar74._0_8_ = auVar66._0_8_;
      auVar74._8_8_ = auVar74._0_8_;
      uVar38 = (ushort)(CONCAT12(bVar61,CONCAT11(bVar59,bVar58)) >> 8);
      auVar67 = NEON_cmeq(auVar42,auVar26,4);
      auVar68 = NEON_bsl(auVar74,auVar71,auVar71,1);
      auVar74 = NEON_cmeq(auVar42,auVar20,4);
      auVar66._8_4_ = 0x8001;
      auVar66._0_8_ = 0x800100008001;
      auVar66._12_4_ = 0x8001;
      auVar66 = NEON_bsl(auVar67,auVar19,auVar66,1);
      auVar67[8] = 0x34;
      auVar67._0_8_ = 0x333400003334;
      auVar67[9] = 0x33;
      auVar67._10_2_ = 0;
      auVar67[12] = 0x34;
      auVar67[13] = 0x33;
      auVar67._14_2_ = 0;
      auVar66 = NEON_bsl(auVar74,auVar67,auVar66,1);
      auVar70._0_4_ = auVar50._0_4_ / 2;
      auVar70._4_4_ = auVar50._4_4_ / 2;
      auVar70._8_4_ = auVar50._8_4_ / 2;
      auVar70._12_4_ = auVar50._12_4_ / 2;
      auVar72._0_4_ = auVar71._0_4_ + -1;
      auVar72._4_4_ = auVar71._4_4_ + -1;
      auVar72._8_4_ = auVar71._8_4_ + -1;
      auVar72._12_4_ = auVar68._12_4_ + -1;
      iVar40 = (int)((uint)CONCAT12(bVar54,uVar32) << 0x1f) >> 0x1f;
      iVar47 = (int)((uint)uVar9 << 0x1f) >> 0x1f;
      iVar48 = (int)((uint)uVar38 << 0x1f) >> 0x1f;
      iVar49 = (int)((uint)uVar10 << 0x1f) >> 0x1f;
      piVar12 = param_2 + 8;
      do {
        auVar73._1_3_ = 0;
        auVar73[0] = *(byte *)piVar12;
        auVar73[4] = *(byte *)((long)piVar12 + 1);
        auVar73._5_3_ = 0;
        auVar73[8] = *(byte *)((long)piVar12 + 2);
        auVar73._9_3_ = 0;
        auVar73[12] = *(byte *)((long)piVar12 + 3);
        auVar73._13_3_ = 0;
        auVar67 = NEON_cmge(auVar73,auVar70,4);
        uVar76 = CONCAT26(auVar67._12_2_,
                          CONCAT24(auVar67._8_2_,CONCAT22(auVar67._4_2_,auVar67._0_2_))) &
                 CONCAT26(uVar10,CONCAT24(uVar38,CONCAT22(uVar9,uVar32)));
        auVar77._0_4_ = (int)((uint)(ushort)uVar76 << 0x1f) >> 0x1f;
        auVar77._4_4_ = (int)((uint)(ushort)(uVar76 >> 0x10) << 0x1f) >> 0x1f;
        auVar77._8_4_ = (int)((uint)(ushort)(uVar76 >> 0x20) << 0x1f) >> 0x1f;
        auVar77._12_4_ = (int)((uint)(ushort)(uVar76 >> 0x30) << 0x1f) >> 0x1f;
        iVar52 = auVar50._4_4_ +
                 CONCAT13(0xff,CONCAT12(0xff,CONCAT11(0xff,~*(byte *)((long)piVar12 + 1))));
        iVar56 = auVar50._8_4_ +
                 CONCAT13(0xff,CONCAT12(0xff,CONCAT11(0xff,~*(byte *)((long)piVar12 + 2))));
        iVar60 = auVar50._12_4_ +
                 CONCAT13(0xff,CONCAT12(0xff,CONCAT11(0xff,~*(byte *)((long)piVar12 + 3))));
        auVar8[4] = (char)iVar52;
        auVar8._0_4_ = auVar50._0_4_ +
                       CONCAT13(0xff,CONCAT12(0xff,CONCAT11(0xff,~*(byte *)piVar12)));
        auVar8[5] = (char)((uint)iVar52 >> 8);
        auVar8[6] = (char)((uint)iVar52 >> 0x10);
        auVar8[7] = (char)((uint)iVar52 >> 0x18);
        auVar8[8] = (char)iVar56;
        auVar8[9] = (char)((uint)iVar56 >> 8);
        auVar8[10] = (char)((uint)iVar56 >> 0x10);
        auVar8[11] = (char)((uint)iVar56 >> 0x18);
        auVar8[12] = (char)iVar60;
        auVar8[13] = (char)((uint)iVar60 >> 8);
        auVar8[14] = (char)((uint)iVar60 >> 0x10);
        auVar8[15] = (char)((uint)iVar60 >> 0x18);
        auVar68 = NEON_bsl(auVar77,auVar8,auVar73,1);
        iVar52 = auVar68._0_4_ * auVar66._0_4_ >> 0x10;
        iVar56 = auVar68._4_4_ * auVar66._4_4_ >> 0x10;
        iVar60 = auVar68._8_4_ * auVar66._8_4_ >> 0x10;
        iVar63 = auVar68._12_4_ * auVar66._12_4_ >> 0x10;
        auVar78._0_4_ = auVar68._0_4_ - iVar52 * auVar42._0_4_;
        auVar78._4_4_ = auVar68._4_4_ - iVar56 * auVar42._4_4_;
        auVar78._8_4_ = auVar68._8_4_ - iVar60 * auVar42._8_4_;
        auVar78._12_4_ = auVar68._12_4_ - iVar63 * auVar42._12_4_;
        auVar68 = NEON_ushl(auVar78,auVar72,4);
        auVar79._0_4_ = auVar68._0_4_ + iVar52;
        auVar79._4_4_ = auVar68._4_4_ + iVar56;
        auVar79._8_4_ = auVar68._8_4_ + iVar60;
        auVar79._12_4_ = auVar68._12_4_ + iVar63;
        auVar71._4_4_ = iVar47;
        auVar71._0_4_ = iVar40;
        auVar71._8_4_ = iVar48;
        auVar71._12_4_ = iVar49;
        auVar68 = NEON_bif(auVar79,auVar73,auVar71,1);
        auVar75._0_4_ = auVar68._0_4_ * 2 - auVar67._0_4_;
        auVar75._4_4_ = auVar68._4_4_ * 2 - auVar67._4_4_;
        auVar75._8_4_ = auVar68._8_4_ * 2 - auVar67._8_4_;
        auVar75._12_4_ = auVar68._12_4_ * 2 - auVar67._12_4_;
        auVar7._4_4_ = iVar47;
        auVar7._0_4_ = iVar40;
        auVar7._8_4_ = iVar48;
        auVar7._12_4_ = iVar49;
        auVar67 = NEON_bit(auVar73,auVar75,auVar7,1);
        if ((uVar39 & 1) != 0) {
          *(char *)piVar12 = auVar67[0];
        }
        if ((uVar39 >> 1 & 1) != 0) {
          *(char *)((long)piVar12 + 1) = auVar67[4];
        }
        if ((uVar39 >> 2 & 1) != 0) {
          *(char *)((long)piVar12 + 2) = auVar67[8];
        }
        if ((uVar39 >> 3 & 1) != 0) {
          *(char *)((long)piVar12 + 3) = auVar67[12];
        }
        piVar12 = piVar12 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  iVar40 = param_2[0x54] * 2;
  if (0 < iVar40) {
    auVar42 = *(undefined (*) [16])(param_2 + 0x68);
    iVar56 = auVar42._0_4_ * 0x5556 >> 0x10;
    iVar60 = auVar42._4_4_ * 0x5556 >> 0x10;
    iVar63 = auVar42._8_4_ * 0x5556 >> 0x10;
    iVar64 = auVar42._12_4_ * 0x5556 >> 0x10;
    auVar66 = NEON_cmeq(auVar42,0,2);
    iVar47 = auVar42._0_4_ + iVar56 * -3;
    iVar48 = auVar42._4_4_ + iVar60 * -3;
    iVar49 = auVar42._8_4_ + iVar63 * -3;
    iVar52 = auVar42._12_4_ + iVar64 * -3;
    auVar30._0_4_ = iVar47 * -2 + 5;
    auVar30._4_4_ = iVar48 * -2 + 5;
    auVar30._8_4_ = iVar49 * -2 + 5;
    auVar30._12_4_ = iVar52 * -2 + 5;
    auVar29._0_4_ = iVar47 + iVar56 + -1;
    auVar29._4_4_ = iVar48 + iVar60 + -1;
    auVar29._8_4_ = iVar49 + iVar63 + -1;
    auVar29._12_4_ = iVar52 + iVar64 + -1;
    auVar42 = NEON_smax(auVar28,auVar30,4);
    auVar50 = NEON_smax(auVar29,ZEXT816(0),4);
    auVar28 = NEON_bif(auVar28,auVar42,auVar66,1);
    auVar33._8_4_ = 2;
    auVar33._0_8_ = 0x200000002;
    auVar33._12_4_ = 2;
    auVar42 = NEON_ushl(auVar28,auVar50,4);
    auVar43._8_4_ = 5;
    auVar43._0_8_ = 0x500000005;
    auVar43._12_4_ = 5;
    auVar66 = NEON_cmeq(auVar28,auVar33,4);
    auVar67 = NEON_cmgt(auVar42,auVar43,4);
    bVar51 = auVar67[0] & ~auVar66[0];
    bVar53 = auVar67[1] & ~auVar66[1];
    uVar32 = CONCAT11(bVar53,bVar51);
    bVar54 = auVar67[2] & ~auVar66[2];
    bVar55 = auVar67[4] & ~auVar66[4];
    bVar57 = auVar67[5] & ~auVar66[5];
    uVar9 = CONCAT11(bVar57,bVar55);
    bVar58 = auVar67[7] & ~auVar66[7];
    bVar59 = auVar67[8] & ~auVar66[8];
    bVar61 = auVar67[9] & ~auVar66[9];
    bVar62 = auVar67[12] & ~auVar66[12];
    bVar65 = auVar67[13] & ~auVar66[13];
    uVar10 = CONCAT11(bVar65,bVar62);
    auVar15[0] = bVar14 & bVar51;
    auVar15[1] = param_1[1] & bVar53;
    auVar15[2] = param_1[2] & bVar54;
    auVar15[3] = param_1[3] & auVar67[3] & ~auVar66[3];
    auVar15[4] = bVar16 & bVar55;
    auVar15[5] = param_1[5] & bVar57;
    auVar15[6] = param_1[6] & auVar67[6] & ~auVar66[6];
    auVar15[7] = param_1[7] & bVar58;
    auVar15[8] = bVar17 & bVar59;
    auVar15[9] = param_1[9] & bVar61;
    auVar15[10] = param_1[10] & auVar67[10] & ~auVar66[10];
    auVar15[11] = param_1[11] & auVar67[11] & ~auVar66[11];
    auVar15[12] = bVar18 & bVar62;
    auVar15[13] = param_1[13] & bVar65;
    auVar15[14] = param_1[14] & auVar67[14] & ~auVar66[14];
    auVar15[15] = param_1[15] & auVar67[15] & ~auVar66[15];
    iVar47 = NEON_umaxv(auVar15,4);
    if (iVar47 == 0) {
      lVar13 = 0;
      param_2 = param_2 + 0x6c;
      do {
        if ((uVar39 & 1) != 0) {
          *(undefined *)param_2 = *(undefined *)param_2;
        }
        if ((uVar39 >> 1 & 1) != 0) {
          *(undefined *)((long)param_2 + 1) = *(undefined *)((long)param_2 + 1);
        }
        if ((uVar39 >> 2 & 1) != 0) {
          *(undefined *)((long)param_2 + 2) = *(undefined *)((long)param_2 + 2);
        }
        if ((uVar39 >> 3 & 1) != 0) {
          *(undefined *)((long)param_2 + 3) = *(undefined *)((long)param_2 + 3);
        }
        lVar13 = lVar13 + 1;
        param_2 = param_2 + 1;
      } while (lVar13 < iVar40);
    }
    else {
      lVar13 = 0;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = (ulong)uVar39 & 8;
      auVar66 = NEON_cmeq(auVar44,ZEXT816(0),8);
      uVar38 = (ushort)(CONCAT12(bVar61,CONCAT11(bVar59,bVar58)) >> 8);
      auVar26 = NEON_cmeq(auVar28,auVar26,4);
      auVar34._8_8_ = auVar66._0_8_;
      auVar34._0_8_ = auVar66._0_8_;
      auVar66 = NEON_bsl(auVar34,auVar50,auVar50,1);
      auVar2._8_4_ = 0x8001;
      auVar2._0_8_ = 0x800100008001;
      auVar2._12_4_ = 0x8001;
      auVar19 = NEON_bif(auVar19,auVar2,auVar26,1);
      auVar20 = NEON_cmeq(auVar28,auVar20,4);
      auVar4[8] = 0x34;
      auVar4._0_8_ = 0x333400003334;
      auVar4[9] = 0x33;
      auVar4._10_2_ = 0;
      auVar4[12] = 0x34;
      auVar4[13] = 0x33;
      auVar4._14_2_ = 0;
      auVar19 = NEON_bit(auVar19,auVar4,auVar20,1);
      auVar21._0_4_ = auVar42._0_4_ / 2;
      auVar21._4_4_ = auVar42._4_4_ / 2;
      auVar21._8_4_ = auVar42._8_4_ / 2;
      auVar21._12_4_ = auVar42._12_4_ / 2;
      cVar22 = (char)((int)((uint)CONCAT12(bVar54,uVar32) << 0x1f) >> 0x1f);
      cVar23 = (char)((int)((uint)uVar9 << 0x1f) >> 0x1f);
      cVar24 = (char)((int)((uint)uVar38 << 0x1f) >> 0x1f);
      cVar25 = (char)((int)((uint)uVar10 << 0x1f) >> 0x1f);
      param_2 = param_2 + 0x6c;
      do {
        auVar27._1_3_ = 0;
        auVar27[0] = *(byte *)param_2;
        auVar27[4] = *(byte *)((long)param_2 + 1);
        auVar27._5_3_ = 0;
        auVar27[8] = *(byte *)((long)param_2 + 2);
        auVar27._9_3_ = 0;
        auVar27[12] = *(byte *)((long)param_2 + 3);
        auVar27._13_3_ = 0;
        auVar20 = NEON_cmge(auVar27,auVar21,4);
        uVar11 = CONCAT26(auVar20._12_2_,
                          CONCAT24(auVar20._8_2_,CONCAT22(auVar20._4_2_,auVar20._0_2_))) &
                 CONCAT26(uVar10,CONCAT24(uVar38,CONCAT22(uVar9,uVar32)));
        iVar47 = CONCAT13(0xff,CONCAT12(0xff,CONCAT11(0xff,~*(byte *)param_2)));
        auVar41._0_8_ =
             CONCAT17(0xff,CONCAT16(0xff,CONCAT15(0xff,CONCAT14(~*(byte *)((long)param_2 + 1),iVar47
                                                               ))));
        auVar41[8] = ~*(byte *)((long)param_2 + 2);
        auVar41[9] = 0xff;
        auVar41[10] = 0xff;
        auVar41[11] = 0xff;
        auVar45[12] = ~*(byte *)((long)param_2 + 3);
        auVar45._0_12_ = auVar41;
        auVar45[13] = 0xff;
        auVar45[14] = 0xff;
        auVar45[15] = 0xff;
        auVar35._0_4_ = (int)((uint)(ushort)uVar11 << 0x1f) >> 0x1f;
        auVar35._4_4_ = (int)((uint)(ushort)(uVar11 >> 0x10) << 0x1f) >> 0x1f;
        auVar35._8_4_ = (int)((uint)(ushort)(uVar11 >> 0x20) << 0x1f) >> 0x1f;
        auVar35._12_4_ = (int)((uint)(ushort)(uVar11 >> 0x30) << 0x1f) >> 0x1f;
        auVar46._0_4_ = auVar42._0_4_ + iVar47;
        auVar46._4_4_ = auVar42._4_4_ + (int)((ulong)auVar41._0_8_ >> 0x20);
        auVar46._8_4_ = auVar42._8_4_ + auVar41._8_4_;
        auVar46._12_4_ = auVar42._12_4_ + auVar45._12_4_;
        auVar26 = NEON_bsl(auVar35,auVar46,auVar27,1);
        iVar47 = auVar26._0_4_ * auVar19._0_4_ >> 0x10;
        iVar48 = auVar26._4_4_ * auVar19._4_4_ >> 0x10;
        iVar49 = auVar26._8_4_ * auVar19._8_4_ >> 0x10;
        iVar52 = auVar26._12_4_ * auVar19._12_4_ >> 0x10;
        auVar36._0_4_ = auVar26._0_4_ - iVar47 * auVar28._0_4_;
        auVar36._4_4_ = auVar26._4_4_ - iVar48 * auVar28._4_4_;
        auVar36._8_4_ = auVar26._8_4_ - iVar49 * auVar28._8_4_;
        auVar36._12_4_ = auVar26._12_4_ - iVar52 * auVar28._12_4_;
        auVar3._4_4_ = auVar50._4_4_ + -1;
        auVar3._0_4_ = auVar50._0_4_ + -1;
        auVar3._8_4_ = auVar50._8_4_ + -1;
        auVar3._12_4_ = auVar66._12_4_ + -1;
        auVar26 = NEON_ushl(auVar36,auVar3,4);
        auVar37._0_4_ = auVar26._0_4_ + iVar47;
        auVar37._4_4_ = auVar26._4_4_ + iVar48;
        auVar37._8_4_ = auVar26._8_4_ + iVar49;
        auVar37._12_4_ = auVar26._12_4_ + iVar52;
        auVar5[1] = cVar22;
        auVar5[0] = cVar22;
        auVar5[2] = cVar22;
        auVar5[3] = cVar22;
        auVar5[4] = cVar23;
        auVar5[5] = cVar23;
        auVar5[6] = cVar23;
        auVar5[7] = cVar23;
        auVar5[8] = cVar24;
        auVar5[9] = cVar24;
        auVar5[10] = cVar24;
        auVar5[11] = cVar24;
        auVar5[12] = cVar25;
        auVar5[13] = cVar25;
        auVar5[14] = cVar25;
        auVar5[15] = cVar25;
        auVar26 = NEON_bif(auVar37,auVar27,auVar5,1);
        auVar31._0_4_ = auVar26._0_4_ * 2 - auVar20._0_4_;
        auVar31._4_4_ = auVar26._4_4_ * 2 - auVar20._4_4_;
        auVar31._8_4_ = auVar26._8_4_ * 2 - auVar20._8_4_;
        auVar31._12_4_ = auVar26._12_4_ * 2 - auVar20._12_4_;
        auVar6[1] = cVar22;
        auVar6[0] = cVar22;
        auVar6[2] = cVar22;
        auVar6[3] = cVar22;
        auVar6[4] = cVar23;
        auVar6[5] = cVar23;
        auVar6[6] = cVar23;
        auVar6[7] = cVar23;
        auVar6[8] = cVar24;
        auVar6[9] = cVar24;
        auVar6[10] = cVar24;
        auVar6[11] = cVar24;
        auVar6[12] = cVar25;
        auVar6[13] = cVar25;
        auVar6[14] = cVar25;
        auVar6[15] = cVar25;
        auVar20 = NEON_bit(auVar27,auVar31,auVar6,1);
        if ((uVar39 & 1) != 0) {
          *(char *)param_2 = auVar20[0];
        }
        if ((uVar39 >> 1 & 1) != 0) {
          *(char *)((long)param_2 + 1) = auVar20[4];
        }
        if ((uVar39 >> 2 & 1) != 0) {
          *(char *)((long)param_2 + 2) = auVar20[8];
        }
        if ((uVar39 >> 3 & 1) != 0) {
          *(char *)((long)param_2 + 3) = auVar20[12];
        }
        lVar13 = lVar13 + 1;
        param_2 = param_2 + 1;
      } while (lVar13 < iVar40);
    }
  }
  return;
}


