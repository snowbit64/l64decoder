// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_stereo_MS_to_LR
// Entry Point: 00e69908
// Size: 2152 bytes
// Signature: undefined silk_stereo_MS_to_LR(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void silk_stereo_MS_to_LR
               (ushort *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  ushort uVar16;
  ushort uVar17;
  short sVar18;
  undefined (*pauVar19) [16];
  ulong uVar20;
  short *psVar21;
  ulong uVar22;
  long lVar23;
  short *psVar24;
  long lVar25;
  undefined (*pauVar26) [12];
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  uint uVar32;
  undefined (*pauVar33) [16];
  uint uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  int iVar51;
  int iVar54;
  ushort uVar55;
  ushort uVar57;
  int iVar56;
  ushort uVar58;
  undefined auVar52 [16];
  undefined auVar53 [16];
  ushort uVar60;
  int iVar59;
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  int iVar68;
  int iVar69;
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  
  uVar22 = -(ulong)(param_6 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_6 << 1;
  uVar2 = param_5 * 8;
  *param_2 = *(undefined4 *)(param_1 + 2);
  *param_3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_2 + uVar22);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_3 + uVar22);
  uVar16 = (ushort)*param_4;
  uVar17 = (ushort)param_4[1];
  if (0 < param_5) {
    uVar55 = *param_1;
    uVar34 = (uint)uVar55;
    uVar57 = param_1[1];
    uVar32 = (uint)uVar57;
    sVar3 = 0;
    if (uVar2 != 0) {
      sVar3 = (short)(0x10000 / (int)uVar2);
    }
    iVar35 = ((int)sVar3 * (int)(short)(uVar16 - uVar55) >> 0xf) + 1 >> 1;
    iVar68 = ((int)sVar3 * (int)(short)(uVar17 - uVar57) >> 0xf) + 1 >> 1;
    uVar1 = uVar2;
    if ((int)uVar2 < 2) {
      uVar1 = 1;
    }
    uVar22 = (ulong)uVar1;
    if (uVar1 < 8) {
LAB_00e699d4:
      uVar29 = 0;
    }
    else {
      if (((undefined8 *)((long)param_3 + 2U) < (undefined8 *)((long)param_2 + (uVar22 * 2 | 4))) &&
         (param_2 < (undefined4 *)((long)param_3 + uVar22 * 2 + 2))) goto LAB_00e699d4;
      uVar29 = uVar22 & 0x7ffffff8;
      iVar69 = iVar68 * 8;
      iVar36 = iVar35 * 8;
      uVar32 = (uint)uVar57 + iVar68 * (int)uVar29;
      iVar45 = (uint)uVar57 + iVar68 * SUB164(_DAT_004c3940,0);
      iVar46 = (uint)uVar57 + iVar68 * SUB164(_DAT_004c3940,4);
      iVar47 = (uint)uVar57 + iVar68 * SUB164(_DAT_004c3940,8);
      iVar48 = (uint)uVar57 + iVar68 * SUB164(_DAT_004c3940,0xc);
      uVar34 = (uint)uVar55 + iVar35 * (int)uVar29;
      iVar37 = (uint)uVar57 + iVar68 * SUB164(_DAT_004c51c0,0);
      iVar38 = (uint)uVar57 + iVar68 * SUB164(_DAT_004c51c0,4);
      iVar39 = (uint)uVar57 + iVar68 * SUB164(_DAT_004c51c0,8);
      iVar40 = (uint)uVar57 + iVar68 * SUB164(_DAT_004c51c0,0xc);
      iVar51 = (uint)uVar55 + iVar35 * SUB164(_DAT_004c3940,0);
      iVar54 = (uint)uVar55 + iVar35 * SUB164(_DAT_004c3940,4);
      iVar56 = (uint)uVar55 + iVar35 * SUB164(_DAT_004c3940,8);
      iVar59 = (uint)uVar55 + iVar35 * SUB164(_DAT_004c3940,0xc);
      iVar41 = (uint)uVar55 + iVar35 * SUB164(_DAT_004c51c0,0);
      iVar42 = (uint)uVar55 + iVar35 * SUB164(_DAT_004c51c0,4);
      iVar43 = (uint)uVar55 + iVar35 * SUB164(_DAT_004c51c0,8);
      iVar44 = (uint)uVar55 + iVar35 * SUB164(_DAT_004c51c0,0xc);
      auVar53._8_4_ = 0xffff8000;
      auVar53._0_8_ = 0xffff8000ffff8000;
      auVar53._12_4_ = 0xffff8000;
      pauVar19 = (undefined (*) [16])((long)param_2 + 2);
      uVar20 = uVar29;
      puVar31 = (undefined8 *)((long)param_3 + 2U);
      do {
        auVar63 = *(undefined (*) [16])(pauVar19[-1] + 0xe);
        uVar20 = uVar20 - 8;
        auVar65 = *(undefined (*) [16])(*pauVar19 + 2);
        auVar73 = *pauVar19;
        sVar3 = (short)iVar35;
        uVar85 = puVar31[1];
        uVar84 = *puVar31;
        sVar18 = (short)iVar68;
        iVar75 = (int)(short)uVar84;
        iVar76 = (int)(short)((ulong)uVar84 >> 0x10);
        iVar77 = (int)(short)((ulong)uVar84 >> 0x20);
        iVar78 = (int)(short)((ulong)uVar84 >> 0x30);
        iVar79 = (int)(short)uVar85;
        iVar80 = (int)(short)((ulong)uVar85 >> 0x10);
        iVar81 = (int)(short)((ulong)uVar85 >> 0x20);
        iVar83 = (int)(short)((ulong)uVar85 >> 0x30);
        auVar67._4_4_ = iVar76;
        auVar67._0_4_ = iVar75;
        auVar67._8_4_ = iVar77;
        auVar67._12_4_ = iVar78;
        auVar70._4_4_ = iVar76;
        auVar70._0_4_ = iVar75;
        auVar70._8_4_ = iVar77;
        auVar70._12_4_ = iVar78;
        auVar67 = NEON_ext(auVar67,auVar70,8,1);
        auVar14._4_4_ = iVar80;
        auVar14._0_4_ = iVar79;
        auVar14._8_4_ = iVar81;
        auVar14._12_4_ = iVar83;
        auVar15._4_4_ = iVar80;
        auVar15._0_4_ = iVar79;
        auVar15._8_4_ = iVar81;
        auVar15._12_4_ = iVar83;
        auVar70 = NEON_ext(auVar14,auVar15,8,1);
        iVar78 = auVar70._0_4_ * 0x100 +
                 (int)((ulong)((long)(short)((short)iVar47 + sVar18) *
                              (long)((int)auVar73._12_2_ << 0xb)) >> 0x10) +
                 (int)((ulong)((long)(short)((short)iVar56 + sVar3) *
                              (long)(((int)auVar65._12_2_ + (int)auVar63._12_2_ + auVar73._12_2_ * 2
                                     ) * 0x200)) >> 0x10);
        iVar81 = auVar67._0_4_ * 0x100 +
                 (int)((ulong)((long)(short)((short)iVar39 + sVar18) *
                              (long)((int)auVar73._4_2_ << 0xb)) >> 0x10) +
                 (int)((ulong)((long)(short)((short)iVar43 + sVar3) *
                              (long)(((int)auVar65._4_2_ + (int)auVar63._4_2_ + auVar73._4_2_ * 2) *
                                    0x200)) >> 0x10);
        iVar82 = (int)((ulong)(uint)(auVar67._4_4_ << 8) +
                       ((ulong)((long)(short)((short)iVar40 + sVar18) *
                               (long)((int)auVar73._6_2_ << 0xb)) >> 0x10) +
                      ((ulong)((long)(short)((short)iVar44 + sVar3) *
                              (long)(((int)auVar65._6_2_ + (int)auVar63._6_2_ + auVar73._6_2_ * 2) *
                                    0x200)) >> 0x10));
        iVar75 = iVar75 * 0x100 +
                 (int)((ulong)((long)(short)((short)iVar37 + sVar18) *
                              (long)((int)auVar73._0_2_ << 0xb)) >> 0x10) +
                 (int)((ulong)(CONCAT44((int)((long)((ulong)(uint)(iVar41 + iVar35) << 0x30) >> 0x3f
                                             ),(int)(short)(iVar41 + iVar35)) *
                              (long)(((int)auVar65._0_2_ + (int)auVar63._0_2_ + auVar73._0_2_ * 2) *
                                    0x200)) >> 0x10);
        iVar83 = (int)((ulong)(uint)(iVar76 << 8) +
                       ((ulong)((long)(short)((short)iVar38 + sVar18) *
                               (long)((int)auVar73._2_2_ << 0xb)) >> 0x10) +
                      ((ulong)(CONCAT44((int)((long)((ulong)(uint)(iVar42 + iVar35) << 0x30) >> 0x3f
                                             ),(int)(short)(iVar42 + iVar35)) *
                              (long)(((int)auVar65._2_2_ + (int)auVar63._2_2_ + auVar73._2_2_ * 2) *
                                    0x200)) >> 0x10));
        iVar76 = iVar79 * 0x100 +
                 (int)((ulong)((long)(short)((short)iVar45 + sVar18) *
                              (long)((int)auVar73._8_2_ << 0xb)) >> 0x10) +
                 (int)((ulong)((long)(short)((short)iVar51 + sVar3) *
                              (long)(((int)auVar65._8_2_ + (int)auVar63._8_2_ + auVar73._8_2_ * 2) *
                                    0x200)) >> 0x10);
        iVar37 = iVar37 + iVar69;
        iVar38 = iVar38 + iVar69;
        iVar39 = iVar39 + iVar69;
        iVar40 = iVar40 + iVar69;
        auVar71._4_4_ = iVar83;
        auVar71._0_4_ = iVar75;
        auVar71._8_4_ = iVar81;
        auVar71._12_4_ = iVar82;
        iVar77 = (int)((ulong)(uint)(iVar80 << 8) +
                       ((ulong)((long)(short)((short)iVar46 + sVar18) *
                               (long)((int)auVar73._10_2_ << 0xb)) >> 0x10) +
                      ((ulong)((long)(short)((short)iVar54 + sVar3) *
                              (long)(((int)auVar65._10_2_ + (int)auVar63._10_2_ + auVar73._10_2_ * 2
                                     ) * 0x200)) >> 0x10));
        auVar72._4_4_ = iVar77;
        auVar72._0_4_ = iVar76;
        auVar72._8_4_ = iVar78;
        iVar79 = (int)((ulong)(uint)(auVar70._4_4_ << 8) +
                       ((ulong)((long)(short)((short)iVar48 + sVar18) *
                               (long)((int)auVar73._14_2_ << 0xb)) >> 0x10) +
                      ((ulong)((long)(short)((short)iVar59 + sVar3) *
                              (long)(((int)auVar65._14_2_ + (int)auVar63._14_2_ + auVar73._14_2_ * 2
                                     ) * 0x200)) >> 0x10));
        auVar72._12_4_ = iVar79;
        iVar45 = iVar45 + iVar69;
        iVar46 = iVar46 + iVar69;
        iVar47 = iVar47 + iVar69;
        iVar48 = iVar48 + iVar69;
        auVar63._8_4_ = 0x7fff7f;
        auVar63._0_8_ = 0x7fff7f007fff7f;
        auVar63._12_4_ = 0x7fff7f;
        auVar63 = NEON_cmgt(auVar71,auVar63,4);
        auVar65._8_4_ = 0x7fff7f;
        auVar65._0_8_ = 0x7fff7f007fff7f;
        auVar65._12_4_ = 0x7fff7f;
        auVar65 = NEON_cmgt(auVar72,auVar65,4);
        auVar74._0_4_ = (iVar75 >> 7) + 1 >> 1;
        auVar74._4_4_ = (iVar83 >> 7) + 1 >> 1;
        auVar74._8_4_ = (iVar81 >> 7) + 1 >> 1;
        auVar74._12_4_ = (iVar82 >> 7) + 1 >> 1;
        iVar41 = iVar41 + iVar36;
        iVar42 = iVar42 + iVar36;
        iVar43 = iVar43 + iVar36;
        iVar44 = iVar44 + iVar36;
        auVar73._0_4_ = (iVar76 >> 7) + 1 >> 1;
        auVar73._4_4_ = (iVar77 >> 7) + 1 >> 1;
        auVar73._8_4_ = (iVar78 >> 7) + 1 >> 1;
        auVar73._12_4_ = (iVar79 >> 7) + 1 >> 1;
        auVar70 = NEON_smax(auVar74,auVar53,4);
        iVar51 = iVar51 + iVar36;
        iVar54 = iVar54 + iVar36;
        iVar56 = iVar56 + iVar36;
        iVar59 = iVar59 + iVar36;
        auVar67 = NEON_smax(auVar73,auVar53,4);
        uVar30 = CONCAT26(auVar63._12_2_,
                          CONCAT24(auVar63._8_2_,CONCAT22(auVar63._4_2_,auVar63._0_2_))) &
                 0x7fff7fff7fff7fff;
        uVar55 = auVar65._0_2_ & 0x7fff;
        uVar57 = auVar65._4_2_ & 0x7fff;
        uVar58 = auVar65._8_2_ & 0x7fff;
        uVar60 = auVar65._12_2_ & 0x7fff;
        *(byte *)(puVar31 + 2) = (byte)uVar55 | auVar67[0] & ~auVar65[0];
        *(byte *)((long)puVar31 + 0x11) = (byte)(uVar55 >> 8) | auVar67[1] & ~auVar65[1];
        *(byte *)((long)puVar31 + 0x12) = (byte)uVar57 | auVar67[4] & ~auVar65[4];
        *(byte *)((long)puVar31 + 0x13) = (byte)(uVar57 >> 8) | auVar67[5] & ~auVar65[5];
        *(byte *)((long)puVar31 + 0x14) = (byte)uVar58 | auVar67[8] & ~auVar65[8];
        *(byte *)((long)puVar31 + 0x15) = (byte)(uVar58 >> 8) | auVar67[9] & ~auVar65[9];
        *(byte *)((long)puVar31 + 0x16) = (byte)uVar60 | auVar67[12] & ~auVar65[12];
        *(byte *)((long)puVar31 + 0x17) = (byte)(uVar60 >> 8) | auVar67[13] & ~auVar65[13];
        *(byte *)puVar31 = (byte)uVar30 | auVar70[0] & ~auVar63[0];
        *(byte *)((long)puVar31 + 1) = (byte)(uVar30 >> 8) | auVar70[1] & ~auVar63[1];
        *(byte *)((long)puVar31 + 2) = (byte)(uVar30 >> 0x10) | auVar70[4] & ~auVar63[4];
        *(byte *)((long)puVar31 + 3) = (byte)(uVar30 >> 0x18) | auVar70[5] & ~auVar63[5];
        *(byte *)((long)puVar31 + 4) = (byte)(uVar30 >> 0x20) | auVar70[8] & ~auVar63[8];
        *(byte *)((long)puVar31 + 5) = (byte)(uVar30 >> 0x28) | auVar70[9] & ~auVar63[9];
        *(byte *)((long)puVar31 + 6) = (byte)(uVar30 >> 0x30) | auVar70[12] & ~auVar63[12];
        *(byte *)((long)puVar31 + 7) = (byte)(uVar30 >> 0x38) | auVar70[13] & ~auVar63[13];
        pauVar19 = pauVar19 + 1;
        puVar31 = puVar31 + 2;
      } while (uVar20 != 0);
      if (uVar29 == uVar22) goto LAB_00e69a80;
    }
    lVar28 = uVar29 * 2 + 2;
    lVar27 = uVar22 - uVar29;
    psVar21 = (short *)((long)param_2 + lVar28);
    psVar24 = (short *)((long)param_3 + lVar28);
    do {
      uVar32 = uVar32 + iVar68;
      uVar34 = uVar34 + iVar35;
      iVar69 = (int)((ulong)((long)(int)*psVar21 * (long)(short)uVar32) >> 5) + *psVar24 * 0x100 +
               (int)((ulong)((long)(short)uVar34 *
                            (long)(((int)psVar21[1] + (int)psVar21[-1] + *psVar21 * 2) * 0x200)) >>
                    0x10);
      iVar36 = (iVar69 >> 7) + 1 >> 1;
      if (iVar36 == -0x8000 || iVar36 + 0x8000 < 0 != SCARRY4(iVar36,0x8000)) {
        iVar36 = -0x8000;
      }
      sVar3 = 0x7fff;
      if (iVar69 < 0x7fff80) {
        sVar3 = (short)iVar36;
      }
      lVar27 = lVar27 + -1;
      *psVar24 = sVar3;
      psVar21 = psVar21 + 1;
      psVar24 = psVar24 + 1;
    } while (lVar27 != 0);
  }
LAB_00e69a80:
  if ((int)uVar2 < (int)param_6) {
    lVar27 = (long)(int)param_6;
    lVar28 = (long)(int)uVar2;
    lVar25 = (long)(short)uVar16;
    lVar23 = (long)(short)uVar17;
    uVar22 = lVar27 - lVar28;
    if (7 < uVar22) {
      uVar29 = lVar28 * 2;
      if (((ulong)((long)param_2 + lVar27 * 2 + 4) <= (long)param_3 + (uVar29 | 2)) ||
         ((ulong)((long)param_3 + lVar27 * 2 + 2) <= (long)param_2 + uVar29)) {
        uVar30 = uVar22 & 0xfffffffffffffff8;
        lVar28 = uVar30 + lVar28;
        pauVar19 = (undefined (*) [16])((long)param_3 + uVar29 + 2);
        uVar20 = uVar30;
        pauVar33 = (undefined (*) [16])((long)param_2 + uVar29 + 2);
        do {
          auVar53 = *(undefined (*) [16])(pauVar33[-1] + 0xe);
          auVar63 = *(undefined (*) [16])(*pauVar33 + 2);
          auVar65 = *pauVar33;
          auVar67 = *pauVar19;
          uVar20 = uVar20 - 8;
          iVar68 = (int)auVar67._8_2_;
          iVar69 = (int)auVar67._10_2_;
          auVar61._0_4_ = (int)auVar67._0_2_;
          auVar61._4_4_ = (int)auVar67._2_2_;
          auVar61._8_4_ = (int)auVar67._4_2_;
          auVar61._12_4_ = (int)auVar67._6_2_;
          auVar12._4_4_ = iVar69;
          auVar12._0_4_ = iVar68;
          auVar12._8_4_ = (int)auVar67._12_2_;
          auVar12._12_4_ = (int)auVar67._14_2_;
          auVar13._4_4_ = iVar69;
          auVar13._0_4_ = iVar68;
          auVar13._8_4_ = (int)auVar67._12_2_;
          auVar13._12_4_ = (int)auVar67._14_2_;
          auVar67 = NEON_ext(auVar12,auVar13,8,1);
          auVar70 = NEON_ext(auVar61,auVar61,8,1);
          iVar36 = auVar67._0_4_ * 0x100 +
                   (int)((ulong)(lVar23 * ((int)auVar65._12_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar25 * (((int)auVar63._12_2_ + (int)auVar53._12_2_ +
                                           auVar65._12_2_ * 2) * 0x200)) >> 0x10);
          iVar38 = auVar67._4_4_ * 0x100 +
                   (int)((ulong)(lVar23 * ((int)auVar65._14_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar25 * (((int)auVar63._14_2_ + (int)auVar53._14_2_ +
                                           auVar65._14_2_ * 2) * 0x200)) >> 0x10);
          iVar37 = auVar70._0_4_ * 0x100 +
                   (int)((ulong)(lVar23 * ((int)auVar65._4_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar25 * (((int)auVar63._4_2_ + (int)auVar53._4_2_ +
                                           auVar65._4_2_ * 2) * 0x200)) >> 0x10);
          iVar39 = auVar70._4_4_ * 0x100 +
                   (int)((ulong)(lVar23 * ((int)auVar65._6_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar25 * (((int)auVar63._6_2_ + (int)auVar53._6_2_ +
                                           auVar65._6_2_ * 2) * 0x200)) >> 0x10);
          iVar35 = auVar61._0_4_ * 0x100 +
                   (int)((ulong)(lVar23 * ((int)auVar65._0_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar25 * (((int)auVar63._0_2_ + (int)auVar53._0_2_ +
                                           auVar65._0_2_ * 2) * 0x200)) >> 0x10);
          iVar68 = iVar68 * 0x100 + (int)((ulong)(lVar23 * ((int)auVar65._8_2_ << 0xb)) >> 0x10) +
                   (int)((ulong)(lVar25 * (((int)auVar63._8_2_ + (int)auVar53._8_2_ +
                                           auVar65._8_2_ * 2) * 0x200)) >> 0x10);
          iVar40 = (int)((ulong)(uint)(iVar69 << 8) +
                         ((ulong)(lVar23 * ((int)auVar65._10_2_ << 0xb)) >> 0x10) +
                        ((ulong)(lVar25 * (((int)auVar63._10_2_ + (int)auVar53._10_2_ +
                                           auVar65._10_2_ * 2) * 0x200)) >> 0x10));
          iVar69 = (int)((ulong)(uint)(auVar61._4_4_ << 8) +
                         ((ulong)(lVar23 * ((int)auVar65._2_2_ << 0xb)) >> 0x10) +
                        ((ulong)(lVar25 * (((int)auVar63._2_2_ + (int)auVar53._2_2_ +
                                           auVar65._2_2_ * 2) * 0x200)) >> 0x10));
          auVar52._4_4_ = iVar69;
          auVar52._0_4_ = iVar35;
          auVar52._8_4_ = iVar37;
          auVar52._12_4_ = iVar39;
          auVar62._4_4_ = iVar40;
          auVar62._0_4_ = iVar68;
          auVar62._8_4_ = iVar36;
          auVar62._12_4_ = iVar38;
          auVar8._8_4_ = 0x7fff7f;
          auVar8._0_8_ = 0x7fff7f007fff7f;
          auVar8._12_4_ = 0x7fff7f;
          auVar63 = NEON_cmgt(auVar62,auVar8,4);
          auVar9._8_4_ = 0x7fff7f;
          auVar9._0_8_ = 0x7fff7f007fff7f;
          auVar9._12_4_ = 0x7fff7f;
          auVar53 = NEON_cmgt(auVar52,auVar9,4);
          auVar66._0_4_ = (iVar35 >> 7) + 1 >> 1;
          auVar66._4_4_ = (iVar69 >> 7) + 1 >> 1;
          auVar66._8_4_ = (iVar37 >> 7) + 1 >> 1;
          auVar66._12_4_ = (iVar39 >> 7) + 1 >> 1;
          auVar64._0_4_ = (iVar68 >> 7) + 1 >> 1;
          auVar64._4_4_ = (iVar40 >> 7) + 1 >> 1;
          auVar64._8_4_ = (iVar36 >> 7) + 1 >> 1;
          auVar64._12_4_ = (iVar38 >> 7) + 1 >> 1;
          auVar4._8_4_ = 0xffff8000;
          auVar4._0_8_ = 0xffff8000ffff8000;
          auVar4._12_4_ = 0xffff8000;
          auVar67 = NEON_smax(auVar66,auVar4,4);
          auVar5._8_4_ = 0xffff8000;
          auVar5._0_8_ = 0xffff8000ffff8000;
          auVar5._12_4_ = 0xffff8000;
          auVar65 = NEON_smax(auVar64,auVar5,4);
          uVar29 = CONCAT26(auVar53._12_2_,
                            CONCAT24(auVar53._8_2_,CONCAT22(auVar53._4_2_,auVar53._0_2_))) &
                   0x7fff7fff7fff7fff;
          uVar55 = auVar63._0_2_ & 0x7fff;
          uVar57 = auVar63._4_2_ & 0x7fff;
          uVar58 = auVar63._8_2_ & 0x7fff;
          uVar60 = auVar63._12_2_ & 0x7fff;
          pauVar19[1][0] = (byte)uVar55 | auVar65[0] & ~auVar63[0];
          pauVar19[1][1] = (byte)(uVar55 >> 8) | auVar65[1] & ~auVar63[1];
          pauVar19[1][2] = (byte)uVar57 | auVar65[4] & ~auVar63[4];
          pauVar19[1][3] = (byte)(uVar57 >> 8) | auVar65[5] & ~auVar63[5];
          pauVar19[1][4] = (byte)uVar58 | auVar65[8] & ~auVar63[8];
          pauVar19[1][5] = (byte)(uVar58 >> 8) | auVar65[9] & ~auVar63[9];
          pauVar19[1][6] = (byte)uVar60 | auVar65[12] & ~auVar63[12];
          pauVar19[1][7] = (byte)(uVar60 >> 8) | auVar65[13] & ~auVar63[13];
          (*pauVar19)[0] = (byte)uVar29 | auVar67[0] & ~auVar53[0];
          (*pauVar19)[1] = (byte)(uVar29 >> 8) | auVar67[1] & ~auVar53[1];
          (*pauVar19)[2] = (byte)(uVar29 >> 0x10) | auVar67[4] & ~auVar53[4];
          (*pauVar19)[3] = (byte)(uVar29 >> 0x18) | auVar67[5] & ~auVar53[5];
          (*pauVar19)[4] = (byte)(uVar29 >> 0x20) | auVar67[8] & ~auVar53[8];
          (*pauVar19)[5] = (byte)(uVar29 >> 0x28) | auVar67[9] & ~auVar53[9];
          (*pauVar19)[6] = (byte)(uVar29 >> 0x30) | auVar67[12] & ~auVar53[12];
          (*pauVar19)[7] = (byte)(uVar29 >> 0x38) | auVar67[13] & ~auVar53[13];
          pauVar19 = pauVar19 + 1;
          pauVar33 = pauVar33 + 1;
        } while (uVar20 != 0);
        if (uVar22 == uVar30) goto LAB_00e69d70;
      }
    }
    lVar27 = lVar27 - lVar28;
    lVar28 = lVar28 * 2 + 2;
    psVar21 = (short *)((long)param_3 + lVar28);
    psVar24 = (short *)((long)param_2 + lVar28);
    do {
      iVar35 = (int)((ulong)((int)*psVar24 * lVar23) >> 5) + *psVar21 * 0x100 +
               (int)((ulong)(lVar25 * (((int)psVar24[1] + (int)psVar24[-1] + *psVar24 * 2) * 0x200))
                    >> 0x10);
      iVar68 = (iVar35 >> 7) + 1 >> 1;
      if (iVar68 == -0x8000 || iVar68 + 0x8000 < 0 != SCARRY4(iVar68,0x8000)) {
        iVar68 = -0x8000;
      }
      sVar3 = 0x7fff;
      if (iVar35 < 0x7fff80) {
        sVar3 = (short)iVar68;
      }
      lVar27 = lVar27 + -1;
      *psVar21 = sVar3;
      psVar21 = psVar21 + 1;
      psVar24 = psVar24 + 1;
    } while (lVar27 != 0);
  }
LAB_00e69d70:
  *param_1 = uVar16;
  param_1[1] = uVar17;
  if (0 < (int)param_6) {
    uVar22 = (ulong)param_6;
    if ((param_6 < 0x10) ||
       ((lVar28 = uVar22 * 2 + 2, (long)param_2 + 2U < (ulong)((long)param_3 + lVar28) &&
        ((long)param_3 + 2U < (ulong)((long)param_2 + lVar28))))) {
      uVar29 = 0;
    }
    else {
      uVar29 = uVar22 & 0xfffffff0;
      pauVar19 = (undefined (*) [16])((long)param_2 + 0x12);
      pauVar26 = (undefined (*) [12])((long)param_3 + 0x12);
      uVar20 = uVar29;
      do {
        uVar20 = uVar20 - 0x10;
        uVar49 = (undefined4)((ulong)*(undefined8 *)(pauVar26[-1] + 4) >> 0x20);
        uVar50 = (undefined4)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
        auVar6._12_4_ = uVar49;
        auVar6._0_12_ = *(undefined (*) [12])(pauVar26[-2] + 8);
        auVar65 = NEON_sqadd(pauVar19[-1],auVar6,2);
        auVar7._12_4_ = uVar49;
        auVar7._0_12_ = *(undefined (*) [12])(pauVar26[-2] + 8);
        auVar53 = NEON_sqsub(pauVar19[-1],auVar7,2);
        auVar10._12_4_ = uVar50;
        auVar10._0_12_ = *pauVar26;
        auVar67 = NEON_sqadd(*pauVar19,auVar10,2);
        auVar11._12_4_ = uVar50;
        auVar11._0_12_ = *pauVar26;
        auVar63 = NEON_sqsub(*pauVar19,auVar11,2);
        *(long *)(pauVar19[-1] + 8) = auVar65._8_8_;
        *(long *)pauVar19[-1] = auVar65._0_8_;
        *(long *)(*pauVar19 + 8) = auVar67._8_8_;
        *(long *)*pauVar19 = auVar67._0_8_;
        pauVar19 = pauVar19 + 2;
        *(long *)(pauVar26[-1] + 4) = auVar53._8_8_;
        *(long *)(pauVar26[-2] + 8) = auVar53._0_8_;
        *(long *)(*pauVar26 + 8) = auVar63._8_8_;
        *(long *)*pauVar26 = auVar63._0_8_;
        pauVar26 = (undefined (*) [12])(pauVar26[2] + 8);
      } while (uVar20 != 0);
      if (uVar29 == uVar22) {
        return;
      }
    }
    lVar27 = uVar22 - uVar29;
    lVar28 = uVar29 * 2 + 2;
    psVar21 = (short *)((long)param_3 + lVar28);
    psVar24 = (short *)((long)param_2 + lVar28);
    do {
      iVar35 = (int)*psVar24 + (int)*psVar21;
      iVar68 = (int)*psVar24 - (int)*psVar21;
      if (0x7ffe < iVar35) {
        iVar35 = 0x7fff;
      }
      if (iVar35 == -0x8000 || iVar35 + 0x8000 < 0 != SCARRY4(iVar35,0x8000)) {
        iVar35 = -0x8000;
      }
      if (0x7ffe < iVar68) {
        iVar68 = 0x7fff;
      }
      if (iVar68 == -0x8000 || iVar68 + 0x8000 < 0 != SCARRY4(iVar68,0x8000)) {
        iVar68 = -0x8000;
      }
      lVar27 = lVar27 + -1;
      *psVar24 = (short)iVar35;
      *psVar21 = (short)iVar68;
      psVar21 = psVar21 + 1;
      psVar24 = psVar24 + 1;
    } while (lVar27 != 0);
  }
                    /* WARNING: Read-only address (ram,0x004c3940) is written */
                    /* WARNING: Read-only address (ram,0x004c51c0) is written */
  return;
}


