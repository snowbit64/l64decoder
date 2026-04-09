// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rotate_plane___un_3C_s_5B_vypixel_set_5D__3E_vyi
// Entry Point: 00e52158
// Size: 608 bytes
// Signature: undefined rotate_plane___un_3C_s_5B_vypixel_set_5D__3E_vyi(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rotate_plane___un_3C_s_5B_vypixel_set_5D__3E_vyi
               (undefined param_1 [16],undefined param_2 [16],long *param_3)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined auVar6 [16];
  undefined4 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  byte bVar18;
  byte bVar22;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined2 uVar35;
  ushort uVar39;
  undefined auVar38 [16];
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined2 uVar54;
  ushort uVar59;
  undefined auVar57 [16];
  undefined auVar58 [16];
  short sVar60;
  short sVar61;
  int iVar62;
  int iVar63;
  short sVar64;
  short sVar65;
  int iVar66;
  int iVar67;
  undefined auVar68 [16];
  undefined8 uVar69;
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined4 uVar76;
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined6 uVar36;
  undefined auVar37 [14];
  undefined6 uVar55;
  undefined auVar56 [14];
  
  iVar4 = *(int *)((long)param_3 + 0xc);
  if (0 < iVar4) {
    iVar12 = 0;
    auVar75._8_4_ = 1;
    auVar75._0_8_ = 0x100000001;
    auVar75._12_4_ = 1;
    auVar57 = NEON_cmeq(param_1,0,2);
    auVar38 = NEON_cmeq(param_1,auVar75,4);
    auVar16[8] = 2;
    auVar16._0_8_ = 0x200000002;
    auVar16._9_3_ = 0;
    auVar16[12] = 2;
    auVar16._13_3_ = 0;
    auVar16 = NEON_cmeq(param_1,auVar16,4);
    bVar18 = param_2[0];
    bVar40 = bVar18 & auVar57[0];
    bVar20 = param_2[1];
    bVar41 = bVar20 & auVar57[1];
    bVar21 = param_2[2];
    bVar22 = param_2[3];
    bVar23 = param_2[4];
    bVar42 = bVar23 & auVar57[4];
    bVar24 = param_2[5];
    bVar43 = bVar24 & auVar57[5];
    bVar25 = param_2[6];
    bVar44 = bVar25 & auVar57[6];
    bVar26 = param_2[7];
    bVar45 = bVar26 & auVar57[7];
    bVar27 = param_2[8];
    bVar46 = bVar27 & auVar57[8];
    bVar28 = param_2[9];
    bVar47 = bVar28 & auVar57[9];
    bVar29 = param_2[10];
    bVar48 = bVar29 & auVar57[10];
    bVar30 = param_2[11];
    bVar49 = bVar30 & auVar57[11];
    bVar31 = param_2[12];
    bVar50 = bVar31 & auVar57[12];
    bVar32 = param_2[13];
    bVar51 = bVar32 & auVar57[13];
    bVar33 = param_2[14];
    bVar52 = bVar33 & auVar57[14];
    bVar34 = param_2[15];
    bVar53 = bVar34 & auVar57[15];
    uVar35 = CONCAT11(bVar20 & auVar38[1],bVar18 & auVar38[0]);
    uVar36 = CONCAT15(bVar24 & auVar38[5],
                      CONCAT14(bVar23 & auVar38[4],
                               CONCAT13(bVar22 & auVar38[3],CONCAT12(bVar21 & auVar38[2],uVar35))));
    auVar37._0_10_ =
         CONCAT19(bVar28 & auVar38[9],
                  CONCAT18(bVar27 & auVar38[8],
                           CONCAT17(bVar26 & auVar38[7],CONCAT16(bVar25 & auVar38[6],uVar36))));
    auVar37[10] = bVar29 & auVar38[10];
    auVar37[11] = bVar30 & auVar38[11];
    auVar37[12] = bVar31 & auVar38[12];
    auVar37[13] = bVar32 & auVar38[13];
    auVar77[14] = bVar33 & auVar38[14];
    auVar77._0_14_ = auVar37;
    auVar77[15] = bVar34 & auVar38[15];
    uVar54 = CONCAT11(bVar20 & auVar16[1],bVar18 & auVar16[0]);
    uVar55 = CONCAT15(bVar24 & auVar16[5],
                      CONCAT14(bVar23 & auVar16[4],
                               CONCAT13(bVar22 & auVar16[3],CONCAT12(bVar21 & auVar16[2],uVar54))));
    auVar56._0_10_ =
         CONCAT19(bVar28 & auVar16[9],
                  CONCAT18(bVar27 & auVar16[8],
                           CONCAT17(bVar26 & auVar16[7],CONCAT16(bVar25 & auVar16[6],uVar55))));
    auVar56[10] = bVar29 & auVar16[10];
    auVar56[11] = bVar30 & auVar16[11];
    auVar56[12] = bVar31 & auVar16[12];
    auVar56[13] = bVar32 & auVar16[13];
    auVar80[14] = bVar33 & auVar16[14];
    auVar80._0_14_ = auVar56;
    auVar80[15] = bVar34 & auVar16[15];
    auVar17._6_2_ = CONCAT11(bVar51,bVar50);
    auVar17._4_2_ = CONCAT11(bVar47,bVar46);
    uVar39 = (ushort)((uint6)uVar36 >> 0x20);
    uVar59 = (ushort)((uint6)uVar55 >> 0x20);
    auVar38[1] = bVar41;
    auVar38[0] = bVar40;
    auVar38[2] = bVar21 & auVar57[2];
    auVar38[3] = bVar22 & auVar57[3];
    auVar38[4] = bVar42;
    auVar38[5] = bVar43;
    auVar38[6] = bVar44;
    auVar38[7] = bVar45;
    auVar38[8] = bVar46;
    auVar38[9] = bVar47;
    auVar38[10] = bVar48;
    auVar38[11] = bVar49;
    auVar38[12] = bVar50;
    auVar38[13] = bVar51;
    auVar38[14] = bVar52;
    auVar38[15] = bVar53;
    auVar17._0_4_ = NEON_umaxv(auVar38,4);
    auVar17._8_8_ = 0;
    uVar19 = (uint)(bVar18 & SUB161(_DAT_004c4480,0)) + (uint)(bVar23 & SUB161(_DAT_004c4480,4)) +
             (uint)(bVar27 & SUB161(_DAT_004c4480,8)) + (uint)(bVar31 & SUB161(_DAT_004c4480,0xc));
    auVar57._4_12_ = auVar77._4_12_;
    auVar57._0_4_ = NEON_umaxv(auVar77,4);
    uVar7 = NEON_umaxv(auVar80,4);
    auVar58._0_8_ =
         CONCAT44((int)((uint)CONCAT11(bVar43,bVar42) << 0x1f) >> 0x1f,
                  (int)((uint)CONCAT11(bVar41,bVar40) << 0x1f) >> 0x1f);
    auVar58._8_4_ = (int)((uint)CONCAT11(bVar47,bVar46) << 0x1f) >> 0x1f;
    auVar58._12_4_ = (int)((uint)CONCAT11(bVar51,bVar50) << 0x1f) >> 0x1f;
    sVar60 = (short)((CONCAT22(uVar39,uVar35) << 0x1f) >> 0x1f);
    sVar61 = (short)((int)((uint)uVar39 << 0x1f) >> 0x1f);
    iVar62 = (int)((uint)(ushort)((unkuint10)auVar37._0_10_ >> 0x40) << 0x1f) >> 0x1f;
    iVar63 = (int)((uint)auVar37._12_2_ << 0x1f) >> 0x1f;
    sVar64 = (short)((CONCAT22(uVar59,uVar54) << 0x1f) >> 0x1f);
    sVar65 = (short)((int)((uint)uVar59 << 0x1f) >> 0x1f);
    iVar66 = (int)((uint)(ushort)((unkuint10)auVar56._0_10_ >> 0x40) << 0x1f) >> 0x1f;
    iVar67 = (int)((uint)auVar56._12_2_ << 0x1f) >> 0x1f;
    uVar5 = *(uint *)(param_3 + 1);
    iVar13 = 0xc0;
    do {
      if (0 < (int)uVar5) {
        lVar14 = *param_3;
        uVar15 = (ulong)uVar5;
        iVar3 = iVar13;
        do {
          auVar75 = ZEXT816(0);
          pauVar1 = (undefined (*) [16])(lVar14 + (long)iVar3 * 0x10);
          auVar16 = *pauVar1;
          auVar70._0_4_ = (int)auVar16._0_4_;
          auVar70._4_4_ = (int)auVar16._4_4_;
          auVar70._8_4_ = (int)auVar16._8_4_;
          auVar70._12_4_ = (int)auVar16._12_4_;
          auVar77 = NEON_cmeq(auVar17,auVar75,4);
          pauVar2 = (undefined (*) [16])(lVar14 + (long)(iVar3 + -0xc0) * 0x10);
          auVar80 = NEON_scvtf(auVar70,4);
          auVar38 = *pauVar2;
          uVar76 = auVar77._0_4_;
          auVar71._4_4_ = uVar76;
          auVar71._0_4_ = uVar76;
          auVar71._8_4_ = uVar76;
          auVar71._12_4_ = uVar76;
          auVar78._8_8_ = auVar58._8_8_;
          auVar78._0_8_ = auVar58._0_8_;
          auVar77 = NEON_bsl(auVar78,auVar80,auVar38,1);
          auVar77 = NEON_bit(auVar77,auVar38,auVar71,1);
          if ((uVar19 & 1) != 0) {
            *(int *)*pauVar2 = auVar77._0_4_;
          }
          if ((uVar19 >> 1 & 1) != 0) {
            *(int *)(*pauVar2 + 4) = auVar77._4_4_;
          }
          if ((uVar19 >> 2 & 1) != 0) {
            *(int *)(*pauVar2 + 8) = auVar77._8_4_;
          }
          if ((uVar19 >> 3 & 1) != 0) {
            *(int *)(*pauVar2 + 0xc) = auVar77._12_4_;
          }
          auVar38 = NEON_bif(auVar38,auVar16,auVar58,1);
          auVar38 = NEON_bif(auVar16,auVar38,auVar71,1);
          auVar72._0_4_ = (int)auVar38._0_4_;
          auVar72._4_4_ = (int)auVar38._4_4_;
          auVar72._8_4_ = (int)auVar38._8_4_;
          auVar72._12_4_ = (int)auVar38._12_4_;
          auVar77 = NEON_cmeq(auVar57,auVar75,4);
          pauVar2 = (undefined (*) [16])(lVar14 + (long)(iVar3 + -0x80) * 0x10);
          auVar80 = NEON_scvtf(auVar72,4);
          auVar16 = *pauVar2;
          uVar76 = auVar77._0_4_;
          auVar73._4_4_ = uVar76;
          auVar73._0_4_ = uVar76;
          auVar73._8_4_ = uVar76;
          auVar73._12_4_ = uVar76;
          auVar79._12_4_ = iVar63;
          auVar79._8_4_ = iVar62;
          auVar79._2_2_ = sVar60;
          auVar79._0_2_ = sVar60;
          auVar79._4_2_ = sVar61;
          auVar79._6_2_ = sVar61;
          auVar77 = NEON_bsl(auVar79,auVar80,auVar16,1);
          auVar77 = NEON_bit(auVar77,auVar16,auVar73,1);
          if ((uVar19 & 1) != 0) {
            *(int *)*pauVar2 = auVar77._0_4_;
          }
          if ((uVar19 >> 1 & 1) != 0) {
            *(int *)(*pauVar2 + 4) = auVar77._4_4_;
          }
          if ((uVar19 >> 2 & 1) != 0) {
            *(int *)(*pauVar2 + 8) = auVar77._8_4_;
          }
          if ((uVar19 >> 3 & 1) != 0) {
            *(int *)(*pauVar2 + 0xc) = auVar77._12_4_;
          }
          auVar8._2_2_ = sVar60;
          auVar8._0_2_ = sVar60;
          auVar8._4_2_ = sVar61;
          auVar8._6_2_ = sVar61;
          auVar8._8_4_ = iVar62;
          auVar8._12_4_ = iVar63;
          auVar16 = NEON_bif(auVar16,auVar38,auVar8,1);
          auVar77 = NEON_bif(auVar38,auVar16,auVar73,1);
          auVar74._0_4_ = (int)auVar77._0_4_;
          auVar74._4_4_ = (int)auVar77._4_4_;
          auVar74._8_4_ = (int)auVar77._8_4_;
          auVar74._12_4_ = (int)auVar77._12_4_;
          auVar6[4] = bVar42;
          auVar6._0_4_ = uVar7;
          auVar6[5] = bVar43;
          auVar6[6] = bVar44;
          auVar6[7] = bVar45;
          auVar6[8] = bVar46;
          auVar6[9] = bVar47;
          auVar6[10] = bVar48;
          auVar6[11] = bVar49;
          auVar6[12] = bVar50;
          auVar6[13] = bVar51;
          auVar6[14] = bVar52;
          auVar6[15] = bVar53;
          auVar38 = NEON_cmeq(auVar6,auVar75,4);
          pauVar2 = (undefined (*) [16])(lVar14 + (long)(iVar3 + -0x40) * 0x10);
          auVar75 = NEON_scvtf(auVar74,4);
          auVar16 = *pauVar2;
          auVar68._0_4_ = auVar38._0_4_;
          auVar68._4_4_ = auVar68._0_4_;
          auVar68._8_4_ = auVar68._0_4_;
          auVar68._12_4_ = auVar68._0_4_;
          auVar9._2_2_ = sVar64;
          auVar9._0_2_ = sVar64;
          auVar9._4_2_ = sVar65;
          auVar9._6_2_ = sVar65;
          auVar9._8_4_ = iVar66;
          auVar9._12_4_ = iVar67;
          auVar38 = NEON_bif(auVar75,auVar16,auVar9,1);
          auVar38 = NEON_bit(auVar38,auVar16,auVar68,1);
          if ((uVar19 & 1) == 0) {
            if ((uVar19 >> 1 & 1) != 0) goto LAB_00e5235c;
LAB_00e522e0:
            if ((uVar19 >> 2 & 1) != 0) goto LAB_00e52368;
LAB_00e522e4:
            if ((uVar19 >> 3 & 1) != 0) goto LAB_00e52374;
LAB_00e522e8:
            auVar10._2_2_ = sVar64;
            auVar10._0_2_ = sVar64;
            auVar10._4_2_ = sVar65;
            auVar10._6_2_ = sVar65;
            auVar10._8_4_ = iVar66;
            auVar10._12_4_ = iVar67;
            auVar16 = NEON_bif(auVar16,auVar77,auVar10,1);
            auVar16 = NEON_bsl(auVar68,auVar77,auVar16,1);
            if ((uVar19 & 1) != 0) goto LAB_00e52388;
LAB_00e522f4:
            uVar69 = auVar16._8_8_;
            if ((uVar19 >> 1 & 1) != 0) goto LAB_00e52390;
LAB_00e522f8:
            uVar76 = (undefined4)((ulong)uVar69 >> 0x20);
          }
          else {
            *(int *)*pauVar2 = auVar38._0_4_;
            if ((uVar19 >> 1 & 1) == 0) goto LAB_00e522e0;
LAB_00e5235c:
            *(int *)(*pauVar2 + 4) = auVar38._4_4_;
            if ((uVar19 >> 2 & 1) == 0) goto LAB_00e522e4;
LAB_00e52368:
            *(int *)(*pauVar2 + 8) = auVar38._8_4_;
            if ((uVar19 >> 3 & 1) == 0) goto LAB_00e522e8;
LAB_00e52374:
            *(int *)(*pauVar2 + 0xc) = auVar38._12_4_;
            auVar11._2_2_ = sVar64;
            auVar11._0_2_ = sVar64;
            auVar11._4_2_ = sVar65;
            auVar11._6_2_ = sVar65;
            auVar11._8_4_ = iVar66;
            auVar11._12_4_ = iVar67;
            auVar16 = NEON_bif(auVar16,auVar77,auVar11,1);
            auVar16 = NEON_bsl(auVar68,auVar77,auVar16,1);
            if ((uVar19 & 1) == 0) goto LAB_00e522f4;
LAB_00e52388:
            uVar69 = auVar16._8_8_;
            *(int *)*pauVar1 = auVar16._0_4_;
            if ((uVar19 >> 1 & 1) == 0) goto LAB_00e522f8;
LAB_00e52390:
            uVar69 = auVar16._8_8_;
            uVar76 = auVar16._12_4_;
            *(int *)(*pauVar1 + 4) = auVar16._4_4_;
          }
          if ((uVar19 >> 2 & 1) != 0) {
            uVar76 = (undefined4)((ulong)uVar69 >> 0x20);
            *(int *)(*pauVar1 + 8) = (int)uVar69;
          }
          if ((uVar19 >> 3 & 1) != 0) {
            *(undefined4 *)(*pauVar1 + 0xc) = uVar76;
          }
          iVar3 = iVar3 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 8;
    } while (iVar12 != iVar4);
  }
  return;
}


