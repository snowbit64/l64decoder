// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e9f6dc
// Entry Point: 00e9f6dc
// Size: 3280 bytes
// Signature: undefined FUN_00e9f6dc(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined2 param_10, undefined4 param_11, undefined2 param_12, undefined4 param_13)


uint FUN_00e9f6dc(long param_1,long param_2,long param_3,int param_4,uint param_5,uint param_6,
                 int param_7,int *param_8,short *param_9,short param_10,uint param_11,short param_12
                 ,uint param_13)

{
  undefined (*pauVar1) [12];
  uint uVar2;
  uint uVar3;
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
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
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
  undefined8 uVar54;
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
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
  undefined8 uVar73;
  undefined auVar74 [12];
  undefined auVar75 [12];
  undefined auVar76 [12];
  undefined auVar77 [12];
  undefined8 *puVar78;
  undefined8 *puVar79;
  ushort uVar80;
  short sVar81;
  short *psVar82;
  int iVar83;
  undefined (*pauVar84) [12];
  int iVar85;
  ulong uVar86;
  long lVar87;
  short *psVar88;
  int iVar89;
  uint uVar90;
  short *psVar91;
  ulong uVar92;
  undefined (*pauVar93) [12];
  short sVar94;
  ulong uVar95;
  long lVar96;
  ulong uVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  undefined4 uVar108;
  int iVar109;
  int iVar110;
  undefined4 uVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  undefined4 uVar116;
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  undefined8 uVar124;
  undefined8 uVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  
  if ((int)param_13 < 64000) {
    uVar80 = 0x400;
  }
  else if (param_13 >> 7 < 0x271) {
    uVar80 = (short)(param_13 + 0x3f0600 >> 6) + 0x400U & 0xfff0;
  }
  else {
    uVar80 = 0x500;
  }
  if (param_6 != 2) goto joined_r0x00e9f744;
  psVar82 = *(short **)(param_1 + 0x18);
  sVar94 = psVar82[1];
  uVar2 = (int)sVar94 - (int)*psVar82 << (ulong)(param_5 & 0x1f);
  uVar86 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    iVar83 = 0;
  }
  else {
    iVar85 = (int)*psVar82 << (ulong)(param_5 & 0x1f);
    if (uVar2 < 0x10) {
      uVar92 = 0;
      iVar83 = 0;
    }
    else {
      uVar92 = uVar86 & 0xfffffff0;
      pauVar84 = (undefined (*) [12])(param_2 + (long)iVar85 * 2 + 0x10);
      iVar83 = 0;
      iVar89 = 0;
      iVar98 = 0;
      iVar99 = 0;
      pauVar93 = (undefined (*) [12])(param_2 + (long)(iVar85 + param_7) * 2 + 0x10);
      iVar100 = 0;
      iVar101 = 0;
      iVar109 = 0;
      iVar110 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar103 = 0;
      iVar105 = 0;
      iVar107 = 0;
      iVar102 = 0;
      uVar95 = uVar92;
      do {
        pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
        uVar124 = *(undefined8 *)*pauVar1;
        uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
        uVar125 = *(undefined8 *)*pauVar84;
        auVar75 = *pauVar84;
        auVar74 = *pauVar84;
        pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
        uVar95 = uVar95 - 0x10;
        auVar118._12_4_ = uVar108;
        auVar118._0_12_ = *pauVar1;
        auVar120._12_4_ = uVar108;
        auVar120._0_12_ = *pauVar1;
        auVar118 = NEON_ext(auVar118,auVar120,8,1);
        pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
        uVar54 = *(undefined8 *)*pauVar1;
        uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
        uVar73 = *(undefined8 *)*pauVar93;
        auVar77 = *pauVar93;
        auVar76 = *pauVar93;
        auVar122._12_4_ = uVar111;
        auVar122._0_12_ = auVar74;
        auVar123._12_4_ = uVar111;
        auVar123._0_12_ = auVar75;
        auVar120 = NEON_ext(auVar122,auVar123,8,1);
        pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
        auVar52._12_4_ = uVar108;
        auVar52._0_12_ = *pauVar1;
        auVar53._12_4_ = uVar108;
        auVar53._0_12_ = *pauVar1;
        auVar122 = NEON_ext(auVar52,auVar53,8,1);
        iVar83 = iVar83 + (int)(short)uVar54 * (int)(short)uVar124;
        iVar89 = iVar89 + (int)(short)((ulong)uVar54 >> 0x10) * (int)(short)((ulong)uVar124 >> 0x10)
        ;
        iVar98 = iVar98 + (int)(short)((ulong)uVar54 >> 0x20) * (int)(short)((ulong)uVar124 >> 0x20)
        ;
        iVar99 = iVar99 + (int)(short)((ulong)uVar54 >> 0x30) * (int)(short)((ulong)uVar124 >> 0x30)
        ;
        auVar71._12_4_ = uVar116;
        auVar71._0_12_ = auVar76;
        auVar72._12_4_ = uVar116;
        auVar72._0_12_ = auVar77;
        auVar123 = NEON_ext(auVar71,auVar72,8,1);
        iVar112 = iVar112 + (int)(short)uVar73 * (int)(short)uVar125;
        iVar113 = iVar113 + (int)(short)((ulong)uVar73 >> 0x10) *
                            (int)(short)((ulong)uVar125 >> 0x10);
        iVar114 = iVar114 + (int)(short)((ulong)uVar73 >> 0x20) *
                            (int)(short)((ulong)uVar125 >> 0x20);
        iVar115 = iVar115 + (int)(short)((ulong)uVar73 >> 0x30) *
                            (int)(short)((ulong)uVar125 >> 0x30);
        iVar100 = iVar100 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
        iVar101 = iVar101 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
        iVar109 = iVar109 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
        iVar110 = iVar110 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
        iVar103 = iVar103 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
        iVar105 = iVar105 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
        iVar107 = iVar107 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
        iVar102 = iVar102 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
      } while (uVar95 != 0);
      iVar83 = iVar112 + iVar83 + iVar103 + iVar100 + iVar113 + iVar89 + iVar105 + iVar101 +
               iVar114 + iVar98 + iVar107 + iVar109 + iVar115 + iVar99 + iVar102 + iVar110;
      if (uVar92 == uVar86) goto LAB_00e9f974;
    }
    lVar87 = uVar86 - uVar92;
    psVar88 = (short *)(param_2 + (uVar92 + (long)(iVar85 + param_7)) * 2);
    psVar91 = (short *)(param_2 + (uVar92 + (long)iVar85) * 2);
    do {
      lVar87 = lVar87 + -1;
      iVar83 = iVar83 + (int)*psVar88 * (int)*psVar91;
      psVar88 = psVar88 + 1;
      psVar91 = psVar91 + 1;
    } while (lVar87 != 0);
  }
LAB_00e9f974:
  sVar81 = psVar82[2];
  uVar2 = (int)sVar81 - (int)sVar94 << (ulong)(param_5 & 0x1f);
  uVar86 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    iVar85 = 0;
  }
  else {
    iVar89 = (int)sVar94 << (ulong)(param_5 & 0x1f);
    if (uVar2 < 0x10) {
      uVar92 = 0;
      iVar85 = 0;
    }
    else {
      uVar92 = uVar86 & 0xfffffff0;
      pauVar84 = (undefined (*) [12])(param_2 + (long)iVar89 * 2 + 0x10);
      iVar85 = 0;
      iVar98 = 0;
      iVar99 = 0;
      iVar100 = 0;
      pauVar93 = (undefined (*) [12])(param_2 + (long)(iVar89 + param_7) * 2 + 0x10);
      iVar101 = 0;
      iVar109 = 0;
      iVar110 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar103 = 0;
      iVar105 = 0;
      iVar107 = 0;
      iVar102 = 0;
      iVar104 = 0;
      uVar95 = uVar92;
      do {
        pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
        uVar124 = *(undefined8 *)*pauVar1;
        uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
        uVar125 = *(undefined8 *)*pauVar84;
        auVar75 = *pauVar84;
        auVar74 = *pauVar84;
        pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
        uVar95 = uVar95 - 0x10;
        auVar18._12_4_ = uVar108;
        auVar18._0_12_ = *pauVar1;
        auVar19._12_4_ = uVar108;
        auVar19._0_12_ = *pauVar1;
        auVar118 = NEON_ext(auVar18,auVar19,8,1);
        pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
        uVar54 = *(undefined8 *)*pauVar1;
        uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
        uVar73 = *(undefined8 *)*pauVar93;
        auVar77 = *pauVar93;
        auVar76 = *pauVar93;
        auVar34._12_4_ = uVar111;
        auVar34._0_12_ = auVar74;
        auVar35._12_4_ = uVar111;
        auVar35._0_12_ = auVar75;
        auVar120 = NEON_ext(auVar34,auVar35,8,1);
        pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
        auVar50._12_4_ = uVar108;
        auVar50._0_12_ = *pauVar1;
        auVar51._12_4_ = uVar108;
        auVar51._0_12_ = *pauVar1;
        auVar122 = NEON_ext(auVar50,auVar51,8,1);
        iVar85 = iVar85 + (int)(short)uVar54 * (int)(short)uVar124;
        iVar98 = iVar98 + (int)(short)((ulong)uVar54 >> 0x10) * (int)(short)((ulong)uVar124 >> 0x10)
        ;
        iVar99 = iVar99 + (int)(short)((ulong)uVar54 >> 0x20) * (int)(short)((ulong)uVar124 >> 0x20)
        ;
        iVar100 = iVar100 + (int)(short)((ulong)uVar54 >> 0x30) *
                            (int)(short)((ulong)uVar124 >> 0x30);
        auVar69._12_4_ = uVar116;
        auVar69._0_12_ = auVar76;
        auVar70._12_4_ = uVar116;
        auVar70._0_12_ = auVar77;
        auVar123 = NEON_ext(auVar69,auVar70,8,1);
        iVar113 = iVar113 + (int)(short)uVar73 * (int)(short)uVar125;
        iVar114 = iVar114 + (int)(short)((ulong)uVar73 >> 0x10) *
                            (int)(short)((ulong)uVar125 >> 0x10);
        iVar115 = iVar115 + (int)(short)((ulong)uVar73 >> 0x20) *
                            (int)(short)((ulong)uVar125 >> 0x20);
        iVar103 = iVar103 + (int)(short)((ulong)uVar73 >> 0x30) *
                            (int)(short)((ulong)uVar125 >> 0x30);
        iVar101 = iVar101 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
        iVar109 = iVar109 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
        iVar110 = iVar110 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
        iVar112 = iVar112 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
        iVar105 = iVar105 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
        iVar107 = iVar107 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
        iVar102 = iVar102 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
        iVar104 = iVar104 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
      } while (uVar95 != 0);
      iVar85 = iVar113 + iVar85 + iVar105 + iVar101 + iVar114 + iVar98 + iVar107 + iVar109 +
               iVar115 + iVar99 + iVar102 + iVar110 + iVar103 + iVar100 + iVar104 + iVar112;
      if (uVar92 == uVar86) goto LAB_00e9fa58;
    }
    lVar87 = uVar86 - uVar92;
    psVar88 = (short *)(param_2 + (uVar92 + (long)(iVar89 + param_7)) * 2);
    psVar91 = (short *)(param_2 + (uVar92 + (long)iVar89) * 2);
    do {
      lVar87 = lVar87 + -1;
      iVar85 = iVar85 + (int)*psVar88 * (int)*psVar91;
      psVar88 = psVar88 + 1;
      psVar91 = psVar91 + 1;
    } while (lVar87 != 0);
  }
LAB_00e9fa58:
  sVar94 = psVar82[3];
  uVar2 = (int)sVar94 - (int)sVar81 << (ulong)(param_5 & 0x1f);
  uVar86 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    iVar89 = 0;
  }
  else {
    iVar98 = (int)sVar81 << (ulong)(param_5 & 0x1f);
    if (uVar2 < 0x10) {
      uVar92 = 0;
      iVar89 = 0;
    }
    else {
      uVar92 = uVar86 & 0xfffffff0;
      pauVar84 = (undefined (*) [12])(param_2 + (long)iVar98 * 2 + 0x10);
      iVar89 = 0;
      iVar99 = 0;
      iVar100 = 0;
      iVar101 = 0;
      pauVar93 = (undefined (*) [12])(param_2 + (long)(iVar98 + param_7) * 2 + 0x10);
      iVar109 = 0;
      iVar110 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar103 = 0;
      iVar105 = 0;
      iVar107 = 0;
      iVar102 = 0;
      iVar104 = 0;
      iVar106 = 0;
      uVar95 = uVar92;
      do {
        pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
        uVar124 = *(undefined8 *)*pauVar1;
        uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
        uVar125 = *(undefined8 *)*pauVar84;
        auVar75 = *pauVar84;
        auVar74 = *pauVar84;
        pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
        uVar95 = uVar95 - 0x10;
        auVar16._12_4_ = uVar108;
        auVar16._0_12_ = *pauVar1;
        auVar17._12_4_ = uVar108;
        auVar17._0_12_ = *pauVar1;
        auVar118 = NEON_ext(auVar16,auVar17,8,1);
        pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
        uVar54 = *(undefined8 *)*pauVar1;
        uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
        uVar73 = *(undefined8 *)*pauVar93;
        auVar77 = *pauVar93;
        auVar76 = *pauVar93;
        auVar32._12_4_ = uVar111;
        auVar32._0_12_ = auVar74;
        auVar33._12_4_ = uVar111;
        auVar33._0_12_ = auVar75;
        auVar120 = NEON_ext(auVar32,auVar33,8,1);
        pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
        auVar48._12_4_ = uVar108;
        auVar48._0_12_ = *pauVar1;
        auVar49._12_4_ = uVar108;
        auVar49._0_12_ = *pauVar1;
        auVar122 = NEON_ext(auVar48,auVar49,8,1);
        iVar89 = iVar89 + (int)(short)uVar54 * (int)(short)uVar124;
        iVar99 = iVar99 + (int)(short)((ulong)uVar54 >> 0x10) * (int)(short)((ulong)uVar124 >> 0x10)
        ;
        iVar100 = iVar100 + (int)(short)((ulong)uVar54 >> 0x20) *
                            (int)(short)((ulong)uVar124 >> 0x20);
        iVar101 = iVar101 + (int)(short)((ulong)uVar54 >> 0x30) *
                            (int)(short)((ulong)uVar124 >> 0x30);
        auVar67._12_4_ = uVar116;
        auVar67._0_12_ = auVar76;
        auVar68._12_4_ = uVar116;
        auVar68._0_12_ = auVar77;
        auVar123 = NEON_ext(auVar67,auVar68,8,1);
        iVar114 = iVar114 + (int)(short)uVar73 * (int)(short)uVar125;
        iVar115 = iVar115 + (int)(short)((ulong)uVar73 >> 0x10) *
                            (int)(short)((ulong)uVar125 >> 0x10);
        iVar103 = iVar103 + (int)(short)((ulong)uVar73 >> 0x20) *
                            (int)(short)((ulong)uVar125 >> 0x20);
        iVar105 = iVar105 + (int)(short)((ulong)uVar73 >> 0x30) *
                            (int)(short)((ulong)uVar125 >> 0x30);
        iVar109 = iVar109 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
        iVar110 = iVar110 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
        iVar112 = iVar112 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
        iVar113 = iVar113 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
        iVar107 = iVar107 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
        iVar102 = iVar102 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
        iVar104 = iVar104 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
        iVar106 = iVar106 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
      } while (uVar95 != 0);
      iVar89 = iVar114 + iVar89 + iVar107 + iVar109 + iVar115 + iVar99 + iVar102 + iVar110 +
               iVar103 + iVar100 + iVar104 + iVar112 + iVar105 + iVar101 + iVar106 + iVar113;
      if (uVar92 == uVar86) goto LAB_00e9fb44;
    }
    lVar87 = uVar86 - uVar92;
    psVar88 = (short *)(param_2 + (uVar92 + (long)(iVar98 + param_7)) * 2);
    psVar91 = (short *)(param_2 + (uVar92 + (long)iVar98) * 2);
    do {
      lVar87 = lVar87 + -1;
      iVar89 = iVar89 + (int)*psVar88 * (int)*psVar91;
      psVar88 = psVar88 + 1;
      psVar91 = psVar91 + 1;
    } while (lVar87 != 0);
  }
LAB_00e9fb44:
  sVar81 = psVar82[4];
  uVar2 = (int)sVar81 - (int)sVar94 << (ulong)(param_5 & 0x1f);
  uVar86 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    iVar98 = 0;
  }
  else {
    iVar99 = (int)sVar94 << (ulong)(param_5 & 0x1f);
    if (uVar2 < 0x10) {
      uVar92 = 0;
      iVar98 = 0;
    }
    else {
      uVar92 = uVar86 & 0xfffffff0;
      pauVar84 = (undefined (*) [12])(param_2 + (long)iVar99 * 2 + 0x10);
      iVar98 = 0;
      iVar100 = 0;
      iVar101 = 0;
      iVar109 = 0;
      pauVar93 = (undefined (*) [12])(param_2 + (long)(iVar99 + param_7) * 2 + 0x10);
      iVar110 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar103 = 0;
      iVar105 = 0;
      iVar107 = 0;
      iVar102 = 0;
      iVar104 = 0;
      iVar106 = 0;
      iVar126 = 0;
      uVar95 = uVar92;
      do {
        pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
        uVar124 = *(undefined8 *)*pauVar1;
        uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
        uVar125 = *(undefined8 *)*pauVar84;
        auVar75 = *pauVar84;
        auVar74 = *pauVar84;
        pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
        uVar95 = uVar95 - 0x10;
        auVar14._12_4_ = uVar108;
        auVar14._0_12_ = *pauVar1;
        auVar15._12_4_ = uVar108;
        auVar15._0_12_ = *pauVar1;
        auVar118 = NEON_ext(auVar14,auVar15,8,1);
        pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
        uVar54 = *(undefined8 *)*pauVar1;
        uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
        uVar73 = *(undefined8 *)*pauVar93;
        auVar77 = *pauVar93;
        auVar76 = *pauVar93;
        auVar30._12_4_ = uVar111;
        auVar30._0_12_ = auVar74;
        auVar31._12_4_ = uVar111;
        auVar31._0_12_ = auVar75;
        auVar120 = NEON_ext(auVar30,auVar31,8,1);
        pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
        auVar46._12_4_ = uVar108;
        auVar46._0_12_ = *pauVar1;
        auVar47._12_4_ = uVar108;
        auVar47._0_12_ = *pauVar1;
        auVar122 = NEON_ext(auVar46,auVar47,8,1);
        iVar98 = iVar98 + (int)(short)uVar54 * (int)(short)uVar124;
        iVar100 = iVar100 + (int)(short)((ulong)uVar54 >> 0x10) *
                            (int)(short)((ulong)uVar124 >> 0x10);
        iVar101 = iVar101 + (int)(short)((ulong)uVar54 >> 0x20) *
                            (int)(short)((ulong)uVar124 >> 0x20);
        iVar109 = iVar109 + (int)(short)((ulong)uVar54 >> 0x30) *
                            (int)(short)((ulong)uVar124 >> 0x30);
        auVar65._12_4_ = uVar116;
        auVar65._0_12_ = auVar76;
        auVar66._12_4_ = uVar116;
        auVar66._0_12_ = auVar77;
        auVar123 = NEON_ext(auVar65,auVar66,8,1);
        iVar115 = iVar115 + (int)(short)uVar73 * (int)(short)uVar125;
        iVar103 = iVar103 + (int)(short)((ulong)uVar73 >> 0x10) *
                            (int)(short)((ulong)uVar125 >> 0x10);
        iVar105 = iVar105 + (int)(short)((ulong)uVar73 >> 0x20) *
                            (int)(short)((ulong)uVar125 >> 0x20);
        iVar107 = iVar107 + (int)(short)((ulong)uVar73 >> 0x30) *
                            (int)(short)((ulong)uVar125 >> 0x30);
        iVar110 = iVar110 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
        iVar112 = iVar112 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
        iVar113 = iVar113 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
        iVar114 = iVar114 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
        iVar102 = iVar102 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
        iVar104 = iVar104 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
        iVar106 = iVar106 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
        iVar126 = iVar126 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
      } while (uVar95 != 0);
      iVar98 = iVar115 + iVar98 + iVar102 + iVar110 + iVar103 + iVar100 + iVar104 + iVar112 +
               iVar105 + iVar101 + iVar106 + iVar113 + iVar107 + iVar109 + iVar126 + iVar114;
      if (uVar92 == uVar86) goto LAB_00e9fc2c;
    }
    lVar87 = uVar86 - uVar92;
    psVar88 = (short *)(param_2 + (uVar92 + (long)(iVar99 + param_7)) * 2);
    psVar91 = (short *)(param_2 + (uVar92 + (long)iVar99) * 2);
    do {
      lVar87 = lVar87 + -1;
      iVar98 = iVar98 + (int)*psVar88 * (int)*psVar91;
      psVar88 = psVar88 + 1;
      psVar91 = psVar91 + 1;
    } while (lVar87 != 0);
  }
LAB_00e9fc2c:
  sVar94 = psVar82[5];
  iVar83 = (iVar83 >> 0x12) + (iVar85 >> 0x12) + (iVar89 >> 0x12) + (iVar98 >> 0x12);
  uVar2 = (int)sVar94 - (int)sVar81 << (ulong)(param_5 & 0x1f);
  uVar86 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    iVar85 = (int)psVar82[6];
    uVar2 = (int)psVar82[6] - (int)sVar94 << (ulong)(param_5 & 0x1f);
    if (0 < (int)uVar2) goto LAB_00e9fd68;
LAB_00e9fc84:
    iVar89 = (int)psVar82[7];
    uVar2 = psVar82[7] - iVar85 << (ulong)(param_5 & 0x1f);
    if (0 < (int)uVar2) goto LAB_00e9fe4c;
LAB_00e9fca0:
    iVar98 = 0;
  }
  else {
    iVar85 = (int)sVar81 << (ulong)(param_5 & 0x1f);
    if (uVar2 < 0x10) {
      uVar92 = 0;
      iVar89 = 0;
LAB_00e9fd24:
      lVar87 = uVar86 - uVar92;
      psVar88 = (short *)(param_2 + (uVar92 + (long)(iVar85 + param_7)) * 2);
      psVar91 = (short *)(param_2 + (uVar92 + (long)iVar85) * 2);
      do {
        lVar87 = lVar87 + -1;
        iVar89 = iVar89 + (int)*psVar88 * (int)*psVar91;
        psVar88 = psVar88 + 1;
        psVar91 = psVar91 + 1;
      } while (lVar87 != 0);
    }
    else {
      uVar92 = uVar86 & 0xfffffff0;
      pauVar84 = (undefined (*) [12])(param_2 + (long)iVar85 * 2 + 0x10);
      iVar89 = 0;
      iVar98 = 0;
      iVar99 = 0;
      iVar100 = 0;
      pauVar93 = (undefined (*) [12])(param_2 + (long)(iVar85 + param_7) * 2 + 0x10);
      iVar101 = 0;
      iVar109 = 0;
      iVar110 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar103 = 0;
      iVar105 = 0;
      iVar107 = 0;
      iVar102 = 0;
      iVar104 = 0;
      uVar95 = uVar92;
      do {
        pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
        uVar124 = *(undefined8 *)*pauVar1;
        uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
        uVar125 = *(undefined8 *)*pauVar84;
        auVar75 = *pauVar84;
        auVar74 = *pauVar84;
        pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
        uVar95 = uVar95 - 0x10;
        auVar12._12_4_ = uVar108;
        auVar12._0_12_ = *pauVar1;
        auVar13._12_4_ = uVar108;
        auVar13._0_12_ = *pauVar1;
        auVar118 = NEON_ext(auVar12,auVar13,8,1);
        pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
        uVar54 = *(undefined8 *)*pauVar1;
        uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
        uVar73 = *(undefined8 *)*pauVar93;
        auVar77 = *pauVar93;
        auVar76 = *pauVar93;
        auVar28._12_4_ = uVar111;
        auVar28._0_12_ = auVar74;
        auVar29._12_4_ = uVar111;
        auVar29._0_12_ = auVar75;
        auVar120 = NEON_ext(auVar28,auVar29,8,1);
        pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
        auVar44._12_4_ = uVar108;
        auVar44._0_12_ = *pauVar1;
        auVar45._12_4_ = uVar108;
        auVar45._0_12_ = *pauVar1;
        auVar122 = NEON_ext(auVar44,auVar45,8,1);
        iVar89 = iVar89 + (int)(short)uVar54 * (int)(short)uVar124;
        iVar98 = iVar98 + (int)(short)((ulong)uVar54 >> 0x10) * (int)(short)((ulong)uVar124 >> 0x10)
        ;
        iVar99 = iVar99 + (int)(short)((ulong)uVar54 >> 0x20) * (int)(short)((ulong)uVar124 >> 0x20)
        ;
        iVar100 = iVar100 + (int)(short)((ulong)uVar54 >> 0x30) *
                            (int)(short)((ulong)uVar124 >> 0x30);
        auVar63._12_4_ = uVar116;
        auVar63._0_12_ = auVar76;
        auVar64._12_4_ = uVar116;
        auVar64._0_12_ = auVar77;
        auVar123 = NEON_ext(auVar63,auVar64,8,1);
        iVar113 = iVar113 + (int)(short)uVar73 * (int)(short)uVar125;
        iVar114 = iVar114 + (int)(short)((ulong)uVar73 >> 0x10) *
                            (int)(short)((ulong)uVar125 >> 0x10);
        iVar115 = iVar115 + (int)(short)((ulong)uVar73 >> 0x20) *
                            (int)(short)((ulong)uVar125 >> 0x20);
        iVar103 = iVar103 + (int)(short)((ulong)uVar73 >> 0x30) *
                            (int)(short)((ulong)uVar125 >> 0x30);
        iVar101 = iVar101 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
        iVar109 = iVar109 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
        iVar110 = iVar110 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
        iVar112 = iVar112 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
        iVar105 = iVar105 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
        iVar107 = iVar107 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
        iVar102 = iVar102 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
        iVar104 = iVar104 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
      } while (uVar95 != 0);
      iVar89 = iVar113 + iVar89 + iVar105 + iVar101 + iVar114 + iVar98 + iVar107 + iVar109 +
               iVar115 + iVar99 + iVar102 + iVar110 + iVar103 + iVar100 + iVar104 + iVar112;
      if (uVar92 != uVar86) goto LAB_00e9fd24;
    }
    iVar85 = (int)psVar82[6];
    iVar83 = iVar83 + (iVar89 >> 0x12);
    uVar2 = iVar85 - sVar94 << (ulong)(param_5 & 0x1f);
    if ((int)uVar2 < 1) goto LAB_00e9fc84;
LAB_00e9fd68:
    uVar86 = (ulong)uVar2;
    iVar89 = (int)sVar94 << (ulong)(param_5 & 0x1f);
    if (uVar2 < 0x10) {
      uVar92 = 0;
      iVar98 = 0;
LAB_00e9fe08:
      lVar87 = uVar86 - uVar92;
      psVar88 = (short *)(param_2 + (uVar92 + (long)(iVar89 + param_7)) * 2);
      psVar91 = (short *)(param_2 + (uVar92 + (long)iVar89) * 2);
      do {
        lVar87 = lVar87 + -1;
        iVar98 = iVar98 + (int)*psVar88 * (int)*psVar91;
        psVar88 = psVar88 + 1;
        psVar91 = psVar91 + 1;
      } while (lVar87 != 0);
    }
    else {
      uVar92 = uVar86 & 0xfffffff0;
      pauVar84 = (undefined (*) [12])(param_2 + (long)iVar89 * 2 + 0x10);
      iVar98 = 0;
      iVar99 = 0;
      iVar100 = 0;
      iVar101 = 0;
      pauVar93 = (undefined (*) [12])(param_2 + (long)(iVar89 + param_7) * 2 + 0x10);
      iVar109 = 0;
      iVar110 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar103 = 0;
      iVar105 = 0;
      iVar107 = 0;
      iVar102 = 0;
      iVar104 = 0;
      iVar106 = 0;
      uVar95 = uVar92;
      do {
        pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
        uVar124 = *(undefined8 *)*pauVar1;
        uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
        uVar125 = *(undefined8 *)*pauVar84;
        auVar75 = *pauVar84;
        auVar74 = *pauVar84;
        pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
        uVar95 = uVar95 - 0x10;
        auVar10._12_4_ = uVar108;
        auVar10._0_12_ = *pauVar1;
        auVar11._12_4_ = uVar108;
        auVar11._0_12_ = *pauVar1;
        auVar118 = NEON_ext(auVar10,auVar11,8,1);
        pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
        uVar54 = *(undefined8 *)*pauVar1;
        uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
        uVar73 = *(undefined8 *)*pauVar93;
        auVar77 = *pauVar93;
        auVar76 = *pauVar93;
        auVar26._12_4_ = uVar111;
        auVar26._0_12_ = auVar74;
        auVar27._12_4_ = uVar111;
        auVar27._0_12_ = auVar75;
        auVar120 = NEON_ext(auVar26,auVar27,8,1);
        pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
        auVar42._12_4_ = uVar108;
        auVar42._0_12_ = *pauVar1;
        auVar43._12_4_ = uVar108;
        auVar43._0_12_ = *pauVar1;
        auVar122 = NEON_ext(auVar42,auVar43,8,1);
        iVar98 = iVar98 + (int)(short)uVar54 * (int)(short)uVar124;
        iVar99 = iVar99 + (int)(short)((ulong)uVar54 >> 0x10) * (int)(short)((ulong)uVar124 >> 0x10)
        ;
        iVar100 = iVar100 + (int)(short)((ulong)uVar54 >> 0x20) *
                            (int)(short)((ulong)uVar124 >> 0x20);
        iVar101 = iVar101 + (int)(short)((ulong)uVar54 >> 0x30) *
                            (int)(short)((ulong)uVar124 >> 0x30);
        auVar61._12_4_ = uVar116;
        auVar61._0_12_ = auVar76;
        auVar62._12_4_ = uVar116;
        auVar62._0_12_ = auVar77;
        auVar123 = NEON_ext(auVar61,auVar62,8,1);
        iVar114 = iVar114 + (int)(short)uVar73 * (int)(short)uVar125;
        iVar115 = iVar115 + (int)(short)((ulong)uVar73 >> 0x10) *
                            (int)(short)((ulong)uVar125 >> 0x10);
        iVar103 = iVar103 + (int)(short)((ulong)uVar73 >> 0x20) *
                            (int)(short)((ulong)uVar125 >> 0x20);
        iVar105 = iVar105 + (int)(short)((ulong)uVar73 >> 0x30) *
                            (int)(short)((ulong)uVar125 >> 0x30);
        iVar109 = iVar109 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
        iVar110 = iVar110 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
        iVar112 = iVar112 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
        iVar113 = iVar113 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
        iVar107 = iVar107 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
        iVar102 = iVar102 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
        iVar104 = iVar104 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
        iVar106 = iVar106 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
      } while (uVar95 != 0);
      iVar98 = iVar114 + iVar98 + iVar107 + iVar109 + iVar115 + iVar99 + iVar102 + iVar110 +
               iVar103 + iVar100 + iVar104 + iVar112 + iVar105 + iVar101 + iVar106 + iVar113;
      if (uVar92 != uVar86) goto LAB_00e9fe08;
    }
    iVar89 = (int)psVar82[7];
    iVar83 = iVar83 + (iVar98 >> 0x12);
    uVar2 = psVar82[7] - iVar85 << (ulong)(param_5 & 0x1f);
    if ((int)uVar2 < 1) goto LAB_00e9fca0;
LAB_00e9fe4c:
    uVar86 = (ulong)uVar2;
    iVar85 = iVar85 << (ulong)(param_5 & 0x1f);
    if (uVar2 < 0x10) {
      uVar92 = 0;
      iVar98 = 0;
LAB_00e9feec:
      lVar87 = uVar86 - uVar92;
      psVar88 = (short *)(param_2 + (uVar92 + (long)(iVar85 + param_7)) * 2);
      psVar91 = (short *)(param_2 + (uVar92 + (long)iVar85) * 2);
      do {
        lVar87 = lVar87 + -1;
        iVar98 = iVar98 + (int)*psVar88 * (int)*psVar91;
        psVar88 = psVar88 + 1;
        psVar91 = psVar91 + 1;
      } while (lVar87 != 0);
    }
    else {
      uVar92 = uVar86 & 0xfffffff0;
      pauVar84 = (undefined (*) [12])(param_2 + (long)iVar85 * 2 + 0x10);
      iVar98 = 0;
      iVar99 = 0;
      iVar100 = 0;
      iVar101 = 0;
      pauVar93 = (undefined (*) [12])(param_2 + (long)(iVar85 + param_7) * 2 + 0x10);
      iVar109 = 0;
      iVar110 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar103 = 0;
      iVar105 = 0;
      iVar107 = 0;
      iVar102 = 0;
      iVar104 = 0;
      iVar106 = 0;
      uVar95 = uVar92;
      do {
        pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
        uVar124 = *(undefined8 *)*pauVar1;
        uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
        uVar125 = *(undefined8 *)*pauVar84;
        auVar75 = *pauVar84;
        auVar74 = *pauVar84;
        pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
        uVar95 = uVar95 - 0x10;
        auVar8._12_4_ = uVar108;
        auVar8._0_12_ = *pauVar1;
        auVar9._12_4_ = uVar108;
        auVar9._0_12_ = *pauVar1;
        auVar118 = NEON_ext(auVar8,auVar9,8,1);
        pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
        uVar54 = *(undefined8 *)*pauVar1;
        uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
        uVar73 = *(undefined8 *)*pauVar93;
        auVar77 = *pauVar93;
        auVar76 = *pauVar93;
        auVar24._12_4_ = uVar111;
        auVar24._0_12_ = auVar74;
        auVar25._12_4_ = uVar111;
        auVar25._0_12_ = auVar75;
        auVar120 = NEON_ext(auVar24,auVar25,8,1);
        pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
        auVar40._12_4_ = uVar108;
        auVar40._0_12_ = *pauVar1;
        auVar41._12_4_ = uVar108;
        auVar41._0_12_ = *pauVar1;
        auVar122 = NEON_ext(auVar40,auVar41,8,1);
        iVar98 = iVar98 + (int)(short)uVar54 * (int)(short)uVar124;
        iVar99 = iVar99 + (int)(short)((ulong)uVar54 >> 0x10) * (int)(short)((ulong)uVar124 >> 0x10)
        ;
        iVar100 = iVar100 + (int)(short)((ulong)uVar54 >> 0x20) *
                            (int)(short)((ulong)uVar124 >> 0x20);
        iVar101 = iVar101 + (int)(short)((ulong)uVar54 >> 0x30) *
                            (int)(short)((ulong)uVar124 >> 0x30);
        auVar59._12_4_ = uVar116;
        auVar59._0_12_ = auVar76;
        auVar60._12_4_ = uVar116;
        auVar60._0_12_ = auVar77;
        auVar123 = NEON_ext(auVar59,auVar60,8,1);
        iVar114 = iVar114 + (int)(short)uVar73 * (int)(short)uVar125;
        iVar115 = iVar115 + (int)(short)((ulong)uVar73 >> 0x10) *
                            (int)(short)((ulong)uVar125 >> 0x10);
        iVar103 = iVar103 + (int)(short)((ulong)uVar73 >> 0x20) *
                            (int)(short)((ulong)uVar125 >> 0x20);
        iVar105 = iVar105 + (int)(short)((ulong)uVar73 >> 0x30) *
                            (int)(short)((ulong)uVar125 >> 0x30);
        iVar109 = iVar109 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
        iVar110 = iVar110 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
        iVar112 = iVar112 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
        iVar113 = iVar113 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
        iVar107 = iVar107 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
        iVar102 = iVar102 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
        iVar104 = iVar104 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
        iVar106 = iVar106 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
      } while (uVar95 != 0);
      iVar98 = iVar114 + iVar98 + iVar107 + iVar109 + iVar115 + iVar99 + iVar102 + iVar110 +
               iVar103 + iVar100 + iVar104 + iVar112 + iVar105 + iVar101 + iVar106 + iVar113;
      if (uVar92 != uVar86) goto LAB_00e9feec;
    }
    iVar98 = iVar98 >> 0x12;
  }
  sVar94 = psVar82[8];
  uVar2 = sVar94 - iVar89 << (ulong)(param_5 & 0x1f);
  uVar86 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    iVar85 = 0;
  }
  else {
    iVar89 = iVar89 << (ulong)(param_5 & 0x1f);
    if (uVar2 < 0x10) {
      uVar92 = 0;
      iVar85 = 0;
LAB_00e9ffe0:
      lVar87 = uVar86 - uVar92;
      psVar88 = (short *)(param_2 + (uVar92 + (long)(iVar89 + param_7)) * 2);
      psVar91 = (short *)(param_2 + (uVar92 + (long)iVar89) * 2);
      do {
        lVar87 = lVar87 + -1;
        iVar85 = iVar85 + (int)*psVar88 * (int)*psVar91;
        psVar88 = psVar88 + 1;
        psVar91 = psVar91 + 1;
      } while (lVar87 != 0);
    }
    else {
      uVar92 = uVar86 & 0xfffffff0;
      pauVar84 = (undefined (*) [12])(param_2 + (long)iVar89 * 2 + 0x10);
      iVar85 = 0;
      iVar99 = 0;
      iVar100 = 0;
      iVar101 = 0;
      pauVar93 = (undefined (*) [12])(param_2 + (long)(iVar89 + param_7) * 2 + 0x10);
      iVar109 = 0;
      iVar110 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar103 = 0;
      iVar105 = 0;
      iVar107 = 0;
      iVar102 = 0;
      iVar104 = 0;
      iVar106 = 0;
      uVar95 = uVar92;
      do {
        pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
        uVar124 = *(undefined8 *)*pauVar1;
        uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
        uVar125 = *(undefined8 *)*pauVar84;
        auVar75 = *pauVar84;
        auVar74 = *pauVar84;
        pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
        uVar95 = uVar95 - 0x10;
        auVar6._12_4_ = uVar108;
        auVar6._0_12_ = *pauVar1;
        auVar7._12_4_ = uVar108;
        auVar7._0_12_ = *pauVar1;
        auVar118 = NEON_ext(auVar6,auVar7,8,1);
        pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
        uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
        uVar54 = *(undefined8 *)*pauVar1;
        uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
        uVar73 = *(undefined8 *)*pauVar93;
        auVar77 = *pauVar93;
        auVar76 = *pauVar93;
        auVar22._12_4_ = uVar111;
        auVar22._0_12_ = auVar74;
        auVar23._12_4_ = uVar111;
        auVar23._0_12_ = auVar75;
        auVar120 = NEON_ext(auVar22,auVar23,8,1);
        pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
        auVar38._12_4_ = uVar108;
        auVar38._0_12_ = *pauVar1;
        auVar39._12_4_ = uVar108;
        auVar39._0_12_ = *pauVar1;
        auVar122 = NEON_ext(auVar38,auVar39,8,1);
        iVar85 = iVar85 + (int)(short)uVar54 * (int)(short)uVar124;
        iVar99 = iVar99 + (int)(short)((ulong)uVar54 >> 0x10) * (int)(short)((ulong)uVar124 >> 0x10)
        ;
        iVar100 = iVar100 + (int)(short)((ulong)uVar54 >> 0x20) *
                            (int)(short)((ulong)uVar124 >> 0x20);
        iVar101 = iVar101 + (int)(short)((ulong)uVar54 >> 0x30) *
                            (int)(short)((ulong)uVar124 >> 0x30);
        auVar57._12_4_ = uVar116;
        auVar57._0_12_ = auVar76;
        auVar58._12_4_ = uVar116;
        auVar58._0_12_ = auVar77;
        auVar123 = NEON_ext(auVar57,auVar58,8,1);
        iVar114 = iVar114 + (int)(short)uVar73 * (int)(short)uVar125;
        iVar115 = iVar115 + (int)(short)((ulong)uVar73 >> 0x10) *
                            (int)(short)((ulong)uVar125 >> 0x10);
        iVar103 = iVar103 + (int)(short)((ulong)uVar73 >> 0x20) *
                            (int)(short)((ulong)uVar125 >> 0x20);
        iVar105 = iVar105 + (int)(short)((ulong)uVar73 >> 0x30) *
                            (int)(short)((ulong)uVar125 >> 0x30);
        iVar109 = iVar109 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
        iVar110 = iVar110 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
        iVar112 = iVar112 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
        iVar113 = iVar113 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
        iVar107 = iVar107 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
        iVar102 = iVar102 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
        iVar104 = iVar104 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
        iVar106 = iVar106 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
      } while (uVar95 != 0);
      iVar85 = iVar114 + iVar85 + iVar107 + iVar109 + iVar115 + iVar99 + iVar102 + iVar110 +
               iVar103 + iVar100 + iVar104 + iVar112 + iVar105 + iVar101 + iVar106 + iVar113;
      if (uVar92 != uVar86) goto LAB_00e9ffe0;
    }
    iVar85 = iVar85 >> 0x12;
  }
  uVar90 = (iVar83 + iVar98 + iVar85) * 0x10000 >> 0x13;
  uVar2 = -uVar90;
  if (-1 < (int)uVar90) {
    uVar2 = uVar90;
  }
  if (0x3ff < (uVar2 & 0xffff)) {
    uVar2 = 0x400;
  }
  sVar81 = (short)uVar2;
  if (8 < (int)param_11) {
    uVar86 = 8;
    uVar90 = uVar2;
    do {
      while( true ) {
        uVar86 = uVar86 + 1;
        iVar83 = (int)sVar94;
        sVar94 = psVar82[uVar86];
        uVar3 = sVar94 - iVar83 << (ulong)(param_5 & 0x1f);
        uVar95 = (ulong)uVar3;
        sVar81 = (short)uVar90;
        if ((int)uVar3 < 1) break;
        lVar87 = (long)(iVar83 << (ulong)(param_5 & 0x1f));
        if (uVar3 < 0x10) {
          uVar97 = 0;
          iVar83 = 0;
LAB_00ea0114:
          lVar96 = uVar95 - uVar97;
          psVar88 = (short *)(param_2 + (uVar97 + lVar87 + param_7) * 2);
          psVar91 = (short *)(param_2 + (uVar97 + lVar87) * 2);
          do {
            lVar96 = lVar96 + -1;
            iVar83 = iVar83 + (int)*psVar88 * (int)*psVar91;
            psVar88 = psVar88 + 1;
            psVar91 = psVar91 + 1;
          } while (lVar96 != 0);
        }
        else {
          uVar97 = uVar95 & 0xfffffff0;
          pauVar84 = (undefined (*) [12])(param_2 + 0x10 + lVar87 * 2);
          iVar83 = 0;
          iVar85 = 0;
          iVar89 = 0;
          iVar98 = 0;
          pauVar93 = (undefined (*) [12])(param_2 + 0x10 + (lVar87 + param_7) * 2);
          iVar99 = 0;
          iVar100 = 0;
          iVar101 = 0;
          iVar109 = 0;
          iVar110 = 0;
          iVar112 = 0;
          iVar113 = 0;
          iVar114 = 0;
          iVar115 = 0;
          iVar103 = 0;
          iVar105 = 0;
          iVar107 = 0;
          uVar92 = uVar97;
          do {
            pauVar1 = (undefined (*) [12])(pauVar84[-2] + 8);
            uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar84[-1] + 4) >> 0x20);
            uVar124 = *(undefined8 *)*pauVar1;
            uVar111 = (undefined4)((ulong)*(undefined8 *)(*pauVar84 + 8) >> 0x20);
            uVar125 = *(undefined8 *)*pauVar84;
            auVar75 = *pauVar84;
            auVar74 = *pauVar84;
            pauVar84 = (undefined (*) [12])(pauVar84[2] + 8);
            uVar92 = uVar92 - 0x10;
            auVar4._12_4_ = uVar108;
            auVar4._0_12_ = *pauVar1;
            auVar5._12_4_ = uVar108;
            auVar5._0_12_ = *pauVar1;
            auVar118 = NEON_ext(auVar4,auVar5,8,1);
            pauVar1 = (undefined (*) [12])(pauVar93[-2] + 8);
            uVar108 = (undefined4)((ulong)*(undefined8 *)(pauVar93[-1] + 4) >> 0x20);
            uVar54 = *(undefined8 *)*pauVar1;
            uVar116 = (undefined4)((ulong)*(undefined8 *)(*pauVar93 + 8) >> 0x20);
            uVar73 = *(undefined8 *)*pauVar93;
            auVar77 = *pauVar93;
            auVar76 = *pauVar93;
            auVar20._12_4_ = uVar111;
            auVar20._0_12_ = auVar74;
            auVar21._12_4_ = uVar111;
            auVar21._0_12_ = auVar75;
            auVar120 = NEON_ext(auVar20,auVar21,8,1);
            pauVar93 = (undefined (*) [12])(pauVar93[2] + 8);
            auVar36._12_4_ = uVar108;
            auVar36._0_12_ = *pauVar1;
            auVar37._12_4_ = uVar108;
            auVar37._0_12_ = *pauVar1;
            auVar122 = NEON_ext(auVar36,auVar37,8,1);
            iVar83 = iVar83 + (int)(short)uVar54 * (int)(short)uVar124;
            iVar85 = iVar85 + (int)(short)((ulong)uVar54 >> 0x10) *
                              (int)(short)((ulong)uVar124 >> 0x10);
            iVar89 = iVar89 + (int)(short)((ulong)uVar54 >> 0x20) *
                              (int)(short)((ulong)uVar124 >> 0x20);
            iVar98 = iVar98 + (int)(short)((ulong)uVar54 >> 0x30) *
                              (int)(short)((ulong)uVar124 >> 0x30);
            auVar55._12_4_ = uVar116;
            auVar55._0_12_ = auVar76;
            auVar56._12_4_ = uVar116;
            auVar56._0_12_ = auVar77;
            auVar123 = NEON_ext(auVar55,auVar56,8,1);
            iVar110 = iVar110 + (int)(short)uVar73 * (int)(short)uVar125;
            iVar112 = iVar112 + (int)(short)((ulong)uVar73 >> 0x10) *
                                (int)(short)((ulong)uVar125 >> 0x10);
            iVar113 = iVar113 + (int)(short)((ulong)uVar73 >> 0x20) *
                                (int)(short)((ulong)uVar125 >> 0x20);
            iVar114 = iVar114 + (int)(short)((ulong)uVar73 >> 0x30) *
                                (int)(short)((ulong)uVar125 >> 0x30);
            iVar99 = iVar99 + (int)auVar122._0_2_ * (int)auVar118._0_2_;
            iVar100 = iVar100 + (int)auVar122._2_2_ * (int)auVar118._2_2_;
            iVar101 = iVar101 + (int)auVar122._4_2_ * (int)auVar118._4_2_;
            iVar109 = iVar109 + (int)auVar122._6_2_ * (int)auVar118._6_2_;
            iVar115 = iVar115 + (int)auVar123._0_2_ * (int)auVar120._0_2_;
            iVar103 = iVar103 + (int)auVar123._2_2_ * (int)auVar120._2_2_;
            iVar105 = iVar105 + (int)auVar123._4_2_ * (int)auVar120._4_2_;
            iVar107 = iVar107 + (int)auVar123._6_2_ * (int)auVar120._6_2_;
          } while (uVar92 != 0);
          iVar83 = iVar110 + iVar83 + iVar115 + iVar99 + iVar112 + iVar85 + iVar103 + iVar100 +
                   iVar113 + iVar89 + iVar105 + iVar101 + iVar114 + iVar98 + iVar107 + iVar109;
          if (uVar97 != uVar95) goto LAB_00ea0114;
        }
        uVar3 = -(iVar83 >> 0x12);
        if (-1 < iVar83) {
          uVar3 = iVar83 >> 0x12;
        }
        uVar90 = (int)sVar81;
        if ((int)uVar3 <= (int)sVar81) {
          uVar90 = uVar3;
        }
        sVar81 = (short)uVar90;
        if (uVar86 == param_11) goto LAB_00ea0168;
      }
      uVar90 = (uint)sVar81;
      if (-1 < (int)uVar90) {
        uVar90 = 0;
      }
      sVar81 = (short)uVar90;
    } while (uVar86 != param_11);
  }
LAB_00ea0168:
  uVar90 = (uint)sVar81;
  iVar83 = (uVar2 & 0xffff) * (uVar2 & 0xffff);
  uVar2 = -uVar90;
  if (-1 < (int)uVar90) {
    uVar2 = uVar90;
  }
  iVar85 = 0x100419 - iVar83;
  if (0x3ff < (uVar2 & 0xffff)) {
    uVar2 = 0x400;
  }
  uVar90 = (uint)LZCOUNT(iVar85) ^ 0x1f;
  iVar89 = iVar85 >> (uVar90 - 0xf & 0x1f);
  if (uVar90 < 0xf || uVar90 - 0xf == 0) {
    iVar89 = iVar85 << (ulong)(0xf - uVar90 & 0x1f);
  }
  uVar3 = 0x100419 - (uVar2 & 0xffff) * (uVar2 & 0xffff);
  iVar85 = iVar89 * 0x10000 + 0x40000000;
  iVar89 = iVar85 >> 0x10;
  iVar85 = iVar85 >> 0xf;
  uVar2 = (uint)LZCOUNT(uVar3) ^ 0x1f;
  iVar98 = -0x7fff;
  if (iVar83 != 0x100419) {
    iVar98 = (int)(short)((short)uVar90 * 0x400 +
                          (short)((int)((((uint)((((iVar89 * -0x579 >> 0xf) + 0x9f1) * iVar85 +
                                                  -0x14610000 >> 0x10) * iVar89) >> 0xf) + 0x3d82 &
                                        0xffff) * iVar85 + -0x1a890000) >> 0x14) + -0x3400);
  }
  uVar90 = uVar3 >> (ulong)(uVar2 - 0xf & 0x1f);
  if (uVar2 < 0xf || uVar2 - 0xf == 0) {
    uVar90 = uVar3 << (ulong)(0xf - uVar2 & 0x1f);
  }
  iVar83 = uVar90 * 0x10000 + 0x40000000;
  iVar85 = iVar83 >> 0x10;
  iVar83 = iVar83 >> 0xf;
  iVar85 = (int)(short)((short)uVar2 * 0x400 +
                        (short)((int)((((uint)((((iVar85 * -0x579 >> 0xf) + 0x9f1) * iVar83 +
                                                -0x14610000 >> 0x10) * iVar85) >> 0xf) + 0x3d82 &
                                      0xffff) * iVar83 + -0x1a890000) >> 0x14) + -0x3400);
  iVar83 = iVar98 >> 1;
  if (iVar98 >> 1 <= iVar85) {
    iVar83 = iVar85;
  }
  iVar89 = (iVar98 * 0x4000 + -0x5ff8000 >> 0x10) * 0x6000 >> 0xf;
  iVar85 = iVar83 * 0x4000 + -0x5ff8000 >> 0x11;
  iVar83 = *param_9 + 0x40;
  if (iVar89 == -0x400 || iVar89 + 0x400 < 0 != SCARRY4(iVar89,0x400)) {
    iVar89 = -0x400;
  }
  uVar80 = uVar80 + (short)iVar89;
  if (iVar83 + iVar85 < 0 == SBORROW4(iVar83,-iVar85)) {
    iVar83 = -iVar85;
  }
  *param_9 = (short)iVar83;
joined_r0x00e9f744:
  uVar2 = param_4 - 1;
  uVar86 = (ulong)uVar2;
  if (param_4 < 2) {
    iVar83 = 0;
  }
  else {
    iVar85 = 2 - param_4;
    param_4 = 0x12 - param_4;
    lVar87 = 0;
    uVar95 = 0;
    iVar83 = 0;
    uVar90 = param_6;
    if ((int)param_6 < 2) {
      uVar90 = 1;
    }
    uVar92 = uVar86 & 0xfffffff0;
    puVar78 = (undefined8 *)(param_3 + 0x10);
    do {
      if (uVar2 < 0x10) {
        uVar97 = 0;
LAB_00e9f854:
        iVar89 = iVar85 + (int)uVar97 * 2;
        lVar96 = uVar86 - uVar97;
        psVar82 = (short *)(param_3 + (uVar97 + lVar87) * 2);
        do {
          lVar96 = lVar96 + -1;
          iVar83 = iVar83 + iVar89 * *psVar82;
          iVar89 = iVar89 + 2;
          psVar82 = psVar82 + 1;
        } while (lVar96 != 0);
      }
      else {
        iVar89 = 0;
        iVar109 = 0;
        iVar110 = 0;
        iVar98 = 0;
        iVar99 = 0;
        iVar112 = 0;
        iVar113 = 0;
        iVar100 = 0;
        iVar101 = 0;
        iVar114 = 0;
        iVar115 = 0;
        auVar119._8_8_ = 0x300000002;
        auVar119._0_8_ = 0x100000000;
        auVar121._8_8_ = 0x700000006;
        auVar121._0_8_ = 0x500000004;
        uVar97 = uVar92;
        puVar79 = puVar78;
        auVar118 = ZEXT816(0);
        do {
          auVar120 = *(undefined (*) [16])(puVar79 + -2);
          uVar125 = puVar79[1];
          uVar124 = *puVar79;
          iVar126 = auVar119._0_4_ * 2;
          iVar103 = auVar119._4_4_;
          iVar127 = iVar103 * 2;
          iVar105 = auVar119._8_4_;
          iVar128 = iVar105 * 2;
          iVar107 = auVar119._12_4_;
          iVar129 = iVar107 * 2;
          puVar79 = puVar79 + 4;
          iVar130 = auVar121._0_4_ * 2;
          iVar102 = auVar121._4_4_;
          iVar131 = iVar102 * 2;
          iVar104 = auVar121._8_4_;
          iVar132 = iVar104 * 2;
          iVar106 = auVar121._12_4_;
          iVar133 = iVar106 * 2;
          uVar97 = uVar97 - 0x10;
          auVar119._0_4_ = auVar119._0_4_ + 0x10;
          auVar119._4_4_ = iVar103 + 0x10;
          auVar119._8_4_ = iVar105 + 0x10;
          auVar119._12_4_ = iVar107 + 0x10;
          iVar98 = iVar98 + (iVar85 + iVar130) * (int)auVar120._8_2_;
          iVar99 = iVar99 + (iVar85 + iVar131) * (int)auVar120._10_2_;
          iVar112 = iVar112 + (iVar85 + iVar132) * (int)auVar120._12_2_;
          iVar113 = iVar113 + (iVar85 + iVar133) * (int)auVar120._14_2_;
          iVar83 = iVar83 + (iVar85 + iVar126) * (int)auVar120._0_2_;
          iVar89 = iVar89 + (iVar85 + iVar127) * (int)auVar120._2_2_;
          iVar109 = iVar109 + (iVar85 + iVar128) * (int)auVar120._4_2_;
          iVar110 = iVar110 + (iVar85 + iVar129) * (int)auVar120._6_2_;
          auVar117._0_4_ = auVar118._0_4_ + (param_4 + iVar130) * (int)(short)uVar125;
          auVar117._4_4_ =
               auVar118._4_4_ + (param_4 + iVar131) * (int)(short)((ulong)uVar125 >> 0x10);
          auVar117._8_4_ =
               auVar118._8_4_ + (param_4 + iVar132) * (int)(short)((ulong)uVar125 >> 0x20);
          auVar117._12_4_ =
               auVar118._12_4_ + (param_4 + iVar133) * (int)(short)((ulong)uVar125 >> 0x30);
          iVar100 = iVar100 + (param_4 + iVar126) * (int)(short)uVar124;
          iVar101 = iVar101 + (param_4 + iVar127) * (int)(short)((ulong)uVar124 >> 0x10);
          iVar114 = iVar114 + (param_4 + iVar128) * (int)(short)((ulong)uVar124 >> 0x20);
          iVar115 = iVar115 + (param_4 + iVar129) * (int)(short)((ulong)uVar124 >> 0x30);
          auVar121._0_4_ = auVar121._0_4_ + 0x10;
          auVar121._4_4_ = iVar102 + 0x10;
          auVar121._8_4_ = iVar104 + 0x10;
          auVar121._12_4_ = iVar106 + 0x10;
          auVar118 = auVar117;
        } while (uVar97 != 0);
        iVar83 = iVar100 + iVar83 + auVar117._0_4_ + iVar98 +
                 iVar101 + iVar89 + auVar117._4_4_ + iVar99 +
                 iVar114 + iVar109 + auVar117._8_4_ + iVar112 +
                 iVar115 + iVar110 + auVar117._12_4_ + iVar113;
        uVar97 = uVar92;
        if (uVar92 != uVar86) goto LAB_00e9f854;
      }
      uVar95 = uVar95 + 1;
      puVar78 = (undefined8 *)((long)puVar78 + (long)*(int *)(param_1 + 8) * 2);
      lVar87 = lVar87 + *(int *)(param_1 + 8);
    } while (uVar95 != uVar90);
  }
  iVar85 = 0;
  if (uVar2 * param_6 != 0) {
    iVar85 = iVar83 / (int)(uVar2 * param_6);
  }
  iVar83 = iVar85 + 0x400 >> 2;
  sVar94 = -0x200;
  if (iVar85 < 0x2c18) {
    sVar94 = (short)((ulong)((long)iVar83 * -0x2aaaaaab) >> 0x20) -
             ((short)(iVar83 / -0x66666666) + (short)(iVar85 + 0x400 >> 0x1f));
  }
  sVar81 = 0x200;
  if (-0x3415 < iVar85) {
    sVar81 = sVar94;
  }
  sVar81 = (uVar80 - ((param_10 >> 6) * 2 + (param_12 >> 2))) + sVar81;
  if (*param_8 != 0) {
    iVar83 = (int)(((float)param_8[2] + 0.05) * 512.0);
    if (0x1ff < iVar83) {
      iVar83 = 0x200;
    }
    if (iVar83 == -0x200 || iVar83 + 0x200 < 0 != SCARRY4(iVar83,0x200)) {
      iVar83 = -0x200;
    }
    sVar81 = sVar81 - (short)iVar83;
  }
  uVar2 = sVar81 + 0x80 >> 8;
  if (9 < (int)uVar2) {
    uVar2 = 10;
  }
  return uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
}


