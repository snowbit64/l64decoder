// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quant_all_bands
// Entry Point: 00e729e8
// Size: 5008 bytes
// Signature: undefined quant_all_bands(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined8 param_14, undefined4 param_15, undefined4 param_16, undefined8 param_17, undefined4 param_18, undefined4 param_19, undefined8 param_20, undefined4 param_21, undefined4 param_22, undefined4 param_23)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void quant_all_bands(undefined param_1 [16],int param_2,long param_3,int param_4,int param_5,
                    long param_6,long param_7,long param_8,long param_9_00,long param_9,int param_10
                    ,int param_11,int param_12,int param_13,long param_14,int param_15,int param_16,
                    long *param_17,uint param_18,int param_19,undefined4 *param_20,int param_21,
                    undefined4 param_22,undefined4 param_23)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined (*pauVar11) [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
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
  undefined8 uVar30;
  undefined auVar31 [16];
  unkbyte9 Var32;
  unkbyte9 Var33;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  void *pvVar38;
  size_t sVar39;
  undefined uVar40;
  undefined uVar41;
  int iVar42;
  undefined4 uVar43;
  undefined *puVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined *puVar48;
  undefined *puVar49;
  short *psVar50;
  int iVar51;
  int iVar52;
  unkbyte9 *pVar53;
  uint uVar54;
  short *psVar55;
  int iVar56;
  ulong uVar57;
  undefined *puVar58;
  ulong uVar59;
  uint uVar60;
  long lVar61;
  ulong uVar62;
  uint uVar63;
  ulong uVar64;
  int iVar65;
  long lVar66;
  long lVar67;
  undefined (*pauVar68) [16];
  long lVar69;
  uint uVar70;
  undefined *puVar71;
  int iVar72;
  ulong uVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined uVar77;
  byte bVar78;
  undefined uVar79;
  byte bVar80;
  undefined uVar81;
  byte bVar82;
  undefined uVar83;
  byte bVar84;
  undefined uVar85;
  byte bVar86;
  undefined uVar87;
  byte bVar88;
  undefined uVar89;
  byte bVar90;
  undefined uVar91;
  byte bVar92;
  undefined uVar93;
  byte bVar94;
  undefined uVar95;
  byte bVar96;
  undefined uVar97;
  byte bVar98;
  undefined uVar99;
  byte bVar100;
  undefined uVar101;
  byte bVar102;
  undefined uVar103;
  uint uVar104;
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  byte bVar112;
  undefined uVar113;
  byte bVar114;
  undefined uVar115;
  byte bVar116;
  undefined uVar117;
  byte bVar118;
  undefined uVar119;
  byte bVar120;
  undefined uVar121;
  byte bVar122;
  undefined uVar123;
  byte bVar124;
  undefined uVar125;
  byte bVar126;
  undefined uVar127;
  byte bVar128;
  undefined uVar129;
  byte bVar130;
  undefined uVar131;
  byte bVar132;
  undefined uVar133;
  byte bVar134;
  undefined uVar135;
  byte bVar136;
  undefined uVar137;
  byte bVar138;
  undefined uVar139;
  byte bVar140;
  undefined uVar141;
  byte bVar142;
  undefined uVar143;
  undefined auVar144 [16];
  undefined auVar145 [16];
  undefined auVar146 [16];
  undefined auVar147 [16];
  undefined auVar148 [16];
  undefined auVar149 [16];
  undefined auVar150 [16];
  undefined auVar151 [16];
  undefined auVar152 [16];
  undefined auVar153 [16];
  undefined auVar154 [16];
  undefined auVar155 [16];
  undefined auVar156 [16];
  undefined auVar157 [16];
  undefined auVar158 [16];
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  undefined uVar169;
  byte bVar170;
  undefined uVar171;
  byte bVar172;
  undefined uVar173;
  byte bVar174;
  undefined uVar175;
  byte bVar176;
  undefined uVar177;
  byte bVar178;
  undefined uVar179;
  byte bVar180;
  undefined uVar181;
  undefined auVar182 [16];
  undefined auVar183 [16];
  undefined auVar184 [16];
  undefined auVar185 [16];
  undefined auVar186 [16];
  undefined auVar187 [16];
  undefined auVar188 [16];
  undefined auVar189 [16];
  undefined auStack_8f0 [8];
  undefined4 *local_8e8;
  long lStack_8e0;
  long local_8d8;
  int local_8cc;
  undefined *local_8c8;
  long local_8c0;
  undefined (*local_8b8) [16];
  undefined (*local_8b0) [16];
  undefined *local_8a8;
  ulong local_8a0;
  long local_898;
  long local_890;
  size_t local_888;
  void *pvStack_880;
  undefined4 local_878;
  int local_874;
  long local_870;
  undefined *local_868;
  undefined *local_860;
  ulong local_858;
  long local_850;
  int local_848;
  uint local_844;
  undefined *local_840;
  ulong local_838;
  ulong local_830;
  undefined (*local_828) [16];
  undefined8 *local_820;
  uint local_818;
  uint local_814;
  long local_810;
  uint local_804;
  undefined *local_800;
  undefined *local_7f8;
  undefined *local_7f0;
  long local_7e8;
  int local_7e0;
  int local_7dc;
  long local_7d8;
  uint local_7d0;
  int local_7cc;
  long local_7c8;
  long local_7c0;
  undefined *local_7b8;
  long local_7b0;
  long local_7a8;
  uint local_79c;
  undefined *local_798;
  long local_790;
  long local_788;
  uint local_77c;
  ulong local_778;
  undefined *local_770;
  long *local_768;
  int local_760;
  int local_75c;
  long local_758;
  long local_750;
  long local_748;
  long local_740;
  undefined8 local_738;
  long local_730;
  undefined8 local_728;
  undefined *local_720;
  long local_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  ulong local_6e8;
  uint local_6dc;
  undefined *local_6d8;
  undefined8 local_6d0;
  long lStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  long *local_6b0;
  undefined8 uStack_6a8;
  long lStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  long lStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  long *local_660;
  undefined8 uStack_658;
  long local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  long local_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long local_610;
  long lStack_608;
  long local_600;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  int local_5e0;
  uint uStack_5dc;
  long lStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  long *local_5c0;
  int iStack_5b8;
  undefined4 uStack_5b4;
  long local_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  uint uStack_598;
  undefined4 uStack_594;
  undefined auStack_58c [1276];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar45 = tpidr_el0;
  local_70 = *(long *)(lVar45 + 0x28);
  uVar60 = 1;
  if (param_7 != 0) {
    uVar60 = 2;
  }
  uVar73 = (ulong)uVar60;
  lVar69 = *(long *)(param_3 + 0x18);
  sVar6 = *(short *)(lVar69 + (long)param_4 * 2);
  local_728 = CONCAT44(local_728._4_4_,param_12);
  local_874 = (int)sVar6 << (ulong)(param_18 & 0x1f);
  iVar56 = (int)*(short *)(lVar69 + (long)*(int *)(param_3 + 8) * 2 + -2);
  iVar51 = iVar56 << (ulong)(param_18 & 0x1f);
  bVar1 = ((param_2 != 0 && param_7 != 0) && param_12 == 0) && 7 < param_21;
  local_77c = (uint)bVar1;
  local_79c = 1 << (ulong)(param_18 & 0x1f);
  uVar8 = (iVar51 - local_874) * uVar60;
  if (param_10 == 0) {
    local_79c = 1;
  }
  uStack_5dc = (uint)(bVar1 || param_2 == 0);
  local_770 = auStack_8f0 +
              -((-(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1) + 0xf &
               0xfffffffffffffff0);
  if (local_77c == 1) {
    uVar8 = *(short *)(lVar69 + (long)*(int *)(param_3 + 8) * 2) - iVar56 <<
            (ulong)(param_18 & 0x1f);
    uVar57 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar8 << 1;
    lVar61 = (long)(int)uVar8;
    local_720 = local_770 + -(uVar57 + 0xf & 0xfffffffffffffff0);
    puVar44 = local_720;
  }
  else {
    uVar57 = 0;
    lVar61 = 0;
    local_720 = (undefined *)(param_6 + (long)iVar51 * 2);
    puVar44 = local_770;
  }
  uVar62 = lVar61 * 2 + 0xfU & 0xfffffffffffffff0;
  puVar44 = puVar44 + -uVar62;
  puVar71 = puVar44 + -uVar62;
  uVar57 = uVar57 + 0xf & 0xfffffffffffffff0;
  local_860 = puVar71 + -uVar57;
  local_868 = local_860 + -uVar57;
  puVar58 = local_868 + -uVar57;
  uStack_5a4 = param_22;
  uStack_5c8 = CONCAT44(uStack_5c8._4_4_,param_11);
  local_5c0 = param_17;
  local_7b8 = local_770;
  if (param_7 == 0) {
    local_7b8 = (undefined *)0x0;
  }
  uStack_5a8 = *param_20;
  local_5d0 = CONCAT44(param_13,(undefined4)local_5d0);
  uStack_59c = param_23;
  local_5a0 = 0;
  uStack_598 = (uint)(1 < (int)local_79c);
  local_8a8 = puVar58;
  local_890 = param_9_00;
  local_7a8 = param_7;
  local_750 = param_3;
  local_5e0 = param_2;
  lStack_5d8 = param_3;
  local_5b0 = param_9_00;
  if (param_4 < param_5) {
    local_814 = (uint)(param_11 != 3 || 1 < (int)local_79c);
    local_740 = (long)param_4;
    local_7b0 = (long)param_13;
    local_798 = local_770 + (long)local_874 * -2 + (long)iVar51 * 2;
    local_804 = ~(-1 << (ulong)(local_79c & 0x1f));
    local_730 = local_740 + 1;
    local_818 = uStack_5dc ^ 1;
    local_790 = (long)param_19;
    local_7e8 = (long)param_5;
    local_7d8 = param_14;
    local_820 = (undefined8 *)((long)param_17 + 0xc);
    local_7e0 = uVar60 - 1;
    local_8e8 = param_20;
    local_828 = (undefined (*) [16])(param_17 + 4);
    local_788 = param_9;
    local_718 = (long)(param_5 + -1);
    local_810 = local_740 + 2;
    bVar1 = true;
    local_7f0 = local_770 + (long)local_874 * -2;
    local_8c8 = local_798 + (long)local_874 * -2;
    local_778 = 0;
    local_7cc = (int)sVar6;
    local_898 = lVar69 + -2;
    local_8c0 = uVar73 << 3;
    local_7dc = param_15;
    local_8cc = uVar60 << 4;
    local_8d8 = uVar73 << 4;
    local_768 = param_17;
    local_8b0 = (undefined (*) [16])(puVar44 + 0x10);
    local_8b8 = (undefined (*) [16])(puVar71 + 0x10);
    local_710 = param_1._0_8_;
    uStack_708 = param_1._8_8_;
    uStack_700 = 0;
    uStack_6f8 = 0;
    lVar61 = local_740;
    lStack_8e0 = lVar45;
    local_8a0 = uVar73;
    local_800 = puVar71;
    local_7f8 = puVar44;
    local_7d0 = uStack_5dc;
    local_7c8 = param_6;
    local_7c0 = param_8;
    local_748 = lVar69;
    do {
      local_758 = lVar61 + 1;
      local_5d0 = CONCAT44(local_5d0._4_4_,(uint)lVar61);
      uVar60 = (int)sVar6 << (ulong)(param_18 & 0x1f);
      sVar7 = *(short *)(lVar69 + local_758 * 2);
      uVar57 = -(ulong)(uVar60 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar60 << 1;
      puVar44 = (undefined *)(local_7a8 + uVar57);
      if (local_7a8 == 0) {
        puVar44 = (undefined *)0x0;
      }
      local_75c = ec_tell_frac(local_768);
      local_6dc = 0;
      local_760 = 0;
      if (lVar61 != local_740) {
        local_760 = local_75c;
      }
      local_760 = param_16 - local_760;
      uVar60 = local_7dc - local_75c;
      iStack_5b8 = uVar60 - 1;
      if (lVar61 < local_790) {
        iVar51 = (int)(local_790 - lVar61);
        if (2 < local_790 - lVar61) {
          iVar51 = 3;
        }
        iVar56 = 0;
        if (iVar51 != 0) {
          iVar56 = local_760 / iVar51;
        }
        uVar8 = *(int *)(local_788 + lVar61 * 4) + iVar56;
        if ((int)uVar8 <= (int)uVar60) {
          uVar60 = uVar8;
        }
        if ((int)uVar60 < 0x4000) {
          local_6dc = uVar60 & ((int)uVar60 >> 0x1f ^ 0xffffffffU);
        }
        else {
          local_6dc = 0x3fff;
        }
      }
      iVar51 = (int)sVar7 - (int)sVar6;
      if ((local_7d0 != 0) &&
         (((int)*(short *)(local_748 + local_740 * 2) << (ulong)(param_18 & 0x1f) <=
           *(short *)(local_748 + lVar61 * 2) - iVar51 << (ulong)(param_18 & 0x1f) ||
          (lVar61 == local_730)))) {
        uVar60 = (uint)lVar61;
        if ((uint)local_778 != 0 && !bVar1) {
          uVar60 = (uint)local_778;
        }
        local_778 = (ulong)uVar60;
      }
      if (lVar61 == local_730) {
        lVar45 = *(long *)(local_750 + 0x18);
        iVar52 = (int)*(short *)(lVar45 + local_730 * 2);
        iVar56 = iVar52 - *(short *)(lVar45 + local_740 * 2) << (ulong)(param_18 & 0x1f);
        iVar52 = *(short *)(lVar45 + local_810 * 2) - iVar52 << (ulong)(param_18 & 0x1f);
        iVar65 = iVar56 * 2 - iVar52;
        uVar60 = iVar52 - iVar56;
        uVar62 = -(ulong)(uVar60 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar60 << 1;
        memcpy(local_770 + (long)iVar56 * 2,local_770 + (long)iVar65 * 2,uVar62);
        if ((int)local_728 != 0) {
          memcpy(local_798 + (long)iVar56 * 2,local_798 + (long)iVar65 * 2,uVar62);
        }
      }
      uVar54 = local_6dc;
      lVar69 = local_748;
      puVar71 = local_770;
      uVar8 = local_79c;
      lVar45 = local_7c0;
      uVar60 = iVar51 << (ulong)(param_18 & 0x1f);
      uVar62 = (ulong)uVar60;
      lVar46 = (long)*(int *)(local_750 + 0xc);
      if (lVar46 <= lVar61) {
        puVar44 = local_7b8;
      }
      iVar56 = *(int *)(local_7d8 + lVar61 * 4);
      puVar5 = (undefined *)(local_7c8 + uVar57);
      if (lVar46 <= lVar61) {
        puVar5 = local_770;
      }
      uStack_5c8 = CONCAT44(iVar56,(undefined4)uStack_5c8);
      puVar49 = local_720;
      if (((local_77c | lVar61 != local_718) & (uint)(lVar61 < lVar46)) == 0) {
        puVar49 = (undefined *)0x0;
      }
      iVar52 = (int)local_778;
      uVar70 = local_804;
      uVar104 = local_804;
      if (iVar52 == 0) {
        uVar57 = 0xffffffff;
      }
      else if ((local_814 | iVar56 < 0) == 1) {
        uVar47 = -(local_778 >> 0x1f & 1) & 0xfffffffe00000000 | (local_778 & 0xffffffff) << 1;
        iVar65 = -iVar52;
        iVar72 = (int)uVar73;
        uVar70 = iVar52 - 1;
        lVar46 = local_778 << 0x20;
        iVar56 = iVar52 + 1;
        uVar104 = (int)*(short *)(local_748 + uVar47) - (iVar51 + local_7cc) <<
                  (ulong)(param_18 & 0x1f);
        uVar104 = uVar104 & ((int)uVar104 >> 0x1f ^ 0xffffffffU);
        uVar57 = (ulong)uVar104;
        iVar51 = uVar104 + local_874;
        uVar59 = local_778;
        psVar50 = (short *)(local_898 + uVar47);
        iVar52 = iVar72 * iVar52 + -1;
        uVar104 = uVar70;
        do {
          uVar4 = uVar104;
          iVar42 = iVar52;
          iVar65 = iVar65 + 1;
          sVar6 = *psVar50;
          lVar46 = lVar46 + -0x100000000;
          uVar9 = (int)uVar59 - 1;
          uVar59 = (ulong)uVar9;
          iVar56 = iVar56 + -1;
          psVar50 = psVar50 + -1;
          iVar52 = iVar42 - iVar72;
          uVar104 = uVar4 - 1;
        } while (iVar51 < (int)sVar6 << (ulong)(param_18 & 0x1f));
        lVar67 = (long)(int)uVar70;
        do {
          uVar63 = uVar70;
          lVar67 = lVar67 + 1;
          if (lVar61 <= lVar67) break;
          uVar70 = uVar63 + 1;
        } while ((int)*(short *)(local_748 + lVar67 * 2) << (ulong)(param_18 & 0x1f) <
                 (int)(iVar51 + uVar60));
        uVar70 = 0;
        uVar10 = uVar9;
        if ((int)uVar9 <= (int)uVar63) {
          uVar10 = uVar63;
        }
        lVar46 = lVar46 >> 0x20;
        uVar10 = uVar10 - uVar9;
        uVar104 = 0;
        if ((6 < uVar10) && (local_7a8 == 0)) {
          if (uVar10 < 0xf) {
            uVar70 = 0;
            uVar104 = 0;
            uVar64 = 0;
          }
          else {
            uVar59 = (ulong)uVar10 + 1;
            uVar104 = uVar4;
            if ((int)uVar4 <= (int)uVar63) {
              uVar104 = uVar63;
            }
            bVar80 = 0;
            bVar82 = 0;
            bVar84 = 0;
            bVar86 = 0;
            bVar88 = 0;
            bVar90 = 0;
            bVar92 = 0;
            bVar94 = 0;
            bVar96 = 0;
            bVar98 = 0;
            bVar100 = 0;
            bVar102 = 0;
            bVar120 = 0;
            bVar122 = 0;
            bVar124 = 0;
            bVar126 = 0;
            pauVar68 = (undefined (*) [16])(local_7c0 + uVar73 * (long)(int)uVar4);
            uVar64 = uVar59 & 0x1fffffff0;
            uVar47 = (ulong)(iVar65 + uVar104) + 1 & 0x1fffffff0;
            bVar128 = 0;
            bVar130 = 0;
            bVar132 = 0;
            bVar134 = 0;
            bVar136 = 0;
            bVar138 = 0;
            bVar140 = 0;
            bVar142 = 0;
            bVar74 = 0;
            bVar75 = 0;
            bVar76 = 0;
            bVar78 = 0;
            bVar112 = 0;
            bVar114 = 0;
            bVar116 = 0;
            bVar118 = 0;
            bVar159 = 0;
            bVar160 = 0;
            bVar161 = 0;
            bVar162 = 0;
            bVar163 = 0;
            bVar164 = 0;
            bVar165 = 0;
            bVar166 = 0;
            bVar167 = 0;
            bVar168 = 0;
            bVar170 = 0;
            bVar172 = 0;
            bVar174 = 0;
            bVar176 = 0;
            bVar178 = 0;
            bVar180 = 0;
            auVar106 = ZEXT816(0);
            auVar145 = ZEXT816(0);
            auVar152 = ZEXT816(0);
            auVar155 = ZEXT816(0);
            auVar157 = ZEXT816(0);
            do {
              uStack_708 = *(undefined8 *)(*pauVar68 + 8);
              local_710 = *(undefined8 *)*pauVar68;
              auVar107 = *pauVar68;
              auVar186 = *pauVar68;
              auVar184 = *pauVar68;
              auVar185 = *pauVar68;
              uVar47 = uVar47 - 0x10;
              pauVar68 = (undefined (*) [16])(*pauVar68 + local_8d8);
              pauVar11 = (undefined (*) [16])(local_7c0 + iVar42);
              iVar42 = iVar42 + local_8cc;
              auVar187._8_8_ = uStack_6f8;
              auVar187._0_8_ = uStack_700;
              auVar185 = a64_TBL(ZEXT816(0),auVar185,auVar187,_DAT_004c4a50);
              auVar34._9_7_ = _UNK_004c4d79;
              auVar34._0_9_ = _DAT_004c4d70;
              auVar188._8_8_ = uStack_6f8;
              auVar188._0_8_ = uStack_700;
              auVar187 = a64_TBL(ZEXT816(0),auVar184,auVar188,_DAT_004c37b0);
              auVar189._8_8_ = uStack_6f8;
              auVar189._0_8_ = uStack_700;
              auVar188 = a64_TBL(ZEXT816(0),auVar186,auVar189,auVar34);
              auVar31._8_8_ = uStack_6f8;
              auVar31._0_8_ = uStack_700;
              auVar189 = a64_TBL(ZEXT816(0),auVar107,auVar31,_DAT_004c4f40);
              auVar146[0] = auVar145[0] | auVar185[0];
              auVar146[1] = auVar145[1] | auVar185[1];
              auVar146[2] = auVar145[2] | auVar185[2];
              auVar146[3] = auVar145[3] | auVar185[3];
              auVar146[4] = auVar145[4] | auVar185[4];
              auVar146[5] = auVar145[5] | auVar185[5];
              auVar146[6] = auVar145[6] | auVar185[6];
              auVar146[7] = auVar145[7] | auVar185[7];
              auVar146[8] = auVar145[8] | auVar185[8];
              auVar146[9] = auVar145[9] | auVar185[9];
              auVar146[10] = auVar145[10] | auVar185[10];
              auVar146[11] = auVar145[11] | auVar185[11];
              auVar146[12] = auVar145[12] | auVar185[12];
              auVar146[13] = auVar145[13] | auVar185[13];
              auVar146[14] = auVar145[14] | auVar185[14];
              auVar146[15] = auVar145[15] | auVar185[15];
              auVar145._8_8_ = uStack_6f8;
              auVar145._0_8_ = uStack_700;
              auVar145 = a64_TBL(ZEXT816(0),*pauVar11,auVar145,_DAT_004c4a50);
              auVar185._8_8_ = uStack_6f8;
              auVar185._0_8_ = uStack_700;
              auVar185 = a64_TBL(ZEXT816(0),*pauVar11,auVar185,_DAT_004c37b0);
              auVar184._8_8_ = uStack_6f8;
              auVar184._0_8_ = uStack_700;
              auVar184 = a64_TBL(ZEXT816(0),*pauVar11,auVar184,auVar34);
              auVar186._8_8_ = uStack_6f8;
              auVar186._0_8_ = uStack_700;
              auVar186 = a64_TBL(ZEXT816(0),*pauVar11,auVar186,_DAT_004c4f40);
              bVar128 = bVar128 | auVar187[0];
              bVar130 = bVar130 | auVar187[1];
              bVar132 = bVar132 | auVar187[2];
              bVar134 = bVar134 | auVar187[3];
              bVar136 = bVar136 | auVar187[4];
              bVar138 = bVar138 | auVar187[5];
              bVar140 = bVar140 | auVar187[6];
              bVar142 = bVar142 | auVar187[7];
              bVar74 = bVar74 | auVar187[8];
              bVar75 = bVar75 | auVar187[9];
              bVar76 = bVar76 | auVar187[10];
              bVar78 = bVar78 | auVar187[11];
              bVar112 = bVar112 | auVar187[12];
              bVar114 = bVar114 | auVar187[13];
              bVar116 = bVar116 | auVar187[14];
              bVar118 = bVar118 | auVar187[15];
              auVar107[0] = auVar106[0] | auVar188[0];
              auVar107[1] = auVar106[1] | auVar188[1];
              auVar107[2] = auVar106[2] | auVar188[2];
              auVar107[3] = auVar106[3] | auVar188[3];
              auVar107[4] = auVar106[4] | auVar188[4];
              auVar107[5] = auVar106[5] | auVar188[5];
              auVar107[6] = auVar106[6] | auVar188[6];
              auVar107[7] = auVar106[7] | auVar188[7];
              auVar107[8] = auVar106[8] | auVar188[8];
              auVar107[9] = auVar106[9] | auVar188[9];
              auVar107[10] = auVar106[10] | auVar188[10];
              auVar107[11] = auVar106[11] | auVar188[11];
              auVar107[12] = auVar106[12] | auVar188[12];
              auVar107[13] = auVar106[13] | auVar188[13];
              auVar107[14] = auVar106[14] | auVar188[14];
              auVar107[15] = auVar106[15] | auVar188[15];
              bVar80 = bVar80 | auVar189[0];
              bVar82 = bVar82 | auVar189[1];
              bVar84 = bVar84 | auVar189[2];
              bVar86 = bVar86 | auVar189[3];
              bVar88 = bVar88 | auVar189[4];
              bVar90 = bVar90 | auVar189[5];
              bVar92 = bVar92 | auVar189[6];
              bVar94 = bVar94 | auVar189[7];
              bVar96 = bVar96 | auVar189[8];
              bVar98 = bVar98 | auVar189[9];
              bVar100 = bVar100 | auVar189[10];
              bVar102 = bVar102 | auVar189[11];
              bVar120 = bVar120 | auVar189[12];
              bVar122 = bVar122 | auVar189[13];
              bVar124 = bVar124 | auVar189[14];
              bVar126 = bVar126 | auVar189[15];
              bVar159 = bVar159 | auVar145[0];
              bVar160 = bVar160 | auVar145[1];
              bVar161 = bVar161 | auVar145[2];
              bVar162 = bVar162 | auVar145[3];
              bVar163 = bVar163 | auVar145[4];
              bVar164 = bVar164 | auVar145[5];
              bVar165 = bVar165 | auVar145[6];
              bVar166 = bVar166 | auVar145[7];
              bVar167 = bVar167 | auVar145[8];
              bVar168 = bVar168 | auVar145[9];
              bVar170 = bVar170 | auVar145[10];
              bVar172 = bVar172 | auVar145[11];
              bVar174 = bVar174 | auVar145[12];
              bVar176 = bVar176 | auVar145[13];
              bVar178 = bVar178 | auVar145[14];
              bVar180 = bVar180 | auVar145[15];
              auVar158[0] = auVar157[0] | auVar185[0];
              auVar158[1] = auVar157[1] | auVar185[1];
              auVar158[2] = auVar157[2] | auVar185[2];
              auVar158[3] = auVar157[3] | auVar185[3];
              auVar158[4] = auVar157[4] | auVar185[4];
              auVar158[5] = auVar157[5] | auVar185[5];
              auVar158[6] = auVar157[6] | auVar185[6];
              auVar158[7] = auVar157[7] | auVar185[7];
              auVar158[8] = auVar157[8] | auVar185[8];
              auVar158[9] = auVar157[9] | auVar185[9];
              auVar158[10] = auVar157[10] | auVar185[10];
              auVar158[11] = auVar157[11] | auVar185[11];
              auVar158[12] = auVar157[12] | auVar185[12];
              auVar158[13] = auVar157[13] | auVar185[13];
              auVar158[14] = auVar157[14] | auVar185[14];
              auVar158[15] = auVar157[15] | auVar185[15];
              auVar156[0] = auVar155[0] | auVar184[0];
              auVar156[1] = auVar155[1] | auVar184[1];
              auVar156[2] = auVar155[2] | auVar184[2];
              auVar156[3] = auVar155[3] | auVar184[3];
              auVar156[4] = auVar155[4] | auVar184[4];
              auVar156[5] = auVar155[5] | auVar184[5];
              auVar156[6] = auVar155[6] | auVar184[6];
              auVar156[7] = auVar155[7] | auVar184[7];
              auVar156[8] = auVar155[8] | auVar184[8];
              auVar156[9] = auVar155[9] | auVar184[9];
              auVar156[10] = auVar155[10] | auVar184[10];
              auVar156[11] = auVar155[11] | auVar184[11];
              auVar156[12] = auVar155[12] | auVar184[12];
              auVar156[13] = auVar155[13] | auVar184[13];
              auVar156[14] = auVar155[14] | auVar184[14];
              auVar156[15] = auVar155[15] | auVar184[15];
              auVar153[0] = auVar152[0] | auVar186[0];
              auVar153[1] = auVar152[1] | auVar186[1];
              auVar153[2] = auVar152[2] | auVar186[2];
              auVar153[3] = auVar152[3] | auVar186[3];
              auVar153[4] = auVar152[4] | auVar186[4];
              auVar153[5] = auVar152[5] | auVar186[5];
              auVar153[6] = auVar152[6] | auVar186[6];
              auVar153[7] = auVar152[7] | auVar186[7];
              auVar153[8] = auVar152[8] | auVar186[8];
              auVar153[9] = auVar152[9] | auVar186[9];
              auVar153[10] = auVar152[10] | auVar186[10];
              auVar153[11] = auVar152[11] | auVar186[11];
              auVar153[12] = auVar152[12] | auVar186[12];
              auVar153[13] = auVar152[13] | auVar186[13];
              auVar153[14] = auVar152[14] | auVar186[14];
              auVar153[15] = auVar152[15] | auVar186[15];
              auVar106 = auVar107;
              auVar145 = auVar146;
              auVar152 = auVar153;
              auVar155 = auVar156;
              auVar157 = auVar158;
            } while (uVar47 != 0);
            bVar159 = auVar153[0] | auVar158[0] | auVar156[0] | bVar159;
            bVar160 = auVar153[1] | auVar158[1] | auVar156[1] | bVar160;
            bVar161 = auVar153[2] | auVar158[2] | auVar156[2] | bVar161;
            bVar162 = auVar153[3] | auVar158[3] | auVar156[3] | bVar162;
            bVar163 = auVar153[4] | auVar158[4] | auVar156[4] | bVar163;
            bVar164 = auVar153[5] | auVar158[5] | auVar156[5] | bVar164;
            bVar165 = auVar153[6] | auVar158[6] | auVar156[6] | bVar165;
            bVar166 = auVar153[7] | auVar158[7] | auVar156[7] | bVar166;
            bVar167 = auVar153[8] | auVar158[8] | auVar156[8] | bVar167;
            bVar168 = auVar153[9] | auVar158[9] | auVar156[9] | bVar168;
            bVar170 = auVar153[10] | auVar158[10] | auVar156[10] | bVar170;
            bVar172 = auVar153[11] | auVar158[11] | auVar156[11] | bVar172;
            bVar174 = auVar153[12] | auVar158[12] | auVar156[12] | bVar174;
            bVar176 = auVar153[13] | auVar158[13] | auVar156[13] | bVar176;
            bVar178 = auVar153[14] | auVar158[14] | auVar156[14] | bVar178;
            bVar180 = auVar153[15] | auVar158[15] | auVar156[15] | bVar180;
            bVar80 = bVar80 | bVar128 | auVar107[0] | auVar146[0];
            bVar82 = bVar82 | bVar130 | auVar107[1] | auVar146[1];
            bVar84 = bVar84 | bVar132 | auVar107[2] | auVar146[2];
            bVar86 = bVar86 | bVar134 | auVar107[3] | auVar146[3];
            bVar88 = bVar88 | bVar136 | auVar107[4] | auVar146[4];
            bVar90 = bVar90 | bVar138 | auVar107[5] | auVar146[5];
            bVar92 = bVar92 | bVar140 | auVar107[6] | auVar146[6];
            bVar94 = bVar94 | bVar142 | auVar107[7] | auVar146[7];
            bVar96 = bVar96 | bVar74 | auVar107[8] | auVar146[8];
            bVar98 = bVar98 | bVar75 | auVar107[9] | auVar146[9];
            bVar100 = bVar100 | bVar76 | auVar107[10] | auVar146[10];
            bVar102 = bVar102 | bVar78 | auVar107[11] | auVar146[11];
            bVar120 = bVar120 | bVar112 | auVar107[12] | auVar146[12];
            bVar122 = bVar122 | bVar114 | auVar107[13] | auVar146[13];
            bVar124 = bVar124 | bVar116 | auVar107[14] | auVar146[14];
            bVar126 = bVar126 | bVar118 | auVar107[15] | auVar146[15];
            auVar155[1] = bVar160;
            auVar155[0] = bVar159;
            auVar155[2] = bVar161;
            auVar155[3] = bVar162;
            auVar155[4] = bVar163;
            auVar155[5] = bVar164;
            auVar155[6] = bVar165;
            auVar155[7] = bVar166;
            auVar155[8] = bVar167;
            auVar155[9] = bVar168;
            auVar155[10] = bVar170;
            auVar155[11] = bVar172;
            auVar155[12] = bVar174;
            auVar155[13] = bVar176;
            auVar155[14] = bVar178;
            auVar155[15] = bVar180;
            auVar157[1] = bVar160;
            auVar157[0] = bVar159;
            auVar157[2] = bVar161;
            auVar157[3] = bVar162;
            auVar157[4] = bVar163;
            auVar157[5] = bVar164;
            auVar157[6] = bVar165;
            auVar157[7] = bVar166;
            auVar157[8] = bVar167;
            auVar157[9] = bVar168;
            auVar157[10] = bVar170;
            auVar157[11] = bVar172;
            auVar157[12] = bVar174;
            auVar157[13] = bVar176;
            auVar157[14] = bVar178;
            auVar157[15] = bVar180;
            auVar145 = NEON_ext(auVar155,auVar157,8,1);
            auVar106[1] = bVar82;
            auVar106[0] = bVar80;
            auVar106[2] = bVar84;
            auVar106[3] = bVar86;
            auVar106[4] = bVar88;
            auVar106[5] = bVar90;
            auVar106[6] = bVar92;
            auVar106[7] = bVar94;
            auVar106[8] = bVar96;
            auVar106[9] = bVar98;
            auVar106[10] = bVar100;
            auVar106[11] = bVar102;
            auVar106[12] = bVar120;
            auVar106[13] = bVar122;
            auVar106[14] = bVar124;
            auVar106[15] = bVar126;
            auVar152[1] = bVar82;
            auVar152[0] = bVar80;
            auVar152[2] = bVar84;
            auVar152[3] = bVar86;
            auVar152[4] = bVar88;
            auVar152[5] = bVar90;
            auVar152[6] = bVar92;
            auVar152[7] = bVar94;
            auVar152[8] = bVar96;
            auVar152[9] = bVar98;
            auVar152[10] = bVar100;
            auVar152[11] = bVar102;
            auVar152[12] = bVar120;
            auVar152[13] = bVar122;
            auVar152[14] = bVar124;
            auVar152[15] = bVar126;
            auVar106 = NEON_ext(auVar106,auVar152,8,1);
            uVar104 = CONCAT13(bVar162 | auVar145[3],
                               CONCAT12(bVar161 | auVar145[2],
                                        CONCAT11(bVar160 | auVar145[1],bVar159 | auVar145[0])));
            uVar104 = uVar104 | (uint)(CONCAT17(bVar166 | auVar145[7],
                                                CONCAT16(bVar165 | auVar145[6],
                                                         CONCAT15(bVar164 | auVar145[5],
                                                                  CONCAT14(bVar163 | auVar145[4],
                                                                           uVar104)))) >> 0x20);
            uVar70 = CONCAT13(bVar86 | auVar106[3],
                              CONCAT12(bVar84 | auVar106[2],
                                       CONCAT11(bVar82 | auVar106[1],bVar80 | auVar106[0]))) |
                     CONCAT13(bVar94 | auVar106[7],
                              CONCAT12(bVar92 | auVar106[6],
                                       CONCAT11(bVar90 | auVar106[5],bVar88 | auVar106[4])));
            local_830 = uVar57;
            local_738 = puVar5;
            if (uVar59 == uVar64) goto LAB_00e732c0;
            if (((uint)uVar59 >> 3 & 1) == 0) {
              lVar46 = lVar46 + uVar64;
              goto LAB_00e7327c;
            }
          }
          bVar80 = 0;
          bVar82 = 0;
          bVar84 = 0;
          bVar86 = 0;
          bVar88 = 0;
          bVar90 = 0;
          bVar92 = 0;
          bVar94 = 0;
          bVar96 = 0;
          bVar98 = 0;
          bVar100 = 0;
          bVar102 = 0;
          uVar10 = uVar9;
          if ((int)uVar9 <= (int)uVar63) {
            uVar10 = uVar63;
          }
          bVar120 = 0;
          bVar122 = 0;
          bVar124 = 0;
          bVar126 = 0;
          bVar128 = 0;
          bVar130 = 0;
          bVar132 = 0;
          bVar134 = 0;
          bVar136 = 0;
          bVar138 = 0;
          bVar140 = 0;
          bVar142 = 0;
          uVar3 = uVar4;
          if ((int)uVar4 <= (int)uVar63) {
            uVar3 = uVar63;
          }
          uVar59 = (ulong)(uVar10 - uVar9) + 1;
          uVar47 = uVar59 & 0x1fffffff8;
          bVar74 = (byte)uVar70;
          bVar75 = (byte)(uVar70 >> 8);
          bVar76 = (byte)(uVar70 >> 0x10);
          bVar78 = (byte)(uVar70 >> 0x18);
          bVar112 = (byte)uVar104;
          bVar114 = (byte)(uVar104 >> 8);
          bVar116 = (byte)(uVar104 >> 0x10);
          bVar118 = (byte)(uVar104 >> 0x18);
          lVar66 = 0;
          lVar46 = lVar46 + uVar47;
          lVar67 = uVar64 - ((ulong)(iVar65 + uVar3) + 1 & 0x1fffffff8);
          auVar106 = ZEXT816(0);
          auVar145 = ZEXT816(0);
          do {
            auVar151._0_8_ = *(ulong *)(local_7c0 + uVar73 * (uVar64 + (long)(int)uVar4) + lVar66);
            auVar151._8_8_ = 0;
            auVar154._8_8_ = uStack_6f8;
            auVar154._0_8_ = uStack_700;
            lVar67 = lVar67 + 8;
            auVar182._0_8_ =
                 *(ulong *)(local_7c0 + (iVar72 * ((int)uVar64 + iVar56) + -1 + (int)lVar66));
            auVar182._8_8_ = 0;
            lVar66 = lVar66 + local_8c0;
            auVar183._8_8_ = uStack_6f8;
            auVar183._0_8_ = uStack_700;
            auVar20[9] = 0x10;
            auVar20._0_9_ = _DAT_004c4d70;
            auVar20[10] = 0x10;
            auVar20[11] = 0x10;
            auVar20[12] = 7;
            auVar20[13] = 0x10;
            auVar20[14] = 0x10;
            auVar20[15] = 0x10;
            auVar185 = a64_TBL(ZEXT816(0),auVar151,auVar154,auVar20);
            auVar152 = a64_TBL(ZEXT816(0),auVar151,auVar154,_DAT_004c4f40);
            auVar21[9] = 0x10;
            auVar21._0_9_ = _DAT_004c4d70;
            auVar21[10] = 0x10;
            auVar21[11] = 0x10;
            auVar21[12] = 7;
            auVar21[13] = 0x10;
            auVar21[14] = 0x10;
            auVar21[15] = 0x10;
            auVar155 = a64_TBL(ZEXT816(0),auVar182,auVar183,auVar21);
            auVar157 = a64_TBL(ZEXT816(0),auVar182,auVar183,_DAT_004c4f40);
            auVar105[0] = auVar106[0] | auVar185[0];
            auVar105[1] = auVar106[1] | auVar185[1];
            auVar105[2] = auVar106[2] | auVar185[2];
            auVar105[3] = auVar106[3] | auVar185[3];
            auVar105[4] = auVar106[4] | auVar185[4];
            auVar105[5] = auVar106[5] | auVar185[5];
            auVar105[6] = auVar106[6] | auVar185[6];
            auVar105[7] = auVar106[7] | auVar185[7];
            auVar105[8] = auVar106[8] | auVar185[8];
            auVar105[9] = auVar106[9] | auVar185[9];
            auVar105[10] = auVar106[10] | auVar185[10];
            auVar105[11] = auVar106[11] | auVar185[11];
            auVar105[12] = auVar106[12] | auVar185[12];
            auVar105[13] = auVar106[13] | auVar185[13];
            auVar105[14] = auVar106[14] | auVar185[14];
            auVar105[15] = auVar106[15] | auVar185[15];
            bVar74 = bVar74 | auVar152[0];
            bVar75 = bVar75 | auVar152[1];
            bVar76 = bVar76 | auVar152[2];
            bVar78 = bVar78 | auVar152[3];
            bVar80 = bVar80 | auVar152[4];
            bVar82 = bVar82 | auVar152[5];
            bVar84 = bVar84 | auVar152[6];
            bVar86 = bVar86 | auVar152[7];
            bVar88 = bVar88 | auVar152[8];
            bVar90 = bVar90 | auVar152[9];
            bVar92 = bVar92 | auVar152[10];
            bVar94 = bVar94 | auVar152[11];
            bVar96 = bVar96 | auVar152[12];
            bVar98 = bVar98 | auVar152[13];
            bVar100 = bVar100 | auVar152[14];
            bVar102 = bVar102 | auVar152[15];
            auVar144[0] = auVar145[0] | auVar155[0];
            auVar144[1] = auVar145[1] | auVar155[1];
            auVar144[2] = auVar145[2] | auVar155[2];
            auVar144[3] = auVar145[3] | auVar155[3];
            auVar144[4] = auVar145[4] | auVar155[4];
            auVar144[5] = auVar145[5] | auVar155[5];
            auVar144[6] = auVar145[6] | auVar155[6];
            auVar144[7] = auVar145[7] | auVar155[7];
            auVar144[8] = auVar145[8] | auVar155[8];
            auVar144[9] = auVar145[9] | auVar155[9];
            auVar144[10] = auVar145[10] | auVar155[10];
            auVar144[11] = auVar145[11] | auVar155[11];
            auVar144[12] = auVar145[12] | auVar155[12];
            auVar144[13] = auVar145[13] | auVar155[13];
            auVar144[14] = auVar145[14] | auVar155[14];
            auVar144[15] = auVar145[15] | auVar155[15];
            bVar112 = bVar112 | auVar157[0];
            bVar114 = bVar114 | auVar157[1];
            bVar116 = bVar116 | auVar157[2];
            bVar118 = bVar118 | auVar157[3];
            bVar120 = bVar120 | auVar157[4];
            bVar122 = bVar122 | auVar157[5];
            bVar124 = bVar124 | auVar157[6];
            bVar126 = bVar126 | auVar157[7];
            bVar128 = bVar128 | auVar157[8];
            bVar130 = bVar130 | auVar157[9];
            bVar132 = bVar132 | auVar157[10];
            bVar134 = bVar134 | auVar157[11];
            bVar136 = bVar136 | auVar157[12];
            bVar138 = bVar138 | auVar157[13];
            bVar140 = bVar140 | auVar157[14];
            bVar142 = bVar142 | auVar157[15];
            auVar106 = auVar105;
            auVar145 = auVar144;
          } while (lVar67 != 0);
          bVar112 = bVar112 | auVar144[0];
          bVar114 = bVar114 | auVar144[1];
          bVar116 = bVar116 | auVar144[2];
          bVar118 = bVar118 | auVar144[3];
          bVar120 = bVar120 | auVar144[4];
          bVar122 = bVar122 | auVar144[5];
          bVar124 = bVar124 | auVar144[6];
          bVar126 = bVar126 | auVar144[7];
          bVar74 = bVar74 | auVar105[0];
          bVar75 = bVar75 | auVar105[1];
          bVar76 = bVar76 | auVar105[2];
          bVar78 = bVar78 | auVar105[3];
          bVar80 = bVar80 | auVar105[4];
          bVar82 = bVar82 | auVar105[5];
          bVar84 = bVar84 | auVar105[6];
          bVar86 = bVar86 | auVar105[7];
          auVar14[1] = bVar114;
          auVar14[0] = bVar112;
          auVar14[2] = bVar116;
          auVar14[3] = bVar118;
          auVar14[4] = bVar120;
          auVar14[5] = bVar122;
          auVar14[6] = bVar124;
          auVar14[7] = bVar126;
          auVar14[8] = bVar128 | auVar144[8];
          auVar14[9] = bVar130 | auVar144[9];
          auVar14[10] = bVar132 | auVar144[10];
          auVar14[11] = bVar134 | auVar144[11];
          auVar14[12] = bVar136 | auVar144[12];
          auVar14[13] = bVar138 | auVar144[13];
          auVar14[14] = bVar140 | auVar144[14];
          auVar14[15] = bVar142 | auVar144[15];
          auVar15[1] = bVar114;
          auVar15[0] = bVar112;
          auVar15[2] = bVar116;
          auVar15[3] = bVar118;
          auVar15[4] = bVar120;
          auVar15[5] = bVar122;
          auVar15[6] = bVar124;
          auVar15[7] = bVar126;
          auVar15[8] = bVar128 | auVar144[8];
          auVar15[9] = bVar130 | auVar144[9];
          auVar15[10] = bVar132 | auVar144[10];
          auVar15[11] = bVar134 | auVar144[11];
          auVar15[12] = bVar136 | auVar144[12];
          auVar15[13] = bVar138 | auVar144[13];
          auVar15[14] = bVar140 | auVar144[14];
          auVar15[15] = bVar142 | auVar144[15];
          auVar106 = NEON_ext(auVar14,auVar15,8,1);
          auVar12[1] = bVar75;
          auVar12[0] = bVar74;
          auVar12[2] = bVar76;
          auVar12[3] = bVar78;
          auVar12[4] = bVar80;
          auVar12[5] = bVar82;
          auVar12[6] = bVar84;
          auVar12[7] = bVar86;
          auVar12[8] = bVar88 | auVar105[8];
          auVar12[9] = bVar90 | auVar105[9];
          auVar12[10] = bVar92 | auVar105[10];
          auVar12[11] = bVar94 | auVar105[11];
          auVar12[12] = bVar96 | auVar105[12];
          auVar12[13] = bVar98 | auVar105[13];
          auVar12[14] = bVar100 | auVar105[14];
          auVar12[15] = bVar102 | auVar105[15];
          auVar13[1] = bVar75;
          auVar13[0] = bVar74;
          auVar13[2] = bVar76;
          auVar13[3] = bVar78;
          auVar13[4] = bVar80;
          auVar13[5] = bVar82;
          auVar13[6] = bVar84;
          auVar13[7] = bVar86;
          auVar13[8] = bVar88 | auVar105[8];
          auVar13[9] = bVar90 | auVar105[9];
          auVar13[10] = bVar92 | auVar105[10];
          auVar13[11] = bVar94 | auVar105[11];
          auVar13[12] = bVar96 | auVar105[12];
          auVar13[13] = bVar98 | auVar105[13];
          auVar13[14] = bVar100 | auVar105[14];
          auVar13[15] = bVar102 | auVar105[15];
          auVar145 = NEON_ext(auVar12,auVar13,8,1);
          uVar104 = CONCAT13(bVar118 | auVar106[3],
                             CONCAT12(bVar116 | auVar106[2],
                                      CONCAT11(bVar114 | auVar106[1],bVar112 | auVar106[0])));
          uVar104 = uVar104 | (uint)(CONCAT17(bVar126 | auVar106[7],
                                              CONCAT16(bVar124 | auVar106[6],
                                                       CONCAT15(bVar122 | auVar106[5],
                                                                CONCAT14(bVar120 | auVar106[4],
                                                                         uVar104)))) >> 0x20);
          uVar70 = CONCAT13(bVar78 | auVar145[3],
                            CONCAT12(bVar76 | auVar145[2],
                                     CONCAT11(bVar75 | auVar145[1],bVar74 | auVar145[0]))) |
                   CONCAT13(bVar86 | auVar145[7],
                            CONCAT12(bVar84 | auVar145[6],
                                     CONCAT11(bVar82 | auVar145[5],bVar80 | auVar145[4])));
          local_738 = puVar5;
          if (uVar59 == uVar47) goto LAB_00e732c0;
        }
LAB_00e7327c:
        if ((int)uVar4 <= (int)uVar63) {
          uVar4 = uVar63;
        }
        lVar67 = 0;
        iVar51 = (uVar4 - (int)lVar46) + 1;
        do {
          iVar56 = (int)lVar67;
          pbVar2 = (byte *)(local_7c0 + uVar73 * lVar46 + lVar67);
          lVar67 = lVar67 + uVar73;
          iVar51 = iVar51 + -1;
          uVar70 = uVar70 | *pbVar2;
          uVar104 = uVar104 | *(byte *)(local_7c0 + (iVar72 + iVar72 * (int)lVar46 + -1 + iVar56));
          local_738 = puVar5;
        } while (iVar51 != 0);
      }
      else {
        uVar57 = 0xffffffff;
      }
LAB_00e732c0:
      iVar51 = (int)uVar57;
      local_720 = puVar49;
      local_6e8 = uVar62;
      local_6d8 = puVar44;
      if ((int)local_728 == 0) {
LAB_00e733c4:
        if (puVar44 == (undefined *)0x0) {
          puVar44 = (undefined *)0x0;
          if (iVar51 != -1) {
            puVar44 = local_770 + (long)iVar51 * 2;
          }
          puVar71 = (undefined *)0x0;
          if (lVar61 != local_718) {
            puVar71 = local_7f0 +
                      (long)((int)*(short *)(local_748 + lVar61 * 2) << (ulong)(param_18 & 0x1f)) *
                      2;
          }
          *(uint *)(puVar58 + -0x10) = uVar104 | uVar70;
          *(undefined **)(puVar58 + -0x18) = puVar49;
          *(undefined2 *)(puVar58 + -0x20) = 0x7fff;
          uVar41 = FUN_00e73d78(&local_5e0,puVar5,uVar62,uVar54,uVar8,puVar44,param_18,puVar71);
        }
        else {
          if ((local_77c & lVar61 < local_7b0) == 1) {
            iVar56 = *(int *)(local_890 + lVar61 * 4);
            auVar36._8_4_ = uStack_5a8;
            auVar36._0_8_ = local_5b0;
            auVar36._12_4_ = uStack_5a4;
            uStack_638 = CONCAT44(uStack_594,uStack_598);
            local_640 = CONCAT44(uStack_59c,local_5a0);
            iVar52 = *(int *)(local_890 + (lVar61 + *(int *)(local_750 + 8)) * 4);
            uStack_648 = auVar36._8_8_;
            local_650 = local_5b0;
            uStack_5e8 = local_820[1];
            local_5f0 = *local_820;
            iVar65 = iVar56;
            if (iVar52 <= iVar56) {
              iVar65 = iVar52;
            }
            uStack_88 = SUB168(*local_828,8);
            local_90 = SUB168(*local_828,0);
            uStack_658 = CONCAT44(uStack_5b4,iStack_5b8);
            iVar56 = iVar65 / 3 + iVar56;
            iVar52 = iVar65 / 3 + iVar52;
            local_850 = *local_768;
            iVar65 = iVar56;
            if (iVar56 <= iVar52) {
              iVar65 = iVar52;
            }
            local_680 = CONCAT44(uStack_5dc,local_5e0);
            uStack_668 = uStack_5c8;
            local_670 = local_5d0;
            local_660 = local_5c0;
            local_848 = *(int *)(local_768 + 1);
            local_858 = (ulong)*(uint *)((long)local_768 + 0x1c);
            uVar54 = (uint)LZCOUNT(iVar65 + 1);
            local_80 = *(undefined8 *)local_828[1];
            lStack_678 = lStack_5d8;
            uVar8 = iVar56 >> (0x11 - uVar54 & 0x1f);
            if (0x10 < uVar54) {
              uVar8 = iVar56 << (ulong)(uVar54 - 0x11 & 0x1f);
            }
            local_838 = (ulong)uVar8;
            uVar8 = iVar52 >> (0x11 - uVar54 & 0x1f);
            if (0x10 < uVar54) {
              uVar8 = iVar52 << (ulong)(uVar54 - 0x11 & 0x1f);
            }
            local_830 = (ulong)uVar8;
            uVar73 = -(ulong)(uVar60 >> 0x1f) & 0xfffffffe00000000 | uVar62 << 1;
            local_738 = puVar5;
            memcpy(local_7f8,puVar5,uVar73);
            local_728 = uVar73;
            memcpy(local_800,local_6d8,uVar73);
            puVar5 = local_6d8;
            uVar8 = local_6dc;
            uVar57 = local_6e8;
            pvVar38 = local_738;
            uVar60 = local_79c;
            puVar44 = (undefined *)0x0;
            if (iVar51 != -1) {
              puVar44 = puVar71 + (long)iVar51 * 2;
            }
            puVar71 = (undefined *)0x0;
            local_5a0 = 0xffffffff;
            if (lVar61 != local_718) {
              puVar71 = local_7f0 +
                        (long)((int)*(short *)(lVar69 + lVar61 * 2) << (ulong)(param_18 & 0x1f)) * 2
              ;
            }
            local_844 = uVar104 | uVar70;
            uVar73 = local_6e8 & 0xffffffff;
            *(uint *)(puVar58 + -0x10) = local_844;
            puVar49 = local_720;
            local_840 = puVar44;
            *(undefined **)(puVar58 + -0x20) = puVar71;
            *(undefined **)(puVar58 + -0x18) = puVar49;
            local_878 = FUN_00e74528(&local_5e0,pvVar38,puVar5,uVar73,uVar8,uVar60,puVar44,param_18)
            ;
            sVar39 = local_728;
            uVar73 = local_8a0;
            uVar60 = (uint)uVar57;
            local_870 = (long)(short)local_838;
            if ((int)uVar60 < 1) {
              local_838 = 0;
              iVar51 = 0;
            }
            else {
              if (uVar60 < 0x10) {
                uVar59 = 0;
                iVar51 = 0;
LAB_00e736f4:
                lVar46 = uVar57 - uVar59;
                psVar50 = (short *)((long)local_738 + uVar59 * 2);
                psVar55 = (short *)(local_7f8 + uVar59 * 2);
                do {
                  lVar46 = lVar46 + -1;
                  iVar51 = iVar51 + (int)*psVar50 * (int)*psVar55;
                  psVar50 = psVar50 + 1;
                  psVar55 = psVar55 + 1;
                } while (lVar46 != 0);
              }
              else {
                uVar59 = uVar57 & 0xfffffff0;
                uVar41 = 0;
                uVar40 = 0;
                uVar77 = 0;
                uVar79 = 0;
                uVar81 = 0;
                uVar83 = 0;
                uVar85 = 0;
                uVar87 = 0;
                uVar89 = 0;
                uVar91 = 0;
                uVar93 = 0;
                uVar95 = 0;
                uVar97 = 0;
                uVar99 = 0;
                uVar101 = 0;
                uVar103 = 0;
                uVar113 = 0;
                uVar115 = 0;
                uVar117 = 0;
                uVar119 = 0;
                uVar121 = 0;
                uVar123 = 0;
                uVar125 = 0;
                uVar127 = 0;
                uVar129 = 0;
                uVar131 = 0;
                uVar133 = 0;
                uVar135 = 0;
                uVar137 = 0;
                uVar139 = 0;
                uVar141 = 0;
                uVar143 = 0;
                pVar53 = (unkbyte9 *)((long)local_738 + 0x10);
                uVar62 = uVar59;
                pauVar68 = local_8b0;
                auVar106 = ZEXT816(0);
                auVar145 = ZEXT816(0);
                do {
                  auVar152 = pauVar68[-1];
                  auVar155 = *pauVar68;
                  pauVar68 = pauVar68 + 2;
                  uVar62 = uVar62 - 0x10;
                  auVar185 = NEON_ext(auVar152,auVar152,8,1);
                  auVar157 = *(undefined (*) [16])(pVar53 + -1);
                  uVar30 = *(undefined8 *)((long)pVar53 + 8);
                  uVar169 = (undefined)((ulong)uVar30 >> 8);
                  uVar171 = (undefined)((ulong)uVar30 >> 0x10);
                  uVar173 = (undefined)((ulong)uVar30 >> 0x18);
                  uVar175 = (undefined)((ulong)uVar30 >> 0x20);
                  uVar177 = (undefined)((ulong)uVar30 >> 0x28);
                  uVar179 = (undefined)((ulong)uVar30 >> 0x30);
                  uVar181 = (undefined)((ulong)uVar30 >> 0x38);
                  uVar30 = *(undefined8 *)pVar53;
                  Var33 = *pVar53;
                  Var32 = *pVar53;
                  auVar184 = NEON_ext(auVar155,auVar155,8,1);
                  pVar53 = pVar53 + 2;
                  auVar186 = NEON_ext(auVar157,auVar157,8,1);
                  iVar51 = CONCAT13(uVar79,CONCAT12(uVar77,CONCAT11(uVar40,uVar41))) +
                           (int)auVar157._0_2_ * (int)auVar152._0_2_;
                  uVar41 = (undefined)iVar51;
                  uVar40 = (undefined)((uint)iVar51 >> 8);
                  uVar77 = (undefined)((uint)iVar51 >> 0x10);
                  uVar79 = (undefined)((uint)iVar51 >> 0x18);
                  iVar56 = CONCAT13(uVar87,CONCAT12(uVar85,CONCAT11(uVar83,uVar81))) +
                           (int)auVar157._2_2_ * (int)auVar152._2_2_;
                  uVar81 = (undefined)iVar56;
                  uVar83 = (undefined)((uint)iVar56 >> 8);
                  uVar85 = (undefined)((uint)iVar56 >> 0x10);
                  uVar87 = (undefined)((uint)iVar56 >> 0x18);
                  iVar52 = CONCAT13(uVar95,CONCAT12(uVar93,CONCAT11(uVar91,uVar89))) +
                           (int)auVar157._4_2_ * (int)auVar152._4_2_;
                  uVar89 = (undefined)iVar52;
                  uVar91 = (undefined)((uint)iVar52 >> 8);
                  uVar93 = (undefined)((uint)iVar52 >> 0x10);
                  uVar95 = (undefined)((uint)iVar52 >> 0x18);
                  iVar65 = CONCAT13(uVar103,CONCAT12(uVar101,CONCAT11(uVar99,uVar97))) +
                           (int)auVar157._6_2_ * (int)auVar152._6_2_;
                  uVar97 = (undefined)iVar65;
                  uVar99 = (undefined)((uint)iVar65 >> 8);
                  uVar101 = (undefined)((uint)iVar65 >> 0x10);
                  uVar103 = (undefined)((uint)iVar65 >> 0x18);
                  auVar28[9] = uVar169;
                  auVar28._0_9_ = Var32;
                  auVar28[10] = uVar171;
                  auVar28[11] = uVar173;
                  auVar28[12] = uVar175;
                  auVar28[13] = uVar177;
                  auVar28[14] = uVar179;
                  auVar28[15] = uVar181;
                  auVar29[9] = uVar169;
                  auVar29._0_9_ = Var33;
                  auVar29[10] = uVar171;
                  auVar29[11] = uVar173;
                  auVar29[12] = uVar175;
                  auVar29[13] = uVar177;
                  auVar29[14] = uVar179;
                  auVar29[15] = uVar181;
                  auVar152 = NEON_ext(auVar28,auVar29,8,1);
                  iVar72 = CONCAT13(uVar119,CONCAT12(uVar117,CONCAT11(uVar115,uVar113))) +
                           (int)(short)uVar30 * (int)auVar155._0_2_;
                  uVar113 = (undefined)iVar72;
                  uVar115 = (undefined)((uint)iVar72 >> 8);
                  uVar117 = (undefined)((uint)iVar72 >> 0x10);
                  uVar119 = (undefined)((uint)iVar72 >> 0x18);
                  iVar42 = CONCAT13(uVar127,CONCAT12(uVar125,CONCAT11(uVar123,uVar121))) +
                           (int)(short)((ulong)uVar30 >> 0x10) * (int)auVar155._2_2_;
                  uVar121 = (undefined)iVar42;
                  uVar123 = (undefined)((uint)iVar42 >> 8);
                  uVar125 = (undefined)((uint)iVar42 >> 0x10);
                  uVar127 = (undefined)((uint)iVar42 >> 0x18);
                  iVar16 = CONCAT13(uVar135,CONCAT12(uVar133,CONCAT11(uVar131,uVar129))) +
                           (int)(short)((ulong)uVar30 >> 0x20) * (int)auVar155._4_2_;
                  uVar129 = (undefined)iVar16;
                  uVar131 = (undefined)((uint)iVar16 >> 8);
                  uVar133 = (undefined)((uint)iVar16 >> 0x10);
                  uVar135 = (undefined)((uint)iVar16 >> 0x18);
                  iVar17 = CONCAT13(uVar143,CONCAT12(uVar141,CONCAT11(uVar139,uVar137))) +
                           (int)(short)((ulong)uVar30 >> 0x30) * (int)auVar155._6_2_;
                  uVar137 = (undefined)iVar17;
                  uVar139 = (undefined)((uint)iVar17 >> 8);
                  uVar141 = (undefined)((uint)iVar17 >> 0x10);
                  uVar143 = (undefined)((uint)iVar17 >> 0x18);
                  auVar108._0_4_ = auVar106._0_4_ + (int)auVar186._0_2_ * (int)auVar185._0_2_;
                  auVar108._4_4_ = auVar106._4_4_ + (int)auVar186._2_2_ * (int)auVar185._2_2_;
                  auVar108._8_4_ = auVar106._8_4_ + (int)auVar186._4_2_ * (int)auVar185._4_2_;
                  auVar108._12_4_ = auVar106._12_4_ + (int)auVar186._6_2_ * (int)auVar185._6_2_;
                  auVar147._0_4_ = auVar145._0_4_ + (int)auVar152._0_2_ * (int)auVar184._0_2_;
                  auVar147._4_4_ = auVar145._4_4_ + (int)auVar152._2_2_ * (int)auVar184._2_2_;
                  auVar147._8_4_ = auVar145._8_4_ + (int)auVar152._4_2_ * (int)auVar184._4_2_;
                  auVar147._12_4_ = auVar145._12_4_ + (int)auVar152._6_2_ * (int)auVar184._6_2_;
                  auVar106 = auVar108;
                  auVar145 = auVar147;
                } while (uVar62 != 0);
                iVar51 = iVar72 + iVar51 + auVar147._0_4_ + auVar108._0_4_ +
                         iVar42 + iVar56 + auVar147._4_4_ + auVar108._4_4_ +
                         iVar16 + iVar52 + auVar147._8_4_ + auVar108._8_4_ +
                         iVar17 + iVar65 + auVar147._12_4_ + auVar108._12_4_;
                if (uVar59 != uVar57) goto LAB_00e736f4;
              }
              local_838 = (ulong)(local_870 * iVar51) >> 0xf;
              if (uVar60 < 0x10) {
                uVar59 = 0;
                iVar51 = 0;
              }
              else {
                uVar59 = uVar57 & 0xfffffff0;
                uVar41 = 0;
                uVar40 = 0;
                uVar77 = 0;
                uVar79 = 0;
                uVar81 = 0;
                uVar83 = 0;
                uVar85 = 0;
                uVar87 = 0;
                uVar89 = 0;
                uVar91 = 0;
                uVar93 = 0;
                uVar95 = 0;
                uVar97 = 0;
                uVar99 = 0;
                uVar101 = 0;
                uVar103 = 0;
                uVar113 = 0;
                uVar115 = 0;
                uVar117 = 0;
                uVar119 = 0;
                uVar121 = 0;
                uVar123 = 0;
                uVar125 = 0;
                uVar127 = 0;
                uVar129 = 0;
                uVar131 = 0;
                uVar133 = 0;
                uVar135 = 0;
                uVar137 = 0;
                uVar139 = 0;
                uVar141 = 0;
                uVar143 = 0;
                pVar53 = (unkbyte9 *)(local_6d8 + 0x10);
                uVar62 = uVar59;
                pauVar68 = local_8b8;
                auVar106 = ZEXT816(0);
                auVar145 = ZEXT816(0);
                do {
                  auVar152 = pauVar68[-1];
                  auVar155 = *pauVar68;
                  pauVar68 = pauVar68 + 2;
                  uVar62 = uVar62 - 0x10;
                  auVar185 = NEON_ext(auVar152,auVar152,8,1);
                  auVar157 = *(undefined (*) [16])(pVar53 + -1);
                  uVar30 = *(undefined8 *)((long)pVar53 + 8);
                  uVar169 = (undefined)((ulong)uVar30 >> 8);
                  uVar171 = (undefined)((ulong)uVar30 >> 0x10);
                  uVar173 = (undefined)((ulong)uVar30 >> 0x18);
                  uVar175 = (undefined)((ulong)uVar30 >> 0x20);
                  uVar177 = (undefined)((ulong)uVar30 >> 0x28);
                  uVar179 = (undefined)((ulong)uVar30 >> 0x30);
                  uVar181 = (undefined)((ulong)uVar30 >> 0x38);
                  uVar30 = *(undefined8 *)pVar53;
                  Var33 = *pVar53;
                  Var32 = *pVar53;
                  auVar184 = NEON_ext(auVar155,auVar155,8,1);
                  pVar53 = pVar53 + 2;
                  auVar186 = NEON_ext(auVar157,auVar157,8,1);
                  iVar51 = CONCAT13(uVar79,CONCAT12(uVar77,CONCAT11(uVar40,uVar41))) +
                           (int)auVar157._0_2_ * (int)auVar152._0_2_;
                  uVar41 = (undefined)iVar51;
                  uVar40 = (undefined)((uint)iVar51 >> 8);
                  uVar77 = (undefined)((uint)iVar51 >> 0x10);
                  uVar79 = (undefined)((uint)iVar51 >> 0x18);
                  iVar56 = CONCAT13(uVar87,CONCAT12(uVar85,CONCAT11(uVar83,uVar81))) +
                           (int)auVar157._2_2_ * (int)auVar152._2_2_;
                  uVar81 = (undefined)iVar56;
                  uVar83 = (undefined)((uint)iVar56 >> 8);
                  uVar85 = (undefined)((uint)iVar56 >> 0x10);
                  uVar87 = (undefined)((uint)iVar56 >> 0x18);
                  iVar52 = CONCAT13(uVar95,CONCAT12(uVar93,CONCAT11(uVar91,uVar89))) +
                           (int)auVar157._4_2_ * (int)auVar152._4_2_;
                  uVar89 = (undefined)iVar52;
                  uVar91 = (undefined)((uint)iVar52 >> 8);
                  uVar93 = (undefined)((uint)iVar52 >> 0x10);
                  uVar95 = (undefined)((uint)iVar52 >> 0x18);
                  iVar65 = CONCAT13(uVar103,CONCAT12(uVar101,CONCAT11(uVar99,uVar97))) +
                           (int)auVar157._6_2_ * (int)auVar152._6_2_;
                  uVar97 = (undefined)iVar65;
                  uVar99 = (undefined)((uint)iVar65 >> 8);
                  uVar101 = (undefined)((uint)iVar65 >> 0x10);
                  uVar103 = (undefined)((uint)iVar65 >> 0x18);
                  auVar26[9] = uVar169;
                  auVar26._0_9_ = Var32;
                  auVar26[10] = uVar171;
                  auVar26[11] = uVar173;
                  auVar26[12] = uVar175;
                  auVar26[13] = uVar177;
                  auVar26[14] = uVar179;
                  auVar26[15] = uVar181;
                  auVar27[9] = uVar169;
                  auVar27._0_9_ = Var33;
                  auVar27[10] = uVar171;
                  auVar27[11] = uVar173;
                  auVar27[12] = uVar175;
                  auVar27[13] = uVar177;
                  auVar27[14] = uVar179;
                  auVar27[15] = uVar181;
                  auVar152 = NEON_ext(auVar26,auVar27,8,1);
                  iVar72 = CONCAT13(uVar119,CONCAT12(uVar117,CONCAT11(uVar115,uVar113))) +
                           (int)(short)uVar30 * (int)auVar155._0_2_;
                  uVar113 = (undefined)iVar72;
                  uVar115 = (undefined)((uint)iVar72 >> 8);
                  uVar117 = (undefined)((uint)iVar72 >> 0x10);
                  uVar119 = (undefined)((uint)iVar72 >> 0x18);
                  iVar42 = CONCAT13(uVar127,CONCAT12(uVar125,CONCAT11(uVar123,uVar121))) +
                           (int)(short)((ulong)uVar30 >> 0x10) * (int)auVar155._2_2_;
                  uVar121 = (undefined)iVar42;
                  uVar123 = (undefined)((uint)iVar42 >> 8);
                  uVar125 = (undefined)((uint)iVar42 >> 0x10);
                  uVar127 = (undefined)((uint)iVar42 >> 0x18);
                  iVar16 = CONCAT13(uVar135,CONCAT12(uVar133,CONCAT11(uVar131,uVar129))) +
                           (int)(short)((ulong)uVar30 >> 0x20) * (int)auVar155._4_2_;
                  uVar129 = (undefined)iVar16;
                  uVar131 = (undefined)((uint)iVar16 >> 8);
                  uVar133 = (undefined)((uint)iVar16 >> 0x10);
                  uVar135 = (undefined)((uint)iVar16 >> 0x18);
                  iVar17 = CONCAT13(uVar143,CONCAT12(uVar141,CONCAT11(uVar139,uVar137))) +
                           (int)(short)((ulong)uVar30 >> 0x30) * (int)auVar155._6_2_;
                  uVar137 = (undefined)iVar17;
                  uVar139 = (undefined)((uint)iVar17 >> 8);
                  uVar141 = (undefined)((uint)iVar17 >> 0x10);
                  uVar143 = (undefined)((uint)iVar17 >> 0x18);
                  auVar109._0_4_ = auVar106._0_4_ + (int)auVar186._0_2_ * (int)auVar185._0_2_;
                  auVar109._4_4_ = auVar106._4_4_ + (int)auVar186._2_2_ * (int)auVar185._2_2_;
                  auVar109._8_4_ = auVar106._8_4_ + (int)auVar186._4_2_ * (int)auVar185._4_2_;
                  auVar109._12_4_ = auVar106._12_4_ + (int)auVar186._6_2_ * (int)auVar185._6_2_;
                  auVar148._0_4_ = auVar145._0_4_ + (int)auVar152._0_2_ * (int)auVar184._0_2_;
                  auVar148._4_4_ = auVar145._4_4_ + (int)auVar152._2_2_ * (int)auVar184._2_2_;
                  auVar148._8_4_ = auVar145._8_4_ + (int)auVar152._4_2_ * (int)auVar184._4_2_;
                  auVar148._12_4_ = auVar145._12_4_ + (int)auVar152._6_2_ * (int)auVar184._6_2_;
                  auVar106 = auVar109;
                  auVar145 = auVar148;
                } while (uVar62 != 0);
                iVar51 = iVar72 + iVar51 + auVar148._0_4_ + auVar109._0_4_ +
                         iVar42 + iVar56 + auVar148._4_4_ + auVar109._4_4_ +
                         iVar16 + iVar52 + auVar148._8_4_ + auVar109._8_4_ +
                         iVar17 + iVar65 + auVar148._12_4_ + auVar109._12_4_;
                if (uVar59 == uVar57) goto LAB_00e737e4;
              }
              lVar46 = uVar57 - uVar59;
              psVar50 = (short *)(local_6d8 + uVar59 * 2);
              psVar55 = (short *)(local_800 + uVar59 * 2);
              do {
                lVar46 = lVar46 + -1;
                iVar51 = iVar51 + (int)*psVar50 * (int)*psVar55;
                psVar50 = psVar50 + 1;
                psVar55 = psVar55 + 1;
              } while (lVar46 != 0);
            }
LAB_00e737e4:
            lStack_628 = local_768[1];
            local_630 = *local_768;
            lStack_618 = SUB168(*(undefined (*) [16])(local_768 + 2),8);
            lStack_620 = SUB168(*(undefined (*) [16])(local_768 + 2),0);
            local_690 = CONCAT44(uStack_59c,local_5a0);
            auVar37._8_4_ = uStack_598;
            auVar37._0_8_ = local_690;
            auVar37._12_4_ = uStack_594;
            auVar35._8_4_ = iStack_5b8;
            auVar35._0_8_ = local_5c0;
            auVar35._12_4_ = uStack_5b4;
            uStack_698 = CONCAT44(uStack_5a4,uStack_5a8);
            uStack_688 = auVar37._8_8_;
            uStack_6a8 = auVar35._8_8_;
            local_6b0 = local_5c0;
            lStack_6a0 = local_5b0;
            lStack_608 = local_768[5];
            local_610 = local_768[4];
            local_6d0 = CONCAT44(uStack_5dc,local_5e0);
            local_600 = local_768[6];
            lStack_6c8 = lStack_5d8;
            uStack_6b8 = uStack_5c8;
            uStack_6c0 = local_5d0;
            memcpy(local_860,local_738,local_728);
            memcpy(local_868,local_6d8,sVar39);
            if (lVar61 != local_718) {
              memcpy(local_8a8,
                     local_7f0 +
                     (long)((int)*(short *)(lVar69 + lVar61 * 2) << (ulong)(param_18 & 0x1f)) * 2,
                     sVar39);
            }
            iVar56 = local_848;
            lVar69 = local_850;
            iVar52 = (int)local_858;
            pvStack_880 = (void *)(local_850 + iVar52);
            local_888 = (size_t)(local_848 - iVar52);
            __memcpy_chk(auStack_58c,pvStack_880,local_888,0x4fb);
            *local_768 = lVar69;
            *(int *)(local_768 + 1) = iVar56;
            *(int *)((long)local_768 + 0x1c) = iVar52;
            *(undefined8 *)((long)*local_828 + 8) = uStack_88;
            *(undefined8 *)*local_828 = local_90;
            local_820[1] = uStack_5e8;
            *local_820 = local_5f0;
            uStack_598 = (uint)uStack_638;
            uStack_594 = (undefined4)((ulong)uStack_638 >> 0x20);
            local_5a0 = (undefined4)local_640;
            uStack_59c = (undefined4)((ulong)local_640 >> 0x20);
            *(undefined8 *)local_828[1] = local_80;
            iStack_5b8 = (int)uStack_658;
            uStack_5b4 = (undefined4)((ulong)uStack_658 >> 0x20);
            local_5c0 = local_660;
            uStack_5a8 = (undefined4)uStack_648;
            uStack_5a4 = (undefined4)((ulong)uStack_648 >> 0x20);
            local_5b0 = local_650;
            lStack_5d8 = lStack_678;
            local_5e0 = (int)local_680;
            uStack_5dc = (uint)((ulong)local_680 >> 0x20);
            uStack_5c8 = uStack_668;
            local_5d0 = local_670;
            memcpy(local_738,local_7f8,sVar39);
            memcpy(local_6d8,local_800,sVar39);
            if (lVar61 == local_730) {
              lVar69 = *(long *)(local_750 + 0x18);
              iVar52 = (int)*(short *)(lVar69 + local_730 * 2);
              iVar56 = iVar52 - *(short *)(lVar69 + local_740 * 2) << (ulong)(param_18 & 0x1f);
              iVar52 = *(short *)(lVar69 + local_810 * 2) - iVar52 << (ulong)(param_18 & 0x1f);
              uVar60 = iVar52 - iVar56;
              memcpy(local_770 + (long)iVar56 * 2,local_770 + (long)(iVar56 * 2 - iVar52) * 2,
                     -(ulong)(uVar60 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar60 << 1);
            }
            puVar5 = local_6d8;
            uVar8 = local_6dc;
            uVar57 = local_6e8;
            puVar71 = local_720;
            pvVar38 = local_738;
            lVar69 = local_748;
            uVar60 = local_79c;
            puVar44 = local_840;
            local_5a0 = 1;
            if (lVar61 == local_718) {
              puVar49 = (undefined *)0x0;
            }
            else {
              puVar49 = local_7f0 +
                        (long)((int)*(short *)(local_748 + lVar61 * 2) << (ulong)(param_18 & 0x1f))
                        * 2;
            }
            *(uint *)(puVar58 + -0x10) = local_844;
            *(undefined **)(puVar58 + -0x20) = puVar49;
            *(undefined **)(puVar58 + -0x18) = puVar71;
            uVar43 = FUN_00e74528(&local_5e0,pvVar38,puVar5,uVar57,uVar8,uVar60,puVar44,param_18);
            sVar39 = local_728;
            lVar46 = local_758;
            uVar60 = (uint)local_6e8;
            if ((int)uVar60 < 1) {
              iVar52 = 0;
              iVar56 = 0;
            }
            else {
              if (uVar60 < 0x10) {
                uVar62 = 0;
                iVar56 = 0;
LAB_00e73a74:
                lVar67 = local_6e8 - uVar62;
                psVar50 = (short *)((long)local_738 + uVar62 * 2);
                psVar55 = (short *)(local_7f8 + uVar62 * 2);
                do {
                  lVar67 = lVar67 + -1;
                  iVar56 = iVar56 + (int)*psVar50 * (int)*psVar55;
                  psVar50 = psVar50 + 1;
                  psVar55 = psVar55 + 1;
                } while (lVar67 != 0);
              }
              else {
                uVar62 = local_6e8 & 0xfffffff0;
                uVar41 = 0;
                uVar40 = 0;
                uVar77 = 0;
                uVar79 = 0;
                uVar81 = 0;
                uVar83 = 0;
                uVar85 = 0;
                uVar87 = 0;
                uVar89 = 0;
                uVar91 = 0;
                uVar93 = 0;
                uVar95 = 0;
                uVar97 = 0;
                uVar99 = 0;
                uVar101 = 0;
                uVar103 = 0;
                uVar113 = 0;
                uVar115 = 0;
                uVar117 = 0;
                uVar119 = 0;
                uVar121 = 0;
                uVar123 = 0;
                uVar125 = 0;
                uVar127 = 0;
                uVar129 = 0;
                uVar131 = 0;
                uVar133 = 0;
                uVar135 = 0;
                uVar137 = 0;
                uVar139 = 0;
                uVar141 = 0;
                uVar143 = 0;
                pVar53 = (unkbyte9 *)((long)local_738 + 0x10);
                uVar57 = uVar62;
                pauVar68 = local_8b0;
                auVar106 = ZEXT816(0);
                auVar145 = ZEXT816(0);
                do {
                  auVar152 = pauVar68[-1];
                  auVar155 = *pauVar68;
                  pauVar68 = pauVar68 + 2;
                  uVar57 = uVar57 - 0x10;
                  auVar185 = NEON_ext(auVar152,auVar152,8,1);
                  auVar157 = *(undefined (*) [16])(pVar53 + -1);
                  uVar30 = *(undefined8 *)((long)pVar53 + 8);
                  uVar169 = (undefined)((ulong)uVar30 >> 8);
                  uVar171 = (undefined)((ulong)uVar30 >> 0x10);
                  uVar173 = (undefined)((ulong)uVar30 >> 0x18);
                  uVar175 = (undefined)((ulong)uVar30 >> 0x20);
                  uVar177 = (undefined)((ulong)uVar30 >> 0x28);
                  uVar179 = (undefined)((ulong)uVar30 >> 0x30);
                  uVar181 = (undefined)((ulong)uVar30 >> 0x38);
                  uVar30 = *(undefined8 *)pVar53;
                  Var33 = *pVar53;
                  Var32 = *pVar53;
                  auVar184 = NEON_ext(auVar155,auVar155,8,1);
                  pVar53 = pVar53 + 2;
                  auVar186 = NEON_ext(auVar157,auVar157,8,1);
                  iVar56 = CONCAT13(uVar79,CONCAT12(uVar77,CONCAT11(uVar40,uVar41))) +
                           (int)auVar157._0_2_ * (int)auVar152._0_2_;
                  uVar41 = (undefined)iVar56;
                  uVar40 = (undefined)((uint)iVar56 >> 8);
                  uVar77 = (undefined)((uint)iVar56 >> 0x10);
                  uVar79 = (undefined)((uint)iVar56 >> 0x18);
                  iVar52 = CONCAT13(uVar87,CONCAT12(uVar85,CONCAT11(uVar83,uVar81))) +
                           (int)auVar157._2_2_ * (int)auVar152._2_2_;
                  uVar81 = (undefined)iVar52;
                  uVar83 = (undefined)((uint)iVar52 >> 8);
                  uVar85 = (undefined)((uint)iVar52 >> 0x10);
                  uVar87 = (undefined)((uint)iVar52 >> 0x18);
                  iVar65 = CONCAT13(uVar95,CONCAT12(uVar93,CONCAT11(uVar91,uVar89))) +
                           (int)auVar157._4_2_ * (int)auVar152._4_2_;
                  uVar89 = (undefined)iVar65;
                  uVar91 = (undefined)((uint)iVar65 >> 8);
                  uVar93 = (undefined)((uint)iVar65 >> 0x10);
                  uVar95 = (undefined)((uint)iVar65 >> 0x18);
                  iVar72 = CONCAT13(uVar103,CONCAT12(uVar101,CONCAT11(uVar99,uVar97))) +
                           (int)auVar157._6_2_ * (int)auVar152._6_2_;
                  uVar97 = (undefined)iVar72;
                  uVar99 = (undefined)((uint)iVar72 >> 8);
                  uVar101 = (undefined)((uint)iVar72 >> 0x10);
                  uVar103 = (undefined)((uint)iVar72 >> 0x18);
                  auVar24[9] = uVar169;
                  auVar24._0_9_ = Var32;
                  auVar24[10] = uVar171;
                  auVar24[11] = uVar173;
                  auVar24[12] = uVar175;
                  auVar24[13] = uVar177;
                  auVar24[14] = uVar179;
                  auVar24[15] = uVar181;
                  auVar25[9] = uVar169;
                  auVar25._0_9_ = Var33;
                  auVar25[10] = uVar171;
                  auVar25[11] = uVar173;
                  auVar25[12] = uVar175;
                  auVar25[13] = uVar177;
                  auVar25[14] = uVar179;
                  auVar25[15] = uVar181;
                  auVar152 = NEON_ext(auVar24,auVar25,8,1);
                  iVar42 = CONCAT13(uVar119,CONCAT12(uVar117,CONCAT11(uVar115,uVar113))) +
                           (int)(short)uVar30 * (int)auVar155._0_2_;
                  uVar113 = (undefined)iVar42;
                  uVar115 = (undefined)((uint)iVar42 >> 8);
                  uVar117 = (undefined)((uint)iVar42 >> 0x10);
                  uVar119 = (undefined)((uint)iVar42 >> 0x18);
                  iVar16 = CONCAT13(uVar127,CONCAT12(uVar125,CONCAT11(uVar123,uVar121))) +
                           (int)(short)((ulong)uVar30 >> 0x10) * (int)auVar155._2_2_;
                  uVar121 = (undefined)iVar16;
                  uVar123 = (undefined)((uint)iVar16 >> 8);
                  uVar125 = (undefined)((uint)iVar16 >> 0x10);
                  uVar127 = (undefined)((uint)iVar16 >> 0x18);
                  iVar17 = CONCAT13(uVar135,CONCAT12(uVar133,CONCAT11(uVar131,uVar129))) +
                           (int)(short)((ulong)uVar30 >> 0x20) * (int)auVar155._4_2_;
                  uVar129 = (undefined)iVar17;
                  uVar131 = (undefined)((uint)iVar17 >> 8);
                  uVar133 = (undefined)((uint)iVar17 >> 0x10);
                  uVar135 = (undefined)((uint)iVar17 >> 0x18);
                  iVar18 = CONCAT13(uVar143,CONCAT12(uVar141,CONCAT11(uVar139,uVar137))) +
                           (int)(short)((ulong)uVar30 >> 0x30) * (int)auVar155._6_2_;
                  uVar137 = (undefined)iVar18;
                  uVar139 = (undefined)((uint)iVar18 >> 8);
                  uVar141 = (undefined)((uint)iVar18 >> 0x10);
                  uVar143 = (undefined)((uint)iVar18 >> 0x18);
                  auVar110._0_4_ = auVar106._0_4_ + (int)auVar186._0_2_ * (int)auVar185._0_2_;
                  auVar110._4_4_ = auVar106._4_4_ + (int)auVar186._2_2_ * (int)auVar185._2_2_;
                  auVar110._8_4_ = auVar106._8_4_ + (int)auVar186._4_2_ * (int)auVar185._4_2_;
                  auVar110._12_4_ = auVar106._12_4_ + (int)auVar186._6_2_ * (int)auVar185._6_2_;
                  auVar149._0_4_ = auVar145._0_4_ + (int)auVar152._0_2_ * (int)auVar184._0_2_;
                  auVar149._4_4_ = auVar145._4_4_ + (int)auVar152._2_2_ * (int)auVar184._2_2_;
                  auVar149._8_4_ = auVar145._8_4_ + (int)auVar152._4_2_ * (int)auVar184._4_2_;
                  auVar149._12_4_ = auVar145._12_4_ + (int)auVar152._6_2_ * (int)auVar184._6_2_;
                  auVar106 = auVar110;
                  auVar145 = auVar149;
                } while (uVar57 != 0);
                iVar56 = iVar42 + iVar56 + auVar149._0_4_ + auVar110._0_4_ +
                         iVar16 + iVar52 + auVar149._4_4_ + auVar110._4_4_ +
                         iVar17 + iVar65 + auVar149._8_4_ + auVar110._8_4_ +
                         iVar18 + iVar72 + auVar149._12_4_ + auVar110._12_4_;
                if (uVar62 != local_6e8) goto LAB_00e73a74;
              }
              iVar52 = (int)((ulong)(local_870 * iVar56) >> 0xf);
              if (uVar60 < 0x10) {
                uVar62 = 0;
                iVar56 = 0;
              }
              else {
                uVar62 = local_6e8 & 0xfffffff0;
                uVar41 = 0;
                uVar40 = 0;
                uVar77 = 0;
                uVar79 = 0;
                uVar81 = 0;
                uVar83 = 0;
                uVar85 = 0;
                uVar87 = 0;
                uVar89 = 0;
                uVar91 = 0;
                uVar93 = 0;
                uVar95 = 0;
                uVar97 = 0;
                uVar99 = 0;
                uVar101 = 0;
                uVar103 = 0;
                uVar113 = 0;
                uVar115 = 0;
                uVar117 = 0;
                uVar119 = 0;
                uVar121 = 0;
                uVar123 = 0;
                uVar125 = 0;
                uVar127 = 0;
                uVar129 = 0;
                uVar131 = 0;
                uVar133 = 0;
                uVar135 = 0;
                uVar137 = 0;
                uVar139 = 0;
                uVar141 = 0;
                uVar143 = 0;
                pVar53 = (unkbyte9 *)(local_6d8 + 0x10);
                uVar57 = uVar62;
                pauVar68 = local_8b8;
                auVar106 = ZEXT816(0);
                auVar145 = ZEXT816(0);
                do {
                  auVar152 = pauVar68[-1];
                  auVar155 = *pauVar68;
                  pauVar68 = pauVar68 + 2;
                  uVar57 = uVar57 - 0x10;
                  auVar185 = NEON_ext(auVar152,auVar152,8,1);
                  auVar157 = *(undefined (*) [16])(pVar53 + -1);
                  uVar30 = *(undefined8 *)((long)pVar53 + 8);
                  uVar169 = (undefined)((ulong)uVar30 >> 8);
                  uVar171 = (undefined)((ulong)uVar30 >> 0x10);
                  uVar173 = (undefined)((ulong)uVar30 >> 0x18);
                  uVar175 = (undefined)((ulong)uVar30 >> 0x20);
                  uVar177 = (undefined)((ulong)uVar30 >> 0x28);
                  uVar179 = (undefined)((ulong)uVar30 >> 0x30);
                  uVar181 = (undefined)((ulong)uVar30 >> 0x38);
                  uVar30 = *(undefined8 *)pVar53;
                  Var33 = *pVar53;
                  Var32 = *pVar53;
                  auVar184 = NEON_ext(auVar155,auVar155,8,1);
                  pVar53 = pVar53 + 2;
                  auVar186 = NEON_ext(auVar157,auVar157,8,1);
                  iVar56 = CONCAT13(uVar79,CONCAT12(uVar77,CONCAT11(uVar40,uVar41))) +
                           (int)auVar157._0_2_ * (int)auVar152._0_2_;
                  uVar41 = (undefined)iVar56;
                  uVar40 = (undefined)((uint)iVar56 >> 8);
                  uVar77 = (undefined)((uint)iVar56 >> 0x10);
                  uVar79 = (undefined)((uint)iVar56 >> 0x18);
                  iVar65 = CONCAT13(uVar87,CONCAT12(uVar85,CONCAT11(uVar83,uVar81))) +
                           (int)auVar157._2_2_ * (int)auVar152._2_2_;
                  uVar81 = (undefined)iVar65;
                  uVar83 = (undefined)((uint)iVar65 >> 8);
                  uVar85 = (undefined)((uint)iVar65 >> 0x10);
                  uVar87 = (undefined)((uint)iVar65 >> 0x18);
                  iVar72 = CONCAT13(uVar95,CONCAT12(uVar93,CONCAT11(uVar91,uVar89))) +
                           (int)auVar157._4_2_ * (int)auVar152._4_2_;
                  uVar89 = (undefined)iVar72;
                  uVar91 = (undefined)((uint)iVar72 >> 8);
                  uVar93 = (undefined)((uint)iVar72 >> 0x10);
                  uVar95 = (undefined)((uint)iVar72 >> 0x18);
                  iVar42 = CONCAT13(uVar103,CONCAT12(uVar101,CONCAT11(uVar99,uVar97))) +
                           (int)auVar157._6_2_ * (int)auVar152._6_2_;
                  uVar97 = (undefined)iVar42;
                  uVar99 = (undefined)((uint)iVar42 >> 8);
                  uVar101 = (undefined)((uint)iVar42 >> 0x10);
                  uVar103 = (undefined)((uint)iVar42 >> 0x18);
                  auVar22[9] = uVar169;
                  auVar22._0_9_ = Var32;
                  auVar22[10] = uVar171;
                  auVar22[11] = uVar173;
                  auVar22[12] = uVar175;
                  auVar22[13] = uVar177;
                  auVar22[14] = uVar179;
                  auVar22[15] = uVar181;
                  auVar23[9] = uVar169;
                  auVar23._0_9_ = Var33;
                  auVar23[10] = uVar171;
                  auVar23[11] = uVar173;
                  auVar23[12] = uVar175;
                  auVar23[13] = uVar177;
                  auVar23[14] = uVar179;
                  auVar23[15] = uVar181;
                  auVar152 = NEON_ext(auVar22,auVar23,8,1);
                  iVar16 = CONCAT13(uVar119,CONCAT12(uVar117,CONCAT11(uVar115,uVar113))) +
                           (int)(short)uVar30 * (int)auVar155._0_2_;
                  uVar113 = (undefined)iVar16;
                  uVar115 = (undefined)((uint)iVar16 >> 8);
                  uVar117 = (undefined)((uint)iVar16 >> 0x10);
                  uVar119 = (undefined)((uint)iVar16 >> 0x18);
                  iVar17 = CONCAT13(uVar127,CONCAT12(uVar125,CONCAT11(uVar123,uVar121))) +
                           (int)(short)((ulong)uVar30 >> 0x10) * (int)auVar155._2_2_;
                  uVar121 = (undefined)iVar17;
                  uVar123 = (undefined)((uint)iVar17 >> 8);
                  uVar125 = (undefined)((uint)iVar17 >> 0x10);
                  uVar127 = (undefined)((uint)iVar17 >> 0x18);
                  iVar18 = CONCAT13(uVar135,CONCAT12(uVar133,CONCAT11(uVar131,uVar129))) +
                           (int)(short)((ulong)uVar30 >> 0x20) * (int)auVar155._4_2_;
                  uVar129 = (undefined)iVar18;
                  uVar131 = (undefined)((uint)iVar18 >> 8);
                  uVar133 = (undefined)((uint)iVar18 >> 0x10);
                  uVar135 = (undefined)((uint)iVar18 >> 0x18);
                  iVar19 = CONCAT13(uVar143,CONCAT12(uVar141,CONCAT11(uVar139,uVar137))) +
                           (int)(short)((ulong)uVar30 >> 0x30) * (int)auVar155._6_2_;
                  uVar137 = (undefined)iVar19;
                  uVar139 = (undefined)((uint)iVar19 >> 8);
                  uVar141 = (undefined)((uint)iVar19 >> 0x10);
                  uVar143 = (undefined)((uint)iVar19 >> 0x18);
                  auVar111._0_4_ = auVar106._0_4_ + (int)auVar186._0_2_ * (int)auVar185._0_2_;
                  auVar111._4_4_ = auVar106._4_4_ + (int)auVar186._2_2_ * (int)auVar185._2_2_;
                  auVar111._8_4_ = auVar106._8_4_ + (int)auVar186._4_2_ * (int)auVar185._4_2_;
                  auVar111._12_4_ = auVar106._12_4_ + (int)auVar186._6_2_ * (int)auVar185._6_2_;
                  auVar150._0_4_ = auVar145._0_4_ + (int)auVar152._0_2_ * (int)auVar184._0_2_;
                  auVar150._4_4_ = auVar145._4_4_ + (int)auVar152._2_2_ * (int)auVar184._2_2_;
                  auVar150._8_4_ = auVar145._8_4_ + (int)auVar152._4_2_ * (int)auVar184._4_2_;
                  auVar150._12_4_ = auVar145._12_4_ + (int)auVar152._6_2_ * (int)auVar184._6_2_;
                  auVar106 = auVar111;
                  auVar145 = auVar150;
                } while (uVar57 != 0);
                iVar56 = iVar16 + iVar56 + auVar150._0_4_ + auVar111._0_4_ +
                         iVar17 + iVar65 + auVar150._4_4_ + auVar111._4_4_ +
                         iVar18 + iVar72 + auVar150._8_4_ + auVar111._8_4_ +
                         iVar19 + iVar42 + auVar150._12_4_ + auVar111._12_4_;
                if (uVar62 == local_6e8) goto LAB_00e73b60;
              }
              lVar67 = local_6e8 - uVar62;
              psVar50 = (short *)(local_6d8 + uVar62 * 2);
              psVar55 = (short *)(local_800 + uVar62 * 2);
              do {
                lVar67 = lVar67 + -1;
                iVar56 = iVar56 + (int)*psVar50 * (int)*psVar55;
                psVar50 = psVar50 + 1;
                psVar55 = psVar55 + 1;
              } while (lVar67 != 0);
            }
LAB_00e73b60:
            if (iVar52 + (int)((ulong)((long)(short)local_830 * (long)iVar56) >> 0xf) <=
                (int)local_838 + (int)((ulong)((long)(short)local_830 * (long)iVar51) >> 0xf)) {
              local_768[1] = lStack_628;
              *local_768 = local_630;
              local_768[3] = lStack_618;
              local_768[2] = lStack_620;
              local_768[5] = lStack_608;
              local_768[4] = local_610;
              uStack_598 = (uint)uStack_688;
              uStack_594 = (undefined4)((ulong)uStack_688 >> 0x20);
              local_5a0 = (undefined4)local_690;
              uStack_59c = (undefined4)((ulong)local_690 >> 0x20);
              iStack_5b8 = (int)uStack_6a8;
              uStack_5b4 = (undefined4)((ulong)uStack_6a8 >> 0x20);
              local_5c0 = local_6b0;
              uStack_5a8 = (undefined4)uStack_698;
              uStack_5a4 = (undefined4)((ulong)uStack_698 >> 0x20);
              local_5b0 = lStack_6a0;
              local_768[6] = local_600;
              lStack_5d8 = lStack_6c8;
              local_5e0 = (int)local_6d0;
              uStack_5dc = (uint)((ulong)local_6d0 >> 0x20);
              uStack_5c8 = uStack_6b8;
              local_5d0 = uStack_6c0;
              memcpy(local_738,local_860,local_728);
              memcpy(local_6d8,local_868,sVar39);
              if (lVar61 != local_718) {
                memcpy(local_7f0 +
                       (long)((int)*(short *)(lVar69 + lVar61 * 2) << (ulong)(param_18 & 0x1f)) * 2,
                       local_8a8,sVar39);
              }
              memcpy(pvStack_880,auStack_58c,local_888);
              uVar43 = local_878;
            }
            uVar41 = (undefined)uVar43;
            local_728 = local_728 & 0xffffffff00000000;
            uVar40 = uVar41;
            goto LAB_00e73cdc;
          }
          puVar71 = (undefined *)0x0;
          if (iVar51 != -1) {
            puVar71 = local_770 + (long)iVar51 * 2;
          }
          puVar48 = (undefined *)0x0;
          local_5a0 = 0;
          if (lVar61 != local_718) {
            puVar48 = local_7f0 +
                      (long)((int)*(short *)(local_748 + lVar61 * 2) << (ulong)(param_18 & 0x1f)) *
                      2;
          }
          *(uint *)(puVar58 + -0x10) = uVar104 | uVar70;
          *(undefined **)(puVar58 + -0x20) = puVar48;
          *(undefined **)(puVar58 + -0x18) = puVar49;
          uVar41 = FUN_00e74528(&local_5e0,puVar5,puVar44,uVar62,uVar54,uVar8,puVar71,param_18);
        }
        local_728 = local_728 & 0xffffffff00000000;
        lVar46 = local_758;
        uVar40 = uVar41;
      }
      else {
        if (((uint)(lVar61 != local_7b0) | local_818 & 1) == 0) {
          if (0 < *(short *)(local_748 + lVar61 * 2) - local_7cc << (ulong)(param_18 & 0x1f)) {
            lVar46 = 0;
            do {
              lVar67 = lVar46 * 2;
              lVar46 = lVar46 + 1;
              *(short *)(local_770 + lVar67) =
                   (short)((uint)((int)*(short *)(local_798 + lVar67) +
                                 (int)*(short *)(local_770 + lVar67)) >> 1);
            } while (lVar46 < *(short *)(local_748 + lVar61 * 2) - local_7cc <<
                              (ulong)(param_18 & 0x1f));
          }
          goto LAB_00e733c4;
        }
        if (lVar61 == local_7b0) goto LAB_00e733c4;
        local_838 = (ulong)iVar51;
        uVar60 = local_6dc >> 1;
        puVar44 = (undefined *)0x0;
        if (iVar51 != -1) {
          puVar44 = local_770 + (long)iVar51 * 2;
        }
        local_738 = (undefined *)CONCAT44(local_738._4_4_,uVar60);
        local_830 = uVar57;
        if (lVar61 == local_718) {
          *(uint *)(puVar58 + -0x10) = uVar70;
          *(undefined **)(puVar58 + -0x18) = puVar49;
          *(undefined2 *)(puVar58 + -0x20) = 0x7fff;
          uVar40 = FUN_00e73d78(&local_5e0,puVar5,uVar62,uVar60,uVar8,puVar44,param_18,0);
          puVar71 = (undefined *)0x0;
          puVar44 = (undefined *)0x0;
          if ((int)local_830 != -1) {
            puVar44 = local_798 + local_838 * 2;
          }
        }
        else {
          puVar71 = local_7f0 +
                    (long)((int)*(short *)(local_748 + lVar61 * 2) << (ulong)(param_18 & 0x1f)) * 2;
          *(uint *)(puVar58 + -0x10) = uVar70;
          *(undefined **)(puVar58 + -0x18) = puVar49;
          *(undefined2 *)(puVar58 + -0x20) = 0x7fff;
          uVar40 = FUN_00e73d78(&local_5e0,puVar5,uVar62,uVar60,uVar8,puVar44,param_18,puVar71);
          puVar44 = (undefined *)0x0;
          if ((int)local_830 != -1) {
            puVar44 = local_798 + local_838 * 2;
          }
          puVar71 = local_8c8 +
                    (long)((int)*(short *)(local_748 + lVar61 * 2) << (ulong)(param_18 & 0x1f)) * 2;
          lVar69 = local_748;
        }
        puVar5 = local_6d8;
        uVar57 = local_6e8;
        uVar62 = (ulong)local_738 & 0xffffffff;
        *(uint *)(puVar58 + -0x10) = uVar104;
        *(undefined **)(puVar58 + -0x18) = puVar49;
        *(undefined2 *)(puVar58 + -0x20) = 0x7fff;
        uVar41 = FUN_00e73d78(&local_5e0,puVar5,uVar57,uVar62,uVar8,puVar44,param_18,puVar71);
        lVar46 = local_758;
      }
LAB_00e73cdc:
      uStack_598 = 0;
      *(undefined *)(lVar45 + lVar61 * uVar73) = uVar40;
      *(undefined *)(lVar45 + (local_7e0 + (int)(lVar61 * uVar73))) = uVar41;
      lVar45 = lStack_8e0;
      param_20 = local_8e8;
      if (lVar46 == local_7e8) break;
      uVar60 = (int)local_6e8 * 8;
      sVar6 = *(short *)(lVar69 + lVar46 * 2);
      bVar1 = local_6dc != uVar60 &&
              (int)(local_6dc + (int)local_6e8 * -8) < 0 == SBORROW4(local_6dc,uVar60);
      param_16 = local_760 + local_75c + *(int *)(local_788 + lVar61 * 4);
      lVar61 = lVar46;
    } while( true );
  }
  *param_20 = uStack_5a8;
  if (*(long *)(lVar45 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


