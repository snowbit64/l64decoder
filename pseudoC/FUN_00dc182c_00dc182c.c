// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc182c
// Entry Point: 00dc182c
// Size: 1040 bytes
// Signature: undefined FUN_00dc182c(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dc182c(long param_1,undefined (*param_2) [16],undefined (*param_3) [16])

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  unkbyte9 *pVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined *puVar38;
  unkbyte9 Var39;
  unkbyte9 Var40;
  undefined (*pauVar41) [16];
  long lVar42;
  long lVar43;
  ulong uVar44;
  undefined (*pauVar45) [16];
  undefined (*pauVar46) [16];
  undefined8 *puVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  undefined (*pauVar51) [16];
  ulong *puVar52;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  undefined uVar57;
  undefined uVar58;
  undefined uVar59;
  undefined auVar60 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  int iVar69;
  int iVar72;
  int iVar73;
  undefined auVar70 [16];
  int iVar74;
  undefined auVar71 [16];
  int iVar75;
  int iVar79;
  int iVar80;
  undefined auVar76 [16];
  undefined auVar77 [16];
  int iVar81;
  undefined auVar78 [16];
  int iVar82;
  int iVar86;
  int iVar87;
  undefined auVar83 [16];
  undefined auVar84 [16];
  int iVar88;
  undefined auVar85 [16];
  int iVar89;
  int iVar93;
  int iVar94;
  undefined auVar90 [16];
  undefined auVar91 [16];
  int iVar95;
  undefined auVar92 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  int iVar112;
  int iVar114;
  int iVar115;
  undefined auVar113 [16];
  int iVar116;
  int iVar117;
  int iVar119;
  int iVar120;
  undefined auVar118 [16];
  int iVar121;
  int iVar122;
  int iVar124;
  int iVar125;
  undefined auVar123 [16];
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  undefined4 uVar131;
  undefined4 uVar132;
  undefined4 uVar133;
  undefined4 uVar134;
  undefined4 uVar135;
  undefined4 uVar136;
  undefined4 uVar137;
  undefined4 uVar138;
  
  uVar49 = (ulong)*(byte *)(param_1 + 0x13) + 7 >> 3;
  pauVar45 = param_2;
  if ((ulong)*(byte *)(param_1 + 0x13) == 0) {
    lVar42 = *(long *)(param_1 + 8);
    if ((undefined (*) [16])(*param_2 + lVar42) <= param_2) {
      return;
    }
  }
  else {
    pauVar41 = (undefined (*) [16])(*param_2 + uVar49);
    pauVar46 = pauVar41;
    if (pauVar41 <= (undefined (*) [16])(*param_2 + 1)) {
      pauVar46 = (undefined (*) [16])(*param_2 + 1);
    }
    uVar44 = (long)pauVar46 - (long)param_2;
    if (uVar44 < 0x20) {
LAB_00dc18c8:
      pauVar41 = param_3;
      pauVar46 = pauVar45;
      do {
        param_3 = (undefined (*) [16])(*pauVar41 + 1);
        pauVar45 = (undefined (*) [16])(*pauVar46 + 1);
        (*pauVar46)[0] = (*pauVar41)[0] + (*pauVar46)[0];
        pauVar41 = param_3;
        pauVar46 = pauVar45;
      } while (pauVar45 < (undefined (*) [16])(*param_2 + uVar49));
    }
    else {
      if (pauVar41 <= (undefined (*) [16])(*param_2 + 1)) {
        pauVar41 = (undefined (*) [16])(*param_2 + 1);
      }
      bVar1 = (undefined (*) [16])((long)param_3 + ((long)pauVar41 - (long)param_2)) <= param_2;
      if ((!bVar1 && param_3 <= pauVar41) && (bVar1 || pauVar41 != param_3)) goto LAB_00dc18c8;
      uVar48 = uVar44 & 0xffffffffffffffe0;
      pauVar41 = param_3 + 1;
      pauVar45 = (undefined (*) [16])(*param_2 + uVar48);
      param_3 = (undefined (*) [16])(*param_3 + uVar48);
      pauVar46 = param_2 + 1;
      uVar50 = uVar48;
      do {
        uVar25 = *(undefined8 *)(pauVar46[-1] + 8);
        uVar24 = *(undefined8 *)pauVar46[-1];
        uVar10 = *(undefined8 *)(*pauVar46 + 8);
        uVar9 = *(undefined8 *)*pauVar46;
        uVar50 = uVar50 - 0x20;
        uVar16 = *(undefined8 *)(pauVar41[-1] + 8);
        uVar15 = *(undefined8 *)pauVar41[-1];
        uVar21 = *(undefined8 *)(*pauVar41 + 8);
        uVar20 = *(undefined8 *)*pauVar41;
        pauVar41 = pauVar41 + 2;
        *(ulong *)(pauVar46[-1] + 8) =
             CONCAT17((char)((ulong)uVar16 >> 0x38) + (char)((ulong)uVar25 >> 0x38),
                      CONCAT16((char)((ulong)uVar16 >> 0x30) + (char)((ulong)uVar25 >> 0x30),
                               CONCAT15((char)((ulong)uVar16 >> 0x28) +
                                        (char)((ulong)uVar25 >> 0x28),
                                        CONCAT14((char)((ulong)uVar16 >> 0x20) +
                                                 (char)((ulong)uVar25 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar16 >> 0x18) +
                                                          (char)((ulong)uVar25 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar16 >> 0x10) +
                                                                   (char)((ulong)uVar25 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar16 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar25 >>
                                                                                  8),(char)uVar16 +
                                                                                     (char)uVar25)))
                                                ))));
        *(ulong *)pauVar46[-1] =
             CONCAT17((char)((ulong)uVar15 >> 0x38) + (char)((ulong)uVar24 >> 0x38),
                      CONCAT16((char)((ulong)uVar15 >> 0x30) + (char)((ulong)uVar24 >> 0x30),
                               CONCAT15((char)((ulong)uVar15 >> 0x28) +
                                        (char)((ulong)uVar24 >> 0x28),
                                        CONCAT14((char)((ulong)uVar15 >> 0x20) +
                                                 (char)((ulong)uVar24 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar15 >> 0x18) +
                                                          (char)((ulong)uVar24 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar15 >> 0x10) +
                                                                   (char)((ulong)uVar24 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar15 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar24 >>
                                                                                  8),(char)uVar15 +
                                                                                     (char)uVar24)))
                                                ))));
        *(ulong *)(*pauVar46 + 8) =
             CONCAT17((char)((ulong)uVar21 >> 0x38) + (char)((ulong)uVar10 >> 0x38),
                      CONCAT16((char)((ulong)uVar21 >> 0x30) + (char)((ulong)uVar10 >> 0x30),
                               CONCAT15((char)((ulong)uVar21 >> 0x28) +
                                        (char)((ulong)uVar10 >> 0x28),
                                        CONCAT14((char)((ulong)uVar21 >> 0x20) +
                                                 (char)((ulong)uVar10 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar21 >> 0x18) +
                                                          (char)((ulong)uVar10 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar21 >> 0x10) +
                                                                   (char)((ulong)uVar10 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar21 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar10 >>
                                                                                  8),(char)uVar21 +
                                                                                     (char)uVar10)))
                                                ))));
        *(ulong *)*pauVar46 =
             CONCAT17((char)((ulong)uVar20 >> 0x38) + (char)((ulong)uVar9 >> 0x38),
                      CONCAT16((char)((ulong)uVar20 >> 0x30) + (char)((ulong)uVar9 >> 0x30),
                               CONCAT15((char)((ulong)uVar20 >> 0x28) + (char)((ulong)uVar9 >> 0x28)
                                        ,CONCAT14((char)((ulong)uVar20 >> 0x20) +
                                                  (char)((ulong)uVar9 >> 0x20),
                                                  CONCAT13((char)((ulong)uVar20 >> 0x18) +
                                                           (char)((ulong)uVar9 >> 0x18),
                                                           CONCAT12((char)((ulong)uVar20 >> 0x10) +
                                                                    (char)((ulong)uVar9 >> 0x10),
                                                                    CONCAT11((char)((ulong)uVar20 >>
                                                                                   8) +
                                                                             (char)((ulong)uVar9 >>
                                                                                   8),(char)uVar20 +
                                                                                      (char)uVar9)))
                                                 ))));
        pauVar46 = pauVar46 + 2;
      } while (uVar50 != 0);
      if (uVar44 != uVar48) goto LAB_00dc18c8;
    }
    lVar42 = *(long *)(param_1 + 8);
    if ((undefined (*) [16])(*param_2 + lVar42) <= pauVar45) {
      return;
    }
  }
  Var40 = _DAT_004c4f40;
  Var39 = _DAT_004c4d70;
  auVar77 = _DAT_004c4a50;
  auVar70 = _DAT_004c37b0;
  lVar43 = -uVar49;
  uVar44 = (long)param_2 + (lVar42 - (long)pauVar45);
  pauVar41 = (undefined (*) [16])((long)pauVar45 + uVar44);
  if (7 < uVar44) {
    lVar42 = (long)param_2 + (lVar42 - (long)(*pauVar45 + uVar49));
    if ((((undefined (*) [16])((long)param_3 + lVar42) <= pauVar45 ||
          pauVar41 <= (undefined (*) [16])((long)param_3 + lVar43)) &&
        ((undefined (*) [16])((long)pauVar45 + lVar42) <= pauVar45 ||
         pauVar41 <= (undefined (*) [16])((long)pauVar45 + lVar43))) &&
       ((undefined (*) [16])((long)param_3 + uVar44) <= pauVar45 || pauVar41 <= param_3)) {
      if (uVar44 < 0x10) {
        uVar50 = 0;
      }
      else {
        uVar50 = uVar44 & 0xfffffffffffffff0;
        uVar49 = uVar50;
        pauVar46 = pauVar45;
        pauVar51 = param_3;
        do {
          pVar8 = (unkbyte9 *)((long)pauVar51 + lVar43);
          uVar24 = *(undefined8 *)((long)pVar8 + 8);
          uVar53 = (undefined)((ulong)uVar24 >> 8);
          uVar54 = (undefined)((ulong)uVar24 >> 0x10);
          uVar55 = (undefined)((ulong)uVar24 >> 0x18);
          uVar56 = (undefined)((ulong)uVar24 >> 0x20);
          uVar57 = (undefined)((ulong)uVar24 >> 0x28);
          uVar58 = (undefined)((ulong)uVar24 >> 0x30);
          uVar59 = (undefined)((ulong)uVar24 >> 0x38);
          uVar49 = uVar49 - 0x10;
          auVar14 = *(undefined (*) [16])((long)pauVar46 + lVar43);
          auVar30 = *pauVar51;
          auVar76 = ZEXT816(0);
          auVar84[9] = 0x10;
          auVar84._0_9_ = Var40;
          auVar84[10] = 0x10;
          auVar84[11] = 0x10;
          auVar84[12] = 3;
          auVar84[13] = 0x10;
          auVar84[14] = 0x10;
          auVar84[15] = 0x10;
          auVar96[9] = uVar53;
          auVar96._0_9_ = *pVar8;
          auVar96[10] = uVar54;
          auVar96[11] = uVar55;
          auVar96[12] = uVar56;
          auVar96[13] = uVar57;
          auVar96[14] = uVar58;
          auVar96[15] = uVar59;
          auVar84 = a64_TBL(ZEXT816(0),auVar96,ZEXT216(0),auVar84);
          auVar102[9] = 0x10;
          auVar102._0_9_ = Var39;
          auVar102[10] = 0x10;
          auVar102[11] = 0x10;
          auVar102[12] = 7;
          auVar102[13] = 0x10;
          auVar102[14] = 0x10;
          auVar102[15] = 0x10;
          auVar100[9] = uVar53;
          auVar100._0_9_ = *pVar8;
          auVar100[10] = uVar54;
          auVar100[11] = uVar55;
          auVar100[12] = uVar56;
          auVar100[13] = uVar57;
          auVar100[14] = uVar58;
          auVar100[15] = uVar59;
          auVar102 = a64_TBL(ZEXT816(0),auVar100,ZEXT216(0),auVar102);
          auVar108[9] = uVar53;
          auVar108._0_9_ = *pVar8;
          auVar108[10] = uVar54;
          auVar108[11] = uVar55;
          auVar108[12] = uVar56;
          auVar108[13] = uVar57;
          auVar108[14] = uVar58;
          auVar108[15] = uVar59;
          auVar96 = a64_TBL(ZEXT816(0),auVar108,ZEXT216(0),auVar70);
          auVar110[9] = uVar53;
          auVar110._0_9_ = *pVar8;
          auVar110[10] = uVar54;
          auVar110[11] = uVar55;
          auVar110[12] = uVar56;
          auVar110[13] = uVar57;
          auVar110[14] = uVar58;
          auVar110[15] = uVar59;
          auVar100 = a64_TBL(ZEXT816(0),auVar110,ZEXT216(0),auVar77);
          auVar91[9] = 0x10;
          auVar91._0_9_ = Var40;
          auVar91[10] = 0x10;
          auVar91[11] = 0x10;
          auVar91[12] = 3;
          auVar91[13] = 0x10;
          auVar91[14] = 0x10;
          auVar91[15] = 0x10;
          auVar113._9_7_ = 0;
          auVar113._0_9_ = (unkuint9)0;
          auVar91 = a64_TBL(ZEXT816(0),auVar14,auVar113,auVar91);
          auVar106[9] = 0x10;
          auVar106._0_9_ = Var39;
          auVar106[10] = 0x10;
          auVar106[11] = 0x10;
          auVar106[12] = 7;
          auVar106[13] = 0x10;
          auVar106[14] = 0x10;
          auVar106[15] = 0x10;
          auVar118._9_7_ = 0;
          auVar118._0_9_ = (unkuint9)0;
          auVar106 = a64_TBL(ZEXT816(0),auVar14,auVar118,auVar106);
          auVar28._9_7_ = 0;
          auVar28._0_9_ = (unkuint9)0;
          auVar108 = a64_TBL(ZEXT816(0),auVar14,auVar28,auVar70);
          auVar29._9_7_ = 0;
          auVar29._0_9_ = (unkuint9)0;
          auVar110 = a64_TBL(ZEXT816(0),auVar14,auVar29,auVar77);
          auVar113 = a64_TBL(ZEXT816(0),auVar30,auVar76,auVar77);
          auVar118 = a64_TBL(ZEXT816(0),auVar30,auVar76,auVar70);
          auVar123[9] = 0x10;
          auVar123._0_9_ = Var39;
          auVar123[10] = 0x10;
          auVar123[11] = 0x10;
          auVar123[12] = 7;
          auVar123[13] = 0x10;
          auVar123[14] = 0x10;
          auVar123[15] = 0x10;
          auVar123 = a64_TBL(ZEXT816(0),auVar30,auVar76,auVar123);
          auVar98[9] = 0x10;
          auVar98._0_9_ = Var40;
          auVar98[10] = 0x10;
          auVar98[11] = 0x10;
          auVar98[12] = 3;
          auVar98[13] = 0x10;
          auVar98[14] = 0x10;
          auVar98[15] = 0x10;
          auVar98 = a64_TBL(ZEXT816(0),auVar30,auVar76,auVar98);
          iVar112 = auVar113._0_4_ - auVar100._0_4_;
          iVar114 = auVar113._4_4_ - auVar100._4_4_;
          iVar115 = auVar113._8_4_ - auVar100._8_4_;
          iVar116 = auVar113._12_4_ - auVar100._12_4_;
          iVar117 = auVar118._0_4_ - auVar96._0_4_;
          iVar119 = auVar118._4_4_ - auVar96._4_4_;
          iVar120 = auVar118._8_4_ - auVar96._8_4_;
          iVar121 = auVar118._12_4_ - auVar96._12_4_;
          iVar122 = auVar123._0_4_ - auVar102._0_4_;
          iVar124 = auVar123._4_4_ - auVar102._4_4_;
          iVar125 = auVar123._8_4_ - auVar102._8_4_;
          iVar126 = auVar123._12_4_ - auVar102._12_4_;
          iVar127 = auVar98._0_4_ - auVar84._0_4_;
          iVar128 = auVar98._4_4_ - auVar84._4_4_;
          iVar129 = auVar98._8_4_ - auVar84._8_4_;
          iVar130 = auVar98._12_4_ - auVar84._12_4_;
          iVar89 = auVar110._0_4_ - auVar100._0_4_;
          iVar93 = auVar110._4_4_ - auVar100._4_4_;
          iVar94 = auVar110._8_4_ - auVar100._8_4_;
          iVar95 = auVar110._12_4_ - auVar100._12_4_;
          iVar82 = auVar108._0_4_ - auVar96._0_4_;
          iVar86 = auVar108._4_4_ - auVar96._4_4_;
          iVar87 = auVar108._8_4_ - auVar96._8_4_;
          iVar88 = auVar108._12_4_ - auVar96._12_4_;
          iVar75 = auVar106._0_4_ - auVar102._0_4_;
          iVar79 = auVar106._4_4_ - auVar102._4_4_;
          iVar80 = auVar106._8_4_ - auVar102._8_4_;
          iVar81 = auVar106._12_4_ - auVar102._12_4_;
          iVar69 = auVar91._0_4_ - auVar84._0_4_;
          iVar72 = auVar91._4_4_ - auVar84._4_4_;
          iVar73 = auVar91._8_4_ - auVar84._8_4_;
          iVar74 = auVar91._12_4_ - auVar84._12_4_;
          auVar104._0_4_ = MP_INT_ABS(iVar127);
          auVar104._4_4_ = MP_INT_ABS(iVar128);
          auVar104._8_4_ = MP_INT_ABS(iVar129);
          auVar104._12_4_ = MP_INT_ABS(iVar130);
          auVar107._0_4_ = MP_INT_ABS(iVar122);
          auVar107._4_4_ = MP_INT_ABS(iVar124);
          auVar107._8_4_ = MP_INT_ABS(iVar125);
          auVar107._12_4_ = MP_INT_ABS(iVar126);
          auVar109._0_4_ = MP_INT_ABS(iVar117);
          auVar109._4_4_ = MP_INT_ABS(iVar119);
          auVar109._8_4_ = MP_INT_ABS(iVar120);
          auVar109._12_4_ = MP_INT_ABS(iVar121);
          auVar111._0_4_ = MP_INT_ABS(iVar112);
          auVar111._4_4_ = MP_INT_ABS(iVar114);
          auVar111._8_4_ = MP_INT_ABS(iVar115);
          auVar111._12_4_ = MP_INT_ABS(iVar116);
          uVar131 = MP_INT_ABS(iVar69);
          uVar132 = MP_INT_ABS(iVar72);
          uVar133 = MP_INT_ABS(iVar73);
          uVar134 = MP_INT_ABS(iVar74);
          uVar135 = MP_INT_ABS(iVar75);
          uVar136 = MP_INT_ABS(iVar79);
          uVar137 = MP_INT_ABS(iVar80);
          uVar138 = MP_INT_ABS(iVar81);
          uVar61 = MP_INT_ABS(iVar82);
          uVar62 = MP_INT_ABS(iVar86);
          uVar63 = MP_INT_ABS(iVar87);
          uVar64 = MP_INT_ABS(iVar88);
          uVar65 = MP_INT_ABS(iVar89);
          uVar66 = MP_INT_ABS(iVar93);
          uVar67 = MP_INT_ABS(iVar94);
          uVar68 = MP_INT_ABS(iVar95);
          auVar83._0_4_ = MP_INT_ABS(iVar127 + iVar69);
          auVar83._4_4_ = MP_INT_ABS(iVar128 + iVar72);
          auVar83._8_4_ = MP_INT_ABS(iVar129 + iVar73);
          auVar83._12_4_ = MP_INT_ABS(iVar130 + iVar74);
          auVar90._0_4_ = MP_INT_ABS(iVar122 + iVar75);
          auVar90._4_4_ = MP_INT_ABS(iVar124 + iVar79);
          auVar90._8_4_ = MP_INT_ABS(iVar125 + iVar80);
          auVar90._12_4_ = MP_INT_ABS(iVar126 + iVar81);
          auVar32._4_4_ = uVar66;
          auVar32._0_4_ = uVar65;
          auVar32._8_4_ = uVar67;
          auVar32._12_4_ = uVar68;
          auVar123 = NEON_cmhi(auVar111,auVar32,4);
          auVar76._4_4_ = uVar62;
          auVar76._0_4_ = uVar61;
          auVar76._8_4_ = uVar63;
          auVar76._12_4_ = uVar64;
          auVar96 = NEON_cmhi(auVar109,auVar76,4);
          auVar36._4_4_ = uVar136;
          auVar36._0_4_ = uVar135;
          auVar36._8_4_ = uVar137;
          auVar36._12_4_ = uVar138;
          auVar100 = NEON_cmhi(auVar107,auVar36,4);
          auVar34._4_4_ = uVar132;
          auVar34._0_4_ = uVar131;
          auVar34._8_4_ = uVar133;
          auVar34._12_4_ = uVar134;
          auVar108 = NEON_cmhi(auVar104,auVar34,4);
          auVar97._0_4_ = MP_INT_ABS(iVar117 + iVar82);
          auVar97._4_4_ = MP_INT_ABS(iVar119 + iVar86);
          auVar97._8_4_ = MP_INT_ABS(iVar120 + iVar87);
          auVar97._12_4_ = MP_INT_ABS(iVar121 + iVar88);
          auVar101._0_4_ = MP_INT_ABS(iVar112 + iVar89);
          auVar101._4_4_ = MP_INT_ABS(iVar114 + iVar93);
          auVar101._8_4_ = MP_INT_ABS(iVar115 + iVar94);
          auVar101._12_4_ = MP_INT_ABS(iVar116 + iVar95);
          auVar33._4_4_ = uVar66;
          auVar33._0_4_ = uVar65;
          auVar33._8_4_ = uVar67;
          auVar33._12_4_ = uVar68;
          auVar102 = NEON_umin(auVar33,auVar111,4);
          auVar31._4_4_ = uVar62;
          auVar31._0_4_ = uVar61;
          auVar31._8_4_ = uVar63;
          auVar31._12_4_ = uVar64;
          auVar98 = NEON_umin(auVar31,auVar109,4);
          auVar37._4_4_ = uVar136;
          auVar37._0_4_ = uVar135;
          auVar37._8_4_ = uVar137;
          auVar37._12_4_ = uVar138;
          auVar91 = NEON_umin(auVar37,auVar107,4);
          auVar35._4_4_ = uVar132;
          auVar35._0_4_ = uVar131;
          auVar35._8_4_ = uVar133;
          auVar35._12_4_ = uVar134;
          auVar84 = NEON_umin(auVar35,auVar104,4);
          auVar106 = NEON_cmhi(auVar102,auVar101,4);
          auVar102 = NEON_cmhi(auVar98,auVar97,4);
          auVar98 = NEON_cmhi(auVar91,auVar90,4);
          auVar91 = NEON_cmhi(auVar84,auVar83,4);
          auVar105[1] = auVar108[4];
          auVar105[0] = auVar108[0];
          auVar105[2] = auVar108[8];
          auVar105[3] = auVar108[12];
          auVar105[4] = auVar100[0];
          auVar105[5] = auVar100[4];
          auVar105[6] = auVar100[8];
          auVar105[7] = auVar100[12];
          auVar105[8] = auVar96[0];
          auVar105[9] = auVar96[4];
          auVar105[10] = auVar96[8];
          auVar105[11] = auVar96[12];
          auVar105[12] = auVar123[0];
          auVar105[13] = auVar123[4];
          auVar105[14] = auVar123[8];
          auVar105[15] = auVar123[12];
          auVar84 = NEON_bit(auVar14,auVar30,auVar105,1);
          auVar14[9] = uVar53;
          auVar14._0_9_ = *pVar8;
          auVar14[10] = uVar54;
          auVar14[11] = uVar55;
          auVar14[12] = uVar56;
          auVar14[13] = uVar57;
          auVar14[14] = uVar58;
          auVar14[15] = uVar59;
          auVar30[1] = auVar91[4];
          auVar30[0] = auVar91[0];
          auVar30[2] = auVar91[8];
          auVar30[3] = auVar91[12];
          auVar30[4] = auVar98[0];
          auVar30[5] = auVar98[4];
          auVar30[6] = auVar98[8];
          auVar30[7] = auVar98[12];
          auVar30[8] = auVar102[0];
          auVar30[9] = auVar102[4];
          auVar30[10] = auVar102[8];
          auVar30[11] = auVar102[12];
          auVar30[12] = auVar106[0];
          auVar30[13] = auVar106[4];
          auVar30[14] = auVar106[8];
          auVar30[15] = auVar106[12];
          auVar84 = NEON_bit(auVar84,auVar14,auVar30,1);
          uVar25 = *(undefined8 *)(*pauVar46 + 8);
          uVar24 = *(undefined8 *)*pauVar46;
          pauVar46[1][0] = auVar84[8] + (char)uVar25;
          pauVar46[1][1] = auVar84[9] + (char)((ulong)uVar25 >> 8);
          pauVar46[1][2] = auVar84[10] + (char)((ulong)uVar25 >> 0x10);
          pauVar46[1][3] = auVar84[11] + (char)((ulong)uVar25 >> 0x18);
          pauVar46[1][4] = auVar84[12] + (char)((ulong)uVar25 >> 0x20);
          pauVar46[1][5] = auVar84[13] + (char)((ulong)uVar25 >> 0x28);
          pauVar46[1][6] = auVar84[14] + (char)((ulong)uVar25 >> 0x30);
          pauVar46[1][7] = auVar84[15] + (char)((ulong)uVar25 >> 0x38);
          (*pauVar46)[0] = auVar84[0] + (char)uVar24;
          (*pauVar46)[1] = auVar84[1] + (char)((ulong)uVar24 >> 8);
          (*pauVar46)[2] = auVar84[2] + (char)((ulong)uVar24 >> 0x10);
          (*pauVar46)[3] = auVar84[3] + (char)((ulong)uVar24 >> 0x18);
          (*pauVar46)[4] = auVar84[4] + (char)((ulong)uVar24 >> 0x20);
          (*pauVar46)[5] = auVar84[5] + (char)((ulong)uVar24 >> 0x28);
          (*pauVar46)[6] = auVar84[6] + (char)((ulong)uVar24 >> 0x30);
          (*pauVar46)[7] = auVar84[7] + (char)((ulong)uVar24 >> 0x38);
          pauVar46 = pauVar46 + 1;
          pauVar51 = pauVar51 + 1;
        } while (uVar49 != 0);
        if (uVar44 == uVar50) {
          return;
        }
        if (((uint)uVar44 >> 3 & 1) == 0) {
          param_3 = (undefined (*) [16])(*param_3 + uVar50);
          pauVar45 = (undefined (*) [16])(*pauVar45 + uVar50);
          goto LAB_00dc1bdc;
        }
      }
      Var40 = _DAT_004c4f40;
      Var39 = _DAT_004c4d70;
      uVar49 = uVar44 & 0xfffffffffffffff8;
      puVar38 = *param_3;
      param_3 = (undefined (*) [16])(*param_3 + uVar49);
      lVar42 = uVar50 - uVar49;
      puVar47 = (undefined8 *)(*pauVar45 + uVar50);
      puVar52 = (ulong *)(puVar38 + uVar50);
      do {
        uVar50 = *(ulong *)((long)puVar52 + lVar43);
        lVar42 = lVar42 + 8;
        uVar48 = *puVar52;
        auVar60._0_8_ = *(ulong *)((long)puVar47 + lVar43);
        auVar60._8_8_ = 0;
        auVar70._8_8_ = 0;
        auVar70._0_8_ = uVar50;
        auVar11[9] = 0x10;
        auVar11._0_9_ = Var40;
        auVar11[10] = 0x10;
        auVar11[11] = 0x10;
        auVar11[12] = 3;
        auVar11[13] = 0x10;
        auVar11[14] = 0x10;
        auVar11[15] = 0x10;
        auVar70 = a64_TBL(ZEXT816(0),auVar70,ZEXT216(0),auVar11);
        auVar77._8_8_ = 0;
        auVar77._0_8_ = uVar50;
        auVar17[9] = 0x10;
        auVar17._0_9_ = Var39;
        auVar17[10] = 0x10;
        auVar17[11] = 0x10;
        auVar17[12] = 7;
        auVar17[13] = 0x10;
        auVar17[14] = 0x10;
        auVar17[15] = 0x10;
        auVar77 = a64_TBL(ZEXT816(0),auVar77,ZEXT216(0),auVar17);
        auVar12[9] = 0x10;
        auVar12._0_9_ = Var40;
        auVar12[10] = 0x10;
        auVar12[11] = 0x10;
        auVar12[12] = 3;
        auVar12[13] = 0x10;
        auVar12[14] = 0x10;
        auVar12[15] = 0x10;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar48;
        auVar84 = a64_TBL(ZEXT816(0),auVar22,ZEXT816(0),auVar12);
        auVar18[9] = 0x10;
        auVar18._0_9_ = Var39;
        auVar18[10] = 0x10;
        auVar18[11] = 0x10;
        auVar18[12] = 7;
        auVar18[13] = 0x10;
        auVar18[14] = 0x10;
        auVar18[15] = 0x10;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar48;
        auVar91 = a64_TBL(ZEXT816(0),auVar23,ZEXT816(0),auVar18);
        auVar13[9] = 0x10;
        auVar13._0_9_ = Var40;
        auVar13[10] = 0x10;
        auVar13[11] = 0x10;
        auVar13[12] = 3;
        auVar13[13] = 0x10;
        auVar13[14] = 0x10;
        auVar13[15] = 0x10;
        auVar26._9_7_ = 0;
        auVar26._0_9_ = (unkuint9)0;
        auVar98 = a64_TBL(ZEXT816(0),auVar60,auVar26,auVar13);
        auVar19[9] = 0x10;
        auVar19._0_9_ = Var39;
        auVar19[10] = 0x10;
        auVar19[11] = 0x10;
        auVar19[12] = 7;
        auVar19[13] = 0x10;
        auVar19[14] = 0x10;
        auVar19[15] = 0x10;
        auVar27._9_7_ = 0;
        auVar27._0_9_ = (unkuint9)0;
        auVar102 = a64_TBL(ZEXT816(0),auVar60,auVar27,auVar19);
        iVar82 = auVar84._0_4_ - auVar70._0_4_;
        iVar86 = auVar84._4_4_ - auVar70._4_4_;
        iVar87 = auVar84._8_4_ - auVar70._8_4_;
        iVar88 = auVar84._12_4_ - auVar70._12_4_;
        iVar89 = auVar91._0_4_ - auVar77._0_4_;
        iVar93 = auVar91._4_4_ - auVar77._4_4_;
        iVar94 = auVar91._8_4_ - auVar77._8_4_;
        iVar95 = auVar91._12_4_ - auVar77._12_4_;
        iVar69 = auVar98._0_4_ - auVar70._0_4_;
        iVar72 = auVar98._4_4_ - auVar70._4_4_;
        iVar73 = auVar98._8_4_ - auVar70._8_4_;
        iVar74 = auVar98._12_4_ - auVar70._12_4_;
        iVar75 = auVar102._0_4_ - auVar77._0_4_;
        iVar79 = auVar102._4_4_ - auVar77._4_4_;
        iVar80 = auVar102._8_4_ - auVar77._8_4_;
        iVar81 = auVar102._12_4_ - auVar77._12_4_;
        auVar99._0_4_ = MP_INT_ABS(iVar82);
        auVar99._4_4_ = MP_INT_ABS(iVar86);
        auVar99._8_4_ = MP_INT_ABS(iVar87);
        auVar99._12_4_ = MP_INT_ABS(iVar88);
        auVar103._0_4_ = MP_INT_ABS(iVar89);
        auVar103._4_4_ = MP_INT_ABS(iVar93);
        auVar103._8_4_ = MP_INT_ABS(iVar94);
        auVar103._12_4_ = MP_INT_ABS(iVar95);
        auVar78._0_4_ = MP_INT_ABS(iVar75);
        auVar78._4_4_ = MP_INT_ABS(iVar79);
        auVar78._8_4_ = MP_INT_ABS(iVar80);
        auVar78._12_4_ = MP_INT_ABS(iVar81);
        auVar71._0_4_ = MP_INT_ABS(iVar69);
        auVar71._4_4_ = MP_INT_ABS(iVar72);
        auVar71._8_4_ = MP_INT_ABS(iVar73);
        auVar71._12_4_ = MP_INT_ABS(iVar74);
        auVar85._0_4_ = MP_INT_ABS(iVar82 + iVar69);
        auVar85._4_4_ = MP_INT_ABS(iVar86 + iVar72);
        auVar85._8_4_ = MP_INT_ABS(iVar87 + iVar73);
        auVar85._12_4_ = MP_INT_ABS(iVar88 + iVar74);
        auVar92._0_4_ = MP_INT_ABS(iVar89 + iVar75);
        auVar92._4_4_ = MP_INT_ABS(iVar93 + iVar79);
        auVar92._8_4_ = MP_INT_ABS(iVar94 + iVar80);
        auVar92._12_4_ = MP_INT_ABS(iVar95 + iVar81);
        auVar84 = NEON_cmhi(auVar103,auVar78,4);
        auVar91 = NEON_cmhi(auVar99,auVar71,4);
        auVar77 = NEON_umin(auVar78,auVar103,4);
        auVar70 = NEON_umin(auVar71,auVar99,4);
        auVar77 = NEON_cmhi(auVar77,auVar92,4);
        auVar70 = NEON_cmhi(auVar70,auVar85,4);
        uVar24 = NEON_bif(uVar48,auVar60._0_8_,
                          CONCAT17(auVar84[12],
                                   CONCAT16(auVar84[8],
                                            CONCAT15(auVar84[4],
                                                     CONCAT14(auVar84[0],
                                                              CONCAT13(auVar91[12],
                                                                       CONCAT12(auVar91[8],
                                                                                CONCAT11(auVar91[4],
                                                                                         auVar91[0])
                                                                               )))))),1);
        uVar24 = NEON_bit(uVar24,uVar50,
                          CONCAT17(auVar77[12],
                                   CONCAT16(auVar77[8],
                                            CONCAT15(auVar77[4],
                                                     CONCAT14(auVar77[0],
                                                              CONCAT13(auVar70[12],
                                                                       CONCAT12(auVar70[8],
                                                                                CONCAT11(auVar70[4],
                                                                                         auVar70[0])
                                                                               )))))),1);
        uVar25 = *puVar47;
        *puVar47 = CONCAT17((char)((ulong)uVar24 >> 0x38) + (char)((ulong)uVar25 >> 0x38),
                            CONCAT16((char)((ulong)uVar24 >> 0x30) + (char)((ulong)uVar25 >> 0x30),
                                     CONCAT15((char)((ulong)uVar24 >> 0x28) +
                                              (char)((ulong)uVar25 >> 0x28),
                                              CONCAT14((char)((ulong)uVar24 >> 0x20) +
                                                       (char)((ulong)uVar25 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar24 >> 0x18) +
                                                                (char)((ulong)uVar25 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar24 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar25 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar24 >> 8) + (char)((ulong)uVar25 >> 8),
                                                  (char)uVar24 + (char)uVar25)))))));
        puVar47 = puVar47 + 1;
        puVar52 = puVar52 + 1;
      } while (lVar42 != 0);
      pauVar45 = (undefined (*) [16])(*pauVar45 + uVar49);
      if (uVar44 == uVar49) {
        return;
      }
    }
  }
LAB_00dc1bdc:
  do {
    bVar5 = *(byte *)((long)param_3 + lVar43);
    uVar7 = (uint)(byte)(*param_3)[0] - (uint)bVar5;
    uVar6 = (uint)*(byte *)((long)pauVar45 + lVar43) - (uint)bVar5;
    uVar2 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar2 = uVar7;
    }
    uVar3 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar3 = uVar6;
    }
    uVar7 = uVar7 + uVar6;
    uVar6 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar6 = uVar7;
    }
    uVar7 = uVar3;
    if (uVar2 <= uVar3) {
      uVar7 = uVar2;
    }
    bVar4 = (*param_3)[0];
    if (uVar2 <= uVar3) {
      bVar4 = *(byte *)((long)pauVar45 + lVar43);
    }
    if (uVar7 <= uVar6) {
      bVar5 = bVar4;
    }
    puVar38 = *pauVar45;
    (*pauVar45)[0] = bVar5 + (*pauVar45)[0];
    param_3 = (undefined (*) [16])(*param_3 + 1);
    pauVar45 = (undefined (*) [16])(puVar38 + 1);
  } while ((undefined (*) [16])(puVar38 + 1) != pauVar41);
                    /* WARNING: Read-only address (ram,0x004c37b0) is written */
                    /* WARNING: Read-only address (ram,0x004c4a50) is written */
                    /* WARNING: Read-only address (ram,0x004c4d70) is written */
                    /* WARNING: Read-only address (ram,0x004c4f40) is written */
  return;
}


