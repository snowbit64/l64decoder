// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pitch_search
// Entry Point: 00e78e24
// Size: 2352 bytes
// Signature: undefined pitch_search(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pitch_search(long param_1,long param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined (*pauVar10) [16];
  short *psVar11;
  undefined (*pauVar12) [16];
  uint uVar13;
  undefined (*pauVar14) [16];
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  short *psVar24;
  int iVar25;
  undefined2 *puVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  short *psVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  short *psVar35;
  int iVar36;
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  int iVar55;
  int iVar60;
  int iVar61;
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  int iVar62;
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
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
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  long alStack_80 [2];
  int *piStack_70;
  long local_68;
  
  alStack_80[1] = tpidr_el0;
  uVar13 = (int)param_3 >> 2;
  piStack_70 = param_5;
  local_68 = *(long *)(alStack_80[1] + 0x28);
  iVar36 = param_4 + param_3;
  uVar15 = (long)((ulong)param_3 << 0x20) >> 0x22;
  lVar23 = -((-(ulong)(uVar13 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar13 << 1) + 0xf &
            0xfffffffffffffff0);
  psVar11 = (short *)((long)alStack_80 + lVar23);
  uVar29 = iVar36 >> 2;
  uVar17 = (ulong)uVar29;
  psVar35 = (short *)((long)psVar11 -
                     ((-(ulong)(uVar29 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1) + 0xf &
                     0xfffffffffffffff0));
  uVar1 = param_4 >> 1;
  lVar34 = (long)psVar35 -
           ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) + 0xf &
           0xfffffffffffffff0);
  if (3 < (int)param_3) {
    uVar28 = uVar13;
    if ((int)uVar13 < 2) {
      uVar28 = 1;
    }
    uVar18 = (ulong)uVar28;
    if (uVar28 < 0x11) {
      lVar22 = 0;
    }
    else {
      puVar30 = (undefined8 *)((long)&piStack_70 + lVar23);
      uVar27 = 0x10;
      if ((uVar28 & 0xf) != 0) {
        uVar27 = uVar18 & 0xf;
      }
      lVar22 = uVar18 - uVar27;
      puVar26 = (undefined2 *)(param_1 + 0x20);
      lVar19 = lVar22;
      do {
        auVar40._0_8_ = CONCAT26(puVar26[6],CONCAT24(puVar26[4],CONCAT22(puVar26[2],*puVar26)));
        auVar40._8_2_ = puVar26[8];
        auVar40._10_2_ = puVar26[10];
        auVar40._12_2_ = puVar26[0xc];
        auVar40._14_2_ = puVar26[0xe];
        lVar19 = lVar19 + -0x10;
        auVar43._0_8_ =
             CONCAT26(puVar26[-10],CONCAT24(puVar26[-0xc],CONCAT22(puVar26[-0xe],puVar26[-0x10])));
        auVar43._8_2_ = puVar26[-8];
        auVar43._10_2_ = puVar26[-6];
        auVar43._12_2_ = puVar26[-4];
        auVar43._14_2_ = puVar26[-2];
        puVar30[-1] = auVar43._8_8_;
        puVar30[-2] = auVar43._0_8_;
        puVar30[1] = auVar40._8_8_;
        *puVar30 = auVar40._0_8_;
        puVar30 = puVar30 + 4;
        puVar26 = puVar26 + 0x20;
      } while (lVar19 != 0);
    }
    lVar19 = uVar18 - lVar22;
    psVar24 = (short *)(param_1 + lVar22 * 4);
    psVar31 = psVar11 + lVar22;
    do {
      lVar19 = lVar19 + -1;
      *psVar31 = *psVar24;
      psVar24 = psVar24 + 2;
      psVar31 = psVar31 + 1;
    } while (lVar19 != 0);
  }
  if (3 < iVar36) {
    uVar28 = uVar29;
    if ((int)uVar29 < 2) {
      uVar28 = 1;
    }
    uVar18 = (ulong)uVar28;
    if (uVar28 < 0x11) {
      lVar22 = 0;
    }
    else {
      puVar30 = (undefined8 *)(psVar35 + 8);
      uVar27 = 0x10;
      if ((uVar28 & 0xf) != 0) {
        uVar27 = uVar18 & 0xf;
      }
      lVar22 = uVar18 - uVar27;
      puVar26 = (undefined2 *)(param_2 + 0x20);
      lVar19 = lVar22;
      do {
        auVar49._0_8_ = CONCAT26(puVar26[6],CONCAT24(puVar26[4],CONCAT22(puVar26[2],*puVar26)));
        auVar49._8_2_ = puVar26[8];
        auVar49._10_2_ = puVar26[10];
        auVar49._12_2_ = puVar26[0xc];
        auVar49._14_2_ = puVar26[0xe];
        lVar19 = lVar19 + -0x10;
        auVar66._0_8_ =
             CONCAT26(puVar26[-10],CONCAT24(puVar26[-0xc],CONCAT22(puVar26[-0xe],puVar26[-0x10])));
        auVar66._8_2_ = puVar26[-8];
        auVar66._10_2_ = puVar26[-6];
        auVar66._12_2_ = puVar26[-4];
        auVar66._14_2_ = puVar26[-2];
        puVar30[-1] = auVar66._8_8_;
        puVar30[-2] = auVar66._0_8_;
        puVar30[1] = auVar49._8_8_;
        *puVar30 = auVar49._0_8_;
        puVar30 = puVar30 + 4;
        puVar26 = puVar26 + 0x20;
      } while (lVar19 != 0);
    }
    lVar19 = uVar18 - lVar22;
    psVar24 = (short *)(param_2 + lVar22 * 4);
    psVar31 = psVar35 + lVar22;
    do {
      lVar19 = lVar19 + -1;
      *psVar31 = *psVar24;
      psVar24 = psVar24 + 2;
      psVar31 = psVar31 + 1;
    } while (lVar19 != 0);
  }
  if ((int)param_3 < 4) {
    uVar28 = 0;
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    uVar28 = 0;
    uVar18 = uVar15 & 0xffffffff;
    psVar24 = psVar11;
    do {
      uVar32 = (uint)*psVar24;
      if ((int)uVar28 <= (int)*psVar24) {
        uVar28 = uVar32;
      }
      if ((int)uVar32 <= (int)uVar20) {
        uVar20 = uVar32;
      }
      uVar28 = uVar28 & 0xffff;
      uVar18 = uVar18 - 1;
      psVar24 = psVar24 + 1;
    } while (uVar18 != 0);
  }
  uVar32 = 0;
  uVar16 = 0;
  if (uVar28 == -uVar20 || (int)(uVar28 + uVar20) < 0 != SBORROW4(uVar28,-uVar20)) {
    uVar28 = -uVar20;
  }
  if (3 < iVar36) {
    uVar16 = 0;
    uVar32 = 0;
    psVar24 = psVar35;
    do {
      uVar20 = (uint)*psVar24;
      if ((int)uVar32 <= (int)*psVar24) {
        uVar32 = uVar20;
      }
      if ((int)uVar20 <= (int)uVar16) {
        uVar16 = uVar20;
      }
      uVar32 = uVar32 & 0xffff;
      uVar17 = uVar17 - 1;
      psVar24 = psVar24 + 1;
    } while (uVar17 != 0);
  }
  uVar20 = 0;
  if (uVar32 == -uVar16 || (int)(uVar32 + uVar16) < 0 != SBORROW4(uVar32,-uVar16)) {
    uVar32 = -uVar16;
  }
  if ((int)uVar28 <= (int)uVar32) {
    uVar28 = uVar32;
  }
  if (uVar28 < 2) {
    uVar28 = 1;
  }
  if ((uint)LZCOUNT(uVar28) < 0x14) {
    uVar20 = 0x14 - (uint)LZCOUNT(uVar28);
    if (3 < (int)param_3) {
      if ((int)uVar13 < 2) {
        uVar13 = 1;
      }
      uVar17 = (ulong)uVar13;
      if (uVar13 < 0x10) {
        uVar27 = 0;
      }
      else {
        auVar69._4_4_ = uVar20;
        auVar69._0_4_ = uVar20;
        auVar69._8_4_ = uVar20;
        auVar69._12_4_ = uVar20;
        uVar27 = uVar17 & 0x7ffffff0;
        pauVar14 = (undefined (*) [16])((long)&piStack_70 + lVar23);
        auVar40 = NEON_neg(auVar69,4);
        uVar18 = uVar27;
        do {
          auVar43 = pauVar14[-1];
          auVar49 = *pauVar14;
          uVar18 = uVar18 - 0x10;
          auVar56._0_4_ = (int)auVar43._8_2_;
          auVar56._4_4_ = (int)auVar43._10_2_;
          auVar56._8_4_ = (int)auVar43._12_2_;
          auVar56._12_4_ = (int)auVar43._14_2_;
          auVar72._0_4_ = (int)auVar43._0_2_;
          auVar72._4_4_ = (int)auVar43._2_2_;
          auVar72._8_4_ = (int)auVar43._4_2_;
          auVar72._12_4_ = (int)auVar43._6_2_;
          auVar63._0_4_ = (int)auVar49._8_2_;
          auVar63._4_4_ = (int)auVar49._10_2_;
          auVar63._8_4_ = (int)auVar49._12_2_;
          auVar63._12_4_ = (int)auVar49._14_2_;
          auVar78._0_4_ = (int)auVar49._0_2_;
          auVar78._4_4_ = (int)auVar49._2_2_;
          auVar78._8_4_ = (int)auVar49._4_2_;
          auVar78._12_4_ = (int)auVar49._6_2_;
          auVar66 = NEON_sshl(auVar56,auVar40,4);
          auVar43 = NEON_sshl(auVar72,auVar40,4);
          auVar69 = NEON_sshl(auVar63,auVar40,4);
          auVar49 = NEON_sshl(auVar78,auVar40,4);
          auVar75._0_8_ =
               CONCAT26(auVar43._12_2_,CONCAT24(auVar43._8_2_,CONCAT22(auVar43._4_2_,auVar43._0_2_))
                       );
          auVar75._8_2_ = auVar66._0_2_;
          auVar75._10_2_ = auVar66._4_2_;
          auVar75._12_2_ = auVar66._8_2_;
          auVar75._14_2_ = auVar66._12_2_;
          auVar76._0_8_ =
               CONCAT26(auVar49._12_2_,CONCAT24(auVar49._8_2_,CONCAT22(auVar49._4_2_,auVar49._0_2_))
                       );
          auVar76._8_2_ = auVar69._0_2_;
          auVar76._10_2_ = auVar69._4_2_;
          auVar76._12_2_ = auVar69._8_2_;
          auVar76._14_2_ = auVar69._12_2_;
          *(long *)(pauVar14[-1] + 8) = auVar75._8_8_;
          *(undefined8 *)pauVar14[-1] = auVar75._0_8_;
          *(long *)(*pauVar14 + 8) = auVar76._8_8_;
          *(undefined8 *)*pauVar14 = auVar76._0_8_;
          pauVar14 = pauVar14 + 2;
        } while (uVar18 != 0);
        if (uVar27 == uVar17) goto LAB_00e79118;
      }
      lVar23 = uVar17 - uVar27;
      psVar24 = psVar11 + uVar27;
      do {
        lVar23 = lVar23 + -1;
        *psVar24 = (short)((int)*psVar24 >> (uVar20 & 0x1f));
        psVar24 = psVar24 + 1;
      } while (lVar23 != 0);
    }
LAB_00e79118:
    if (3 < iVar36) {
      if ((int)uVar29 < 2) {
        uVar29 = 1;
      }
      uVar17 = (ulong)uVar29;
      if (uVar29 < 0x10) {
        uVar27 = 0;
      }
      else {
        auVar37._4_4_ = uVar20;
        auVar37._0_4_ = uVar20;
        auVar37._8_4_ = uVar20;
        auVar37._12_4_ = uVar20;
        uVar27 = uVar17 & 0x7ffffff0;
        pauVar14 = (undefined (*) [16])(psVar35 + 8);
        auVar40 = NEON_neg(auVar37,4);
        uVar18 = uVar27;
        do {
          auVar43 = pauVar14[-1];
          auVar49 = *pauVar14;
          uVar18 = uVar18 - 0x10;
          auVar57._0_4_ = (int)auVar43._8_2_;
          auVar57._4_4_ = (int)auVar43._10_2_;
          auVar57._8_4_ = (int)auVar43._12_2_;
          auVar57._12_4_ = (int)auVar43._14_2_;
          auVar42._0_4_ = (int)auVar43._0_2_;
          auVar42._4_4_ = (int)auVar43._2_2_;
          auVar42._8_4_ = (int)auVar43._4_2_;
          auVar42._12_4_ = (int)auVar43._6_2_;
          auVar64._0_4_ = (int)auVar49._8_2_;
          auVar64._4_4_ = (int)auVar49._10_2_;
          auVar64._8_4_ = (int)auVar49._12_2_;
          auVar64._12_4_ = (int)auVar49._14_2_;
          auVar48._0_4_ = (int)auVar49._0_2_;
          auVar48._4_4_ = (int)auVar49._2_2_;
          auVar48._8_4_ = (int)auVar49._4_2_;
          auVar48._12_4_ = (int)auVar49._6_2_;
          auVar66 = NEON_sshl(auVar57,auVar40,4);
          auVar43 = NEON_sshl(auVar42,auVar40,4);
          auVar69 = NEON_sshl(auVar64,auVar40,4);
          auVar49 = NEON_sshl(auVar48,auVar40,4);
          auVar44._0_8_ =
               CONCAT26(auVar43._12_2_,CONCAT24(auVar43._8_2_,CONCAT22(auVar43._4_2_,auVar43._0_2_))
                       );
          auVar44._8_2_ = auVar66._0_2_;
          auVar44._10_2_ = auVar66._4_2_;
          auVar44._12_2_ = auVar66._8_2_;
          auVar44._14_2_ = auVar66._12_2_;
          auVar50._0_8_ =
               CONCAT26(auVar49._12_2_,CONCAT24(auVar49._8_2_,CONCAT22(auVar49._4_2_,auVar49._0_2_))
                       );
          auVar50._8_2_ = auVar69._0_2_;
          auVar50._10_2_ = auVar69._4_2_;
          auVar50._12_2_ = auVar69._8_2_;
          auVar50._14_2_ = auVar69._12_2_;
          *(long *)((long)pauVar14[-1] + 8) = auVar44._8_8_;
          *(undefined8 *)pauVar14[-1] = auVar44._0_8_;
          *(long *)((long)*pauVar14 + 8) = auVar50._8_8_;
          *(undefined8 *)*pauVar14 = auVar50._0_8_;
          pauVar14 = pauVar14 + 2;
        } while (uVar18 != 0);
        if (uVar27 == uVar17) goto LAB_00e791ac;
      }
      lVar23 = uVar17 - uVar27;
      psVar24 = psVar35 + uVar27;
      do {
        lVar23 = lVar23 + -1;
        *psVar24 = (short)((int)*psVar24 >> (uVar20 & 0x1f));
        psVar24 = psVar24 + 1;
      } while (lVar23 != 0);
    }
LAB_00e791ac:
    uVar20 = uVar20 * 2;
  }
  uVar8 = celt_pitch_xcorr_c(psVar11,psVar35,lVar34,uVar15 & 0xffffffff,(ulong)(uint)(param_4 >> 2))
  ;
  if ((int)param_3 < 4) {
    iVar36 = 1;
  }
  else {
    if (param_3 < 0x40) {
      uVar18 = 0;
      iVar36 = 1;
    }
    else {
      uVar18 = uVar15 & 0xfffffff0;
      pauVar14 = (undefined (*) [16])(psVar35 + 8);
      uVar17 = uVar18;
      auVar40 = ZEXT816(0);
      auVar43 = ZEXT816(0);
      auVar49 = ZEXT816(0);
      auVar66 = _DAT_004c4020;
      do {
        auVar69 = pauVar14[-1];
        auVar72 = *pauVar14;
        pauVar14 = pauVar14 + 2;
        uVar17 = uVar17 - 0x10;
        auVar75 = NEON_ext(auVar69,auVar69,8,1);
        auVar58._0_4_ = auVar66._0_4_ + (int)auVar69._0_2_ * (int)auVar69._0_2_;
        auVar58._4_4_ = auVar66._4_4_ + (int)auVar69._2_2_ * (int)auVar69._2_2_;
        auVar58._8_4_ = auVar66._8_4_ + (int)auVar69._4_2_ * (int)auVar69._4_2_;
        auVar58._12_4_ = auVar66._12_4_ + (int)auVar69._6_2_ * (int)auVar69._6_2_;
        auVar66 = NEON_ext(auVar72,auVar72,8,1);
        auVar45._0_4_ = auVar43._0_4_ + (int)auVar72._0_2_ * (int)auVar72._0_2_;
        auVar45._4_4_ = auVar43._4_4_ + (int)auVar72._2_2_ * (int)auVar72._2_2_;
        auVar45._8_4_ = auVar43._8_4_ + (int)auVar72._4_2_ * (int)auVar72._4_2_;
        auVar45._12_4_ = auVar43._12_4_ + (int)auVar72._6_2_ * (int)auVar72._6_2_;
        auVar38._0_4_ = auVar40._0_4_ + (int)auVar75._0_2_ * (int)auVar75._0_2_;
        auVar38._4_4_ = auVar40._4_4_ + (int)auVar75._2_2_ * (int)auVar75._2_2_;
        auVar38._8_4_ = auVar40._8_4_ + (int)auVar75._4_2_ * (int)auVar75._4_2_;
        auVar38._12_4_ = auVar40._12_4_ + (int)auVar75._6_2_ * (int)auVar75._6_2_;
        auVar51._0_4_ = auVar49._0_4_ + (int)auVar66._0_2_ * (int)auVar66._0_2_;
        auVar51._4_4_ = auVar49._4_4_ + (int)auVar66._2_2_ * (int)auVar66._2_2_;
        auVar51._8_4_ = auVar49._8_4_ + (int)auVar66._4_2_ * (int)auVar66._4_2_;
        auVar51._12_4_ = auVar49._12_4_ + (int)auVar66._6_2_ * (int)auVar66._6_2_;
        auVar40 = auVar38;
        auVar43 = auVar45;
        auVar49 = auVar51;
        auVar66 = auVar58;
      } while (uVar17 != 0);
      iVar36 = auVar45._0_4_ + auVar58._0_4_ + auVar51._0_4_ + auVar38._0_4_ +
               auVar45._4_4_ + auVar58._4_4_ + auVar51._4_4_ + auVar38._4_4_ +
               auVar45._8_4_ + auVar58._8_4_ + auVar51._8_4_ + auVar38._8_4_ +
               auVar45._12_4_ + auVar58._12_4_ + auVar51._12_4_ + auVar38._12_4_;
      if (uVar18 == (uVar15 & 0xffffffff)) goto LAB_00e7926c;
    }
    lVar23 = (uVar15 & 0xffffffff) - uVar18;
    psVar11 = psVar35 + uVar18;
    do {
      lVar23 = lVar23 + -1;
      iVar36 = iVar36 + (int)*psVar11 * (int)*psVar11;
      psVar11 = psVar11 + 1;
    } while (lVar23 != 0);
  }
LAB_00e7926c:
  if (param_4 < 4) {
    iVar60 = 0;
    iVar55 = 1;
  }
  else {
    uVar28 = 0xffff;
    iVar60 = 0;
    iVar62 = 0;
    iVar25 = 0;
    iVar61 = 0;
    uVar29 = (uint)LZCOUNT(uVar8);
    iVar55 = 1;
    uVar13 = 0xffff;
    uVar17 = 0;
    do {
      uVar32 = *(uint *)(lVar34 + uVar17 * 4);
      iVar5 = iVar60;
      iVar6 = iVar62;
      iVar7 = iVar25;
      uVar16 = uVar28;
      if (0 < (int)uVar32) {
        sVar2 = (short)(uVar32 >> (ulong)(0x11 - uVar29 & 0x1f));
        if (0x10 < uVar29) {
          sVar2 = (short)(uVar32 << (ulong)(uVar29 - 0x11 & 0x1f));
        }
        uVar32 = (uint)((int)sVar2 * (int)sVar2) >> 0xf;
        if (((int)((ulong)((long)(short)uVar13 * (long)iVar36) >> 0xf) <
             (int)((ulong)((long)(short)uVar32 * (long)iVar61) >> 0xf)) &&
           (iVar21 = (int)uVar17, iVar5 = iVar21, iVar6 = iVar21, iVar7 = iVar36, uVar13 = uVar28,
           uVar16 = uVar32, iVar61 = iVar25, iVar55 = iVar62,
           (int)((ulong)((long)(short)uVar32 * (long)iVar25) >> 0xf) <=
           (int)((ulong)((long)(short)uVar28 * (long)iVar36) >> 0xf))) {
          iVar5 = iVar60;
          iVar6 = iVar62;
          iVar7 = iVar25;
          uVar13 = uVar32;
          uVar16 = uVar28;
          iVar61 = iVar36;
          iVar55 = iVar21;
        }
      }
      uVar28 = uVar16;
      iVar25 = iVar7;
      iVar62 = iVar6;
      iVar60 = iVar5;
      uVar18 = uVar17 + 1;
      iVar36 = ((int)psVar35[uVar15 + uVar17] * (int)psVar35[uVar15 + uVar17] -
               (int)psVar35[uVar17] * (int)psVar35[uVar17]) + iVar36;
      if (iVar36 < 2) {
        iVar36 = 1;
      }
      uVar17 = uVar18;
    } while ((uint)(param_4 >> 2) != uVar18);
  }
  uVar13 = (int)param_3 >> 1;
  uVar15 = (ulong)uVar13;
  if (param_4 < 2) {
    iVar36 = 1;
  }
  else {
    auVar39._4_4_ = uVar20;
    auVar39._0_4_ = uVar20;
    auVar39._8_4_ = uVar20;
    auVar39._12_4_ = uVar20;
    uVar29 = uVar13;
    if ((int)uVar13 < 2) {
      uVar29 = 1;
    }
    uVar18 = (ulong)uVar29;
    auVar40 = NEON_neg(auVar39,4);
    uVar17 = 0;
    uVar28 = uVar1;
    if ((int)uVar1 < 2) {
      uVar28 = 1;
    }
    uVar27 = uVar18 & 0x7ffffff0;
    pauVar14 = (undefined (*) [16])(param_2 + 0x10);
    iVar36 = 1;
    do {
      uVar32 = iVar60 * -2 + (int)uVar17;
      *(undefined4 *)(lVar34 + uVar17 * 4) = 0;
      uVar16 = -uVar32;
      if (-1 < (int)uVar32) {
        uVar16 = uVar32;
      }
      if (uVar16 < 3) {
LAB_00e793fc:
        if ((int)param_3 < 2) {
          iVar61 = 0;
          iVar62 = iVar61;
        }
        else {
          if (uVar29 < 0x10) {
            iVar61 = 0;
            uVar9 = 0;
LAB_00e7949c:
            lVar23 = uVar18 - uVar9;
            psVar11 = (short *)(param_2 + (uVar9 + uVar17) * 2);
            psVar35 = (short *)(param_1 + uVar9 * 2);
            do {
              lVar23 = lVar23 + -1;
              iVar61 = ((int)*psVar11 * (int)*psVar35 >> (uVar20 & 0x1f)) + iVar61;
              psVar11 = psVar11 + 1;
              psVar35 = psVar35 + 1;
            } while (lVar23 != 0);
          }
          else {
            uVar9 = uVar27;
            pauVar10 = pauVar14;
            pauVar12 = (undefined (*) [16])(param_1 + 0x10);
            auVar43 = ZEXT816(0);
            auVar49 = ZEXT816(0);
            auVar66 = ZEXT816(0);
            auVar69 = ZEXT816(0);
            do {
              auVar72 = pauVar12[-1];
              auVar75 = *pauVar12;
              pauVar12 = pauVar12 + 2;
              uVar9 = uVar9 - 0x10;
              auVar78 = pauVar10[-1];
              auVar76 = *pauVar10;
              pauVar10 = pauVar10 + 2;
              auVar67._0_4_ = (int)auVar78._0_2_ * (int)auVar72._0_2_;
              auVar67._4_4_ = (int)auVar78._2_2_ * (int)auVar72._2_2_;
              auVar67._8_4_ = (int)auVar78._4_2_ * (int)auVar72._4_2_;
              auVar67._12_4_ = (int)auVar78._6_2_ * (int)auVar72._6_2_;
              auVar70._0_4_ = (int)auVar76._8_2_ * (int)auVar75._8_2_;
              auVar70._4_4_ = (int)auVar76._10_2_ * (int)auVar75._10_2_;
              auVar70._8_4_ = (int)auVar76._12_2_ * (int)auVar75._12_2_;
              auVar70._12_4_ = (int)auVar76._14_2_ * (int)auVar75._14_2_;
              auVar73._0_4_ = (int)auVar76._0_2_ * (int)auVar75._0_2_;
              auVar73._4_4_ = (int)auVar76._2_2_ * (int)auVar75._2_2_;
              auVar73._8_4_ = (int)auVar76._4_2_ * (int)auVar75._4_2_;
              auVar73._12_4_ = (int)auVar76._6_2_ * (int)auVar75._6_2_;
              auVar4._4_4_ = (int)auVar78._10_2_ * (int)auVar72._10_2_;
              auVar4._0_4_ = (int)auVar78._8_2_ * (int)auVar72._8_2_;
              auVar4._8_4_ = (int)auVar78._12_2_ * (int)auVar72._12_2_;
              auVar4._12_4_ = (int)auVar78._14_2_ * (int)auVar72._14_2_;
              auVar76 = NEON_sshl(auVar4,auVar40,4);
              auVar72 = NEON_sshl(auVar67,auVar40,4);
              auVar75 = NEON_sshl(auVar70,auVar40,4);
              auVar78 = NEON_sshl(auVar73,auVar40,4);
              auVar52._0_4_ = auVar76._0_4_ + auVar49._0_4_;
              auVar52._4_4_ = auVar76._4_4_ + auVar49._4_4_;
              auVar52._8_4_ = auVar76._8_4_ + auVar49._8_4_;
              auVar52._12_4_ = auVar76._12_4_ + auVar49._12_4_;
              auVar46._0_4_ = auVar72._0_4_ + auVar43._0_4_;
              auVar46._4_4_ = auVar72._4_4_ + auVar43._4_4_;
              auVar46._8_4_ = auVar72._8_4_ + auVar43._8_4_;
              auVar46._12_4_ = auVar72._12_4_ + auVar43._12_4_;
              auVar65._0_4_ = auVar75._0_4_ + auVar69._0_4_;
              auVar65._4_4_ = auVar75._4_4_ + auVar69._4_4_;
              auVar65._8_4_ = auVar75._8_4_ + auVar69._8_4_;
              auVar65._12_4_ = auVar75._12_4_ + auVar69._12_4_;
              auVar59._0_4_ = auVar78._0_4_ + auVar66._0_4_;
              auVar59._4_4_ = auVar78._4_4_ + auVar66._4_4_;
              auVar59._8_4_ = auVar78._8_4_ + auVar66._8_4_;
              auVar59._12_4_ = auVar78._12_4_ + auVar66._12_4_;
              auVar43 = auVar46;
              auVar49 = auVar52;
              auVar66 = auVar59;
              auVar69 = auVar65;
            } while (uVar9 != 0);
            iVar61 = auVar59._0_4_ + auVar46._0_4_ + auVar65._0_4_ + auVar52._0_4_ +
                     auVar59._4_4_ + auVar46._4_4_ + auVar65._4_4_ + auVar52._4_4_ +
                     auVar59._8_4_ + auVar46._8_4_ + auVar65._8_4_ + auVar52._8_4_ +
                     auVar59._12_4_ + auVar46._12_4_ + auVar65._12_4_ + auVar52._12_4_;
            uVar9 = uVar27;
            if (uVar27 != uVar18) goto LAB_00e7949c;
          }
          iVar62 = iVar61;
          if (iVar61 < 0) {
            iVar62 = -1;
          }
        }
        *(int *)(lVar34 + uVar17 * 4) = iVar62;
        if (iVar36 <= iVar61) {
          iVar36 = iVar61;
        }
      }
      else {
        uVar32 = iVar55 * -2 + (int)uVar17;
        uVar16 = -uVar32;
        if (-1 < (int)uVar32) {
          uVar16 = uVar32;
        }
        if (uVar16 < 3) goto LAB_00e793fc;
      }
      uVar17 = uVar17 + 1;
      pauVar14 = (undefined (*) [16])(*pauVar14 + 2);
    } while (uVar17 != uVar28);
  }
  if ((int)param_3 < 2) {
    iVar55 = 1;
  }
  else {
    if (param_3 < 0x20) {
      uVar18 = 0;
      iVar55 = 1;
    }
    else {
      auVar53._0_8_ = CONCAT44(uVar20,uVar20) | 0x100000001;
      auVar53._8_4_ = uVar20 | 1;
      auVar53._12_4_ = uVar20 | 1;
      uVar18 = uVar15 & 0xfffffff0;
      iVar55 = 1;
      iVar60 = 0;
      iVar61 = 0;
      iVar62 = 0;
      auVar66 = NEON_neg(auVar53,4);
      pauVar14 = (undefined (*) [16])(param_2 + 0x10);
      uVar17 = uVar18;
      auVar40 = ZEXT816(0);
      auVar43 = ZEXT816(0);
      auVar49 = ZEXT816(0);
      do {
        auVar69 = pauVar14[-1];
        auVar72 = *pauVar14;
        pauVar14 = pauVar14 + 2;
        uVar17 = uVar17 - 0x10;
        auVar74._0_4_ = (int)auVar69._8_2_ * (int)auVar69._8_2_;
        auVar74._4_4_ = (int)auVar69._10_2_ * (int)auVar69._10_2_;
        auVar74._8_4_ = (int)auVar69._12_2_ * (int)auVar69._12_2_;
        auVar74._12_4_ = (int)auVar69._14_2_ * (int)auVar69._14_2_;
        auVar68._0_4_ = (int)auVar69._0_2_ * (int)auVar69._0_2_;
        auVar68._4_4_ = (int)auVar69._2_2_ * (int)auVar69._2_2_;
        auVar68._8_4_ = (int)auVar69._4_2_ * (int)auVar69._4_2_;
        auVar68._12_4_ = (int)auVar69._6_2_ * (int)auVar69._6_2_;
        auVar77._0_4_ = (int)auVar72._8_2_ * (int)auVar72._8_2_;
        auVar77._4_4_ = (int)auVar72._10_2_ * (int)auVar72._10_2_;
        auVar77._8_4_ = (int)auVar72._12_2_ * (int)auVar72._12_2_;
        auVar77._12_4_ = (int)auVar72._14_2_ * (int)auVar72._14_2_;
        auVar71._0_4_ = (int)auVar72._0_2_ * (int)auVar72._0_2_;
        auVar71._4_4_ = (int)auVar72._2_2_ * (int)auVar72._2_2_;
        auVar71._8_4_ = (int)auVar72._4_2_ * (int)auVar72._4_2_;
        auVar71._12_4_ = (int)auVar72._6_2_ * (int)auVar72._6_2_;
        auVar75 = NEON_ushl(auVar74,auVar66,4);
        auVar69 = NEON_ushl(auVar68,auVar66,4);
        auVar78 = NEON_ushl(auVar77,auVar66,4);
        auVar72 = NEON_ushl(auVar71,auVar66,4);
        auVar41._0_4_ = auVar75._0_4_ + auVar40._0_4_;
        auVar41._4_4_ = auVar75._4_4_ + auVar40._4_4_;
        auVar41._8_4_ = auVar75._8_4_ + auVar40._8_4_;
        auVar41._12_4_ = auVar75._12_4_ + auVar40._12_4_;
        iVar55 = auVar69._0_4_ + iVar55;
        iVar60 = auVar69._4_4_ + iVar60;
        iVar61 = auVar69._8_4_ + iVar61;
        iVar62 = auVar69._12_4_ + iVar62;
        auVar54._0_4_ = auVar78._0_4_ + auVar49._0_4_;
        auVar54._4_4_ = auVar78._4_4_ + auVar49._4_4_;
        auVar54._8_4_ = auVar78._8_4_ + auVar49._8_4_;
        auVar54._12_4_ = auVar78._12_4_ + auVar49._12_4_;
        auVar47._0_4_ = auVar72._0_4_ + auVar43._0_4_;
        auVar47._4_4_ = auVar72._4_4_ + auVar43._4_4_;
        auVar47._8_4_ = auVar72._8_4_ + auVar43._8_4_;
        auVar47._12_4_ = auVar72._12_4_ + auVar43._12_4_;
        auVar40 = auVar41;
        auVar43 = auVar47;
        auVar49 = auVar54;
      } while (uVar17 != 0);
      iVar55 = auVar47._0_4_ + iVar55 + auVar54._0_4_ + auVar41._0_4_ +
               auVar47._4_4_ + iVar60 + auVar54._4_4_ + auVar41._4_4_ +
               auVar47._8_4_ + iVar61 + auVar54._8_4_ + auVar41._8_4_ +
               auVar47._12_4_ + iVar62 + auVar54._12_4_ + auVar41._12_4_;
      if (uVar18 == uVar15) goto LAB_00e795a4;
    }
    lVar23 = uVar15 - uVar18;
    psVar11 = (short *)(param_2 + uVar18 * 2);
    do {
      lVar23 = lVar23 + -1;
      iVar55 = ((uint)((int)*psVar11 * (int)*psVar11) >> (ulong)(uVar20 & 0x1f | 1)) + iVar55;
      psVar11 = psVar11 + 1;
    } while (lVar23 != 0);
  }
LAB_00e795a4:
  if (param_4 < 2) {
    uVar29 = 0;
    uVar13 = 0;
  }
  else {
    uVar29 = 0;
    uVar15 = 0;
    iVar61 = 0;
    iVar60 = 0;
    uVar16 = (uint)LZCOUNT(iVar36);
    uVar28 = 0xffff;
    uVar32 = 0xffff;
    do {
      uVar3 = *(uint *)(lVar34 + uVar15 * 4);
      iVar36 = iVar61;
      uVar33 = uVar32;
      if (0 < (int)uVar3) {
        sVar2 = (short)(uVar3 >> (ulong)(0x11 - uVar16 & 0x1f));
        if (0x10 < uVar16) {
          sVar2 = (short)(uVar3 << (ulong)(uVar16 - 0x11 & 0x1f));
        }
        uVar3 = (uint)((int)sVar2 * (int)sVar2) >> 0xf;
        if (((int)((ulong)((long)(short)uVar28 * (long)iVar55) >> 0xf) <
             (int)((ulong)((long)(short)uVar3 * (long)iVar60) >> 0xf)) &&
           (iVar60 = iVar55, uVar28 = uVar3,
           (int)((ulong)((long)(short)uVar32 * (long)iVar55) >> 0xf) <
           (int)((ulong)((long)(short)uVar3 * (long)iVar61) >> 0xf))) {
          uVar29 = (uint)uVar15;
          iVar36 = iVar55;
          iVar60 = iVar61;
          uVar33 = uVar3;
          uVar28 = uVar32;
        }
      }
      iVar61 = iVar36;
      lVar23 = uVar15 * 2;
      uVar15 = uVar15 + 1;
      iVar62 = (int)*(short *)(param_2 + (long)(int)uVar13 * 2 + lVar23);
      iVar36 = (int)*(short *)(param_2 + lVar23);
      iVar55 = (((uint)(iVar62 * iVar62) >> (ulong)(uVar20 & 0x1f | 1)) -
               ((uint)(iVar36 * iVar36) >> (ulong)(uVar20 & 0x1f | 1))) + iVar55;
      if (iVar55 < 2) {
        iVar55 = 1;
      }
      uVar32 = uVar33;
    } while (uVar1 != uVar15);
    uVar13 = 0;
    if ((0 < (int)uVar29) && (uVar13 = 0, (int)uVar29 < (int)(uVar1 - 1))) {
      iVar36 = *(int *)(lVar34 + (ulong)(uVar29 - 1) * 4);
      iVar55 = *(int *)(lVar34 + (ulong)uVar29 * 4);
      iVar60 = *(int *)(lVar34 + (ulong)(uVar29 + 1) * 4);
      if ((int)((ulong)((long)(iVar55 - iVar36) * 0x599a) >> 0xf) < iVar60 - iVar36) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = (uint)((int)((ulong)((long)(iVar55 - iVar60) * 0x599a) >> 0xf) < iVar36 - iVar60);
      }
    }
  }
  *piStack_70 = uVar13 + uVar29 * 2;
  if (*(long *)(alStack_80[1] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


