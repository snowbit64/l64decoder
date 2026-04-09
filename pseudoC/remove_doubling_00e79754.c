// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remove_doubling
// Entry Point: 00e79754
// Size: 2572 bytes
// Signature: undefined remove_doubling(void)


void remove_doubling(long param_1,uint param_2,uint param_3,int param_4,uint *param_5,int param_6,
                    int param_7)

{
  long lVar1;
  short *psVar2;
  undefined (*pauVar3) [12];
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  uint uVar6;
  uint uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined8 uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined8 uVar21;
  undefined auVar22 [12];
  undefined auVar23 [12];
  bool bVar24;
  bool bVar25;
  short sVar26;
  short sVar27;
  uint extraout_var;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  undefined (*pauVar34) [12];
  ulong uVar35;
  long lVar36;
  undefined (*pauVar37) [16];
  ulong uVar38;
  short *psVar39;
  uint *puVar40;
  uint *puVar41;
  long lVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  undefined4 uVar77;
  int iVar78;
  int iVar79;
  undefined4 uVar80;
  int iVar81;
  int iVar82;
  undefined auVar83 [16];
  undefined auVar84 [16];
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar89;
  short sVar90;
  short sVar91;
  undefined auVar88 [16];
  short sVar92;
  short sVar95;
  short sVar96;
  short sVar97;
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  long local_110;
  long local_108;
  uint local_fc;
  uint *local_f8;
  undefined (*local_f0) [16];
  int local_e8;
  int local_e4;
  long local_e0;
  ulong local_d8;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  long local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  ulong local_98;
  uint local_8c;
  ulong local_88;
  long local_80;
  ulong local_78;
  long local_70;
  
  lVar42 = tpidr_el0;
  uVar31 = param_2;
  if ((int)param_2 < 0) {
    uVar31 = param_2 + 1;
  }
  iVar43 = (int)uVar31 >> 1;
  local_80 = (long)((ulong)uVar31 << 0x20) >> 0x21;
  local_70 = *(long *)(lVar42 + 0x28);
  uVar31 = param_3;
  if ((int)param_3 < 0) {
    uVar31 = param_3 + 1;
  }
  uVar30 = *param_5;
  uVar28 = iVar43 + 1;
  if ((int)uVar30 < 0) {
    uVar30 = uVar30 + 1;
  }
  if (param_6 < 0) {
    param_6 = param_6 + 1;
  }
  iVar45 = param_4;
  if (param_4 < 0) {
    iVar45 = param_4 + 1;
  }
  uVar6 = (int)uVar30 >> 1;
  if (iVar43 <= (int)uVar30 >> 1) {
    uVar6 = iVar43 - 1;
  }
  uVar30 = iVar45 >> 1;
  uVar29 = (ulong)uVar30;
  local_78 = (ulong)uVar6;
  puVar41 = (uint *)((long)&local_110 -
                    ((-(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar28 << 2) + 0xf &
                    0xfffffffffffffff0));
  *param_5 = uVar6;
  uVar51 = 0;
  uVar44 = 0;
  lVar33 = (long)(int)uVar6;
  if (1 < param_4) {
    if (uVar30 < 0x10) {
      uVar35 = 0;
      uVar44 = 0;
      uVar51 = 0;
    }
    else {
      uVar35 = uVar29 & 0xfffffff0;
      iVar52 = 0;
      iVar54 = 0;
      iVar56 = 0;
      iVar58 = 0;
      iVar60 = 0;
      iVar62 = 0;
      iVar64 = 0;
      iVar66 = 0;
      iVar68 = 0;
      iVar70 = 0;
      iVar72 = 0;
      iVar74 = 0;
      pauVar37 = (undefined (*) [16])(param_1 + local_80 * 2 + 0x10);
      iVar53 = 0;
      iVar55 = 0;
      iVar57 = 0;
      iVar59 = 0;
      iVar45 = 0;
      iVar46 = 0;
      iVar61 = 0;
      iVar63 = 0;
      iVar47 = 0;
      iVar48 = 0;
      iVar65 = 0;
      iVar67 = 0;
      iVar49 = 0;
      iVar50 = 0;
      iVar69 = 0;
      iVar71 = 0;
      uVar38 = uVar35;
      auVar83 = ZEXT816(0);
      do {
        pauVar5 = (undefined (*) [16])((long)pauVar37 + lVar33 * -2);
        uVar38 = uVar38 - 0x10;
        auVar84 = pauVar37[-1];
        auVar88 = *pauVar37;
        pauVar37 = pauVar37 + 2;
        auVar99 = NEON_ext(auVar84,auVar84,8,1);
        sVar27 = auVar84._0_2_;
        sVar85 = auVar84._2_2_;
        sVar26 = auVar84._4_2_;
        sVar86 = auVar84._6_2_;
        iVar45 = iVar45 + (int)sVar27 * (int)sVar27;
        iVar46 = iVar46 + (int)sVar85 * (int)sVar85;
        iVar61 = iVar61 + (int)sVar26 * (int)sVar26;
        iVar63 = iVar63 + (int)sVar86 * (int)sVar86;
        auVar84 = pauVar5[-1];
        auVar94 = *pauVar5;
        auVar98 = NEON_ext(auVar88,auVar88,8,1);
        sVar87 = auVar88._0_2_;
        sVar89 = auVar88._2_2_;
        sVar90 = auVar88._4_2_;
        sVar91 = auVar88._6_2_;
        iVar49 = iVar49 + (int)sVar87 * (int)sVar87;
        iVar50 = iVar50 + (int)sVar89 * (int)sVar89;
        iVar69 = iVar69 + (int)sVar90 * (int)sVar90;
        iVar71 = iVar71 + (int)sVar91 * (int)sVar91;
        sVar92 = auVar99._0_2_;
        sVar95 = auVar99._2_2_;
        sVar96 = auVar99._4_2_;
        sVar97 = auVar99._6_2_;
        iVar47 = iVar47 + (int)sVar92 * (int)sVar92;
        iVar48 = iVar48 + (int)sVar95 * (int)sVar95;
        iVar65 = iVar65 + (int)sVar96 * (int)sVar96;
        iVar67 = iVar67 + (int)sVar97 * (int)sVar97;
        auVar88 = NEON_ext(auVar84,auVar84,8,1);
        iVar52 = iVar52 + (int)auVar84._0_2_ * (int)sVar27;
        iVar54 = iVar54 + (int)auVar84._2_2_ * (int)sVar85;
        iVar56 = iVar56 + (int)auVar84._4_2_ * (int)sVar26;
        iVar58 = iVar58 + (int)auVar84._6_2_ * (int)sVar86;
        auVar99 = NEON_ext(auVar94,auVar94,8,1);
        iVar68 = iVar68 + (int)auVar94._0_2_ * (int)sVar87;
        iVar70 = iVar70 + (int)auVar94._2_2_ * (int)sVar89;
        iVar72 = iVar72 + (int)auVar94._4_2_ * (int)sVar90;
        iVar74 = iVar74 + (int)auVar94._6_2_ * (int)sVar91;
        sVar27 = auVar98._0_2_;
        sVar85 = auVar98._2_2_;
        sVar26 = auVar98._4_2_;
        sVar86 = auVar98._6_2_;
        auVar84._0_4_ = auVar83._0_4_ + (int)sVar27 * (int)sVar27;
        auVar84._4_4_ = auVar83._4_4_ + (int)sVar85 * (int)sVar85;
        auVar84._8_4_ = auVar83._8_4_ + (int)sVar26 * (int)sVar26;
        auVar84._12_4_ = auVar83._12_4_ + (int)sVar86 * (int)sVar86;
        iVar60 = iVar60 + (int)auVar88._0_2_ * (int)sVar92;
        iVar62 = iVar62 + (int)auVar88._2_2_ * (int)sVar95;
        iVar64 = iVar64 + (int)auVar88._4_2_ * (int)sVar96;
        iVar66 = iVar66 + (int)auVar88._6_2_ * (int)sVar97;
        iVar53 = iVar53 + (int)auVar99._0_2_ * (int)sVar27;
        iVar55 = iVar55 + (int)auVar99._2_2_ * (int)sVar85;
        iVar57 = iVar57 + (int)auVar99._4_2_ * (int)sVar26;
        iVar59 = iVar59 + (int)auVar99._6_2_ * (int)sVar86;
        auVar83 = auVar84;
      } while (uVar38 != 0);
      uVar51 = iVar49 + iVar45 + auVar84._0_4_ + iVar47 + iVar50 + iVar46 + auVar84._4_4_ + iVar48 +
               iVar69 + iVar61 + auVar84._8_4_ + iVar65 + iVar71 + iVar63 + auVar84._12_4_ + iVar67;
      uVar44 = iVar68 + iVar52 + iVar53 + iVar60 + iVar70 + iVar54 + iVar55 + iVar62 +
               iVar72 + iVar56 + iVar57 + iVar64 + iVar74 + iVar58 + iVar59 + iVar66;
      if (uVar35 == uVar29) goto LAB_00e79900;
    }
    lVar36 = uVar29 - uVar35;
    psVar39 = (short *)(param_1 + (uVar35 + local_80) * 2);
    do {
      psVar2 = psVar39 + -lVar33;
      lVar36 = lVar36 + -1;
      sVar27 = *psVar39;
      psVar39 = psVar39 + 1;
      uVar51 = uVar51 + (int)sVar27 * (int)sVar27;
      uVar44 = uVar44 + (int)*psVar2 * (int)sVar27;
    } while (lVar36 != 0);
  }
LAB_00e79900:
  *puVar41 = uVar51;
  if (1 < (int)param_2) {
    lVar36 = (ulong)uVar28 - 1;
    psVar39 = (short *)(param_1 + local_80 * 2);
    puVar40 = puVar41;
    uVar28 = uVar51;
    do {
      psVar39 = psVar39 + -1;
      puVar40 = puVar40 + 1;
      lVar36 = lVar36 + -1;
      uVar28 = (uVar28 + (int)*psVar39 * (int)*psVar39) -
               (int)psVar39[(int)uVar30] * (int)psVar39[(int)uVar30];
      *puVar40 = uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU);
    } while (lVar36 != 0);
  }
  local_a0 = puVar41[lVar33];
  uVar28 = (uint)LZCOUNT(uVar51);
  local_a4 = 0x11 - uVar28;
  local_88 = uVar29;
  local_f8 = param_5;
  local_9c = param_4;
  local_a8 = param_7;
  local_ac = (int)uVar31 >> 1;
  local_fc = param_3;
  local_108 = lVar42;
  if (((uVar51 == 0) || (uVar44 == 0)) || (local_a0 == 0)) {
    local_8c = 0;
    sVar27 = (short)((int)uVar51 >> (local_a4 & 0x1f));
    sVar85 = (short)(uVar51 << (ulong)(uVar28 - 0x11 & 0x1f));
  }
  else {
    uVar31 = (uint)LZCOUNT(local_a0);
    sVar27 = (short)((int)uVar51 >> (local_a4 & 0x1f));
    sVar85 = (short)(uVar51 << (ulong)(uVar28 - 0x11 & 0x1f));
    sVar26 = sVar27;
    if (0x10 < uVar28) {
      sVar26 = sVar85;
    }
    uVar30 = (0x11 - uVar31) + local_a4;
    sVar86 = (short)((int)local_a0 >> (0x11 - uVar31 & 0x1f));
    if (0x10 < uVar31) {
      sVar86 = (short)(local_a0 << (ulong)(uVar31 - 0x11 & 0x1f));
    }
    uVar6 = (int)sVar86 * (int)sVar26;
    uVar31 = (int)uVar6 >> 0xe;
    if ((uVar30 & 1) != 0) {
      if ((int)uVar6 < 0x20000000) {
        uVar31 = uVar31 << 1;
        uVar30 = uVar30 - 1;
      }
      else {
        uVar31 = uVar6 >> 0xf;
        uVar30 = uVar30 + 1;
      }
    }
    sVar26 = celt_rsqrt_norm(uVar31);
    iVar45 = (int)((ulong)((long)sVar26 * (long)(int)uVar44) >> 0xf);
    local_8c = iVar45 >> (((int)uVar30 >> 1) - 1U & 0x1f);
    if ((int)uVar30 < 4) {
      local_8c = iVar45 << (ulong)(1U - ((int)uVar30 >> 1) & 0x1f);
    }
    if (0x7ffe < (int)local_8c) {
      local_8c = 0x7fff;
    }
  }
  iVar45 = (int)(short)local_8c;
  local_b8 = param_1 + (long)iVar43 * 2;
  if (0x10 < uVar28) {
    sVar27 = sVar85;
  }
  iVar47 = -(param_6 >> 1);
  local_110 = param_1;
  lVar42 = 2;
  iVar43 = 2;
  local_c0 = iVar45 * 0x599a >> 0xf;
  local_bc = (int)sVar27;
  iVar48 = local_ac * 3;
  iVar46 = (int)local_78 * 2;
  local_b0 = iVar47;
  local_e8 = iVar45 * 0x7333 >> 0xf;
  local_e4 = (local_a8 << 0x10) >> 0x11;
  local_c8 = iVar48;
  local_c4 = local_ac * 2;
  local_cc = iVar45 * 0x6ccd >> 0xf;
  local_e0 = param_1 + local_80 * 2;
  local_d8 = local_88 & 0xfffffff0;
  local_f0 = (undefined (*) [16])(local_e0 + 0x10);
  local_98 = local_78 & 0xffffffff;
  uVar29 = local_88;
  iVar45 = local_9c;
  iVar49 = local_ac;
  iVar50 = local_a8;
  do {
    iVar52 = (int)lVar42;
    uVar31 = iVar52 << 1;
    uVar28 = 0;
    if (uVar31 != 0) {
      uVar28 = (uint)(iVar46 + iVar52) / uVar31;
    }
    if ((int)uVar28 < iVar49) break;
    if (lVar42 == 2) {
      uVar31 = uVar28 + (uint)local_78;
      uVar30 = (uint)local_78;
      if ((int)uVar31 <= (int)local_80) {
        uVar30 = uVar31;
      }
      if (iVar45 < 2) goto LAB_00e79b3c;
LAB_00e79b60:
      lVar33 = local_b8 + (long)(int)uVar28 * -2;
      if ((uint)uVar29 < 0x10) {
        iVar56 = 0;
        iVar54 = 0;
        uVar38 = 0;
LAB_00e79c44:
        lVar36 = uVar29 - uVar38;
        psVar39 = (short *)(local_e0 + uVar38 * 2);
        do {
          lVar1 = uVar38 * 2;
          uVar38 = uVar38 + 1;
          psVar2 = psVar39 + -(long)(int)uVar30;
          lVar36 = lVar36 + -1;
          sVar27 = *psVar39;
          psVar39 = psVar39 + 1;
          iVar54 = iVar54 + (int)*(short *)(lVar33 + lVar1) * (int)sVar27;
          iVar56 = iVar56 + (int)*psVar2 * (int)sVar27;
        } while (lVar36 != 0);
      }
      else {
        lVar36 = 0;
        iVar66 = 0;
        iVar68 = 0;
        iVar70 = 0;
        iVar72 = 0;
        iVar74 = 0;
        iVar53 = 0;
        iVar55 = 0;
        iVar57 = 0;
        iVar59 = 0;
        iVar61 = 0;
        iVar63 = 0;
        iVar65 = 0;
        iVar67 = 0;
        iVar69 = 0;
        iVar71 = 0;
        iVar73 = 0;
        iVar54 = 0;
        iVar56 = 0;
        iVar75 = 0;
        iVar76 = 0;
        iVar58 = 0;
        iVar60 = 0;
        iVar78 = 0;
        iVar79 = 0;
        iVar62 = 0;
        iVar64 = 0;
        iVar81 = 0;
        iVar82 = 0;
        pauVar37 = local_f0;
        uVar38 = local_d8;
        auVar83 = ZEXT816(0);
        do {
          pauVar5 = (undefined (*) [16])(lVar33 + lVar36 * 2);
          pauVar4 = (undefined (*) [16])((long)pauVar37 + (long)(int)uVar30 * -2);
          auVar84 = pauVar37[-1];
          auVar88 = *pauVar37;
          lVar36 = lVar36 + 0x10;
          uVar38 = uVar38 - 0x10;
          pauVar37 = pauVar37 + 2;
          auVar100 = NEON_ext(auVar84,auVar84,8,1);
          auVar94 = *pauVar5;
          auVar99 = pauVar5[1];
          auVar101 = NEON_ext(auVar88,auVar88,8,1);
          iVar54 = iVar54 + (int)auVar94._0_2_ * (int)auVar84._0_2_;
          iVar56 = iVar56 + (int)auVar94._2_2_ * (int)auVar84._2_2_;
          iVar75 = iVar75 + (int)auVar94._4_2_ * (int)auVar84._4_2_;
          iVar76 = iVar76 + (int)auVar94._6_2_ * (int)auVar84._6_2_;
          auVar93 = NEON_ext(auVar94,auVar94,8,1);
          auVar94 = pauVar4[-1];
          auVar98 = *pauVar4;
          iVar62 = iVar62 + (int)auVar99._0_2_ * (int)auVar88._0_2_;
          iVar64 = iVar64 + (int)auVar99._2_2_ * (int)auVar88._2_2_;
          iVar81 = iVar81 + (int)auVar99._4_2_ * (int)auVar88._4_2_;
          iVar82 = iVar82 + (int)auVar99._6_2_ * (int)auVar88._6_2_;
          auVar99 = NEON_ext(auVar99,auVar99,8,1);
          iVar58 = iVar58 + (int)auVar93._0_2_ * (int)auVar100._0_2_;
          iVar60 = iVar60 + (int)auVar93._2_2_ * (int)auVar100._2_2_;
          iVar78 = iVar78 + (int)auVar93._4_2_ * (int)auVar100._4_2_;
          iVar79 = iVar79 + (int)auVar93._6_2_ * (int)auVar100._6_2_;
          iVar66 = iVar66 + (int)auVar94._0_2_ * (int)auVar84._0_2_;
          iVar68 = iVar68 + (int)auVar94._2_2_ * (int)auVar84._2_2_;
          iVar70 = iVar70 + (int)auVar94._4_2_ * (int)auVar84._4_2_;
          iVar72 = iVar72 + (int)auVar94._6_2_ * (int)auVar84._6_2_;
          auVar84 = NEON_ext(auVar94,auVar94,8,1);
          auVar93 = NEON_ext(auVar98,auVar98,8,1);
          auVar94._0_4_ = auVar83._0_4_ + (int)auVar99._0_2_ * (int)auVar101._0_2_;
          auVar94._4_4_ = auVar83._4_4_ + (int)auVar99._2_2_ * (int)auVar101._2_2_;
          auVar94._8_4_ = auVar83._8_4_ + (int)auVar99._4_2_ * (int)auVar101._4_2_;
          auVar94._12_4_ = auVar83._12_4_ + (int)auVar99._6_2_ * (int)auVar101._6_2_;
          iVar59 = iVar59 + (int)auVar98._0_2_ * (int)auVar88._0_2_;
          iVar61 = iVar61 + (int)auVar98._2_2_ * (int)auVar88._2_2_;
          iVar63 = iVar63 + (int)auVar98._4_2_ * (int)auVar88._4_2_;
          iVar65 = iVar65 + (int)auVar98._6_2_ * (int)auVar88._6_2_;
          iVar74 = iVar74 + (int)auVar84._0_2_ * (int)auVar100._0_2_;
          iVar53 = iVar53 + (int)auVar84._2_2_ * (int)auVar100._2_2_;
          iVar55 = iVar55 + (int)auVar84._4_2_ * (int)auVar100._4_2_;
          iVar57 = iVar57 + (int)auVar84._6_2_ * (int)auVar100._6_2_;
          iVar67 = iVar67 + (int)auVar93._0_2_ * (int)auVar101._0_2_;
          iVar69 = iVar69 + (int)auVar93._2_2_ * (int)auVar101._2_2_;
          iVar71 = iVar71 + (int)auVar93._4_2_ * (int)auVar101._4_2_;
          iVar73 = iVar73 + (int)auVar93._6_2_ * (int)auVar101._6_2_;
          auVar83 = auVar94;
        } while (uVar38 != 0);
        iVar54 = iVar62 + iVar54 + auVar94._0_4_ + iVar58 + iVar64 + iVar56 + auVar94._4_4_ + iVar60
                 + iVar81 + iVar75 + auVar94._8_4_ + iVar78 +
                   iVar82 + iVar76 + auVar94._12_4_ + iVar79;
        iVar56 = iVar59 + iVar66 + iVar67 + iVar74 + iVar61 + iVar68 + iVar69 + iVar53 +
                 iVar63 + iVar70 + iVar71 + iVar55 + iVar65 + iVar72 + iVar73 + iVar57;
        uVar38 = local_d8;
        if (local_d8 != uVar29) goto LAB_00e79c44;
      }
      uVar31 = iVar56 + iVar54;
    }
    else {
      uVar30 = 0;
      if (uVar31 != 0) {
        uVar30 = (uint)(iVar52 + iVar46 * *(int *)(&UNK_00568d84 + lVar42 * 4)) / uVar31;
      }
      if (1 < iVar45) goto LAB_00e79b60;
LAB_00e79b3c:
      uVar31 = 0;
    }
    uVar32 = 0;
    uVar6 = (int)(puVar41[(int)uVar30] + puVar41[(int)uVar28]) >> 1;
    if ((uVar51 != 0) && (1 < uVar31 && 1 < puVar41[(int)uVar30] + puVar41[(int)uVar28])) {
      uVar30 = (uint)LZCOUNT(uVar6);
      sVar27 = (short)((int)uVar6 >> (0x11 - uVar30 & 0x1f));
      if (0x10 < uVar30) {
        sVar27 = (short)(uVar6 << (ulong)(uVar30 - 0x11 & 0x1f));
      }
      uVar7 = sVar27 * local_bc;
      uVar32 = (int)uVar7 >> 0xe;
      uVar30 = (0x11 - uVar30) + local_a4;
      if ((uVar30 & 1) != 0) {
        if ((int)uVar7 < 0x20000000) {
          uVar32 = uVar32 << 1;
          uVar30 = uVar30 - 1;
        }
        else {
          uVar32 = uVar7 >> 0xf;
          uVar30 = uVar30 + 1;
        }
      }
      sVar27 = celt_rsqrt_norm(uVar32);
      iVar45 = (int)((ulong)((long)sVar27 * (long)((int)uVar31 >> 1)) >> 0xf);
      uVar32 = iVar45 >> (((int)uVar30 >> 1) - 1U & 0x1f);
      if ((int)uVar30 < 4) {
        uVar32 = iVar45 << (ulong)(1U - ((int)uVar30 >> 1) & 0x1f);
      }
      uVar29 = local_88;
      iVar45 = local_9c;
      iVar49 = local_ac;
      iVar50 = local_a8;
      iVar47 = local_b0;
      iVar48 = local_c8;
      if (0x7ffe < (int)uVar32) {
        uVar32 = 0x7fff;
      }
    }
    uVar30 = uVar28 + iVar47;
    uVar7 = -uVar30;
    if (-1 < (int)uVar30) {
      uVar7 = uVar30;
    }
    sVar27 = (short)iVar50;
    if (uVar7 < 2) {
LAB_00e79d8c:
      iVar52 = (int)sVar27;
      if ((int)uVar28 < iVar48) goto LAB_00e79d98;
LAB_00e79dbc:
      iVar54 = local_c0 - iVar52;
      if (iVar54 < 0x2667) {
        iVar54 = 0x2666;
      }
      if ((int)uVar28 < local_c4) {
        iVar52 = local_e8 - iVar52;
        sVar27 = 0x4000;
        bVar24 = SBORROW4(iVar52,0x4000);
        iVar54 = iVar52 + -0x4000;
        bVar25 = iVar52 == 0x4000;
        goto LAB_00e79dfc;
      }
      sVar85 = (short)iVar54;
    }
    else {
      if (uVar7 == 2) {
        sVar27 = (short)local_e4;
        if ((int)local_78 <= iVar43 * iVar52 * 5) {
          sVar27 = 0;
        }
        goto LAB_00e79d8c;
      }
      iVar52 = 0;
      if (iVar48 <= (int)uVar28) goto LAB_00e79dbc;
LAB_00e79d98:
      iVar52 = local_cc - iVar52;
      sVar27 = 0x3333;
      bVar24 = SBORROW4(iVar52,0x3333);
      iVar54 = iVar52 + -0x3333;
      bVar25 = iVar52 == 0x3333;
LAB_00e79dfc:
      sVar85 = (short)iVar52;
      if (bVar25 || iVar54 < 0 != bVar24) {
        sVar85 = sVar27;
      }
    }
    if (sVar85 < (short)uVar32) {
      local_98 = (ulong)uVar28;
      local_8c = uVar32;
      local_a0 = uVar6;
      uVar44 = (int)uVar31 >> 1;
    }
    lVar42 = lVar42 + 1;
    iVar43 = iVar43 + 1;
  } while (lVar42 != 0x10);
  uVar44 = uVar44 & ((int)uVar44 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar44 < (int)local_a0) {
    frac_div32(uVar44,local_a0 + 1);
    uVar31 = extraout_var & 0xffff;
    uVar29 = local_88;
    iVar45 = local_9c;
  }
  else {
    uVar31 = 0x7fff;
  }
  iVar43 = (int)local_98;
  if (iVar45 < 2) {
    iVar45 = 0;
    iVar46 = 0;
    iVar47 = 0;
    goto LAB_00e7a0d0;
  }
  uVar28 = (uint)uVar29;
  if (uVar28 < 0x10) {
    uVar35 = 0;
    iVar45 = 0;
LAB_00e79f20:
    lVar42 = uVar29 - uVar35;
    psVar39 = (short *)(local_110 + (uVar35 + local_80) * 2);
    do {
      psVar2 = psVar39 + -(long)(iVar43 + -1);
      lVar42 = lVar42 + -1;
      sVar27 = *psVar39;
      psVar39 = psVar39 + 1;
      iVar45 = iVar45 + (int)*psVar2 * (int)sVar27;
    } while (lVar42 != 0);
  }
  else {
    uVar35 = uVar29 & 0xfffffff0;
    iVar45 = 0;
    iVar46 = 0;
    iVar47 = 0;
    iVar48 = 0;
    iVar49 = 0;
    iVar50 = 0;
    iVar52 = 0;
    iVar54 = 0;
    iVar56 = 0;
    iVar58 = 0;
    iVar60 = 0;
    iVar62 = 0;
    pauVar34 = (undefined (*) [12])(local_110 + local_80 * 2 + 0x10);
    iVar64 = 0;
    iVar66 = 0;
    iVar68 = 0;
    iVar70 = 0;
    uVar38 = uVar35;
    do {
      pauVar5 = (undefined (*) [16])((long)pauVar34 + (long)(iVar43 + -1) * -2);
      uVar38 = uVar38 - 0x10;
      pauVar3 = (undefined (*) [12])(pauVar34[-2] + 8);
      uVar77 = (undefined4)((ulong)*(undefined8 *)(pauVar34[-1] + 4) >> 0x20);
      uVar11 = *(undefined8 *)*pauVar3;
      uVar80 = (undefined4)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
      uVar16 = *(undefined8 *)*pauVar34;
      auVar23 = *pauVar34;
      auVar22 = *pauVar34;
      pauVar34 = (undefined (*) [12])(pauVar34[2] + 8);
      auVar83._12_4_ = uVar77;
      auVar83._0_12_ = *pauVar3;
      auVar88._12_4_ = uVar77;
      auVar88._0_12_ = *pauVar3;
      auVar84 = NEON_ext(auVar83,auVar88,8,1);
      pauVar37 = pauVar5 + -1;
      uVar77 = (undefined4)((ulong)*(undefined8 *)(pauVar5[-1] + 8) >> 0x20);
      uVar21 = *(undefined8 *)*pauVar37;
      auVar83 = *pauVar5;
      auVar99._12_4_ = uVar80;
      auVar99._0_12_ = auVar22;
      auVar98._12_4_ = uVar80;
      auVar98._0_12_ = auVar23;
      auVar88 = NEON_ext(auVar99,auVar98,8,1);
      auVar93._12_4_ = uVar77;
      auVar93._0_12_ = *(undefined (*) [12])*pauVar37;
      auVar100._12_4_ = uVar77;
      auVar100._0_12_ = *(undefined (*) [12])*pauVar37;
      auVar94 = NEON_ext(auVar93,auVar100,8,1);
      iVar45 = iVar45 + (int)(short)uVar21 * (int)(short)uVar11;
      iVar46 = iVar46 + (int)(short)((ulong)uVar21 >> 0x10) * (int)(short)((ulong)uVar11 >> 0x10);
      iVar47 = iVar47 + (int)(short)((ulong)uVar21 >> 0x20) * (int)(short)((ulong)uVar11 >> 0x20);
      iVar48 = iVar48 + (int)(short)((ulong)uVar21 >> 0x30) * (int)(short)((ulong)uVar11 >> 0x30);
      auVar99 = NEON_ext(auVar83,auVar83,8,1);
      iVar56 = iVar56 + (int)auVar83._0_2_ * (int)(short)uVar16;
      iVar58 = iVar58 + (int)auVar83._2_2_ * (int)(short)((ulong)uVar16 >> 0x10);
      iVar60 = iVar60 + (int)auVar83._4_2_ * (int)(short)((ulong)uVar16 >> 0x20);
      iVar62 = iVar62 + (int)auVar83._6_2_ * (int)(short)((ulong)uVar16 >> 0x30);
      iVar49 = iVar49 + (int)auVar94._0_2_ * (int)auVar84._0_2_;
      iVar50 = iVar50 + (int)auVar94._2_2_ * (int)auVar84._2_2_;
      iVar52 = iVar52 + (int)auVar94._4_2_ * (int)auVar84._4_2_;
      iVar54 = iVar54 + (int)auVar94._6_2_ * (int)auVar84._6_2_;
      iVar64 = iVar64 + (int)auVar99._0_2_ * (int)auVar88._0_2_;
      iVar66 = iVar66 + (int)auVar99._2_2_ * (int)auVar88._2_2_;
      iVar68 = iVar68 + (int)auVar99._4_2_ * (int)auVar88._4_2_;
      iVar70 = iVar70 + (int)auVar99._6_2_ * (int)auVar88._6_2_;
    } while (uVar38 != 0);
    iVar45 = iVar56 + iVar45 + iVar64 + iVar49 + iVar58 + iVar46 + iVar66 + iVar50 +
             iVar60 + iVar47 + iVar68 + iVar52 + iVar62 + iVar48 + iVar70 + iVar54;
    if (uVar35 != uVar29) goto LAB_00e79f20;
  }
  if (uVar28 < 0x10) {
    uVar35 = 0;
    iVar46 = 0;
LAB_00e79fe0:
    lVar42 = uVar29 - uVar35;
    psVar39 = (short *)(local_110 + (uVar35 + local_80) * 2);
    do {
      psVar2 = psVar39 + -(long)iVar43;
      lVar42 = lVar42 + -1;
      sVar27 = *psVar39;
      psVar39 = psVar39 + 1;
      iVar46 = iVar46 + (int)*psVar2 * (int)sVar27;
    } while (lVar42 != 0);
  }
  else {
    uVar35 = uVar29 & 0xfffffff0;
    iVar46 = 0;
    iVar47 = 0;
    iVar48 = 0;
    iVar49 = 0;
    iVar50 = 0;
    iVar52 = 0;
    iVar54 = 0;
    iVar56 = 0;
    iVar58 = 0;
    iVar60 = 0;
    iVar62 = 0;
    iVar64 = 0;
    pauVar34 = (undefined (*) [12])(local_110 + local_80 * 2 + 0x10);
    iVar66 = 0;
    iVar68 = 0;
    iVar70 = 0;
    iVar72 = 0;
    uVar38 = uVar35;
    do {
      pauVar5 = (undefined (*) [16])((long)pauVar34 + (long)iVar43 * -2);
      uVar38 = uVar38 - 0x10;
      pauVar3 = (undefined (*) [12])(pauVar34[-2] + 8);
      uVar77 = (undefined4)((ulong)*(undefined8 *)(pauVar34[-1] + 4) >> 0x20);
      uVar11 = *(undefined8 *)*pauVar3;
      uVar80 = (undefined4)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
      uVar16 = *(undefined8 *)*pauVar34;
      auVar23 = *pauVar34;
      auVar22 = *pauVar34;
      pauVar34 = (undefined (*) [12])(pauVar34[2] + 8);
      auVar101._12_4_ = uVar77;
      auVar101._0_12_ = *pauVar3;
      auVar10._12_4_ = uVar77;
      auVar10._0_12_ = *pauVar3;
      auVar84 = NEON_ext(auVar101,auVar10,8,1);
      pauVar37 = pauVar5 + -1;
      uVar77 = (undefined4)((ulong)*(undefined8 *)(pauVar5[-1] + 8) >> 0x20);
      uVar21 = *(undefined8 *)*pauVar37;
      auVar83 = *pauVar5;
      auVar14._12_4_ = uVar80;
      auVar14._0_12_ = auVar22;
      auVar15._12_4_ = uVar80;
      auVar15._0_12_ = auVar23;
      auVar88 = NEON_ext(auVar14,auVar15,8,1);
      auVar19._12_4_ = uVar77;
      auVar19._0_12_ = *(undefined (*) [12])*pauVar37;
      auVar20._12_4_ = uVar77;
      auVar20._0_12_ = *(undefined (*) [12])*pauVar37;
      auVar94 = NEON_ext(auVar19,auVar20,8,1);
      iVar46 = iVar46 + (int)(short)uVar21 * (int)(short)uVar11;
      iVar47 = iVar47 + (int)(short)((ulong)uVar21 >> 0x10) * (int)(short)((ulong)uVar11 >> 0x10);
      iVar48 = iVar48 + (int)(short)((ulong)uVar21 >> 0x20) * (int)(short)((ulong)uVar11 >> 0x20);
      iVar49 = iVar49 + (int)(short)((ulong)uVar21 >> 0x30) * (int)(short)((ulong)uVar11 >> 0x30);
      auVar99 = NEON_ext(auVar83,auVar83,8,1);
      iVar58 = iVar58 + (int)auVar83._0_2_ * (int)(short)uVar16;
      iVar60 = iVar60 + (int)auVar83._2_2_ * (int)(short)((ulong)uVar16 >> 0x10);
      iVar62 = iVar62 + (int)auVar83._4_2_ * (int)(short)((ulong)uVar16 >> 0x20);
      iVar64 = iVar64 + (int)auVar83._6_2_ * (int)(short)((ulong)uVar16 >> 0x30);
      iVar50 = iVar50 + (int)auVar94._0_2_ * (int)auVar84._0_2_;
      iVar52 = iVar52 + (int)auVar94._2_2_ * (int)auVar84._2_2_;
      iVar54 = iVar54 + (int)auVar94._4_2_ * (int)auVar84._4_2_;
      iVar56 = iVar56 + (int)auVar94._6_2_ * (int)auVar84._6_2_;
      iVar66 = iVar66 + (int)auVar99._0_2_ * (int)auVar88._0_2_;
      iVar68 = iVar68 + (int)auVar99._2_2_ * (int)auVar88._2_2_;
      iVar70 = iVar70 + (int)auVar99._4_2_ * (int)auVar88._4_2_;
      iVar72 = iVar72 + (int)auVar99._6_2_ * (int)auVar88._6_2_;
    } while (uVar38 != 0);
    iVar46 = iVar58 + iVar46 + iVar66 + iVar50 + iVar60 + iVar47 + iVar68 + iVar52 +
             iVar62 + iVar48 + iVar70 + iVar54 + iVar64 + iVar49 + iVar72 + iVar56;
    if (uVar35 != uVar29) goto LAB_00e79fe0;
  }
  if (uVar28 < 0x10) {
    uVar35 = 0;
    iVar47 = 0;
  }
  else {
    uVar35 = uVar29 & 0xfffffff0;
    iVar47 = 0;
    iVar48 = 0;
    iVar49 = 0;
    iVar50 = 0;
    iVar52 = 0;
    iVar54 = 0;
    iVar56 = 0;
    iVar58 = 0;
    iVar60 = 0;
    iVar62 = 0;
    iVar64 = 0;
    iVar66 = 0;
    pauVar34 = (undefined (*) [12])(local_110 + local_80 * 2 + 0x10);
    iVar68 = 0;
    iVar70 = 0;
    iVar72 = 0;
    iVar74 = 0;
    uVar38 = uVar35;
    do {
      pauVar5 = (undefined (*) [16])((long)pauVar34 + (long)(iVar43 + 1) * -2);
      uVar38 = uVar38 - 0x10;
      pauVar3 = (undefined (*) [12])(pauVar34[-2] + 8);
      uVar77 = (undefined4)((ulong)*(undefined8 *)(pauVar34[-1] + 4) >> 0x20);
      uVar11 = *(undefined8 *)*pauVar3;
      uVar80 = (undefined4)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
      uVar16 = *(undefined8 *)*pauVar34;
      auVar23 = *pauVar34;
      auVar22 = *pauVar34;
      pauVar34 = (undefined (*) [12])(pauVar34[2] + 8);
      auVar8._12_4_ = uVar77;
      auVar8._0_12_ = *pauVar3;
      auVar9._12_4_ = uVar77;
      auVar9._0_12_ = *pauVar3;
      auVar84 = NEON_ext(auVar8,auVar9,8,1);
      pauVar37 = pauVar5 + -1;
      uVar77 = (undefined4)((ulong)*(undefined8 *)(pauVar5[-1] + 8) >> 0x20);
      uVar21 = *(undefined8 *)*pauVar37;
      auVar83 = *pauVar5;
      auVar12._12_4_ = uVar80;
      auVar12._0_12_ = auVar22;
      auVar13._12_4_ = uVar80;
      auVar13._0_12_ = auVar23;
      auVar88 = NEON_ext(auVar12,auVar13,8,1);
      auVar17._12_4_ = uVar77;
      auVar17._0_12_ = *(undefined (*) [12])*pauVar37;
      auVar18._12_4_ = uVar77;
      auVar18._0_12_ = *(undefined (*) [12])*pauVar37;
      auVar94 = NEON_ext(auVar17,auVar18,8,1);
      iVar47 = iVar47 + (int)(short)uVar21 * (int)(short)uVar11;
      iVar48 = iVar48 + (int)(short)((ulong)uVar21 >> 0x10) * (int)(short)((ulong)uVar11 >> 0x10);
      iVar49 = iVar49 + (int)(short)((ulong)uVar21 >> 0x20) * (int)(short)((ulong)uVar11 >> 0x20);
      iVar50 = iVar50 + (int)(short)((ulong)uVar21 >> 0x30) * (int)(short)((ulong)uVar11 >> 0x30);
      auVar99 = NEON_ext(auVar83,auVar83,8,1);
      iVar60 = iVar60 + (int)auVar83._0_2_ * (int)(short)uVar16;
      iVar62 = iVar62 + (int)auVar83._2_2_ * (int)(short)((ulong)uVar16 >> 0x10);
      iVar64 = iVar64 + (int)auVar83._4_2_ * (int)(short)((ulong)uVar16 >> 0x20);
      iVar66 = iVar66 + (int)auVar83._6_2_ * (int)(short)((ulong)uVar16 >> 0x30);
      iVar52 = iVar52 + (int)auVar94._0_2_ * (int)auVar84._0_2_;
      iVar54 = iVar54 + (int)auVar94._2_2_ * (int)auVar84._2_2_;
      iVar56 = iVar56 + (int)auVar94._4_2_ * (int)auVar84._4_2_;
      iVar58 = iVar58 + (int)auVar94._6_2_ * (int)auVar84._6_2_;
      iVar68 = iVar68 + (int)auVar99._0_2_ * (int)auVar88._0_2_;
      iVar70 = iVar70 + (int)auVar99._2_2_ * (int)auVar88._2_2_;
      iVar72 = iVar72 + (int)auVar99._4_2_ * (int)auVar88._4_2_;
      iVar74 = iVar74 + (int)auVar99._6_2_ * (int)auVar88._6_2_;
    } while (uVar38 != 0);
    iVar47 = iVar60 + iVar47 + iVar68 + iVar52 + iVar62 + iVar48 + iVar70 + iVar54 +
             iVar64 + iVar49 + iVar72 + iVar56 + iVar66 + iVar50 + iVar74 + iVar58;
    if (uVar35 == uVar29) goto LAB_00e7a0d0;
  }
  lVar42 = uVar29 - uVar35;
  psVar39 = (short *)(local_110 + (uVar35 + local_80) * 2);
  do {
    psVar2 = psVar39 + -(long)(iVar43 + 1);
    lVar42 = lVar42 + -1;
    sVar27 = *psVar39;
    psVar39 = psVar39 + 1;
    iVar47 = iVar47 + (int)*psVar2 * (int)sVar27;
  } while (lVar42 != 0);
LAB_00e7a0d0:
  if ((int)((ulong)((long)(iVar46 - iVar45) * 0x599a) >> 0xf) < iVar47 - iVar45) {
    iVar45 = 1;
  }
  else {
    iVar45 = -(uint)((int)((ulong)((long)(iVar46 - iVar47) * 0x599a) >> 0xf) < iVar45 - iVar47);
  }
  uVar28 = iVar45 + iVar43 * 2;
  uVar30 = local_8c;
  if ((short)uVar31 <= (short)local_8c) {
    uVar30 = uVar31;
  }
  uVar31 = local_fc;
  if ((int)local_fc <= (int)uVar28) {
    uVar31 = uVar28;
  }
  *local_f8 = uVar31;
  if (*(long *)(local_108 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar30);
}


