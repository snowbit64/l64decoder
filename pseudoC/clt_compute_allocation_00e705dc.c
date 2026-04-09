// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clt_compute_allocation
// Entry Point: 00e705dc
// Size: 4496 bytes
// Signature: undefined clt_compute_allocation(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined4 param_13, undefined4 param_14, undefined8 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong clt_compute_allocation
                (long param_1,ulong param_2,uint param_3,long param_4,long param_5,int param_6,
                int *param_7,int *param_8,uint param_9,int *param_10,long param_11,long param_12,
                long param_13_00,int param_13,uint param_14,undefined8 param_15,int param_16,
                int param_17,int param_18)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  unkbyte10 Var12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined (*pauVar24) [16];
  long lVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  uint *puVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  int *piVar34;
  ulong *puVar35;
  long lVar36;
  ulong uVar37;
  int iVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  short *psVar42;
  unkbyte10 *pVar43;
  long lVar44;
  uint uVar45;
  int iVar46;
  long lVar47;
  int iVar48;
  int iVar49;
  long lVar50;
  long lVar51;
  short sVar52;
  undefined auVar53 [16];
  short sVar54;
  short sVar55;
  undefined2 uVar56;
  short sVar57;
  undefined2 uVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  byte bVar64;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar70 [13];
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined auVar75 [16];
  undefined auVar76 [12];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [12];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [12];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [12];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar95 [16];
  int iStack_134;
  undefined8 uStack_130;
  int local_128;
  int local_124;
  long local_120;
  uint local_114;
  int *local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  int local_ec;
  int *local_e8;
  int local_dc;
  long local_d8;
  long local_d0;
  int *local_c8;
  int local_bc;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  int local_74;
  long local_70;
  undefined auVar80 [16];
  undefined auVar86 [16];
  undefined auVar96 [16];
  
  local_c8 = param_8;
  local_e8 = param_7;
  local_a8 = param_5;
  local_120 = tpidr_el0;
  param_9 = param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU);
  local_70 = *(long *)(local_120 + 0x28);
  uVar27 = (uint)(7 < param_9);
  local_74 = param_9 + uVar27 * -8;
  iVar28 = *(int *)(param_1 + 8);
  lVar36 = (long)iVar28;
  local_88 = param_2;
  local_80 = param_1;
  local_128 = uVar27 * 8;
  iVar16 = (int)param_2;
  if (param_13 == 2) {
    bVar64 = (&DAT_00567906)[(long)(int)param_3 - (long)iVar16];
    uVar27 = (uint)bVar64;
    iVar6 = local_74 - (uint)bVar64;
    if (local_74 < (int)(uint)bVar64) goto LAB_00e70664;
    uVar23 = (uint)(7 < iVar6);
    local_124 = uVar23 * 8;
    local_74 = iVar6 + uVar23 * -8;
  }
  else {
LAB_00e70664:
    local_124 = 0;
    uVar27 = 0;
  }
  local_b0 = param_15;
  uVar31 = lVar36 * 4 + 0xfU & 0xfffffffffffffff0;
  local_a0 = param_11;
  local_110 = param_10;
  lVar44 = -uVar31;
  lVar29 = (lVar44 + -0x130) - uVar31;
  lVar33 = (long)&uStack_130 + (lVar29 - uVar31) + 0x130;
  lVar39 = lVar33 - uVar31;
  iVar6 = param_13 * 8;
  local_108 = param_13_00;
  lStack_100 = param_12;
  if (iVar16 < (int)param_3) {
    lVar47 = (long)iVar16;
    iVar49 = (param_6 - param_14) + -5;
    lVar32 = *(long *)(param_1 + 0x18);
    uVar23 = param_14 + 3;
    sVar52 = *(short *)(lVar32 + (long)iVar16 * 2);
    uVar31 = (int)param_3 - lVar47;
    lVar41 = lVar47;
    if (7 < uVar31) {
      auVar77._2_2_ = sVar52;
      auVar77._0_2_ = sVar52;
      auVar77._4_2_ = sVar52;
      auVar77._6_2_ = sVar52;
      auVar77._8_2_ = sVar52;
      auVar77._10_2_ = sVar52;
      auVar77._12_2_ = sVar52;
      auVar77._14_2_ = sVar52;
      iVar46 = iVar49 * param_13;
      uVar18 = uVar31 & 0xfffffffffffffff8;
      lVar41 = uVar18 + lVar47;
      uVar71 = CONCAT44(iVar16 + 5,iVar16 + 4);
      uVar72 = CONCAT44(iVar16 + 7,iVar16 + 6);
      uVar73 = CONCAT44(iVar16 + SUB164(_DAT_004c51c0,4),iVar16 + SUB164(_DAT_004c51c0,0));
      uVar74 = CONCAT44(iVar16 + SUB164(_DAT_004c51c0,0xc),iVar16 + SUB164(_DAT_004c51c0,8));
      auVar75 = ZEXT816(0x3000300030003);
      uVar56 = (undefined2)param_14;
      uVar58 = (undefined2)(param_14 >> 0x10);
      auVar66._4_4_ = iVar6;
      auVar66._0_4_ = iVar6;
      auVar66._8_4_ = iVar6;
      auVar66._12_4_ = iVar6;
      puVar22 = (undefined8 *)(lVar33 + lVar47 * 4);
      piVar19 = (int *)(lVar39 + lVar47 * 4);
      pauVar24 = (undefined (*) [16])(lVar32 + lVar47 * 2 + 2);
      uVar37 = uVar18;
      do {
        uVar37 = uVar37 - 8;
        auVar65 = *pauVar24;
        iVar17 = CONCAT13(~(byte)((ulong)uVar73 >> 0x18),
                          CONCAT12(~(byte)((ulong)uVar73 >> 0x10),
                                   CONCAT11(~(byte)((ulong)uVar73 >> 8),~(byte)uVar73)));
        auVar79._0_8_ =
             CONCAT17(~(byte)((ulong)uVar73 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar73 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar73 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar73 >> 0x20),iVar17))));
        auVar79[8] = ~(byte)uVar74;
        auVar79[9] = ~(byte)((ulong)uVar74 >> 8);
        auVar79[10] = ~(byte)((ulong)uVar74 >> 0x10);
        auVar79[11] = ~(byte)((ulong)uVar74 >> 0x18);
        auVar80[12] = ~(byte)((ulong)uVar74 >> 0x20);
        auVar80._0_12_ = auVar79;
        auVar80[13] = ~(byte)((ulong)uVar74 >> 0x28);
        auVar80[14] = ~(byte)((ulong)uVar74 >> 0x30);
        auVar80[15] = ~(byte)((ulong)uVar74 >> 0x38);
        iVar38 = CONCAT13(~(byte)((ulong)uVar71 >> 0x18),
                          CONCAT12(~(byte)((ulong)uVar71 >> 0x10),
                                   CONCAT11(~(byte)((ulong)uVar71 >> 8),~(byte)uVar71)));
        auVar85._0_8_ =
             CONCAT17(~(byte)((ulong)uVar71 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar71 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar71 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar71 >> 0x20),iVar38))));
        auVar85[8] = ~(byte)uVar72;
        auVar85[9] = ~(byte)((ulong)uVar72 >> 8);
        auVar85[10] = ~(byte)((ulong)uVar72 >> 0x10);
        auVar85[11] = ~(byte)((ulong)uVar72 >> 0x18);
        auVar86[12] = ~(byte)((ulong)uVar72 >> 0x20);
        auVar86._0_12_ = auVar85;
        auVar86[13] = ~(byte)((ulong)uVar72 >> 0x28);
        auVar86[14] = ~(byte)((ulong)uVar72 >> 0x30);
        auVar86[15] = ~(byte)((ulong)uVar72 >> 0x38);
        auVar77 = NEON_ext(auVar77,auVar65,0xe,1);
        auVar82 = NEON_ext(auVar65,auVar65,8,1);
        sVar52 = auVar75._0_2_;
        sVar63 = auVar75._2_2_;
        sVar54 = auVar75._4_2_;
        sVar55 = auVar75._6_2_;
        auVar93 = NEON_ext(auVar77,auVar77,8,1);
        auVar89._0_4_ = (int)auVar65._0_2_ * (int)sVar52 - (int)auVar77._0_2_ * (int)sVar52;
        auVar89._4_4_ = (int)auVar65._2_2_ * (int)sVar63 - (int)auVar77._2_2_ * (int)sVar63;
        auVar89._8_4_ = (int)auVar65._4_2_ * (int)sVar54 - (int)auVar77._4_2_ * (int)sVar54;
        auVar89._12_4_ = (int)auVar65._6_2_ * (int)sVar55 - (int)auVar77._6_2_ * (int)sVar55;
        auVar83._0_4_ = (int)auVar82._0_2_ * (int)sVar52 - (int)auVar93._0_2_ * (int)sVar52;
        auVar83._4_4_ = (int)auVar82._2_2_ * (int)sVar63 - (int)auVar93._2_2_ * (int)sVar63;
        auVar83._8_4_ = (int)auVar82._4_2_ * (int)sVar54 - (int)auVar93._4_2_ * (int)sVar54;
        auVar83._12_4_ = (int)auVar82._6_2_ * (int)sVar55 - (int)auVar93._6_2_ * (int)sVar55;
        auVar94._0_4_ = (int)auVar65._0_2_ - (int)auVar77._0_2_;
        auVar94._4_4_ = (int)auVar65._2_2_ - (int)auVar77._2_2_;
        auVar94._8_4_ = (int)auVar65._4_2_ - (int)auVar77._4_2_;
        auVar94._12_4_ = (int)auVar65._6_2_ - (int)auVar77._6_2_;
        sVar52 = auVar65._14_2_;
        auVar78._0_4_ = (int)auVar65._8_2_ - (int)auVar77._8_2_;
        auVar78._4_4_ = (int)auVar65._10_2_ - (int)auVar77._10_2_;
        auVar78._8_4_ = (int)auVar65._12_2_ - (int)auVar77._12_2_;
        auVar78._12_4_ = (int)sVar52 - (int)auVar77._14_2_;
        auVar82._4_2_ = uVar56;
        auVar82._0_4_ = param_14;
        auVar82._6_2_ = uVar58;
        auVar82._8_2_ = uVar56;
        auVar82._10_2_ = uVar58;
        auVar82._12_2_ = uVar56;
        auVar82._14_2_ = uVar58;
        auVar90 = NEON_ushl(auVar89,auVar82,4);
        auVar93._4_2_ = uVar56;
        auVar93._0_4_ = param_14;
        auVar93._6_2_ = uVar58;
        auVar93._8_2_ = uVar56;
        auVar93._10_2_ = uVar58;
        auVar93._12_2_ = uVar56;
        auVar93._14_2_ = uVar58;
        auVar93 = NEON_ushl(auVar83,auVar93,4);
        auVar87._0_4_ = iVar46 * (param_3 + iVar38) * auVar78._0_4_;
        auVar87._4_4_ = iVar46 * (param_3 + (int)((ulong)auVar85._0_8_ >> 0x20)) * auVar78._4_4_;
        auVar87._8_4_ = iVar46 * (param_3 + auVar85._8_4_) * auVar78._8_4_;
        auVar87._12_4_ = iVar46 * (param_3 + auVar86._12_4_) * auVar78._12_4_;
        auVar88._4_2_ = uVar56;
        auVar88._0_4_ = param_14;
        auVar88._6_2_ = uVar58;
        auVar88._8_2_ = uVar56;
        auVar88._10_2_ = uVar58;
        auVar88._12_2_ = uVar56;
        auVar88._14_2_ = uVar58;
        auVar77 = NEON_ushl(auVar78,auVar88,4);
        auVar81._0_4_ = iVar46 * (param_3 + iVar17) * auVar94._0_4_;
        auVar81._4_4_ = iVar46 * (param_3 + (int)((ulong)auVar79._0_8_ >> 0x20)) * auVar94._4_4_;
        auVar81._8_4_ = iVar46 * (param_3 + auVar79._8_4_) * auVar94._8_4_;
        auVar81._12_4_ = iVar46 * (param_3 + auVar80._12_4_) * auVar94._12_4_;
        auVar95._4_2_ = uVar56;
        auVar95._0_4_ = param_14;
        auVar95._6_2_ = uVar58;
        auVar95._8_2_ = uVar56;
        auVar95._10_2_ = uVar58;
        auVar95._12_2_ = uVar56;
        auVar95._14_2_ = uVar58;
        auVar95 = NEON_ushl(auVar94,auVar95,4);
        auVar10._4_4_ = uVar23;
        auVar10._0_4_ = uVar23;
        auVar10._8_4_ = uVar23;
        auVar10._12_4_ = uVar23;
        auVar88 = NEON_ushl(auVar87,auVar10,4);
        auVar11._4_4_ = uVar23;
        auVar11._0_4_ = uVar23;
        auVar11._8_4_ = uVar23;
        auVar11._12_4_ = uVar23;
        auVar82 = NEON_ushl(auVar81,auVar11,4);
        auVar8._8_4_ = 1;
        auVar8._0_8_ = 0x100000001;
        auVar8._12_4_ = 1;
        auVar77 = NEON_cmeq(auVar77,auVar8,4);
        auVar9._8_4_ = 1;
        auVar9._0_8_ = 0x100000001;
        auVar9._12_4_ = 1;
        auVar95 = NEON_cmeq(auVar95,auVar9,4);
        auVar91._0_4_ = (auVar90._0_4_ << 3) >> 4;
        auVar91._4_4_ = (auVar90._4_4_ << 3) >> 4;
        auVar91._8_4_ = (auVar90._8_4_ << 3) >> 4;
        auVar91._12_4_ = (auVar90._12_4_ << 3) >> 4;
        auVar84._0_4_ = (auVar93._0_4_ << 3) >> 4;
        auVar84._4_4_ = (auVar93._4_4_ << 3) >> 4;
        auVar84._8_4_ = (auVar93._8_4_ << 3) >> 4;
        auVar84._12_4_ = (auVar93._12_4_ << 3) >> 4;
        bVar64 = (byte)iVar6;
        bVar67 = (byte)((uint)iVar6 >> 8);
        bVar68 = (byte)((uint)iVar6 >> 0x10);
        bVar69 = (byte)((uint)iVar6 >> 0x18);
        iVar17 = CONCAT13(bVar69 & auVar77[3],
                          CONCAT12(bVar68 & auVar77[2],
                                   CONCAT11(bVar67 & auVar77[1],bVar64 & auVar77[0])));
        auVar76._0_8_ =
             CONCAT17(bVar69 & auVar77[7],
                      CONCAT16(bVar68 & auVar77[6],
                               CONCAT15(bVar67 & auVar77[5],CONCAT14(bVar64 & auVar77[4],iVar17))));
        auVar76[8] = bVar64 & auVar77[8];
        auVar76[9] = bVar67 & auVar77[9];
        auVar76[10] = bVar68 & auVar77[10];
        auVar76[11] = bVar69 & auVar77[11];
        auVar90[12] = bVar64 & auVar77[12];
        auVar90._0_12_ = auVar76;
        auVar90[13] = bVar67 & auVar77[13];
        auVar90[14] = bVar68 & auVar77[14];
        auVar90[15] = bVar69 & auVar77[15];
        iVar38 = CONCAT13(bVar69 & auVar95[3],
                          CONCAT12(bVar68 & auVar95[2],
                                   CONCAT11(bVar67 & auVar95[1],bVar64 & auVar95[0])));
        auVar92._0_8_ =
             CONCAT17(bVar69 & auVar95[7],
                      CONCAT16(bVar68 & auVar95[6],
                               CONCAT15(bVar67 & auVar95[5],CONCAT14(bVar64 & auVar95[4],iVar38))));
        auVar92[8] = bVar64 & auVar95[8];
        auVar92[9] = bVar67 & auVar95[9];
        auVar92[10] = bVar68 & auVar95[10];
        auVar92[11] = bVar69 & auVar95[11];
        auVar96[12] = bVar64 & auVar95[12];
        auVar96._0_12_ = auVar92;
        auVar96[13] = bVar67 & auVar95[13];
        auVar96[14] = bVar68 & auVar95[14];
        auVar96[15] = bVar69 & auVar95[15];
        auVar93 = NEON_smax(auVar66,auVar91,4);
        auVar77 = NEON_smax(auVar66,auVar84,4);
        uVar73 = CONCAT44((int)((ulong)uVar73 >> 0x20) + 8,(int)uVar73 + 8);
        uVar74 = CONCAT44((int)((ulong)uVar74 >> 0x20) + 8,(int)uVar74 + 8);
        uVar71 = CONCAT44((int)((ulong)uVar71 >> 0x20) + 8,(int)uVar71 + 8);
        uVar72 = CONCAT44((int)((ulong)uVar72 >> 0x20) + 8,(int)uVar72 + 8);
        puVar22[1] = auVar93._8_8_;
        *puVar22 = auVar93._0_8_;
        puVar22[3] = auVar77._8_8_;
        puVar22[2] = auVar77._0_8_;
        piVar19[4] = (auVar82._8_4_ >> 6) - auVar92._8_4_;
        piVar19[5] = (auVar82._12_4_ >> 6) - auVar96._12_4_;
        *piVar19 = (auVar82._0_4_ >> 6) - iVar38;
        piVar19[1] = (auVar82._4_4_ >> 6) - (int)((ulong)auVar92._0_8_ >> 0x20);
        piVar19[8] = (auVar88._8_4_ >> 6) - auVar76._8_4_;
        piVar19[9] = (auVar88._12_4_ >> 6) - auVar90._12_4_;
        piVar19[4] = (auVar88._0_4_ >> 6) - iVar17;
        piVar19[5] = (auVar88._4_4_ >> 6) - (int)((ulong)auVar76._0_8_ >> 0x20);
        puVar22 = puVar22 + 4;
        piVar19 = piVar19 + 8;
        pauVar24 = pauVar24 + 1;
        auVar77 = auVar65;
      } while (uVar37 != 0);
      if (uVar31 == uVar18) goto LAB_00e708f4;
    }
    psVar42 = (short *)(lVar32 + lVar41 * 2);
    lVar32 = (int)param_3 - lVar41;
    iVar46 = param_13 * (~(uint)lVar41 + param_3) * iVar49;
    piVar19 = (int *)(lVar39 + lVar41 * 4);
    piVar34 = (int *)(lVar33 + lVar41 * 4);
    do {
      psVar42 = psVar42 + 1;
      sVar63 = *psVar42;
      iVar5 = (int)sVar63 - (int)sVar52;
      iVar38 = iVar46 * iVar5;
      iVar48 = ((iVar5 * 3 << (ulong)(param_14 & 0x1f)) << 3) >> 4;
      iVar46 = iVar46 - param_13 * iVar49;
      iVar17 = iVar6;
      if (iVar6 <= iVar48) {
        iVar17 = iVar48;
      }
      iVar48 = iVar6;
      if (iVar5 << (ulong)(param_14 & 0x1f) != 1) {
        iVar48 = 0;
      }
      lVar32 = lVar32 + -1;
      *piVar34 = iVar17;
      *piVar19 = ((iVar38 << (ulong)(uVar23 & 0x1f)) >> 6) - iVar48;
      piVar19 = piVar19 + 1;
      piVar34 = piVar34 + 1;
      sVar52 = sVar63;
    } while (lVar32 != 0);
  }
LAB_00e708f4:
  lVar41 = (long)iVar16;
  lVar47 = (long)(int)param_3;
  iVar49 = 1;
  iVar46 = *(int *)(local_80 + 0x2c);
  local_98 = lVar47;
  local_90 = (ulong)param_3;
  lVar32 = local_a8 + -4;
  local_b8 = lVar33;
  iVar17 = iVar46 + -1;
  local_dc = param_17;
  local_bc = param_16;
  lVar33 = lVar33 + -4;
  do {
    uVar23 = (uint)local_88;
    iVar38 = iVar49 + iVar17 >> 1;
    if ((int)uVar23 < (int)param_3) {
      iVar48 = 0;
      bVar14 = false;
      lVar20 = lVar47;
      sVar52 = *(short *)(*(long *)(local_80 + 0x18) + lVar47 * 2);
      do {
        while( true ) {
          sVar63 = *(short *)(*(long *)(local_80 + 0x18) + -2 + lVar20 * 2);
          iVar5 = ((int)sVar52 - (int)sVar63) * param_13 *
                  (uint)*(byte *)(*(long *)(local_80 + 0x30) + (long)(iVar38 * iVar28) + -1 + lVar20
                                 ) << (ulong)(param_14 & 0x1f);
          uVar45 = iVar5 >> 2;
          if (3 < iVar5) {
            uVar45 = *(int *)(lVar39 + -4 + lVar20 * 4) + uVar45;
            uVar45 = uVar45 & ((int)uVar45 >> 0x1f ^ 0xffffffffU);
          }
          lVar50 = lVar20 + -1;
          iVar5 = *(int *)(param_4 + -4 + lVar20 * 4) + uVar45;
          sVar52 = sVar63;
          if ((bVar14) || (*(int *)(lVar33 + lVar20 * 4) <= iVar5)) break;
          bVar14 = false;
          iVar4 = 0;
          if (iVar5 + param_13 * -8 < 0 == SBORROW4(iVar5,iVar6)) {
            iVar4 = iVar6;
          }
          iVar48 = iVar4 + iVar48;
          lVar20 = lVar50;
          if (lVar50 <= lVar41) goto LAB_00e7093c;
        }
        iVar4 = *(int *)(lVar32 + lVar20 * 4);
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
        bVar14 = true;
        iVar48 = iVar5 + iVar48;
        lVar20 = lVar50;
      } while (lVar41 < lVar50);
    }
    else {
      iVar48 = 0;
    }
LAB_00e7093c:
    iVar5 = iVar38 + -1;
    if (iVar48 <= local_74) {
      iVar49 = iVar38 + 1;
      iVar5 = iVar17;
    }
    iVar17 = iVar5;
  } while (iVar49 <= iVar17);
  uVar45 = uVar23;
  if ((int)uVar23 < (int)param_3) {
    lVar26 = lVar41 * 4;
    lVar20 = 0;
    lVar50 = *(long *)(local_80 + 0x30) + lVar41;
    psVar42 = (short *)(*(long *)(local_80 + 0x18) + lVar41 * 2);
    lVar25 = lVar50 + ((long)iVar49 + -1) * lVar36;
    lVar2 = local_a8 + lVar26;
    uVar31 = local_88 & 0xffffffff;
    sVar52 = *psVar42;
    do {
      sVar63 = psVar42[lVar20 + 1];
      iVar28 = ((int)sVar63 - (int)sVar52) * param_13;
      if (iVar49 < iVar46) {
        uVar45 = (int)(iVar28 * (uint)*(byte *)(lVar50 + iVar49 * lVar36 + lVar20) <<
                      (ulong)(param_14 & 0x1f)) >> 2;
        iVar28 = iVar28 * (uint)*(byte *)(lVar25 + lVar20) << (ulong)(param_14 & 0x1f);
      }
      else {
        uVar45 = *(uint *)(lVar2 + lVar20 * 4);
        iVar28 = iVar28 * (uint)*(byte *)(lVar25 + lVar20) << (ulong)(param_14 & 0x1f);
      }
      uVar15 = iVar28 >> 2;
      if (3 < iVar28) {
        uVar15 = *(int *)(lVar39 + lVar26 + lVar20 * 4) + uVar15;
        uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
      }
      if (0 < (int)uVar45) {
        uVar45 = *(int *)(lVar39 + lVar26 + lVar20 * 4) + uVar45;
        uVar45 = uVar45 & ((int)uVar45 >> 0x1f ^ 0xffffffffU);
      }
      lVar51 = lVar20 * 4;
      iVar17 = *(int *)(param_4 + lVar26 + lVar51);
      iVar28 = iVar17;
      if (iVar49 < 2) {
        iVar28 = 0;
      }
      uVar23 = iVar16 + (int)lVar20;
      if (iVar17 < 1) {
        uVar23 = (uint)uVar31;
      }
      uVar31 = (ulong)uVar23;
      uVar45 = (uVar45 - (uVar15 + iVar28)) + iVar17;
      lVar20 = lVar20 + 1;
      *(uint *)((long)&uStack_130 + lVar51 + lVar26 + lVar44 + -0x130 + 0x130) = uVar15 + iVar28;
      *(uint *)((long)&uStack_130 + lVar51 + lVar26 + lVar29 + 0x130) =
           uVar45 & ((int)uVar45 >> 0x1f ^ 0xffffffffU);
      sVar52 = sVar63;
    } while ((lVar41 - lVar47) + lVar20 != 0);
    uVar45 = (uint)local_88;
    if ((int)local_90 <= (int)uVar45) goto LAB_00e70f54;
    iVar28 = 0;
    bVar14 = false;
    lVar29 = lVar29 + -4;
    lVar36 = local_98;
    do {
      while( true ) {
        lVar39 = lVar36 * 4;
        lVar47 = lVar36 + -1;
        iVar16 = *(int *)((long)&iStack_134 + lVar39 + lVar44) +
                 (*(int *)((long)&iStack_134 + lVar39 + lVar29 + 0x134) >> 1);
        if ((bVar14) || (*(int *)(lVar33 + lVar39) <= iVar16)) break;
        bVar14 = false;
        iVar49 = 0;
        if (iVar16 + param_13 * -8 < 0 == SBORROW4(iVar16,iVar6)) {
          iVar49 = iVar6;
        }
        iVar28 = iVar49 + iVar28;
        lVar36 = lVar47;
        if (lVar47 <= lVar41) goto LAB_00e70c04;
      }
      iVar49 = *(int *)(lVar32 + lVar36 * 4);
      if (iVar49 <= iVar16) {
        iVar16 = iVar49;
      }
      bVar14 = true;
      iVar28 = iVar16 + iVar28;
      lVar36 = lVar47;
    } while (lVar41 < lVar47);
LAB_00e70c04:
    uVar15 = 0x20;
    if (iVar28 <= local_74) {
      uVar15 = 0x40;
    }
    iVar16 = 0;
    bVar14 = false;
    uVar21 = 0x10;
    lVar36 = local_98;
    if (iVar28 <= local_74) {
      uVar21 = 0x30;
    }
    do {
      while( true ) {
        lVar47 = lVar36 * 4;
        lVar39 = lVar36 + -1;
        iVar49 = *(int *)((long)&iStack_134 + lVar47 + lVar44) +
                 ((int)(*(int *)((long)&iStack_134 + lVar47 + lVar29 + 0x134) * uVar21) >> 6);
        if ((bVar14) || (*(int *)(lVar33 + lVar47) <= iVar49)) break;
        bVar14 = false;
        iVar46 = 0;
        if (iVar49 + param_13 * -8 < 0 == SBORROW4(iVar49,iVar6)) {
          iVar46 = iVar6;
        }
        iVar16 = iVar46 + iVar16;
        lVar36 = lVar39;
        if (lVar39 <= lVar41) goto LAB_00e70c94;
      }
      iVar46 = *(int *)(lVar32 + lVar36 * 4);
      if (iVar46 <= iVar49) {
        iVar49 = iVar46;
      }
      bVar14 = true;
      iVar16 = iVar49 + iVar16;
      lVar36 = lVar39;
    } while (lVar41 < lVar39);
LAB_00e70c94:
    iVar49 = 0;
    bVar14 = false;
    uVar3 = (uint)(iVar28 <= local_74) << 5;
    if (iVar16 <= local_74) {
      uVar3 = uVar21;
      uVar21 = uVar15;
    }
    uVar15 = uVar3 + uVar21 >> 1;
    lVar36 = local_98;
    do {
      while( true ) {
        lVar39 = lVar36 * 4;
        lVar47 = lVar36 + -1;
        iVar28 = *(int *)((long)&iStack_134 + lVar39 + lVar44) +
                 ((int)(*(int *)((long)&iStack_134 + lVar39 + lVar29 + 0x134) * uVar15) >> 6);
        if ((bVar14) || (*(int *)(lVar33 + lVar39) <= iVar28)) break;
        bVar14 = false;
        iVar16 = 0;
        if (iVar28 + param_13 * -8 < 0 == SBORROW4(iVar28,iVar6)) {
          iVar16 = iVar6;
        }
        iVar49 = iVar16 + iVar49;
        lVar36 = lVar47;
        if (lVar47 <= lVar41) goto LAB_00e70d2c;
      }
      iVar16 = *(int *)(lVar32 + lVar36 * 4);
      if (iVar16 <= iVar28) {
        iVar28 = iVar16;
      }
      bVar14 = true;
      iVar49 = iVar28 + iVar49;
      lVar36 = lVar47;
    } while (lVar41 < lVar47);
LAB_00e70d2c:
    iVar28 = 0;
    bVar14 = false;
    if (iVar49 <= local_74) {
      uVar3 = uVar15;
      uVar15 = uVar21;
    }
    uVar21 = uVar3 + uVar15 >> 1;
    lVar36 = local_98;
    do {
      while( true ) {
        lVar39 = lVar36 * 4;
        lVar47 = lVar36 + -1;
        iVar16 = *(int *)((long)&iStack_134 + lVar39 + lVar44) +
                 ((int)(*(int *)((long)&iStack_134 + lVar39 + lVar29 + 0x134) * uVar21) >> 6);
        if ((bVar14) || (*(int *)(lVar33 + lVar39) <= iVar16)) break;
        bVar14 = false;
        iVar49 = 0;
        if (iVar16 + param_13 * -8 < 0 == SBORROW4(iVar16,iVar6)) {
          iVar49 = iVar6;
        }
        iVar28 = iVar49 + iVar28;
        lVar36 = lVar47;
        if (lVar47 <= lVar41) goto LAB_00e70db8;
      }
      iVar49 = *(int *)(lVar32 + lVar36 * 4);
      if (iVar49 <= iVar16) {
        iVar16 = iVar49;
      }
      bVar14 = true;
      iVar28 = iVar16 + iVar28;
      lVar36 = lVar47;
    } while (lVar41 < lVar47);
LAB_00e70db8:
    iVar16 = 0;
    bVar14 = false;
    if (iVar28 <= local_74) {
      uVar3 = uVar21;
      uVar21 = uVar15;
    }
    uVar15 = uVar3 + uVar21 >> 1;
    lVar36 = local_98;
    do {
      while( true ) {
        lVar39 = lVar36 * 4;
        lVar47 = lVar36 + -1;
        iVar28 = *(int *)((long)&iStack_134 + lVar39 + lVar44) +
                 ((int)(*(int *)((long)&iStack_134 + lVar39 + lVar29 + 0x134) * uVar15) >> 6);
        if ((bVar14) || (*(int *)(lVar33 + lVar39) <= iVar28)) break;
        bVar14 = false;
        iVar49 = 0;
        if (iVar28 + param_13 * -8 < 0 == SBORROW4(iVar28,iVar6)) {
          iVar49 = iVar6;
        }
        iVar16 = iVar49 + iVar16;
        lVar36 = lVar47;
        if (lVar47 <= lVar41) goto LAB_00e70e44;
      }
      iVar49 = *(int *)(lVar32 + lVar36 * 4);
      if (iVar49 <= iVar28) {
        iVar28 = iVar49;
      }
      bVar14 = true;
      iVar16 = iVar28 + iVar16;
      lVar36 = lVar47;
    } while (lVar41 < lVar47);
LAB_00e70e44:
    iVar49 = 0;
    bVar14 = false;
    if (iVar16 <= local_74) {
      uVar3 = uVar15;
      uVar15 = uVar21;
    }
    uVar15 = uVar3 + uVar15 >> 1;
    lVar36 = local_98;
    do {
      while( true ) {
        lVar47 = lVar36 * 4;
        lVar39 = lVar36 + -1;
        iVar28 = *(int *)((long)&iStack_134 + lVar47 + lVar44) +
                 ((int)(*(int *)((long)&iStack_134 + lVar47 + lVar29 + 0x134) * uVar15) >> 6);
        if ((bVar14) || (*(int *)(lVar33 + lVar47) <= iVar28)) break;
        bVar14 = false;
        iVar16 = 0;
        if (iVar28 + param_13 * -8 < 0 == SBORROW4(iVar28,iVar6)) {
          iVar16 = iVar6;
        }
        iVar49 = iVar16 + iVar49;
        lVar36 = lVar39;
        if (lVar39 <= lVar41) goto LAB_00e70ed0;
      }
      iVar16 = *(int *)(lVar32 + lVar36 * 4);
      bVar14 = true;
      if (iVar16 <= iVar28) {
        iVar28 = iVar16;
      }
      iVar49 = iVar28 + iVar49;
      lVar36 = lVar39;
    } while (lVar41 < lVar39);
LAB_00e70ed0:
    iVar28 = 0;
    if (iVar49 <= local_74) {
      uVar3 = uVar15;
    }
    lVar36 = local_98;
    bVar14 = false;
    do {
      lVar39 = lVar36 * 4;
      iVar16 = *(int *)((long)&iStack_134 + lVar39 + lVar44) +
               ((int)(*(int *)((long)&iStack_134 + lVar39 + lVar29 + 0x134) * uVar3) >> 6);
      bVar1 = *(int *)(lVar33 + lVar39) <= iVar16;
      iVar49 = 0;
      if (iVar16 + param_13 * -8 < 0 == SBORROW4(iVar16,iVar6)) {
        iVar49 = iVar6;
      }
      if (!bVar14 && !bVar1) {
        iVar16 = iVar49;
      }
      lVar36 = lVar36 + -1;
      if (*(int *)(lVar32 + lVar39) <= iVar16) {
        iVar16 = *(int *)(lVar32 + lVar39);
      }
      iVar28 = iVar16 + iVar28;
      *(int *)(local_a0 + -4 + lVar39) = iVar16;
      bVar14 = bVar14 || bVar1;
    } while (lVar41 < lVar36);
  }
  else {
LAB_00e70f54:
    iVar28 = 0;
  }
  local_114 = (uint)(1 < param_13);
  iVar49 = (int)local_90 + -1;
  lVar36 = local_a0;
  uVar31 = local_90;
  iVar16 = local_74;
  if ((int)uVar23 < iVar49) {
    local_ec = uVar45 + 2;
    lVar33 = (long)iVar49;
    lVar44 = (long)(int)uVar23;
    local_f8 = (long)param_18;
    local_d0 = (long)&DAT_00567906 - lVar41;
    lVar29 = local_b8;
    uVar23 = uVar27;
    local_d8 = lVar44;
    do {
      lVar39 = *(long *)(local_80 + 0x18);
      iVar48 = (int)uVar31;
      sVar52 = *(short *)(lVar39 + (long)iVar48 * 2);
      sVar63 = *(short *)(lVar39 + lVar41 * 2);
      iVar46 = *(int *)(lVar36 + lVar33 * 4);
      iVar49 = *(int *)(lVar29 + lVar33 * 4);
      uVar27 = (int)sVar52 - (int)sVar63;
      iVar38 = (int)*(short *)(lVar39 + lVar33 * 2);
      iVar17 = sVar52 - iVar38;
      uVar45 = 0;
      if (uVar27 != 0) {
        uVar45 = (uint)(iVar16 - iVar28) / uVar27;
      }
      uVar27 = (iVar16 - iVar28) + ((int)sVar63 - (int)sVar52) * uVar45 + (sVar63 - iVar38);
      iVar38 = iVar46 + iVar17 * uVar45 + (uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU));
      if (iVar49 <= iVar6 + 8) {
        iVar49 = iVar6 + 8;
      }
      if (iVar49 <= iVar38) {
        if (local_bc != 0) {
          if (local_ec < iVar48) {
            iVar16 = 9;
            if (iVar48 <= local_dc) {
              iVar16 = 7;
            }
            if (iVar48 < 0x12) {
              iVar16 = 0;
            }
            iVar16 = ((iVar17 * iVar16 << (ulong)(param_14 & 0x1f)) << 3) >> 4;
            bVar14 = false;
            if (iVar16 < iVar38) {
              bVar14 = lVar33 - local_f8 < 0;
            }
            if ((iVar38 <= iVar16 || lVar33 != local_f8) &&
                bVar14 == (iVar16 < iVar38 && SBORROW8(lVar33,local_f8))) {
              ec_enc_bit_logp(local_b0,0,1);
              goto LAB_00e70fbc;
            }
          }
          ec_enc_bit_logp(local_b0,1,1);
          if (uVar23 != 0) goto LAB_00e711c0;
          iVar46 = (int)local_88;
          iVar49 = 0;
          if (-1 < iVar46) {
            iVar49 = local_124;
          }
          *local_e8 = 0;
          lVar36 = local_a0;
          lVar44 = local_120;
          iVar16 = local_74;
          if ((-1 < iVar46) || (local_124 == 0)) goto LAB_00e712d8;
          goto LAB_00e71214;
        }
        iVar16 = ec_dec_bit_logp(local_b0,1);
        if (iVar16 != 0) {
          if (uVar23 != 0) goto LAB_00e71104;
          iVar46 = (int)local_88;
          iVar49 = 0;
          if (-1 < iVar46) {
            iVar49 = local_124;
          }
          *local_e8 = 0;
          lVar36 = local_a0;
          lVar44 = local_120;
          iVar16 = local_74;
          if ((-1 < iVar46) || (local_124 == 0)) goto LAB_00e712d8;
          goto LAB_00e71174;
        }
LAB_00e70fbc:
        iVar28 = iVar28 + 8;
        iVar38 = iVar38 + -8;
        iVar46 = *(int *)(local_a0 + lVar33 * 4);
        lVar36 = local_a0;
        lVar44 = local_d8;
        lVar29 = local_b8;
        iVar16 = local_74;
      }
      if (uVar23 == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = (uint)*(byte *)(local_d0 + lVar33);
      }
      iVar49 = 0;
      if (iVar38 + param_13 * -8 < 0 == SBORROW4(iVar38,iVar6)) {
        iVar49 = iVar6;
      }
      uVar31 = (ulong)(iVar48 - 1);
      iVar28 = (iVar28 - (iVar46 + uVar23)) + iVar49 + uVar27;
      *(int *)(lVar36 + lVar33 * 4) = iVar49;
      lVar33 = lVar33 + -1;
      uVar23 = uVar27;
    } while (lVar44 < lVar33);
  }
  iVar16 = iVar16 + local_128;
  if (uVar27 == 0) {
    iVar46 = (int)local_88;
    iVar49 = 0;
    if (-1 < iVar46) {
      iVar49 = local_124;
    }
    *local_e8 = 0;
    lVar44 = local_120;
    if ((-1 < iVar46) || (local_124 == 0)) goto LAB_00e712d8;
    if (local_bc != 0) goto LAB_00e71214;
LAB_00e71174:
    iVar17 = ec_dec_bit_logp(local_b0,1);
    *local_c8 = iVar17;
    lVar36 = local_a0;
    if (iVar46 < (int)uVar31) goto LAB_00e712ec;
LAB_00e71240:
    *local_110 = 0;
    if ((int)local_90 <= iVar46) goto LAB_00e71670;
  }
  else {
    local_74 = iVar16;
    if (local_bc == 0) {
LAB_00e71104:
      lVar44 = local_120;
      iVar46 = (int)local_88;
      iVar17 = ec_dec_uint(local_b0,((int)uVar31 - iVar46) + 1);
      iVar17 = iVar17 + iVar46;
      iVar49 = 0;
      if (iVar17 <= iVar46) {
        iVar49 = local_124;
      }
      *local_e8 = iVar17;
      lVar36 = local_a0;
      iVar16 = local_74;
      if ((local_124 != 0) && (iVar46 < iVar17)) goto LAB_00e71174;
    }
    else {
LAB_00e711c0:
      piVar19 = local_e8;
      lVar44 = local_120;
      iVar49 = (int)uVar31;
      iVar46 = (int)local_88;
      iVar16 = *local_e8;
      if (iVar49 <= *local_e8) {
        iVar16 = iVar49;
      }
      *local_e8 = iVar16;
      ec_enc_uint(local_b0,iVar16 - iVar46,(iVar49 - iVar46) + 1);
      iVar49 = 0;
      if (*piVar19 <= iVar46) {
        iVar49 = local_124;
      }
      lVar36 = local_a0;
      iVar16 = local_74;
      if ((local_124 != 0) && (iVar46 < *piVar19)) {
LAB_00e71214:
        ec_enc_bit_logp(local_b0,*local_c8,1);
        lVar36 = local_a0;
        if (iVar46 < (int)uVar31) goto LAB_00e712ec;
        goto LAB_00e71240;
      }
    }
LAB_00e712d8:
    *local_c8 = 0;
    if ((int)uVar31 <= iVar46) goto LAB_00e71240;
LAB_00e712ec:
    uVar27 = (iVar16 - iVar28) + iVar49;
    lVar33 = *(long *)(local_80 + 0x18);
    iVar46 = (int)uVar31;
    sVar52 = *(short *)(lVar33 + lVar41 * 2);
    iVar28 = (int)*(short *)(lVar33 + (long)iVar46 * 2);
    uVar23 = iVar28 - sVar52;
    lVar29 = (long)iVar46;
    uVar45 = 0;
    if (uVar23 != 0) {
      uVar45 = uVar27 / uVar23;
    }
    iVar28 = uVar27 + (sVar52 - iVar28) * uVar45;
    uVar37 = lVar29 - lVar41;
    lVar39 = lVar41;
    sVar63 = sVar52;
    if (uVar37 < 0x10) {
LAB_00e713b0:
      psVar42 = (short *)(lVar33 + lVar39 * 2);
      lVar32 = lVar29 - lVar39;
      piVar19 = (int *)(lVar36 + lVar39 * 4);
      do {
        psVar42 = psVar42 + 1;
        sVar54 = *psVar42;
        lVar32 = lVar32 + -1;
        *piVar19 = *piVar19 + ((int)sVar54 - (int)sVar63) * uVar45;
        piVar19 = piVar19 + 1;
        sVar63 = sVar54;
      } while (lVar32 != 0);
    }
    else {
      uVar40 = uVar37 & 0xfffffffffffffff0;
      lVar39 = lVar41 + uVar40;
      pVar43 = (unkbyte10 *)(lVar33 + lVar41 * 2 + 0x12);
      uVar18 = uVar40;
      puVar22 = (undefined8 *)(lVar36 + lVar41 * 4 + 0x20);
      sVar54 = sVar52;
      sVar55 = sVar52;
      sVar57 = sVar52;
      sVar59 = sVar52;
      sVar60 = sVar52;
      sVar61 = sVar52;
      sVar62 = sVar52;
      do {
        auVar65._10_2_ = sVar61;
        auVar65._8_2_ = sVar60;
        auVar65._12_2_ = sVar62;
        auVar65._14_2_ = sVar63;
        auVar65._2_2_ = sVar55;
        auVar65._0_2_ = sVar54;
        auVar65._4_2_ = sVar57;
        auVar65._6_2_ = sVar59;
        uVar18 = uVar18 - 0x10;
        auVar77 = *(undefined (*) [16])(pVar43 + -1);
        uVar71 = *(undefined8 *)((long)pVar43 + 8);
        sVar60 = (short)uVar71;
        sVar61 = (short)((ulong)uVar71 >> 0x10);
        sVar62 = (short)((ulong)uVar71 >> 0x20);
        sVar63 = (short)((ulong)uVar71 >> 0x30);
        uVar71 = *(undefined8 *)pVar43;
        Var12 = *pVar43;
        sVar54 = (short)uVar71;
        sVar55 = (short)((ulong)uVar71 >> 0x10);
        sVar57 = (short)((ulong)uVar71 >> 0x20);
        sVar59 = (short)((ulong)uVar71 >> 0x30);
        pVar43 = pVar43 + 2;
        auVar66 = NEON_ext(auVar65,auVar77,0xe,1);
        auVar75._10_2_ = sVar61;
        auVar75._0_10_ = Var12;
        auVar75._12_2_ = sVar62;
        auVar75._14_2_ = sVar63;
        auVar75 = NEON_ext(auVar77,auVar75,0xe,1);
        puVar22[-3] = CONCAT44((int)((ulong)puVar22[-3] >> 0x20) +
                               ((int)auVar77._6_2_ - (int)auVar66._6_2_) * uVar45,
                               (int)puVar22[-3] + ((int)auVar77._4_2_ - (int)auVar66._4_2_) * uVar45
                              );
        puVar22[-4] = CONCAT44((int)((ulong)puVar22[-4] >> 0x20) +
                               ((int)auVar77._2_2_ - (int)auVar66._2_2_) * uVar45,
                               (int)puVar22[-4] + ((int)auVar77._0_2_ - (int)auVar66._0_2_) * uVar45
                              );
        puVar22[-1] = CONCAT44((int)((ulong)puVar22[-1] >> 0x20) +
                               ((int)auVar77._14_2_ - (int)auVar66._14_2_) * uVar45,
                               (int)puVar22[-1] +
                               ((int)auVar77._12_2_ - (int)auVar66._12_2_) * uVar45);
        puVar22[-2] = CONCAT44((int)((ulong)puVar22[-2] >> 0x20) +
                               ((int)auVar77._10_2_ - (int)auVar66._10_2_) * uVar45,
                               (int)puVar22[-2] + ((int)auVar77._8_2_ - (int)auVar66._8_2_) * uVar45
                              );
        puVar22[1] = CONCAT44((int)((ulong)puVar22[1] >> 0x20) +
                              ((int)sVar59 - (int)auVar75._6_2_) * uVar45,
                              (int)puVar22[1] + ((int)sVar57 - (int)auVar75._4_2_) * uVar45);
        *puVar22 = CONCAT44((int)((ulong)*puVar22 >> 0x20) +
                            ((int)sVar55 - (int)auVar75._2_2_) * uVar45,
                            (int)*puVar22 + ((int)sVar54 - (int)auVar75._0_2_) * uVar45);
        puVar22[3] = CONCAT44((int)((ulong)puVar22[3] >> 0x20) +
                              ((int)sVar63 - (int)auVar75._14_2_) * uVar45,
                              (int)puVar22[3] + ((int)sVar62 - (int)auVar75._12_2_) * uVar45);
        puVar22[2] = CONCAT44((int)((ulong)puVar22[2] >> 0x20) +
                              ((int)sVar61 - (int)auVar75._10_2_) * uVar45,
                              (int)puVar22[2] + ((int)sVar60 - (int)auVar75._8_2_) * uVar45);
        puVar22 = puVar22 + 8;
      } while (uVar18 != 0);
      if (uVar37 != uVar40) goto LAB_00e713b0;
    }
    psVar42 = (short *)(lVar33 + lVar41 * 2);
    piVar19 = (int *)(lVar36 + lVar41 * 4);
    sVar63 = sVar52;
    do {
      psVar42 = psVar42 + 1;
      sVar54 = *psVar42;
      iVar49 = (int)sVar54 - (int)sVar63;
      iVar16 = iVar28;
      if (iVar49 <= iVar28) {
        iVar16 = iVar49;
      }
      uVar37 = uVar37 - 1;
      iVar28 = iVar28 - iVar16;
      *piVar19 = iVar16 + *piVar19;
      piVar19 = piVar19 + 1;
      sVar63 = sVar54;
    } while (uVar37 != 0);
    iVar28 = 0;
    uVar27 = 3;
    if (1 < param_13) {
      uVar27 = 4;
    }
    do {
      while( true ) {
        sVar63 = *(short *)(lVar33 + 2 + lVar41 * 2);
        iVar49 = (int)sVar63 - (int)sVar52 << (ulong)(param_14 & 0x1f);
        iVar16 = *(int *)(lVar36 + lVar41 * 4) + iVar28;
        lVar39 = lVar41 * 4;
        sVar52 = sVar63;
        if (iVar49 < 2) break;
        uVar23 = 0;
        uVar45 = iVar16 - *(int *)(local_a8 + lVar39);
        uVar45 = uVar45 & ((int)uVar45 >> 0x1f ^ 0xffffffffU);
        iVar16 = iVar16 - uVar45;
        *(int *)(lVar36 + lVar39) = iVar16;
        if ((param_13 == 2) && (iVar49 != 2)) {
          if (*local_c8 == 0) {
            uVar23 = (uint)(lVar41 < *local_e8);
          }
          else {
            uVar23 = 0;
          }
        }
        uVar23 = iVar49 * param_13 + uVar23;
        uVar15 = -(uVar23 >> 0x1c & 1) & 0xc0000000 | (uVar23 & 0x1fffffff) << 1;
        if (iVar49 != 2) {
          uVar15 = 0;
        }
        iVar48 = (param_14 * 8 + (int)*(short *)(*(long *)(local_80 + 0x38) + lVar41 * 2)) * uVar23;
        iVar49 = uVar15 + uVar23 * -0x15 + (iVar48 >> 1);
        iVar17 = iVar49 + iVar16;
        iVar38 = iVar49;
        if ((int)(iVar17 + uVar23 * -0x18) < 0 != SBORROW4(iVar17,uVar23 * 0x18)) {
          iVar38 = iVar49 + (iVar48 >> 3);
        }
        if ((int)(iVar17 + uVar23 * -0x10) < 0 != SBORROW4(iVar17,uVar23 * 0x10)) {
          iVar38 = iVar49 + (iVar48 >> 2);
        }
        uVar15 = iVar16 + uVar23 * 4 + iVar38;
        uVar21 = 0;
        if (uVar23 != 0) {
          uVar21 = (uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) / uVar23;
        }
        uVar21 = uVar21 >> 3;
        *(uint *)(lStack_100 + lVar39) = uVar21;
        uVar15 = (*(int *)(local_a0 + lVar39) >> (local_114 & 0x1f)) >> 3;
        if ((int)(uVar21 * param_13) <= *(int *)(local_a0 + lVar39) >> 3) {
          uVar15 = uVar21;
        }
        if (7 < (int)uVar15) {
          uVar15 = 8;
        }
        *(uint *)(lStack_100 + lVar39) = uVar15;
        *(uint *)(local_108 + lVar39) =
             (uint)(*(int *)(local_a0 + lVar39) + iVar38 <= (int)(uVar15 * uVar23 * 8));
        *(int *)(local_a0 + lVar39) =
             *(int *)(local_a0 + lVar39) + param_13 * -8 * *(int *)(lStack_100 + lVar39);
        lVar36 = local_a0;
        if (uVar45 != 0) goto LAB_00e71450;
LAB_00e715e8:
        iVar28 = 0;
        lVar41 = lVar41 + 1;
        iVar16 = 0;
        if (lVar29 == lVar41) goto LAB_00e715fc;
      }
      uVar45 = iVar16 + param_13 * -8;
      uVar45 = uVar45 & ((int)uVar45 >> 0x1f ^ 0xffffffffU);
      *(uint *)(lVar36 + lVar39) = iVar16 - uVar45;
      *(undefined4 *)(lStack_100 + lVar39) = 0;
      *(undefined4 *)(local_108 + lVar39) = 1;
      if (uVar45 == 0) goto LAB_00e715e8;
LAB_00e71450:
      iVar16 = uVar45 - iVar28;
      uVar15 = 8 - *(int *)(lStack_100 + lVar39);
      uVar23 = uVar45 >> (ulong)uVar27;
      if ((int)uVar15 <= (int)(uVar45 >> (ulong)uVar27)) {
        uVar23 = uVar15;
      }
      *(uint *)(lStack_100 + lVar39) = uVar23 + *(int *)(lStack_100 + lVar39);
      iVar28 = uVar45 - uVar23 * iVar6;
      *(uint *)(local_108 + lVar39) = (uint)(iVar16 <= (int)(uVar23 * iVar6));
      lVar41 = lVar41 + 1;
      iVar16 = iVar28;
    } while (lVar29 != lVar41);
LAB_00e715fc:
    *local_110 = iVar16;
    if ((int)local_90 <= iVar46) goto LAB_00e71670;
  }
  lVar29 = (long)iVar46;
  uVar37 = local_98 - lVar29;
  if (3 < uVar37) {
    lVar39 = lVar29 * 4;
    lVar33 = local_98 * 4;
    if ((((ulong)(lVar36 + lVar33) <= (ulong)(lStack_100 + lVar39) ||
          (ulong)(lStack_100 + lVar33) <= (ulong)(lVar36 + lVar39)) &&
        ((ulong)(local_108 + lVar33) <= (ulong)(lStack_100 + lVar39) ||
         (ulong)(lStack_100 + lVar33) <= (ulong)(local_108 + lVar39))) &&
       ((ulong)(local_108 + lVar33) <= (ulong)(lVar36 + lVar39) ||
        (ulong)(lVar36 + lVar33) <= (ulong)(local_108 + lVar39))) {
      auVar53._4_4_ = local_114;
      auVar53._0_4_ = local_114;
      auVar53._8_4_ = local_114;
      auVar53._12_4_ = local_114;
      uVar40 = uVar37 & 0xfffffffffffffffc;
      auVar77 = NEON_neg(auVar53,4);
      lVar29 = uVar40 + lVar29;
      puVar35 = (ulong *)(local_108 + lVar39);
      pauVar24 = (undefined (*) [16])(lVar36 + lVar39);
      puVar22 = (undefined8 *)(lStack_100 + lVar39);
      uVar18 = uVar40;
      do {
        uVar18 = uVar18 - 4;
        auVar66 = NEON_sshl(*pauVar24,auVar77,4);
        auVar7._8_2_ = 8;
        auVar7._0_8_ = 0x800000008;
        auVar7._10_2_ = 0;
        auVar7._12_2_ = 8;
        auVar7._14_2_ = 0;
        auVar75 = NEON_cmgt(auVar7,auVar66,4);
        puVar22[1] = CONCAT44(auVar66._12_4_ >> 3,auVar66._8_4_ >> 3);
        *puVar22 = CONCAT44(auVar66._4_4_ >> 3,auVar66._0_4_ >> 3);
        uVar13 = CONCAT35(0,CONCAT14(auVar75[4],(uint)(auVar75[0] & 1)) & 0x100ffffff);
        auVar70[8] = auVar75[8] & 1;
        auVar70._0_8_ = uVar13;
        auVar70._9_3_ = 0;
        auVar70[12] = auVar75[12] & 1;
        *(undefined8 *)*pauVar24 = 0;
        *(undefined8 *)(*pauVar24 + 8) = 0;
        puVar35[1] = (ulong)auVar70._8_5_;
        *puVar35 = uVar13;
        puVar35 = puVar35 + 2;
        pauVar24 = pauVar24 + 1;
        puVar22 = puVar22 + 2;
      } while (uVar18 != 0);
      if (uVar37 == uVar40) goto LAB_00e71670;
    }
  }
  lVar33 = lVar29 * 4;
  lVar29 = local_98 - lVar29;
  puVar30 = (uint *)(local_108 + lVar33);
  piVar19 = (int *)(lStack_100 + lVar33);
  piVar34 = (int *)(lVar36 + lVar33);
  do {
    *piVar19 = (*piVar34 >> (local_114 & 0x1f)) >> 3;
    *piVar34 = 0;
    lVar29 = lVar29 + -1;
    *puVar30 = (uint)(*piVar19 < 1);
    puVar30 = puVar30 + 1;
    piVar19 = piVar19 + 1;
    piVar34 = piVar34 + 1;
  } while (lVar29 != 0);
LAB_00e71670:
  if (*(long *)(lVar44 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar31 & 0xffffffff;
}


