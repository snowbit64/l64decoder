// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stereo_itheta
// Entry Point: 00e77e7c
// Size: 900 bytes
// Signature: undefined stereo_itheta(void)


int stereo_itheta(long param_1,long param_2,int param_3,uint param_4)

{
  undefined (*pauVar1) [12];
  uint uVar2;
  undefined auVar3 [16];
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [12];
  undefined auVar13 [12];
  ushort uVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  undefined (*pauVar18) [16];
  short *psVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined (*pauVar23) [12];
  undefined (*pauVar24) [16];
  ulong uVar25;
  short *psVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
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
  undefined4 uVar48;
  int iVar49;
  int iVar50;
  undefined4 uVar51;
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  short sVar56;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  undefined auVar57 [16];
  undefined auVar58 [16];
  short sVar66;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  short sVar75;
  undefined auVar67 [16];
  undefined auVar68 [16];
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  short sVar89;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  undefined auVar93 [16];
  
  if (param_3 == 0) {
    if (0 < (int)param_4) {
      uVar20 = (ulong)param_4;
      if (param_4 < 0x10) {
        uVar22 = 0;
        iVar16 = 0;
LAB_00e78044:
        lVar21 = uVar20 - uVar22;
        psVar19 = (short *)(param_1 + uVar22 * 2);
        do {
          lVar21 = lVar21 + -1;
          iVar16 = iVar16 + (int)*psVar19 * (int)*psVar19;
          psVar19 = psVar19 + 1;
        } while (lVar21 != 0);
      }
      else {
        uVar22 = uVar20 & 0xfffffff0;
        pauVar23 = (undefined (*) [12])(param_1 + 0x10);
        iVar16 = 0;
        iVar34 = 0;
        iVar29 = 0;
        iVar31 = 0;
        iVar27 = 0;
        iVar28 = 0;
        iVar30 = 0;
        iVar32 = 0;
        iVar33 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        iVar38 = 0;
        iVar39 = 0;
        iVar40 = 0;
        iVar41 = 0;
        uVar25 = uVar22;
        do {
          pauVar1 = (undefined (*) [12])(pauVar23[-2] + 8);
          uVar48 = (undefined4)((ulong)*(undefined8 *)(pauVar23[-1] + 4) >> 0x20);
          uVar4 = *(undefined8 *)*pauVar1;
          sVar56 = (short)((ulong)uVar4 >> 0x10);
          sVar59 = (short)((ulong)uVar4 >> 0x20);
          sVar60 = (short)((ulong)uVar4 >> 0x30);
          uVar51 = (undefined4)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
          uVar7 = *(undefined8 *)*pauVar23;
          auVar13 = *pauVar23;
          auVar12 = *pauVar23;
          sVar61 = (short)((ulong)uVar7 >> 0x10);
          sVar62 = (short)((ulong)uVar7 >> 0x20);
          sVar63 = (short)((ulong)uVar7 >> 0x30);
          pauVar23 = (undefined (*) [12])(pauVar23[2] + 8);
          uVar25 = uVar25 - 0x10;
          auVar53._12_4_ = uVar48;
          auVar53._0_12_ = *pauVar1;
          auVar55._12_4_ = uVar48;
          auVar55._0_12_ = *pauVar1;
          auVar53 = NEON_ext(auVar53,auVar55,8,1);
          iVar16 = iVar16 + (int)(short)uVar4 * (int)(short)uVar4;
          iVar34 = iVar34 + (int)sVar56 * (int)sVar56;
          iVar29 = iVar29 + (int)sVar59 * (int)sVar59;
          iVar31 = iVar31 + (int)sVar60 * (int)sVar60;
          auVar58._12_4_ = uVar51;
          auVar58._0_12_ = auVar12;
          auVar68._12_4_ = uVar51;
          auVar68._0_12_ = auVar13;
          auVar55 = NEON_ext(auVar58,auVar68,8,1);
          iVar33 = iVar33 + (int)(short)uVar7 * (int)(short)uVar7;
          iVar35 = iVar35 + (int)sVar61 * (int)sVar61;
          iVar36 = iVar36 + (int)sVar62 * (int)sVar62;
          iVar37 = iVar37 + (int)sVar63 * (int)sVar63;
          iVar27 = iVar27 + (int)auVar53._0_2_ * (int)auVar53._0_2_;
          iVar28 = iVar28 + (int)auVar53._2_2_ * (int)auVar53._2_2_;
          iVar30 = iVar30 + (int)auVar53._4_2_ * (int)auVar53._4_2_;
          iVar32 = iVar32 + (int)auVar53._6_2_ * (int)auVar53._6_2_;
          iVar38 = iVar38 + (int)auVar55._0_2_ * (int)auVar55._0_2_;
          iVar39 = iVar39 + (int)auVar55._2_2_ * (int)auVar55._2_2_;
          iVar40 = iVar40 + (int)auVar55._4_2_ * (int)auVar55._4_2_;
          iVar41 = iVar41 + (int)auVar55._6_2_ * (int)auVar55._6_2_;
        } while (uVar25 != 0);
        iVar16 = iVar33 + iVar16 + iVar38 + iVar27 + iVar35 + iVar34 + iVar39 + iVar28 +
                 iVar36 + iVar29 + iVar40 + iVar30 + iVar37 + iVar31 + iVar41 + iVar32;
        if (uVar22 != uVar20) goto LAB_00e78044;
      }
      iVar16 = iVar16 + 1;
      if (param_4 < 0x10) {
        uVar22 = 0;
        iVar34 = 0;
LAB_00e780d4:
        lVar21 = uVar20 - uVar22;
        psVar19 = (short *)(param_2 + uVar22 * 2);
        do {
          lVar21 = lVar21 + -1;
          iVar34 = iVar34 + (int)*psVar19 * (int)*psVar19;
          psVar19 = psVar19 + 1;
        } while (lVar21 != 0);
      }
      else {
        uVar22 = uVar20 & 0xfffffff0;
        pauVar23 = (undefined (*) [12])(param_2 + 0x10);
        iVar34 = 0;
        iVar29 = 0;
        iVar31 = 0;
        iVar27 = 0;
        iVar28 = 0;
        iVar30 = 0;
        iVar32 = 0;
        iVar33 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        iVar38 = 0;
        iVar39 = 0;
        iVar40 = 0;
        iVar41 = 0;
        iVar42 = 0;
        uVar25 = uVar22;
        do {
          pauVar1 = (undefined (*) [12])(pauVar23[-2] + 8);
          uVar48 = (undefined4)((ulong)*(undefined8 *)(pauVar23[-1] + 4) >> 0x20);
          uVar4 = *(undefined8 *)*pauVar1;
          sVar56 = (short)((ulong)uVar4 >> 0x10);
          sVar59 = (short)((ulong)uVar4 >> 0x20);
          sVar60 = (short)((ulong)uVar4 >> 0x30);
          uVar51 = (undefined4)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20);
          uVar7 = *(undefined8 *)*pauVar23;
          auVar13 = *pauVar23;
          auVar12 = *pauVar23;
          sVar61 = (short)((ulong)uVar7 >> 0x10);
          sVar62 = (short)((ulong)uVar7 >> 0x20);
          sVar63 = (short)((ulong)uVar7 >> 0x30);
          pauVar23 = (undefined (*) [12])(pauVar23[2] + 8);
          uVar25 = uVar25 - 0x10;
          auVar93._12_4_ = uVar48;
          auVar93._0_12_ = *pauVar1;
          auVar3._12_4_ = uVar48;
          auVar3._0_12_ = *pauVar1;
          auVar53 = NEON_ext(auVar93,auVar3,8,1);
          iVar34 = iVar34 + (int)(short)uVar4 * (int)(short)uVar4;
          iVar29 = iVar29 + (int)sVar56 * (int)sVar56;
          iVar31 = iVar31 + (int)sVar59 * (int)sVar59;
          iVar27 = iVar27 + (int)sVar60 * (int)sVar60;
          auVar5._12_4_ = uVar51;
          auVar5._0_12_ = auVar12;
          auVar6._12_4_ = uVar51;
          auVar6._0_12_ = auVar13;
          auVar55 = NEON_ext(auVar5,auVar6,8,1);
          iVar35 = iVar35 + (int)(short)uVar7 * (int)(short)uVar7;
          iVar36 = iVar36 + (int)sVar61 * (int)sVar61;
          iVar37 = iVar37 + (int)sVar62 * (int)sVar62;
          iVar38 = iVar38 + (int)sVar63 * (int)sVar63;
          iVar28 = iVar28 + (int)auVar53._0_2_ * (int)auVar53._0_2_;
          iVar30 = iVar30 + (int)auVar53._2_2_ * (int)auVar53._2_2_;
          iVar32 = iVar32 + (int)auVar53._4_2_ * (int)auVar53._4_2_;
          iVar33 = iVar33 + (int)auVar53._6_2_ * (int)auVar53._6_2_;
          iVar39 = iVar39 + (int)auVar55._0_2_ * (int)auVar55._0_2_;
          iVar40 = iVar40 + (int)auVar55._2_2_ * (int)auVar55._2_2_;
          iVar41 = iVar41 + (int)auVar55._4_2_ * (int)auVar55._4_2_;
          iVar42 = iVar42 + (int)auVar55._6_2_ * (int)auVar55._6_2_;
        } while (uVar25 != 0);
        iVar34 = iVar35 + iVar34 + iVar39 + iVar28 + iVar36 + iVar29 + iVar40 + iVar30 +
                 iVar37 + iVar31 + iVar41 + iVar32 + iVar38 + iVar27 + iVar42 + iVar33;
        if (uVar22 != uVar20) goto LAB_00e780d4;
      }
      iVar34 = iVar34 + 1;
      goto LAB_00e780f0;
    }
  }
  else if (0 < (int)param_4) {
    uVar20 = (ulong)param_4;
    if (param_4 < 0x10) {
      uVar22 = 0;
      iVar16 = 1;
      iVar34 = 1;
    }
    else {
      uVar22 = uVar20 & 0xfffffff0;
      iVar27 = 0;
      iVar28 = 0;
      iVar30 = 0;
      iVar32 = 0;
      pauVar18 = (undefined (*) [16])(param_1 + 0x10);
      iVar33 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      pauVar24 = (undefined (*) [16])(param_2 + 0x10);
      iVar44 = 0;
      iVar45 = 0;
      iVar42 = 1;
      iVar43 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      iVar16 = 0;
      iVar34 = 0;
      iVar46 = 0;
      iVar47 = 0;
      iVar29 = 0;
      iVar31 = 0;
      iVar49 = 0;
      iVar50 = 0;
      uVar25 = uVar22;
      auVar53 = ZEXT816(0);
      auVar55 = ZEXT816(1);
      do {
        uVar7 = *(undefined8 *)(pauVar18[-1] + 8);
        uVar4 = *(undefined8 *)pauVar18[-1];
        auVar58 = *pauVar18;
        pauVar18 = pauVar18 + 2;
        uVar25 = uVar25 - 0x10;
        sVar76 = (short)uVar4 >> 1;
        sVar78 = (short)((ulong)uVar4 >> 0x10) >> 1;
        sVar80 = (short)((ulong)uVar4 >> 0x20) >> 1;
        sVar82 = (short)((long)uVar4 >> 0x31);
        sVar84 = (short)uVar7 >> 1;
        sVar86 = (short)((ulong)uVar7 >> 0x10) >> 1;
        sVar88 = (short)((ulong)uVar7 >> 0x20) >> 1;
        sVar90 = (short)((long)uVar7 >> 0x31);
        auVar68 = pauVar24[-1];
        auVar93 = *pauVar24;
        sVar92 = auVar58._0_2_ >> 1;
        sVar94 = auVar58._2_2_ >> 1;
        sVar95 = auVar58._4_2_ >> 1;
        sVar96 = auVar58._6_2_ >> 1;
        sVar97 = auVar58._8_2_ >> 1;
        sVar98 = auVar58._10_2_ >> 1;
        sVar99 = auVar58._12_2_ >> 1;
        sVar100 = auVar58._14_2_ >> 1;
        pauVar24 = pauVar24 + 2;
        sVar56 = auVar68._0_2_ >> 1;
        sVar59 = auVar68._2_2_ >> 1;
        sVar60 = auVar68._4_2_ >> 1;
        sVar61 = auVar68._6_2_ >> 1;
        sVar62 = auVar68._8_2_ >> 1;
        sVar63 = auVar68._10_2_ >> 1;
        sVar64 = auVar68._12_2_ >> 1;
        sVar65 = auVar68._14_2_ >> 1;
        sVar66 = auVar93._0_2_ >> 1;
        sVar69 = auVar93._2_2_ >> 1;
        sVar70 = auVar93._4_2_ >> 1;
        sVar71 = auVar93._6_2_ >> 1;
        sVar72 = auVar93._8_2_ >> 1;
        sVar73 = auVar93._10_2_ >> 1;
        sVar74 = auVar93._12_2_ >> 1;
        sVar75 = auVar93._14_2_ >> 1;
        sVar77 = sVar76 - sVar56;
        sVar79 = sVar78 - sVar59;
        sVar81 = sVar80 - sVar60;
        sVar83 = sVar82 - sVar61;
        sVar85 = sVar84 - sVar62;
        sVar87 = sVar86 - sVar63;
        sVar89 = sVar88 - sVar64;
        sVar91 = sVar90 - sVar65;
        auVar57._0_2_ = sVar56 + sVar76;
        auVar57._2_2_ = sVar59 + sVar78;
        auVar57._4_2_ = sVar60 + sVar80;
        auVar57._6_2_ = sVar61 + sVar82;
        auVar57._8_2_ = sVar62 + sVar84;
        auVar57._10_2_ = sVar63 + sVar86;
        auVar57._12_2_ = sVar64 + sVar88;
        auVar57._14_2_ = sVar65 + sVar90;
        sVar56 = sVar92 - sVar66;
        sVar59 = sVar94 - sVar69;
        sVar60 = sVar95 - sVar70;
        sVar61 = sVar96 - sVar71;
        sVar62 = sVar97 - sVar72;
        sVar63 = sVar98 - sVar73;
        sVar64 = sVar99 - sVar74;
        sVar65 = sVar100 - sVar75;
        auVar67._0_2_ = sVar66 + sVar92;
        auVar67._2_2_ = sVar69 + sVar94;
        auVar67._4_2_ = sVar70 + sVar95;
        auVar67._6_2_ = sVar71 + sVar96;
        auVar67._8_2_ = sVar72 + sVar97;
        auVar67._10_2_ = sVar73 + sVar98;
        auVar67._12_2_ = sVar74 + sVar99;
        auVar67._14_2_ = sVar75 + sVar100;
        auVar54._0_4_ = auVar55._0_4_ + (int)sVar77 * (int)sVar77;
        auVar54._4_4_ = auVar55._4_4_ + (int)sVar79 * (int)sVar79;
        auVar54._8_4_ = auVar55._8_4_ + (int)sVar81 * (int)sVar81;
        auVar54._12_4_ = auVar55._12_4_ + (int)sVar83 * (int)sVar83;
        auVar55 = NEON_ext(auVar57,auVar57,8,1);
        iVar42 = iVar42 + (int)auVar57._0_2_ * (int)auVar57._0_2_;
        iVar43 = iVar43 + (int)auVar57._2_2_ * (int)auVar57._2_2_;
        iVar44 = iVar44 + (int)auVar57._4_2_ * (int)auVar57._4_2_;
        iVar45 = iVar45 + (int)auVar57._6_2_ * (int)auVar57._6_2_;
        auVar93 = NEON_ext(auVar67,auVar67,8,1);
        iVar33 = iVar33 + (int)auVar67._0_2_ * (int)auVar67._0_2_;
        iVar35 = iVar35 + (int)auVar67._2_2_ * (int)auVar67._2_2_;
        iVar36 = iVar36 + (int)auVar67._4_2_ * (int)auVar67._4_2_;
        iVar37 = iVar37 + (int)auVar67._6_2_ * (int)auVar67._6_2_;
        auVar10._2_2_ = sVar79;
        auVar10._0_2_ = sVar77;
        auVar10._4_2_ = sVar81;
        auVar10._6_2_ = sVar83;
        auVar10._8_2_ = sVar85;
        auVar10._10_2_ = sVar87;
        auVar10._12_2_ = sVar89;
        auVar10._14_2_ = sVar91;
        auVar11._2_2_ = sVar79;
        auVar11._0_2_ = sVar77;
        auVar11._4_2_ = sVar81;
        auVar11._6_2_ = sVar83;
        auVar11._8_2_ = sVar85;
        auVar11._10_2_ = sVar87;
        auVar11._12_2_ = sVar89;
        auVar11._14_2_ = sVar91;
        auVar58 = NEON_ext(auVar10,auVar11,8,1);
        auVar8._2_2_ = sVar59;
        auVar8._0_2_ = sVar56;
        auVar8._4_2_ = sVar60;
        auVar8._6_2_ = sVar61;
        auVar8._8_2_ = sVar62;
        auVar8._10_2_ = sVar63;
        auVar8._12_2_ = sVar64;
        auVar8._14_2_ = sVar65;
        auVar9._2_2_ = sVar59;
        auVar9._0_2_ = sVar56;
        auVar9._4_2_ = sVar60;
        auVar9._6_2_ = sVar61;
        auVar9._8_2_ = sVar62;
        auVar9._10_2_ = sVar63;
        auVar9._12_2_ = sVar64;
        auVar9._14_2_ = sVar65;
        auVar68 = NEON_ext(auVar8,auVar9,8,1);
        iVar27 = iVar27 + (int)auVar55._0_2_ * (int)auVar55._0_2_;
        iVar28 = iVar28 + (int)auVar55._2_2_ * (int)auVar55._2_2_;
        iVar30 = iVar30 + (int)auVar55._4_2_ * (int)auVar55._4_2_;
        iVar32 = iVar32 + (int)auVar55._6_2_ * (int)auVar55._6_2_;
        iVar38 = iVar38 + (int)auVar93._0_2_ * (int)auVar93._0_2_;
        iVar39 = iVar39 + (int)auVar93._2_2_ * (int)auVar93._2_2_;
        iVar40 = iVar40 + (int)auVar93._4_2_ * (int)auVar93._4_2_;
        iVar41 = iVar41 + (int)auVar93._6_2_ * (int)auVar93._6_2_;
        iVar16 = iVar16 + (int)auVar58._0_2_ * (int)auVar58._0_2_;
        iVar34 = iVar34 + (int)auVar58._2_2_ * (int)auVar58._2_2_;
        iVar46 = iVar46 + (int)auVar58._4_2_ * (int)auVar58._4_2_;
        iVar47 = iVar47 + (int)auVar58._6_2_ * (int)auVar58._6_2_;
        iVar29 = iVar29 + (int)sVar56 * (int)sVar56;
        iVar31 = iVar31 + (int)sVar59 * (int)sVar59;
        iVar49 = iVar49 + (int)sVar60 * (int)sVar60;
        iVar50 = iVar50 + (int)sVar61 * (int)sVar61;
        auVar52._0_4_ = auVar53._0_4_ + (int)auVar68._0_2_ * (int)auVar68._0_2_;
        auVar52._4_4_ = auVar53._4_4_ + (int)auVar68._2_2_ * (int)auVar68._2_2_;
        auVar52._8_4_ = auVar53._8_4_ + (int)auVar68._4_2_ * (int)auVar68._4_2_;
        auVar52._12_4_ = auVar53._12_4_ + (int)auVar68._6_2_ * (int)auVar68._6_2_;
        auVar53 = auVar52;
        auVar55 = auVar54;
      } while (uVar25 != 0);
      iVar34 = iVar29 + auVar54._0_4_ + auVar52._0_4_ + iVar16 +
               iVar31 + auVar54._4_4_ + auVar52._4_4_ + iVar34 +
               iVar49 + auVar54._8_4_ + auVar52._8_4_ + iVar46 +
               iVar50 + auVar54._12_4_ + auVar52._12_4_ + iVar47;
      iVar16 = iVar33 + iVar42 + iVar38 + iVar27 + iVar35 + iVar43 + iVar39 + iVar28 +
               iVar36 + iVar44 + iVar40 + iVar30 + iVar37 + iVar45 + iVar41 + iVar32;
      if (uVar22 == uVar20) goto LAB_00e780f0;
    }
    lVar21 = uVar20 - uVar22;
    psVar19 = (short *)(param_2 + uVar22 * 2);
    psVar26 = (short *)(param_1 + uVar22 * 2);
    do {
      lVar21 = lVar21 + -1;
      iVar29 = ((int)*psVar19 >> 1) + ((int)*psVar26 >> 1);
      iVar31 = ((int)*psVar26 >> 1) - ((int)*psVar19 >> 1);
      iVar16 = iVar16 + iVar29 * iVar29;
      iVar34 = iVar34 + iVar31 * iVar31;
      psVar19 = psVar19 + 1;
      psVar26 = psVar26 + 1;
    } while (lVar21 != 0);
    goto LAB_00e780f0;
  }
  iVar34 = 1;
  iVar16 = 1;
LAB_00e780f0:
  uVar14 = celt_sqrt(iVar16);
  uVar15 = celt_sqrt(iVar34);
  if ((short)uVar15 < (short)uVar14) {
    iVar16 = celt_rcp((int)((uint)uVar14 << 0x10) >> 0x10);
    uVar17 = (uint)((ulong)((long)iVar16 * (long)((int)((uint)uVar15 << 0x10) >> 1)) >> 0x1f);
    if (0x7ffe < (int)uVar17) {
      uVar17 = 0x7fff;
    }
    uVar2 = -(uVar17 >> 0xf & 1) & 0xfffe0000 | (uVar17 & 0xffff) << 1;
    sVar56 = (short)(((int)(((int)(((short)uVar17 * 0x2690 + -0x2ea68000 >> 0x10) * uVar2 +
                                  -0x148000) >> 0x10) * uVar2 + 0x7fff8000) >> 0x10) *
                     (int)(short)uVar17 + 0x4000U >> 0xf) >> 1;
  }
  else {
    iVar16 = celt_rcp((int)((uint)uVar15 << 0x10) >> 0x10);
    uVar17 = (uint)((ulong)((long)iVar16 * (long)((int)((uint)uVar14 << 0x10) >> 1)) >> 0x1f);
    if (0x7ffe < (int)uVar17) {
      uVar17 = 0x7fff;
    }
    uVar2 = -(uVar17 >> 0xf & 1) & 0xfffe0000 | (uVar17 & 0xffff) << 1;
    sVar56 = 0x6488 - (short)((((int)(((int)(((short)uVar17 * 0x2690 + -0x2ea68000 >> 0x10) * uVar2
                                            + -0x148000) >> 0x10) * uVar2 + 0x7fff8000) >> 0x10) *
                               (int)(short)uVar17 + 0x4000) * 2 >> 0x11);
  }
  return sVar56 * 0x517d >> 0xf;
}


