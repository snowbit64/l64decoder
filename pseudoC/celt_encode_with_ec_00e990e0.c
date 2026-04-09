// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_encode_with_ec
// Entry Point: 00e990e0
// Size: 14096 bytes
// Signature: undefined celt_encode_with_ec(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void celt_encode_with_ec(int **param_1,short *param_2,int param_3,undefined8 param_4,uint param_5,
                        undefined *param_6)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  ushort uVar11;
  ushort uVar12;
  undefined auVar13 [16];
  float fVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  size_t sVar20;
  long lVar21;
  int **ppiVar22;
  size_t sVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  int **ppiVar28;
  undefined *puVar29;
  size_t sVar30;
  int *piVar31;
  ulong uVar32;
  long lVar33;
  undefined *puVar34;
  bool bVar35;
  short sVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined4 uVar42;
  int **ppiVar43;
  undefined8 *puVar44;
  ulong uVar45;
  ulong uVar46;
  undefined (*pauVar47) [16];
  undefined2 *puVar48;
  int *piVar49;
  undefined (*pauVar50) [16];
  int *piVar51;
  ulong uVar52;
  uint uVar53;
  undefined8 *puVar54;
  ulong uVar55;
  int *piVar56;
  undefined8 *puVar57;
  int iVar58;
  long lVar59;
  int *piVar60;
  undefined (*pauVar61) [16];
  undefined4 *puVar62;
  ulong uVar63;
  uint uVar64;
  long lVar65;
  short *psVar66;
  int *piVar67;
  long lVar68;
  ulong uVar69;
  long lVar70;
  int iVar71;
  uint uVar72;
  int *piVar73;
  ulong uVar74;
  uint uVar75;
  ulong uVar76;
  long lVar77;
  long lVar78;
  ulong uVar79;
  uint uVar80;
  long lVar81;
  short *psVar82;
  long lVar83;
  ulong uVar84;
  long lVar85;
  ulong uVar86;
  long lVar87;
  uint uVar88;
  ulong uVar89;
  void *pvVar90;
  long lVar91;
  long lVar92;
  short *psVar93;
  size_t sVar94;
  long lVar95;
  uint *puVar96;
  short *psVar97;
  uint uVar98;
  undefined8 uVar99;
  undefined8 uVar103;
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  uint uVar104;
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  short sVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  short sVar123;
  undefined auVar112 [16];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  short sVar124;
  undefined auVar117 [16];
  short sVar125;
  short sVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  short sVar135;
  undefined auVar126 [16];
  undefined auVar127 [16];
  undefined auVar128 [16];
  short sVar136;
  undefined auVar129 [16];
  undefined auVar137 [16];
  undefined auVar138 [16];
  int iVar139;
  int iVar140;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  undefined auVar141 [16];
  int iVar146;
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  int iVar155;
  int iVar156;
  int iVar157;
  int iVar158;
  int iVar159;
  int iVar160;
  int iVar161;
  int iVar162;
  int iVar163;
  int iVar164;
  int iVar165;
  int iVar166;
  int iVar167;
  int iVar168;
  int iVar169;
  int iVar170;
  int iVar171;
  int iVar172;
  int iVar173;
  int iVar174;
  undefined8 uVar175;
  undefined8 uVar176;
  undefined auVar177 [16];
  undefined auVar178 [16];
  undefined8 uStack_2e0;
  uint auStack_2d8 [4];
  int *piStack_2c8;
  int aiStack_2c0 [2];
  long local_2b8;
  undefined auStack_2b0 [4];
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  uint local_29c;
  int local_298;
  undefined4 local_294;
  void *local_290;
  int local_284;
  long local_280;
  long local_278;
  uint local_26c;
  long local_268;
  int local_25c;
  undefined4 local_258;
  uint local_254;
  void *local_250;
  long local_248;
  void *local_240;
  long local_238;
  int local_22c;
  ulong local_228;
  long local_220;
  int local_214;
  long local_210;
  undefined8 local_208;
  long local_200;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  int *local_1d0;
  int *local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  int local_1ac;
  void *local_1a8;
  uint local_19c;
  ulong local_198;
  ulong local_190;
  undefined8 local_188;
  int *local_180;
  size_t local_178;
  ulong local_170;
  size_t local_168;
  ulong local_160;
  int *local_158;
  ulong local_150;
  undefined8 local_148;
  short *local_140;
  undefined8 local_138;
  undefined local_130 [8];
  ulong local_128;
  undefined8 local_120;
  int *local_118;
  ulong local_110;
  ulong local_108;
  int **local_100;
  undefined *local_f8;
  int *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  int local_d8;
  int local_d4;
  short local_d0 [2];
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_c4;
  short local_c0 [2];
  int local_bc;
  undefined auStack_b8 [56];
  long local_80;
  
  lVar59 = tpidr_el0;
  local_80 = *(long *)(lVar59 + 0x28);
  piVar73 = *param_1;
  iVar39 = *(int *)(param_1 + 1);
  local_130 = (undefined  [8])(ulong)*(uint *)((long)param_1 + 0xc);
  local_bc = 0xf;
  iVar58 = piVar73[1];
  local_160 = (ulong)(int)*(uint *)((long)param_1 + 0x24);
  uVar64 = *(uint *)((long)param_1 + 0x2c);
  uVar89 = (ulong)iVar39;
  psVar93 = *(short **)(piVar73 + 6);
  local_c0[0] = 0;
  local_c4 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_d0[0] = 0;
  local_100 = param_1;
  if (((param_2 != (short *)0x0) && (1 < (int)param_5)) && (-1 < piVar73[8])) {
    lVar77 = 0;
    uVar76 = 0;
    local_e0 = (ulong)*(uint *)((long)param_1 + 0x24);
    piVar51 = (int *)((long)*(int *)(param_1 + 4) * (long)param_3);
    local_108 = (ulong)uVar64;
    while (piVar73[10] << (ulong)((uint)uVar76 & 0x1f) != (int)piVar51) {
      uVar76 = uVar76 + 1;
      lVar77 = lVar77 + 8;
      if (piVar73[8] + 1 == (int)uVar76) goto code_r0x00e991c4;
    }
    local_248 = lVar77;
    local_158 = piVar51;
    local_150 = (long)piVar73[3];
    local_128 = uVar76;
    local_118 = piVar73;
    local_f8 = param_6;
    if (param_6 == (undefined *)0x0) {
      iVar38 = 0;
      local_284 = 1;
      local_1b8 = (void *)CONCAT44(local_1b8._4_4_,1);
    }
    else {
      local_284 = ec_tell_frac(param_6);
      iVar41 = *(int *)(param_6 + 0x18) + (int)LZCOUNT(*(undefined4 *)(param_6 + 0x20));
      iVar38 = iVar41 + -0x1c >> 3;
      local_1b8 = (void *)CONCAT44(local_1b8._4_4_,iVar41 + -0x20);
    }
    ppiVar43 = local_100;
    uVar98 = (int)local_150 * iVar39;
    if (0x4fa < (int)param_5) {
      param_5 = 0x4fb;
    }
    local_1b0 = param_5 - iVar38;
    local_e8 = (int *)CONCAT44(local_e8._4_4_,iVar38);
    iVar39 = *(int *)((long)local_100 + 0x2c);
    if (*(int *)(local_100 + 6) == 0) {
      if (iVar39 == -1) goto LAB_00e99358;
      local_1ec = 0;
      iVar41 = (int)local_1b8;
      if ((int)local_1b8 < 2) {
        iVar41 = 0;
      }
      iVar37 = *local_118 << 3;
      iVar173 = 0;
      if (iVar37 != 0) {
        iVar173 = (iVar41 + iVar39 * (int)local_158 + *local_118 * 4) / iVar37;
      }
      uVar104 = iVar173 - (uint)(*(int *)((long)local_100 + 0x34) != 0);
      if ((int)uVar104 <= (int)param_5) {
        param_5 = uVar104;
      }
      if ((int)param_5 < 3) {
        param_5 = 2;
      }
      local_1f4 = param_5 - iVar38;
    }
    else if (iVar39 == -1) {
LAB_00e99358:
      local_1ec = 0;
      local_1f4 = local_1b0;
    }
    else {
      iVar38 = *local_118 >> 3;
      local_1ec = 0;
      if (iVar38 != 0) {
        local_1ec = (iVar39 * (int)local_158 + (*local_118 >> 4)) / iVar38;
      }
      local_1f4 = local_1ec >> 6;
    }
    local_268 = 3 - local_128;
    iVar38 = (int)(param_5 * 400) >> ((uint)local_268 & 0x1f);
    if (iVar39 <= iVar38 && iVar39 != -1) {
      iVar38 = iVar39;
    }
    lVar77 = ((long)iVar58 + 0x400) * uVar89;
    local_238 = lVar59;
    local_198 = uVar89;
    local_140 = psVar93;
    if (local_f8 == (undefined *)0x0) {
      local_f8 = auStack_b8;
      ec_enc_init(auStack_b8,param_4,param_5);
    }
    uVar89 = -(ulong)(uVar98 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar98 << 1;
    local_1a8 = (void *)((long)ppiVar43 + lVar77 * 4 + 0xfc);
    local_200 = lVar77;
    local_19c = param_5;
    if ((0 < local_1ec) && (*(int *)(local_100 + 7) != 0)) {
      uVar53 = (uint)((int)local_1b8 == 1) * 2;
      uVar104 = local_1ec * 2 - *(int *)((long)local_100 + 0xd4) >> 6;
      if ((int)uVar53 <= (int)uVar104) {
        uVar53 = uVar104;
      }
      if ((int)uVar53 < (int)local_1b0) {
        local_19c = uVar53 + (int)local_e8;
        ec_enc_shrink(local_f8);
        local_1b0 = uVar53;
      }
    }
    puVar34 = local_f8;
    uVar88 = local_19c;
    uVar104 = (int)local_158 + iVar58;
    local_1c8 = (int *)(ulong)uVar104;
    uVar53 = local_118[3];
    uVar104 = uVar104 * (int)local_198;
    local_208 = CONCAT44(local_208._4_4_,uVar53);
    if ((int)local_108 <= (int)uVar53) {
      uVar53 = uVar64;
    }
    local_1e0 = (ulong)uVar53;
    local_240 = (void *)((long)local_1a8 + uVar89);
    iVar41 = SUB84(local_130,0);
    lVar59 = -((-(ulong)(uVar104 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar104 << 2) + 0xf &
              0xfffffffffffffff0);
    lVar77 = (long)aiStack_2c0 + lVar59;
    iVar39 = *(int *)(local_100 + 4);
    uVar104 = 0;
    if (iVar39 != 0) {
      uVar104 = (((int)local_158 - iVar58) * iVar41) / iVar39;
    }
    uVar76 = (ulong)uVar104;
    uVar53 = *(uint *)((long)local_100 + 0xe4);
    if ((int)uVar104 < 1) {
      if (0 < (int)uVar53) goto LAB_00e995c8;
      uVar53 = 0;
      uVar75 = 0;
      goto LAB_00e995bc;
    }
    uVar72 = 0;
    uVar75 = 0;
    psVar93 = param_2;
    uVar79 = uVar76;
    do {
      uVar80 = (uint)*psVar93;
      if ((int)uVar75 <= (int)*psVar93) {
        uVar75 = uVar80;
      }
      if ((int)uVar80 <= (int)uVar72) {
        uVar72 = uVar80;
      }
      uVar75 = uVar75 & 0xffff;
      uVar79 = uVar79 - 1;
      psVar93 = psVar93 + 1;
    } while (uVar79 != 0);
    if (uVar75 == -uVar72 || (int)(uVar75 + uVar72) < 0 != SBORROW4(uVar75,-uVar72)) {
      uVar75 = -uVar72;
    }
    if ((int)uVar53 <= (int)uVar75) {
      uVar75 = 0;
      uVar53 = 0;
      psVar93 = param_2;
      do {
        uVar72 = (uint)*psVar93;
        if ((int)uVar53 <= (int)*psVar93) {
          uVar53 = uVar72;
        }
        if ((int)uVar72 <= (int)uVar75) {
          uVar75 = uVar72;
        }
        uVar53 = uVar53 & 0xffff;
        uVar76 = uVar76 - 1;
        psVar93 = psVar93 + 1;
      } while (uVar76 != 0);
LAB_00e995bc:
      if (uVar53 == -uVar75 || (int)(uVar53 + uVar75) < 0 != SBORROW4(uVar53,-uVar75)) {
        uVar53 = -uVar75;
      }
    }
LAB_00e995c8:
    local_290 = (void *)((long)local_240 + uVar89);
    local_298 = iVar41 * 0x28 + 0x14;
    local_1ac = local_19c << 3;
    uVar75 = 0;
    if (iVar39 != 0) {
      uVar75 = (iVar58 * iVar41) / iVar39;
    }
    uVar76 = (ulong)uVar75;
    if ((int)uVar75 < 1) {
      uVar75 = 0;
      uVar72 = 0;
    }
    else {
      uVar72 = 0;
      uVar75 = 0;
      psVar93 = param_2 + (int)uVar104;
      do {
        uVar104 = (uint)*psVar93;
        if ((int)uVar75 <= (int)*psVar93) {
          uVar75 = uVar104;
        }
        if ((int)uVar104 <= (int)uVar72) {
          uVar72 = uVar104;
        }
        uVar75 = uVar75 & 0xffff;
        uVar76 = uVar76 - 1;
        psVar93 = psVar93 + 1;
      } while (uVar76 != 0);
    }
    local_214 = iVar38 - ((400U >> (ulong)((uint)local_128 & 0x1f)) - 0x32) * local_298;
    if (uVar75 == -uVar72 || (int)(uVar75 + uVar72) < 0 != SBORROW4(uVar75,-uVar72)) {
      uVar75 = -uVar72;
    }
    local_1d8 = (ulong)(int)uVar98;
    local_250 = (void *)((long)local_290 + uVar89);
    if ((int)uVar53 <= (int)uVar75) {
      uVar53 = uVar75;
    }
    local_1e8 = (long)ppiVar43 + (long)(iVar58 * (int)local_198) * 4 + 0xfc;
    *(uint *)((long)local_100 + 0xe4) = uVar75;
    local_1c0 = (void *)lVar77;
    local_110 = (long)(int)uVar64;
    if ((int)local_1b8 == 1) {
      ec_enc_bit_logp(local_f8,uVar53 == 0,0xf);
      if (uVar53 == 0) {
        if (0 < local_1ec) {
          if ((int)((int)local_e8 + 2U) <= (int)uVar88) {
            uVar88 = (int)local_e8 + 2U;
          }
          ec_enc_shrink(puVar34,uVar88);
          local_1b0 = 2;
          local_1ac = uVar88 << 3;
          local_1f4 = uVar88;
        }
        local_1f0 = 0;
        local_1b8 = (void *)CONCAT44(local_1b8._4_4_,local_1ac);
        *(int *)(puVar34 + 0x18) =
             (local_1ac - (int)LZCOUNT(*(undefined4 *)(puVar34 + 0x20))) + 0x20;
        local_19c = uVar88;
      }
      else {
        local_1f0 = 1;
        local_1b8 = (void *)CONCAT44(local_1b8._4_4_,1);
      }
    }
    else {
      local_1f0 = 1;
    }
    uVar76 = local_198;
    lVar78 = (long)*(int *)(local_100 + 4);
    local_120 = (ulong)local_158 & 0xffffffff;
    uVar89 = 0;
    pauVar61 = (undefined (*) [16])(param_2 + 8);
    local_22c = 1 << (ulong)((uint)local_128 & 0x1f);
    lVar85 = local_120 * 4;
    local_168 = (long)local_158 << 2;
    local_178 = (size_t)(int)local_1c8;
    uVar79 = -((ulong)local_1c8 >> 0x1f & 1) & 0xfffffffc00000000 |
             ((ulong)local_1c8 & 0xffffffff) << 2;
    piVar73 = (int *)((long)local_1c0 + (long)iVar58 * 4);
    uVar64 = (uint)local_198;
    bVar35 = uVar64 != 1;
    lVar95 = local_198 * 2;
    if ((int)uVar64 < 2) {
      uVar64 = 1;
    }
    uVar74 = (ulong)uVar64;
    lVar81 = local_198 << 5;
    puVar44 = (undefined8 *)(piVar73 + 8);
    local_138 = CONCAT44(local_138._4_4_,(uint)(bVar35 || lVar78 != 1));
    ppiVar43 = local_100;
    piVar51 = local_158;
    piVar56 = local_118;
    lVar83 = lVar78;
    local_190 = lVar81;
    local_188 = uVar79;
    local_180 = piVar73;
    local_170 = uVar74;
    local_148 = (int **)lVar78;
    do {
      sVar36 = *(short *)(piVar56 + 4);
      piVar49 = (int *)((long)ppiVar43 + uVar89 * 4 + 0xc4);
      iVar39 = *piVar49;
      if (((int)lVar83 == 1) && (*(short *)((long)piVar56 + 0x12) == 0)) {
        psVar93 = param_2;
        piVar60 = piVar73;
        uVar63 = local_120;
        if (0 < (int)piVar51) {
          do {
            uVar63 = uVar63 - 1;
            iVar58 = *psVar93 * 0x1000 - iVar39;
            iVar39 = (int)*psVar93 * (int)sVar36 >> 3;
            *piVar60 = iVar58;
            psVar93 = psVar93 + uVar76;
            piVar60 = piVar60 + 1;
          } while (uVar63 != 0);
        }
      }
      else {
        if ((int)lVar83 != 1) {
          local_f0 = piVar49;
          local_e8 = (int *)param_2;
          memset(local_180 + uVar89 * local_178,0,local_168);
          ppiVar43 = local_100;
          piVar49 = local_f0;
          piVar51 = local_158;
          param_2 = (short *)local_e8;
          uVar74 = local_170;
          piVar56 = local_118;
          lVar83 = (long)local_148;
          uVar79 = local_188;
          lVar81 = local_190;
        }
        uVar64 = 0;
        if ((int)lVar83 != 0) {
          uVar64 = (int)piVar51 / (int)lVar83;
        }
        uVar63 = (ulong)uVar64;
        if (0 < (int)uVar64) {
          if (((uint)(uVar64 < 0x10) | (uint)local_138 & 1) == 0) {
            uVar84 = uVar63 & 0xfffffff0;
            uVar52 = uVar84;
            puVar54 = puVar44;
            pauVar47 = pauVar61;
            do {
              auVar115 = pauVar47[-1];
              auVar128 = *pauVar47;
              pauVar47 = (undefined (*) [16])((long)*pauVar47 + lVar81);
              uVar52 = uVar52 - 0x10;
              auVar178._0_8_ = CONCAT44((int)auVar115._10_2_,(int)auVar115._8_2_);
              auVar178._8_4_ = (int)auVar115._12_2_;
              auVar178._12_4_ = (int)auVar115._14_2_;
              auVar138._0_8_ = CONCAT44((int)auVar115._2_2_,(int)auVar115._0_2_);
              auVar138._8_4_ = (int)auVar115._4_2_;
              auVar138._12_4_ = (int)auVar115._6_2_;
              auVar126._0_8_ = CONCAT44((int)auVar128._10_2_,(int)auVar128._8_2_);
              auVar126._8_4_ = (int)auVar128._12_2_;
              auVar126._12_4_ = (int)auVar128._14_2_;
              auVar115._0_8_ = CONCAT44((int)auVar128._2_2_,(int)auVar128._0_2_);
              auVar115._8_4_ = (int)auVar128._4_2_;
              auVar115._12_4_ = (int)auVar128._6_2_;
              puVar54[-3] = auVar138._8_8_;
              puVar54[-4] = auVar138._0_8_;
              puVar54[-1] = auVar178._8_8_;
              puVar54[-2] = auVar178._0_8_;
              puVar54[1] = auVar115._8_8_;
              *puVar54 = auVar115._0_8_;
              puVar54[3] = auVar126._8_8_;
              puVar54[2] = auVar126._0_8_;
              puVar54 = puVar54 + lVar78 * 8;
            } while (uVar52 != 0);
            if (uVar84 == uVar63) goto LAB_00e999d0;
          }
          else {
            uVar84 = 0;
          }
          lVar65 = lVar78 * 4 * uVar84;
          lVar87 = uVar63 - uVar84;
          lVar68 = lVar95 * uVar84;
          do {
            psVar93 = (short *)((long)param_2 + lVar68);
            lVar87 = lVar87 + -1;
            lVar68 = lVar68 + lVar95;
            *(int *)((long)piVar73 + lVar65) = (int)*psVar93;
            lVar65 = lVar65 + lVar78 * 4;
          } while (lVar87 != 0);
        }
LAB_00e999d0:
        if (0 < (int)piVar51) {
          lVar68 = 0;
          do {
            uVar64 = *(uint *)((long)piVar73 + lVar68);
            *(uint *)((long)piVar73 + lVar68) =
                 (-(uVar64 >> 0xf & 1) & 0xf0000000 | (uVar64 & 0xffff) << 0xc) - iVar39;
            lVar68 = lVar68 + 4;
            iVar39 = (int)(short)uVar64 * (int)sVar36 >> 3;
          } while (lVar85 - lVar68 != 0);
        }
      }
      puVar34 = local_f8;
      uVar84 = local_160;
      uVar52 = local_198;
      uVar63 = local_1e0;
      uVar89 = uVar89 + 1;
      piVar73 = (int *)((long)piVar73 + uVar79);
      param_2 = param_2 + 1;
      pauVar61 = (undefined (*) [16])((long)*pauVar61 + 2);
      puVar44 = (undefined8 *)((long)puVar44 + uVar79);
      *piVar49 = iVar39;
    } while (uVar89 != uVar74);
    iVar39 = (int)local_150;
    uVar64 = (uint)local_160;
    if ((*(int *)((long)ppiVar43 + 0x44) == 0) || ((int)local_1b0 < 4)) {
      uVar104 = 0;
      uVar98 = SUB84(local_130,0) * 0xc;
      uVar53 = uVar64;
      if (local_1b0 != uVar98 &&
          (int)(local_1b0 + SUB84(local_130,0) * -0xc) < 0 == SBORROW4(local_1b0,uVar98))
      goto joined_r0x00e99a84;
    }
    else {
      uVar53 = (uint)local_e0;
joined_r0x00e99a84:
      uVar104 = 0;
      if ((uVar53 == 0) && (uVar104 = 0, ((local_1f0 ^ 1) & 1) == 0)) {
        if (*(int *)(ppiVar43 + 3) == 0) {
          uVar104 = (uint)(4 < *(int *)((long)ppiVar43 + 0x1c));
        }
        else {
          uVar104 = 0;
        }
      }
    }
    local_148 = ppiVar43 + 0xd;
    uVar42 = *(undefined4 *)local_148;
    *(int **)((long)&piStack_2c8 + lVar59) = (int *)((long)ppiVar43 + 0x7c);
    piVar73 = local_158;
    local_1d0 = (int *)((long)ppiVar43 + 0x7c);
    *(uint *)((long)auStack_2d8 + lVar59) = uVar104;
    lVar85 = (long)local_1c0;
    *(undefined4 **)((long)&uStack_2e0 + lVar59) = &local_c8;
    lVar78 = local_1e8;
    *(uint *)((long)auStack_2d8 + lVar59 + 8) = local_1b0;
    local_2ac = FUN_00e9c7f0(ppiVar43,lVar85,lVar78,uVar52 & 0xffffffff,piVar73,uVar42,&local_bc,
                             local_c0);
    sVar36 = local_c0[0];
    uVar89 = local_108;
    if (((local_c0[0] < 0x3334) && (*(short *)(local_100 + 0xe) < 0x3334)) ||
       ((*local_1d0 != 0 && (*(float *)(local_100 + 0x10) <= 0.3)))) {
      local_29c = 0;
      if (local_2ac == 0) goto LAB_00e99c54;
LAB_00e99bc0:
      ec_enc_bit_logp(puVar34,1,1);
      iVar58 = local_bc + 1;
      iVar38 = (int)LZCOUNT(iVar58);
      uVar98 = 0x1b - iVar38;
      ec_enc_uint(puVar34,uVar98,6);
      ec_enc_bits(puVar34,(-0x10 << (ulong)(uVar98 & 0x1f)) + iVar58,0x1f - iVar38);
      ec_enc_bits(puVar34,local_c8,3);
      ec_enc_icdf(puVar34,uVar42,&DAT_005691ba,2);
      uVar89 = local_108;
    }
    else {
      local_29c = (uint)((double)(long)*(int *)((long)local_100 + 0x6c) * 1.26 <
                         (double)(long)local_bc ||
                        (double)(long)local_bc <
                        (double)(long)*(int *)((long)local_100 + 0x6c) * 0.79);
      if (local_2ac != 0) goto LAB_00e99bc0;
LAB_00e99c54:
      if ((uVar64 == 0) && ((int)local_1b8 + 0x10 <= local_1ac)) {
        ec_enc_bit_logp(puVar34,0,1);
      }
    }
    iVar58 = (int)local_158;
    iVar41 = (int)sVar36;
    iVar38 = (int)local_128;
    if (*(int *)((long)local_100 + 0x1c) < 1) {
      iVar37 = 0;
joined_r0x00e99ce0:
      if (iVar38 == 0) goto LAB_00e99d78;
LAB_00e99d54:
      if (local_1ac <
          *(int *)(puVar34 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar34 + 0x20)) + -0x1d)
      goto LAB_00e99d78;
      if (iVar37 == 0) {
        local_254 = 0;
        iVar38 = 0;
        local_188 = (ulong)local_188._4_4_ << 0x20;
      }
      else {
        local_254 = 0;
        local_188 = CONCAT44(local_188._4_4_,1);
        iVar38 = local_22c;
      }
    }
    else {
      if (*(int *)((long)local_100 + 0x44) == 0) {
        bVar35 = false;
        if ((uVar64 != 0) && ((int)local_1f4 < 0xf)) {
          bVar35 = *(int *)((long)local_100 + 0xbc) != 2;
        }
        iVar37 = FUN_00e9cd10(local_1c0,local_1c8,uVar52 & 0xffffffff,local_d0,&local_cc,bVar35,
                              &local_d8);
        iVar58 = (int)local_158;
        iVar38 = (int)local_128;
        goto joined_r0x00e99ce0;
      }
      iVar37 = 0;
      if (iVar38 != 0) goto LAB_00e99d54;
LAB_00e99d78:
      local_188 = local_188 & 0xffffffff00000000;
      local_254 = 1;
      iVar38 = 0;
    }
    ppiVar43 = local_100;
    piVar73 = local_118;
    uVar74 = local_128;
    uVar79 = (ulong)local_130;
    uVar76 = local_198;
    lVar59 = (long)local_1c0;
    uVar98 = iVar58 * (int)uVar52;
    lVar77 = lVar77 - ((-(ulong)(uVar98 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar98 << 2) + 0xf &
                      0xfffffffffffffff0);
    local_168 = local_1d8 * 4;
    local_1c8 = (int *)(lVar77 - (local_168 + 0xf & 0xfffffffffffffff0));
    local_138 = local_1d8 * 2;
    local_1b8 = (void *)((long)local_1c8 - (local_138 + 0xf & 0xfffffffffffffff0));
    local_1e8 = CONCAT44(local_1e8._4_4_,iVar38);
    iVar37 = (int)local_128;
    iVar58 = SUB84(local_130,0);
    psVar93 = local_140;
    local_25c = iVar41;
    local_258 = uVar42;
    local_e8 = (int *)lVar77;
    if (iVar38 == 0) {
      uVar98 = iVar39 * iVar58;
      local_228 = (ulong)uVar98;
      lVar78 = (long)(int)uVar98;
      pvVar90 = (void *)((long)local_1b8 -
                        ((-(ulong)(uVar98 >> 0x1f) & 0xfffffffe00000000 | local_228 << 1) + 0xf &
                        0xfffffffffffffff0));
      local_120 = (ulong)local_120._4_4_ << 0x20;
    }
    else {
      uVar98 = iVar39 * iVar58;
      local_228 = (ulong)uVar98;
      lVar78 = (long)(int)uVar98;
      pvVar90 = (void *)((long)local_1b8 -
                        ((-(ulong)(uVar98 >> 0x1f) & 0xfffffffe00000000 | local_228 << 1) + 0xf &
                        0xfffffffffffffff0));
      if (*(int *)((long)local_100 + 0x1c) < 8) {
        local_120 = (ulong)local_120._4_4_ << 0x20;
      }
      else {
        uVar42 = *(undefined4 *)(local_100 + 4);
        uVar52 = (ulong)local_130 & 0xffffffff;
        uVar55 = local_128 & 0xffffffff;
        local_220 = lVar78;
        *(undefined4 *)((long)pvVar90 + -0x10) = *(undefined4 *)((long)local_100 + 0x4c);
        FUN_00e9d388(piVar73,0,lVar59,lVar77,uVar52,uVar76,uVar55,uVar42);
        piVar51 = local_1c8;
        compute_band_energies
                  (piVar73,lVar77,local_1c8,uVar63 & 0xffffffff,uVar79 & 0xffffffff,
                   uVar74 & 0xffffffff,*(undefined4 *)((long)ppiVar43 + 0x4c));
        amp2Log2(piVar73,uVar63 & 0xffffffff,uVar89 & 0xffffffff,piVar51,pvVar90,uVar79 & 0xffffffff
                );
        ppiVar43 = local_100;
        piVar73 = local_118;
        lVar78 = local_220;
        uVar89 = local_228;
        iVar38 = (int)local_1e8;
        psVar93 = local_140;
        lVar77 = (long)local_e8;
        if ((int)(uint)local_228 < 1) {
          local_120 = CONCAT44(local_120._4_4_,1);
        }
        else {
          sVar36 = (short)(iVar37 << 10) >> 1;
          if (0xf < (uint)local_228) {
            uVar76 = local_228 & 0xfffffff0;
            pauVar61 = (undefined (*) [16])((long)pvVar90 + 0x10);
            uVar52 = uVar76;
            do {
              auVar115 = pauVar61[-1];
              auVar128 = *pauVar61;
              uVar52 = uVar52 - 0x10;
              auVar105._0_8_ =
                   CONCAT26(auVar115._6_2_ + sVar36,
                            CONCAT24(auVar115._4_2_ + sVar36,
                                     CONCAT22(auVar115._2_2_ + sVar36,auVar115._0_2_ + sVar36)));
              auVar105._8_2_ = auVar115._8_2_ + sVar36;
              auVar105._10_2_ = auVar115._10_2_ + sVar36;
              auVar105._12_2_ = auVar115._12_2_ + sVar36;
              auVar105._14_2_ = auVar115._14_2_ + sVar36;
              auVar112._0_8_ =
                   CONCAT26(auVar128._6_2_ + sVar36,
                            CONCAT24(auVar128._4_2_ + sVar36,
                                     CONCAT22(auVar128._2_2_ + sVar36,auVar128._0_2_ + sVar36)));
              auVar112._8_2_ = auVar128._8_2_ + sVar36;
              auVar112._10_2_ = auVar128._10_2_ + sVar36;
              auVar112._12_2_ = auVar128._12_2_ + sVar36;
              auVar112._14_2_ = auVar128._14_2_ + sVar36;
              *(long *)(pauVar61[-1] + 8) = auVar105._8_8_;
              *(undefined8 *)pauVar61[-1] = auVar105._0_8_;
              *(long *)(*pauVar61 + 8) = auVar112._8_8_;
              *(undefined8 *)*pauVar61 = auVar112._0_8_;
              pauVar61 = pauVar61 + 2;
              psVar93 = local_140;
              lVar77 = (long)local_e8;
              if (uVar52 == 0) goto joined_r0x00e9a020;
            } while( true );
          }
          uVar76 = 0;
          do {
            lVar59 = uVar76 * 2;
            uVar76 = uVar76 + 1;
            *(short *)((long)pvVar90 + lVar59) = *(short *)((long)pvVar90 + lVar59) + sVar36;
joined_r0x00e9a020:
          } while (uVar76 != uVar89);
          local_120 = CONCAT44(local_120._4_4_,1);
        }
      }
    }
    uVar89 = local_198;
    lVar59 = (long)local_1c0;
    uVar42 = *(undefined4 *)(ppiVar43 + 4);
    uVar76 = local_198 & 0xffffffff;
    *(undefined4 *)((long)pvVar90 + -0x10) = *(undefined4 *)((long)ppiVar43 + 0x4c);
    FUN_00e9d388(piVar73,iVar38,lVar59,lVar77,uVar79 & 0xffffffff,uVar76,uVar74 & 0xffffffff,uVar42)
    ;
    ppiVar43 = local_100;
    piVar73 = local_1c8;
    local_26c = (uint)((int)uVar89 == 2 && iVar58 == 1);
    if (local_26c == 1) {
      local_cc = 0;
    }
    sVar94 = lVar78 * 2;
    local_220 = lVar78;
    compute_band_energies
              (local_118,lVar77,local_1c8,uVar63 & 0xffffffff,uVar79 & 0xffffffff,local_128,
               *(undefined4 *)((long)local_100 + 0x4c));
    if ((*(int *)((long)ppiVar43 + 0x44) != 0) && (2 < (int)local_108)) {
      uVar89 = local_108 - 2;
      iVar39 = (int)((ulong)((long)*piVar73 * 3) >> 0xf);
      if (uVar89 < 8) {
        uVar74 = 2;
      }
      else {
        uVar52 = uVar89 & 0xfffffffffffffff8;
        pauVar61 = (undefined (*) [16])(piVar73 + 6);
        auVar128._8_4_ = 1;
        auVar128._0_8_ = 0x100000001;
        auVar128._12_4_ = 1;
        uVar74 = uVar52 | 2;
        auVar106._4_4_ = iVar39;
        auVar106._0_4_ = iVar39;
        auVar106._8_4_ = iVar39;
        auVar106._12_4_ = iVar39;
        uVar76 = uVar52;
        do {
          uVar76 = uVar76 - 8;
          auVar115 = NEON_smin(pauVar61[-1],auVar106,4);
          auVar138 = NEON_smin(*pauVar61,auVar106,4);
          auVar115 = NEON_smax(auVar115,auVar128,4);
          auVar138 = NEON_smax(auVar138,auVar128,4);
          *(long *)((long)pauVar61[-1] + 8) = auVar115._8_8_;
          *(long *)pauVar61[-1] = auVar115._0_8_;
          *(long *)((long)*pauVar61 + 8) = auVar138._8_8_;
          *(long *)*pauVar61 = auVar138._0_8_;
          pauVar61 = pauVar61 + 2;
        } while (uVar76 != 0);
        if (uVar89 == uVar52) goto LAB_00e9a180;
      }
      lVar59 = local_108 - uVar74;
      piVar51 = piVar73 + uVar74;
      do {
        iVar38 = *piVar51;
        if (iVar39 <= *piVar51) {
          iVar38 = iVar39;
        }
        if (iVar38 < 2) {
          iVar38 = 1;
        }
        lVar59 = lVar59 + -1;
        *piVar51 = iVar38;
        piVar51 = piVar51 + 1;
      } while (lVar59 != 0);
    }
LAB_00e9a180:
    amp2Log2(local_118,uVar63 & 0xffffffff,local_108,piVar73,local_1b8,uVar79 & 0xffffffff);
    psVar97 = (short *)((long)pvVar90 - (sVar94 + 0xf & 0xfffffffffffffff0));
    local_178 = local_110 << 1;
    memset(psVar97,0,local_178);
    ppiVar43 = local_100;
    uVar89 = local_128;
    local_2a0 = 0;
    local_2a8 = 0;
    if (uVar64 == 0) {
      pauVar61 = (undefined (*) [16])local_100[0x1e];
      if (pauVar61 == (undefined (*) [16])0x0) {
        local_2a0 = 0;
        local_2a8 = 0;
        goto LAB_00e9a1e0;
      }
      uVar98 = *(uint *)((long)local_100 + 0x44);
      if (uVar98 == 0) {
        uVar98 = *(uint *)(local_100 + 0xc);
        if ((int)uVar98 < 3) {
          uVar98 = 2;
        }
        uVar76 = (ulong)uVar98;
        if (iVar58 < 1) {
          iVar38 = 0;
          iVar39 = 0;
          sVar36 = 0;
        }
        else {
          iVar37 = 1 - uVar98;
          auVar107._8_8_ = 0xff00ff00ff00ff;
          auVar107._0_8_ = 0xff00ff00ff00ff;
          uVar74 = 0;
          auVar113._8_2_ = 0x80;
          auVar113._0_8_ = 0x80008000800080;
          auVar113._10_2_ = 0x80;
          auVar113._12_2_ = 0x80;
          auVar113._14_2_ = 0x80;
          iVar41 = 0;
          iVar39 = 0;
          auVar137._8_2_ = 0x800;
          auVar137._0_8_ = 0x800080008000800;
          auVar137._10_2_ = 0x800;
          auVar137._12_2_ = 0x800;
          auVar137._14_2_ = 0x800;
          iVar38 = 0;
          auVar141._8_2_ = 0xf800;
          auVar141._0_8_ = 0xf800f800f800f800;
          auVar141._10_2_ = 0xf800;
          auVar141._12_2_ = 0xf800;
          auVar141._14_2_ = 0xf800;
          uVar52 = uVar76 & 0x7ffffff8;
          pauVar47 = pauVar61;
          do {
            if (uVar98 < 8) {
              uVar55 = 0;
LAB_00e9a8a0:
              iVar173 = (iVar37 + (int)uVar55 * 2) * 0x10000;
              do {
                sVar36 = *(short *)((long)*pauVar47 + uVar55 * 2);
                if (sVar36 + 0x7ff < 0 == SCARRY4((int)sVar36,0x7ff)) {
                  if (sVar36 < 0x100) {
                    if (0 < sVar36) {
                      sVar36 = sVar36 >> 1;
                    }
                  }
                  else {
                    sVar36 = 0x80;
                  }
                }
                else {
                  sVar36 = -0x800;
                }
                puVar1 = (ushort *)(psVar93 + uVar55);
                uVar55 = uVar55 + 1;
                iVar40 = iVar173 >> 0x10;
                iVar173 = iVar173 + 0x20000;
                iVar39 = iVar39 + iVar40 * sVar36;
                iVar40 = (uint)puVar1[1] - (uint)*puVar1;
                iVar41 = iVar40 + iVar41;
                iVar38 = iVar38 + (int)(short)iVar40 * (int)sVar36;
              } while (uVar76 != uVar55);
            }
            else {
              iVar165 = 0;
              iVar166 = 0;
              iVar172 = 0;
              iVar139 = 0;
              iVar142 = 0;
              iVar143 = 0;
              iVar167 = 0;
              iVar168 = 0;
              iVar169 = 0;
              iVar170 = 0;
              iVar164 = 0;
              iVar171 = 0;
              iVar140 = 0;
              iVar144 = 0;
              iVar145 = 0;
              iVar146 = 0;
              iVar147 = 0;
              iVar148 = 0;
              iVar149 = 0;
              iVar150 = 0;
              iVar151 = 0;
              uVar103 = SUB168(_DAT_004c3940,8);
              uVar99 = SUB168(_DAT_004c3940,0);
              puVar44 = (undefined8 *)(psVar93 + 1);
              pauVar50 = pauVar47;
              uVar55 = uVar52;
              iVar173 = 0;
              iVar40 = 1;
              iVar71 = 2;
              iVar174 = 3;
              do {
                auVar115 = *pauVar50;
                uVar176 = puVar44[1];
                uVar175 = *puVar44;
                uVar55 = uVar55 - 8;
                auVar128 = *(undefined (*) [16])((long)puVar44 + -2);
                puVar44 = puVar44 + 2;
                auVar138 = NEON_cmgt(auVar115,auVar107,2);
                auVar177._0_2_ = auVar115._0_2_ >> 1;
                auVar177._2_2_ = auVar115._2_2_ >> 1;
                auVar177._4_2_ = auVar115._4_2_ >> 1;
                auVar177._6_2_ = auVar115._6_2_ >> 1;
                auVar177._8_2_ = auVar115._8_2_ >> 1;
                auVar177._10_2_ = auVar115._10_2_ >> 1;
                auVar177._12_2_ = auVar115._12_2_ >> 1;
                auVar177._14_2_ = auVar115._14_2_ >> 1;
                iVar156 = (int)((ulong)uVar99 >> 0x20);
                iVar157 = (int)((ulong)uVar103 >> 0x20);
                auVar138 = NEON_bsl(auVar138,auVar113,auVar177,1);
                auVar13._2_2_ = auVar115._2_2_ + 0x7ff;
                auVar13._0_2_ = auVar115._0_2_ + 0x7ff;
                auVar13._4_2_ = auVar115._4_2_ + 0x7ff;
                auVar13._6_2_ = auVar115._6_2_ + 0x7ff;
                auVar13._8_2_ = auVar115._8_2_ + 0x7ff;
                auVar13._10_2_ = auVar115._10_2_ + 0x7ff;
                auVar13._12_2_ = auVar115._12_2_ + 0x7ff;
                auVar13._14_2_ = auVar115._14_2_ + 0x7ff;
                auVar178 = NEON_cmhi(auVar137,auVar13,2);
                iVar152 = ((uint)uVar175 & 0xffff) - (uint)auVar128._0_2_;
                iVar153 = (uint)(ushort)((ulong)uVar175 >> 0x10) - (uint)auVar128._2_2_;
                iVar154 = (uint)(ushort)((ulong)uVar175 >> 0x20) - (uint)auVar128._4_2_;
                iVar155 = (uint)(ushort)((ulong)uVar175 >> 0x30) - (uint)auVar128._6_2_;
                iVar158 = (uint)(ushort)uVar176 - (uint)auVar128._8_2_;
                iVar159 = (uint)(ushort)((ulong)uVar176 >> 0x10) - (uint)auVar128._10_2_;
                iVar160 = (uint)(ushort)((ulong)uVar176 >> 0x20) - (uint)auVar128._12_2_;
                iVar161 = (uint)(ushort)((ulong)uVar176 >> 0x30) - (uint)auVar128._14_2_;
                auVar128 = NEON_cmgt(auVar115,auVar141,2);
                auVar115 = NEON_bif(auVar115,auVar138,auVar178,1);
                auVar115 = NEON_bif(auVar115,auVar141,auVar128,1);
                iVar148 = iVar148 + (iVar158 * 0x10000 >> 0x10) * (int)auVar115._8_2_;
                iVar149 = iVar149 + (iVar159 * 0x10000 >> 0x10) * (int)auVar115._10_2_;
                iVar150 = iVar150 + (iVar160 * 0x10000 >> 0x10) * (int)auVar115._12_2_;
                iVar151 = iVar151 + (iVar161 * 0x10000 >> 0x10) * (int)auVar115._14_2_;
                iVar38 = iVar38 + (iVar152 * 0x10000 >> 0x10) * (int)auVar115._0_2_;
                iVar140 = iVar140 + (iVar153 * 0x10000 >> 0x10) * (int)auVar115._2_2_;
                iVar142 = iVar142 + (iVar154 * 0x10000 >> 0x10) * (int)auVar115._4_2_;
                iVar143 = iVar143 + (iVar155 * 0x10000 >> 0x10) * (int)auVar115._6_2_;
                iVar167 = iVar158 + iVar167;
                iVar168 = iVar159 + iVar168;
                iVar169 = iVar160 + iVar169;
                iVar170 = iVar161 + iVar170;
                iVar41 = iVar152 + iVar41;
                iVar164 = iVar153 + iVar164;
                iVar165 = iVar154 + iVar165;
                iVar166 = iVar155 + iVar166;
                iVar144 = iVar144 + ((iVar37 + (int)uVar99 * 2) * 0x10000 >> 0x10) *
                                    (int)auVar115._8_2_;
                iVar145 = iVar145 + ((iVar37 + iVar156 * 2) * 0x10000 >> 0x10) *
                                    (int)auVar115._10_2_;
                iVar146 = iVar146 + ((iVar37 + (int)uVar103 * 2) * 0x10000 >> 0x10) *
                                    (int)auVar115._12_2_;
                iVar147 = iVar147 + ((iVar37 + iVar157 * 2) * 0x10000 >> 0x10) *
                                    (int)auVar115._14_2_;
                iVar39 = iVar39 + ((iVar37 + iVar173 * 2) * 0x10000 >> 0x10) * (int)auVar115._0_2_;
                iVar171 = iVar171 + ((iVar37 + iVar40 * 2) * 0x10000 >> 0x10) * (int)auVar115._2_2_;
                iVar172 = iVar172 + ((iVar37 + iVar71 * 2) * 0x10000 >> 0x10) * (int)auVar115._4_2_;
                iVar139 = iVar139 + ((iVar37 + iVar174 * 2) * 0x10000 >> 0x10) * (int)auVar115._6_2_
                ;
                iVar173 = iVar173 + 8;
                iVar40 = iVar40 + 8;
                iVar71 = iVar71 + 8;
                iVar174 = iVar174 + 8;
                uVar99 = CONCAT44(iVar156 + 8,(int)uVar99 + 8);
                uVar103 = CONCAT44(iVar157 + 8,(int)uVar103 + 8);
                pauVar50 = pauVar50 + 1;
              } while (uVar55 != 0);
              iVar38 = iVar38 + iVar148 + iVar140 + iVar149 + iVar142 + iVar150 + iVar143 + iVar151;
              iVar39 = iVar39 + iVar144 + iVar171 + iVar145 + iVar172 + iVar146 + iVar139 + iVar147;
              iVar41 = iVar41 + iVar167 + iVar164 + iVar168 + iVar165 + iVar169 + iVar166 + iVar170;
              uVar55 = uVar52;
              if (uVar52 != uVar76) goto LAB_00e9a8a0;
            }
            sVar36 = (short)iVar41;
            uVar74 = uVar74 + 1;
            pauVar47 = (undefined (*) [16])((long)*pauVar47 + local_150 * 2);
          } while (uVar74 != uVar79);
        }
        puVar1 = (ushort *)(psVar93 + uVar98);
        iVar41 = uVar98 * iVar58 * (uVar98 - 1);
        iVar37 = 0;
        if (sVar36 != 0) {
          iVar37 = iVar38 / (int)sVar36;
        }
        iVar41 = iVar41 + iVar41 * uVar98;
        iVar173 = (int)(short)iVar37;
        iVar38 = 0;
        if (iVar41 != 0) {
          iVar38 = (iVar39 * 6) / iVar41;
        }
        iVar38 = iVar38 >> 1;
        if (0x1f < iVar38) {
          iVar38 = 0x20;
        }
        iVar39 = iVar38;
        if (iVar38 == -0x20 || iVar38 + 0x20 < 0 != SCARRY4(iVar38,0x20)) {
          iVar39 = -0x20;
        }
        iVar41 = iVar39 + iVar173 + 0xcd;
        do {
          psVar93 = psVar93 + 1;
          iVar41 = iVar41 - iVar39;
        } while ((int)*psVar93 < (int)(((uint)*puVar1 + (uint)(*puVar1 >> 0xf)) * 0x10000) >> 0x11);
        iVar40 = 0;
        iVar39 = iVar173 + 0xcd;
        uVar74 = uVar76;
        psVar93 = psVar97;
        if (iVar38 == -0x20 || iVar38 + 0x20 < 0 != SCARRY4(iVar38,0x20)) {
          iVar38 = -0x20;
        }
        do {
          uVar11 = *(ushort *)*pauVar61;
          if (iVar58 == 2) {
            uVar12 = *(ushort *)((long)*pauVar61 + local_150 * 2);
            if ((short)uVar11 <= (short)uVar12) {
              uVar11 = uVar12;
            }
            sVar36 = (uVar11 & (ushort)((uint)(int)(short)uVar11 >> 0xf)) - (short)iVar41;
          }
          else {
            sVar36 = (uVar11 & (ushort)((uint)(int)(short)uVar11 >> 0xf)) - (short)iVar41;
          }
          if (0x100 < sVar36) {
            iVar40 = iVar40 + 1;
            *psVar93 = sVar36 + -0x100;
          }
          pauVar61 = (undefined (*) [16])((long)*pauVar61 + 2);
          iVar41 = iVar41 + iVar38;
          uVar74 = uVar74 - 1;
          psVar93 = psVar93 + 1;
        } while (uVar74 != 0);
        if (2 < iVar40) {
          if (iVar37 * 0x10000 < -0x1ccffff) {
            iVar39 = iVar173 + 0x1cd;
            if (uVar98 < 0x10) {
              uVar52 = 0;
            }
            else {
              uVar52 = uVar76 & 0x7ffffff0;
              pauVar61 = (undefined (*) [16])(psVar97 + 8);
              auVar102._8_2_ = 0x100;
              auVar102._0_8_ = 0x100010001000100;
              auVar102._10_2_ = 0x100;
              auVar102._12_2_ = 0x100;
              auVar102._14_2_ = 0x100;
              uVar74 = uVar52;
              do {
                auVar115 = pauVar61[-1];
                auVar128 = *pauVar61;
                uVar74 = uVar74 - 0x10;
                auVar138 = NEON_cmgt(auVar102,auVar115,2);
                sVar36 = auVar115._0_2_ + -0x100;
                sVar118 = auVar115._2_2_ + -0x100;
                sVar119 = auVar115._4_2_ + -0x100;
                sVar120 = auVar115._6_2_ + -0x100;
                sVar121 = auVar115._8_2_ + -0x100;
                sVar122 = auVar115._10_2_ + -0x100;
                sVar123 = auVar115._12_2_ + -0x100;
                sVar124 = auVar115._14_2_ + -0x100;
                auVar115 = NEON_cmgt(auVar102,auVar128,2);
                sVar125 = auVar128._0_2_ + -0x100;
                sVar130 = auVar128._2_2_ + -0x100;
                sVar131 = auVar128._4_2_ + -0x100;
                sVar132 = auVar128._6_2_ + -0x100;
                sVar133 = auVar128._8_2_ + -0x100;
                sVar134 = auVar128._10_2_ + -0x100;
                sVar135 = auVar128._12_2_ + -0x100;
                sVar136 = auVar128._14_2_ + -0x100;
                auVar117._0_8_ =
                     CONCAT17((byte)((ushort)sVar120 >> 8) & ~auVar138[7],
                              CONCAT16((byte)sVar120 & ~auVar138[6],
                                       CONCAT15((byte)((ushort)sVar119 >> 8) & ~auVar138[5],
                                                CONCAT14((byte)sVar119 & ~auVar138[4],
                                                         CONCAT13((byte)((ushort)sVar118 >> 8) &
                                                                  ~auVar138[3],
                                                                  CONCAT12((byte)sVar118 &
                                                                           ~auVar138[2],
                                                                           CONCAT11((byte)((ushort)
                                                  sVar36 >> 8) & ~auVar138[1],
                                                  (byte)sVar36 & ~auVar138[0])))))));
                auVar117[8] = (byte)sVar121 & ~auVar138[8];
                auVar117[9] = (byte)((ushort)sVar121 >> 8) & ~auVar138[9];
                auVar117[10] = (byte)sVar122 & ~auVar138[10];
                auVar117[11] = (byte)((ushort)sVar122 >> 8) & ~auVar138[11];
                auVar117[12] = (byte)sVar123 & ~auVar138[12];
                auVar117[13] = (byte)((ushort)sVar123 >> 8) & ~auVar138[13];
                auVar117[14] = (byte)sVar124 & ~auVar138[14];
                auVar117[15] = (byte)((ushort)sVar124 >> 8) & ~auVar138[15];
                auVar129._0_8_ =
                     CONCAT17((byte)((ushort)sVar132 >> 8) & ~auVar115[7],
                              CONCAT16((byte)sVar132 & ~auVar115[6],
                                       CONCAT15((byte)((ushort)sVar131 >> 8) & ~auVar115[5],
                                                CONCAT14((byte)sVar131 & ~auVar115[4],
                                                         CONCAT13((byte)((ushort)sVar130 >> 8) &
                                                                  ~auVar115[3],
                                                                  CONCAT12((byte)sVar130 &
                                                                           ~auVar115[2],
                                                                           CONCAT11((byte)((ushort)
                                                  sVar125 >> 8) & ~auVar115[1],
                                                  (byte)sVar125 & ~auVar115[0])))))));
                auVar129[8] = (byte)sVar133 & ~auVar115[8];
                auVar129[9] = (byte)((ushort)sVar133 >> 8) & ~auVar115[9];
                auVar129[10] = (byte)sVar134 & ~auVar115[10];
                auVar129[11] = (byte)((ushort)sVar134 >> 8) & ~auVar115[11];
                auVar129[12] = (byte)sVar135 & ~auVar115[12];
                auVar129[13] = (byte)((ushort)sVar135 >> 8) & ~auVar115[13];
                auVar129[14] = (byte)sVar136 & ~auVar115[14];
                auVar129[15] = (byte)((ushort)sVar136 >> 8) & ~auVar115[15];
                *(long *)((long)pauVar61[-1] + 8) = auVar117._8_8_;
                *(undefined8 *)pauVar61[-1] = auVar117._0_8_;
                *(long *)((long)*pauVar61 + 8) = auVar129._8_8_;
                *(undefined8 *)*pauVar61 = auVar129._0_8_;
                pauVar61 = pauVar61 + 2;
              } while (uVar74 != 0);
              if (uVar52 == uVar76) goto LAB_00e9c7e4;
            }
            lVar59 = uVar76 - uVar52;
            psVar93 = psVar97 + uVar52;
            do {
              sVar36 = 0;
              if (0xff < *psVar93) {
                sVar36 = *psVar93 + -0x100;
              }
              lVar59 = lVar59 + -1;
              *psVar93 = sVar36;
              psVar93 = psVar93 + 1;
            } while (lVar59 != 0);
          }
          else {
            memset(psVar97,0,(ulong)(uVar98 << 1));
            iVar39 = 0;
            iVar38 = 0;
            ppiVar43 = local_100;
            uVar89 = local_128;
          }
        }
LAB_00e9c7e4:
        local_2a8 = iVar38 << 6;
        local_2a0 = iVar39 + 0xcd;
        goto LAB_00e9a1e0;
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_2a4 = 0;
joined_r0x00e9a2fc:
      local_2a4 = 0;
    }
    else {
LAB_00e9a1e0:
      uVar98 = *(uint *)((long)ppiVar43 + 0x44);
      if (uVar98 != 0) {
        local_2a4 = 0;
        goto joined_r0x00e9a2fc;
      }
      iVar39 = 0;
      iVar38 = 0;
      if ((int)local_1e8 != 0) {
        iVar38 = ((int)uVar89 << 0x1a) >> 0x11;
      }
      if ((int)uVar64 < (int)local_108) {
        iVar39 = 0;
        iVar41 = -0x2800;
        psVar66 = (short *)((long)local_1b8 + uVar84 * 2);
        psVar93 = (short *)((long)local_1b8 + (uVar84 + local_150) * 2);
        lVar59 = local_110 - uVar84;
        do {
          iVar37 = (short)iVar41 + -0x400;
          if (iVar37 <= *psVar66 - iVar38) {
            iVar37 = *psVar66 - iVar38;
          }
          iVar41 = iVar37;
          if (iVar58 == 2) {
            iVar41 = (int)(short)iVar37;
            if ((int)(short)iVar37 <= *psVar93 - iVar38) {
              iVar41 = *psVar93 - iVar38;
            }
          }
          iVar39 = iVar39 + (short)iVar41;
          psVar93 = psVar93 + 1;
          psVar66 = psVar66 + 1;
          lVar59 = lVar59 + -1;
        } while (lVar59 != 0);
      }
      uVar98 = 0;
      iVar38 = (int)local_110 - uVar64;
      sVar36 = 0;
      if (iVar38 != 0) {
        sVar36 = (short)(iVar39 / iVar38);
      }
      local_2a4 = (int)(short)(sVar36 - *(short *)(ppiVar43 + 0x1f));
      if (local_2a4 == -0x600 || local_2a4 + 0x600 < 0 != SCARRY4(local_2a4,0x600)) {
        local_2a4 = -0x600;
      }
      if (0xbff < local_2a4) {
        local_2a4 = 0xc00;
      }
      *(short *)(ppiVar43 + 0x1f) =
           *(short *)(ppiVar43 + 0x1f) + (short)((uint)(local_2a4 * 0x28f) >> 0xf);
    }
    if ((local_120 & 1) == 0) {
      memcpy(pvVar90,local_1b8,sVar94);
      ppiVar43 = local_100;
      uVar89 = local_128;
    }
    local_f0 = (int *)sVar94;
    iVar39 = (int)local_158;
    piVar73 = local_1c8;
    if ((int)uVar89 != 0) {
      iVar38 = *(int *)(puVar34 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar34 + 0x20)) + -0x1d;
      if (((uint)local_188 & 1 | (uint)(local_1ac < iVar38)) == 0) {
        if ((*(int *)((long)ppiVar43 + 0x1c) < 5) || ((uVar98 | (uint)local_e0) != 0)) {
LAB_00e9a284:
          local_188 = local_188 & 0xffffffff00000000;
          goto LAB_00e9a288;
        }
        iVar41 = FUN_00e9d66c(local_1b8,local_1a8,local_150,local_108 & 0xffffffff,
                              uVar79 & 0xffffffff);
        lVar77 = (long)local_e8;
        ppiVar43 = local_100;
        piVar51 = local_118;
        uVar76 = local_128;
        uVar89 = local_198;
        lVar59 = (long)local_1c0;
        iVar39 = local_22c;
        if (iVar41 == 0) {
          iVar39 = (int)local_158;
          goto LAB_00e9a284;
        }
        uVar42 = *(undefined4 *)(local_100 + 4);
        uVar74 = local_128 & 0xffffffff;
        *(undefined4 *)(psVar97 + -8) = *(undefined4 *)((long)local_100 + 0x4c);
        FUN_00e9d388(piVar51,iVar39,lVar59,lVar77,uVar79 & 0xffffffff,uVar89,uVar74,uVar42);
        piVar73 = local_1c8;
        compute_band_energies
                  (piVar51,lVar77,local_1c8,uVar63 & 0xffffffff,uVar79 & 0xffffffff,
                   uVar76 & 0xffffffff,*(undefined4 *)((long)ppiVar43 + 0x4c));
        amp2Log2(piVar51,uVar63 & 0xffffffff,local_108,piVar73,local_1b8,uVar79 & 0xffffffff);
        iVar39 = (int)local_158;
        if (0 < (int)(uint)local_228) {
          uVar89 = local_228 & 0xffffffff;
          sVar36 = (short)((int)uVar76 << 10) >> 1;
          if ((uint)local_228 < 0x10) {
            uVar74 = 0;
          }
          else {
            uVar74 = local_228 & 0xfffffff0;
            pauVar61 = (undefined (*) [16])((long)pvVar90 + 0x10);
            uVar76 = uVar74;
            do {
              auVar115 = pauVar61[-1];
              auVar128 = *pauVar61;
              uVar76 = uVar76 - 0x10;
              auVar111._0_8_ =
                   CONCAT26(auVar115._6_2_ + sVar36,
                            CONCAT24(auVar115._4_2_ + sVar36,
                                     CONCAT22(auVar115._2_2_ + sVar36,auVar115._0_2_ + sVar36)));
              auVar111._8_2_ = auVar115._8_2_ + sVar36;
              auVar111._10_2_ = auVar115._10_2_ + sVar36;
              auVar111._12_2_ = auVar115._12_2_ + sVar36;
              auVar111._14_2_ = auVar115._14_2_ + sVar36;
              auVar116._0_8_ =
                   CONCAT26(auVar128._6_2_ + sVar36,
                            CONCAT24(auVar128._4_2_ + sVar36,
                                     CONCAT22(auVar128._2_2_ + sVar36,auVar128._0_2_ + sVar36)));
              auVar116._8_2_ = auVar128._8_2_ + sVar36;
              auVar116._10_2_ = auVar128._10_2_ + sVar36;
              auVar116._12_2_ = auVar128._12_2_ + sVar36;
              auVar116._14_2_ = auVar128._14_2_ + sVar36;
              *(long *)(pauVar61[-1] + 8) = auVar111._8_8_;
              *(undefined8 *)pauVar61[-1] = auVar111._0_8_;
              *(long *)(*pauVar61 + 8) = auVar116._8_8_;
              *(undefined8 *)*pauVar61 = auVar116._0_8_;
              pauVar61 = pauVar61 + 2;
            } while (uVar76 != 0);
            if (uVar74 == uVar89) goto LAB_00e9c744;
          }
          lVar59 = uVar89 - uVar74;
          psVar93 = (short *)((long)pvVar90 + uVar74 * 2);
          do {
            lVar59 = lVar59 + -1;
            *psVar93 = *psVar93 + sVar36;
            psVar93 = psVar93 + 1;
          } while (lVar59 != 0);
        }
LAB_00e9c744:
        iVar38 = *(int *)(puVar34 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar34 + 0x20)) + -0x1d;
        local_d0[0] = 0xccd;
        local_188 = CONCAT44(local_188._4_4_,1);
        puVar44 = (undefined8 *)(local_130 + 4);
      }
      else {
LAB_00e9a288:
        puVar44 = &local_e8;
        piVar73 = local_1c8;
      }
      local_1e8 = CONCAT44(local_1e8._4_4_,*(undefined4 *)(puVar44 + -0x20));
      if (iVar38 <= local_1ac) {
        ec_enc_bit_logp(puVar34,local_188 & 0xffffffff,3);
        iVar39 = (int)local_158;
      }
    }
    lVar59 = (long)psVar97 -
             ((-(ulong)((uint)(iVar39 * iVar58) >> 0x1f) & 0xfffffffe00000000 |
              (ulong)(uint)(iVar39 * iVar58) << 1) + 0xf & 0xfffffffffffffff0);
    local_198 = lVar59;
    normalise_bands(local_118,local_e8,lVar59,piVar73,uVar63 & 0xffffffff,uVar79 & 0xffffffff,
                    local_22c);
    piVar73 = local_118;
    uVar89 = local_150;
    uVar98 = local_1f4;
    bVar35 = false;
    if (((int)(local_1f4 + iVar58 * -0xf) < 0 == SBORROW4(local_1f4,iVar58 * 0xf)) && (uVar64 == 0))
    {
      if (*(int *)((long)local_100 + 0x1c) < 2) {
        bVar35 = false;
      }
      else {
        bVar35 = *(int *)((long)local_100 + 0x44) == 0;
      }
    }
    local_210 = local_150 * 4;
    uVar55 = local_210 + 0xfU & 0xfffffffffffffff0;
    piVar51 = (int *)(lVar59 - uVar55);
    lVar78 = (long)piVar51 - uVar55;
    lVar77 = lVar78 - uVar55;
    uVar8 = *(undefined4 *)(local_100 + 6);
    uVar9 = *(undefined4 *)(local_100 + 7);
    uVar42 = *(undefined4 *)(local_100 + 8);
    uVar7 = *(undefined4 *)((long)local_100 + 0x44);
    *(undefined8 *)(lVar77 + -0x70) = *(undefined8 *)(local_118 + 0xe);
    *(long *)(lVar77 + -0x18) = lVar78;
    *(long *)(lVar77 + -0x10) = lVar77;
    psVar93 = local_140;
    pvVar15 = local_1b8;
    piVar56 = local_1d0;
    local_2b8 = lVar77;
    *(undefined4 *)(lVar77 + -0x30) = uVar7;
    uVar63 = local_110;
    *(int **)(lVar77 + -0x38) = &local_d4;
    *(short **)(lVar77 + -0x50) = psVar93;
    *(short **)(lVar77 + -0x28) = psVar97;
    *(int **)(lVar77 + -0x20) = piVar56;
    uVar74 = local_128;
    uVar76 = (ulong)local_130;
    *(uint *)(lVar77 + -0x40) = uVar98;
    uVar79 = local_188;
    uVar7 = (uint)local_188;
    *(undefined4 *)(lVar77 + -0x58) = uVar9;
    *(undefined4 *)(lVar77 + -0x60) = uVar8;
    local_e8 = piVar51;
    *(int *)(lVar77 + -0x48) = (int)uVar74;
    *(undefined4 *)(lVar77 + -0x68) = uVar7;
    local_294 = FUN_00e9d8f8(pvVar15,pvVar90,uVar89 & 0xffffffff,uVar84 & 0xffffffff,uVar63,uVar76,
                             piVar51,uVar42);
    uVar42 = local_cc;
    sVar36 = local_d0[0];
    ppiVar43 = local_100;
    uVar52 = local_108;
    uVar63 = local_110;
    piVar56 = local_158;
    iVar39 = local_1ac;
    uVar76 = local_1e0;
    lVar59 = local_200;
    pvVar90 = (void *)(lVar77 - uVar55);
    local_1c0 = pvVar90;
    if (bVar35) {
      iVar39 = 0;
      if (uVar98 != 0) {
        iVar39 = 0x5000 / (int)uVar98;
      }
      iVar58 = 0x50;
      if (0x4d < iVar39) {
        iVar58 = iVar39 + 2;
      }
      *(long *)((long)pvVar90 + -0x10) = lVar78;
      *(undefined4 *)((long)pvVar90 + -0x18) = uVar42;
      lVar59 = local_198;
      *(short *)((long)pvVar90 + -0x20) = sVar36;
      iVar38 = FUN_00e9ef08(piVar73,uVar76 & 0xffffffff,uVar79 & 0xffffffff,pvVar90,iVar58,lVar59,
                            piVar56,uVar74 & 0xffffffff);
      ppiVar43 = local_100;
      uVar52 = local_108;
      uVar63 = local_110;
      iVar39 = local_1ac;
      lVar59 = local_200;
      piVar51 = piVar56;
      if ((int)local_208 < (int)local_108) {
        iVar41 = (int)uVar76;
        iVar58 = (int)local_110 - iVar41;
        puVar62 = (undefined4 *)((long)pvVar90 + (long)iVar41 * 4);
        do {
          iVar58 = iVar58 + -1;
          *puVar62 = *(undefined4 *)((long)pvVar90 + ((long)iVar41 + -1) * 4);
          puVar62 = puVar62 + 1;
        } while (iVar58 != 0);
        iVar58 = (uint)local_188;
      }
      else {
        iVar58 = (uint)local_188;
      }
    }
    else {
      iVar58 = (uint)local_188;
      uVar98 = (uint)local_108;
      if ((uVar64 == 0) || (local_d8 == 0)) {
        if (((int)local_e0 != 0) &&
           (((int)local_1f4 < 0xf && (*(int *)((long)local_100 + 0xbc) != 2)))) {
          iVar38 = iVar58;
          if (0 < (int)uVar98) {
            memset(pvVar90,0,local_108 << 2);
            ppiVar43 = local_100;
          }
          goto LAB_00e9aab8;
        }
        if (0 < (int)local_110) {
          if (uVar98 < 8) {
            uVar74 = 0;
          }
          else {
            uVar74 = local_108 & 0xfffffff8;
            piVar73 = (int *)((long)pvVar90 + 0x10);
            uVar79 = uVar74;
            do {
              *piVar73 = iVar58;
              piVar73[1] = iVar58;
              piVar73[-4] = iVar58;
              piVar73[-3] = iVar58;
              piVar73[4] = iVar58;
              piVar73[5] = iVar58;
              *piVar73 = iVar58;
              piVar73[1] = iVar58;
              piVar73 = piVar73 + 8;
              uVar79 = uVar79 - 8;
            } while (uVar79 != 0);
            if (uVar74 == uVar52) goto LAB_00e9aab4;
          }
          lVar77 = uVar52 - uVar74;
          piVar73 = (int *)((long)pvVar90 + uVar74 * 4);
          do {
            lVar77 = lVar77 + -1;
            *piVar73 = iVar58;
            piVar73 = piVar73 + 1;
          } while (lVar77 != 0);
        }
      }
      else if (0 < (int)uVar98) {
        if (uVar98 < 8) {
          uVar74 = 0;
        }
        else {
          uVar74 = local_108 & 0xfffffff8;
          puVar44 = (undefined8 *)((long)pvVar90 + 0x10);
          uVar79 = uVar74;
          do {
            *(undefined4 *)puVar44 = 1;
            *(undefined4 *)((long)puVar44 + 4) = 1;
            puVar44[-2] = 0x100000001;
            *(undefined4 *)(puVar44 + 2) = 1;
            *(undefined4 *)((long)puVar44 + 0x14) = 1;
            *puVar44 = 0x100000001;
            puVar44 = puVar44 + 4;
            uVar79 = uVar79 - 8;
          } while (uVar79 != 0);
          if (uVar74 == uVar52) goto LAB_00e9aab4;
        }
        lVar77 = uVar52 - uVar74;
        puVar62 = (undefined4 *)((long)pvVar90 + uVar74 * 4);
        do {
          lVar77 = lVar77 + -1;
          *puVar62 = 1;
          puVar62 = puVar62 + 1;
        } while (lVar77 != 0);
      }
LAB_00e9aab4:
      iVar38 = 0;
    }
LAB_00e9aab8:
    pvVar15 = local_1b8;
    local_120 = CONCAT44(local_120._4_4_,iVar38);
    lVar78 = (long)pvVar90 - ((long)local_f0 + 0xfU & 0xfffffffffffffff0);
    lVar85 = uVar84 * 2;
    lVar59 = lVar59 * 4;
    uVar55 = uVar63 - uVar84;
    uVar98 = SUB84(local_130,0);
    uVar74 = uVar55 & 0xfffffffffffffffe;
    lVar77 = 0;
    uVar79 = 0;
    if ((int)uVar98 < 2) {
      uVar98 = 1;
    }
    psVar93 = (short *)((long)ppiVar43 + lVar59 + lVar85 + 0xfe);
    sVar94 = uVar89 * 2;
    psVar97 = (short *)((long)local_1b8 + lVar85 + 2);
    do {
      if ((int)uVar64 < (int)uVar52) {
        uVar46 = uVar84;
        uVar45 = uVar74;
        psVar66 = psVar97;
        psVar82 = psVar93;
        if (1 < uVar55) {
          do {
            uVar88 = (int)psVar66[-1] - (int)psVar82[-1];
            uVar53 = (int)*psVar66 - (int)*psVar82;
            uVar104 = -uVar88;
            if (-1 < (int)uVar88) {
              uVar104 = uVar88;
            }
            uVar88 = -uVar53;
            if (-1 < (int)uVar53) {
              uVar88 = uVar53;
            }
            if (uVar104 < 0x800) {
              uVar53 = (uint)(ushort)psVar82[local_1d8 * 3 + -1];
              if (0x7ff < uVar88) goto LAB_00e9abd8;
LAB_00e9ac04:
              sVar36 = (short)uVar53;
              piVar51 = (int *)(ulong)(ushort)psVar82[local_1d8 * 3];
            }
            else {
              if (uVar88 < 0x800) goto LAB_00e9ac04;
LAB_00e9abd8:
              sVar36 = (short)uVar53;
            }
            if (uVar104 < 0x800) {
              psVar66[-1] = psVar66[-1] - (short)((uint)(int)sVar36 >> 2);
            }
            if (uVar88 < 0x800) {
              *psVar66 = *psVar66 - (short)((uint)(int)(short)piVar51 >> 2);
            }
            uVar45 = uVar45 - 2;
            psVar66 = psVar66 + 2;
            psVar82 = psVar82 + 2;
          } while (uVar45 != 0);
          uVar46 = uVar74 + uVar84;
          if (uVar55 == uVar74) goto LAB_00e9ab50;
        }
        lVar95 = uVar63 - uVar46;
        lVar83 = (uVar46 + lVar77) * 2;
        psVar66 = (short *)((long)local_1b8 + lVar83);
        psVar82 = (short *)((long)ppiVar43 + lVar83 + lVar59 + 0xfc);
        do {
          uVar53 = (int)*psVar66 - (int)*psVar82;
          uVar104 = -uVar53;
          if (-1 < (int)uVar53) {
            uVar104 = uVar53;
          }
          if (uVar104 < 0x800) {
            *psVar66 = *psVar66 - (short)((uint)(int)psVar82[local_1d8 * 3] >> 2);
          }
          psVar66 = psVar66 + 1;
          psVar82 = psVar82 + 1;
          lVar95 = lVar95 + -1;
        } while (lVar95 != 0);
      }
LAB_00e9ab50:
      uVar79 = uVar79 + 1;
      psVar93 = psVar93 + uVar89;
      psVar97 = psVar97 + uVar89;
      lVar77 = lVar77 + uVar89;
    } while (uVar79 != uVar98);
    iVar38 = *(int *)((long)local_100 + 0x1c);
    uVar42 = *(undefined4 *)(local_100 + 2);
    ppiVar43 = local_100 + 0xb;
    uVar7 = *(undefined4 *)((long)local_100 + 0x44);
    local_280 = lVar85;
    local_278 = lVar59;
    local_190 = uVar55;
    local_180 = (int *)(ulong)uVar98;
    *(undefined4 *)(lVar78 + -0x18) = *(undefined4 *)((long)local_100 + 0x3c);
    piVar73 = local_118;
    uVar98 = local_1b0;
    *(undefined4 *)(lVar78 + -0x10) = uVar7;
    uVar89 = local_128;
    *(uint *)(lVar78 + -0x20) = (uint)(3 < iVar38);
    uVar79 = local_e0;
    *(int ***)(lVar78 + -0x28) = ppiVar43;
    *(uint *)(lVar78 + -0x38) = uVar98;
    *(undefined4 *)(lVar78 + -0x30) = uVar42;
    *(int *)(lVar78 + -0x40) = (int)uVar89;
    pvVar90 = local_1a8;
    *(undefined **)(lVar78 + -0x50) = puVar34;
    local_208 = lVar78;
    *(int *)(lVar78 + -0x48) = SUB84(local_130,0);
    quant_coarse_energy(piVar73,uVar79,uVar52 & 0xffffffff,uVar76 & 0xffffffff,pvVar15,pvVar90,
                        iVar39);
    pvVar90 = local_1c0;
    iVar41 = *(int *)(puVar34 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar34 + 0x20)) + -0x20;
    iVar39 = 4;
    iVar38 = iVar39;
    if (iVar58 != 0) {
      iVar38 = 2;
    }
    if (iVar58 == 0) {
      iVar39 = 5;
    }
    uVar98 = (uint)((int)uVar89 != 0 && iVar41 + iVar38 + 1U <= (uint)(*(int *)(puVar34 + 8) * 8));
    if ((int)uVar64 < (int)uVar63) {
      uVar53 = *(int *)(puVar34 + 8) * 8 - uVar98;
      if (uVar53 < (uint)(iVar41 + iVar38)) {
        uVar104 = 0;
        *(undefined4 *)((long)local_1c0 + uVar84 * 4) = 0;
      }
      else {
        ec_enc_bit_logp(puVar34,*(undefined4 *)((long)local_1c0 + uVar84 * 4));
        uVar104 = *(uint *)((long)pvVar90 + uVar84 * 4);
        iVar41 = *(int *)(puVar34 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar34 + 0x20)) + -0x20;
      }
      piVar73 = local_118;
      ppiVar43 = local_100;
      uVar76 = local_190;
      if ((int)local_108 != (int)(uVar84 + 1)) {
        iVar58 = ~uVar64 + (int)local_108;
        puVar96 = (uint *)((long)local_1c0 + (uVar84 + 1) * 4);
        uVar64 = uVar104;
        do {
          while ((uint)(iVar41 + iVar39) <= uVar53) {
            ec_enc_bit_logp(puVar34,*puVar96 ^ uVar64,iVar39);
            uVar64 = *puVar96;
            uVar104 = uVar64 | uVar104;
            iVar41 = *(int *)(puVar34 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar34 + 0x20)) +
                     -0x20;
            iVar58 = iVar58 + -1;
            piVar73 = local_118;
            ppiVar43 = local_100;
            uVar76 = local_190;
            puVar96 = puVar96 + 1;
            if (iVar58 == 0) goto LAB_00e9ae78;
          }
          *puVar96 = uVar64;
          iVar58 = iVar58 + -1;
          puVar96 = puVar96 + 1;
        } while (iVar58 != 0);
      }
    }
    else {
      uVar104 = 0;
      piVar73 = local_118;
      ppiVar43 = local_100;
      uVar76 = local_190;
    }
LAB_00e9ae78:
    uVar79 = local_160;
    iVar39 = local_1ac;
    iVar58 = (uint)local_188;
    iVar38 = (int)local_160;
    if (uVar98 == 0) {
      iVar41 = 0;
      uVar74 = (ulong)((uint)local_188 << 2);
      iVar139 = (int)local_108;
      lVar59 = local_2b8;
      iVar37 = local_2ac;
      iVar173 = local_2a8;
      iVar40 = local_2a4;
      iVar71 = local_2a0;
      uVar64 = local_29c;
      iVar174 = local_298;
      uVar42 = local_294;
      pvVar90 = local_290;
      iVar164 = local_284;
      lVar77 = local_280;
      lVar85 = local_278;
      uVar98 = local_26c;
      lVar95 = local_268;
      iVar165 = local_25c;
      uVar7 = local_258;
      uVar104 = local_254;
      pvVar15 = local_250;
      lVar83 = local_248;
      pvVar16 = local_240;
      lVar81 = local_238;
      iVar166 = local_22c;
      uVar63 = local_228;
      lVar68 = local_220;
      iVar167 = local_214;
      lVar65 = local_210;
      lVar87 = local_208;
      lVar91 = local_200;
      uVar53 = local_1f4;
      uVar88 = local_1f0;
      iVar168 = local_1ec;
      uVar99 = local_1e8;
      uVar52 = local_1e0;
      uVar84 = local_1d8;
      piVar51 = local_1d0;
      piVar56 = local_1c8;
      pvVar17 = local_1c0;
      pvVar18 = local_1b8;
      uVar75 = local_1b0;
      iVar169 = local_1ac;
      pvVar19 = local_1a8;
      uVar72 = local_19c;
      lVar92 = local_198;
      uVar55 = local_190;
      uVar45 = local_188;
      uVar46 = (ulong)local_180;
      sVar20 = local_178;
      uVar2 = local_170;
      lVar21 = local_168;
      uVar3 = local_160;
      piVar49 = local_158;
      uVar4 = local_150;
      ppiVar22 = local_148;
      psVar93 = local_140;
      sVar23 = local_138;
      uVar86 = (ulong)local_130;
      uVar24 = local_128;
      uVar25 = local_120;
      piVar60 = local_118;
      uVar26 = local_110;
      uVar27 = local_108;
      ppiVar28 = local_100;
      puVar29 = local_f8;
      sVar30 = (size_t)local_f0;
      piVar31 = local_e8;
      uVar32 = local_e0;
      iVar170 = local_d8;
      iVar171 = local_d4;
      sVar36 = local_d0[0];
      uVar8 = local_cc;
      uVar9 = local_c8;
      uVar80 = local_c4;
      sVar118 = local_c0[0];
      iVar172 = local_bc;
      lVar33 = local_80;
    }
    else {
      uVar74 = (local_188 & 0xffffffff) * 4;
      if (tf_select_table[local_248 + uVar74 + (long)(int)uVar104] ==
          (tf_select_table + local_248 + uVar74 + (long)(int)uVar104)[2]) {
        iVar41 = 0;
      }
      else {
        iVar41 = (int)local_120;
        ec_enc_bit_logp(puVar34,local_120 & 0xffffffff,1);
        iVar41 = iVar41 << 1;
        piVar73 = local_118;
        ppiVar43 = local_100;
        uVar76 = local_190;
      }
      iVar139 = (int)local_108;
      lVar59 = local_2b8;
      iVar37 = local_2ac;
      iVar173 = local_2a8;
      iVar40 = local_2a4;
      iVar71 = local_2a0;
      uVar64 = local_29c;
      iVar174 = local_298;
      uVar42 = local_294;
      pvVar90 = local_290;
      iVar164 = local_284;
      lVar77 = local_280;
      lVar85 = local_278;
      uVar98 = local_26c;
      lVar95 = local_268;
      iVar165 = local_25c;
      uVar7 = local_258;
      uVar104 = local_254;
      pvVar15 = local_250;
      lVar83 = local_248;
      pvVar16 = local_240;
      lVar81 = local_238;
      iVar166 = local_22c;
      uVar63 = local_228;
      lVar68 = local_220;
      iVar167 = local_214;
      lVar65 = local_210;
      lVar87 = local_208;
      lVar91 = local_200;
      uVar53 = local_1f4;
      uVar88 = local_1f0;
      iVar168 = local_1ec;
      uVar99 = local_1e8;
      uVar52 = local_1e0;
      uVar84 = local_1d8;
      piVar51 = local_1d0;
      piVar56 = local_1c8;
      pvVar17 = local_1c0;
      pvVar18 = local_1b8;
      uVar75 = local_1b0;
      iVar169 = local_1ac;
      pvVar19 = local_1a8;
      uVar72 = local_19c;
      lVar92 = local_198;
      uVar55 = local_190;
      uVar45 = local_188;
      uVar46 = (ulong)local_180;
      sVar20 = local_178;
      uVar2 = local_170;
      lVar21 = local_168;
      uVar3 = local_160;
      piVar49 = local_158;
      uVar4 = local_150;
      ppiVar22 = local_148;
      psVar93 = local_140;
      sVar23 = local_138;
      uVar86 = (ulong)local_130;
      uVar24 = local_128;
      uVar25 = local_120;
      piVar60 = local_118;
      uVar26 = local_110;
      uVar27 = local_108;
      ppiVar28 = local_100;
      puVar29 = local_f8;
      sVar30 = (size_t)local_f0;
      piVar31 = local_e8;
      uVar32 = local_e0;
      iVar170 = local_d8;
      iVar171 = local_d4;
      sVar36 = local_d0[0];
      uVar8 = local_cc;
      uVar9 = local_c8;
      uVar80 = local_c4;
      sVar118 = local_c0[0];
      iVar172 = local_bc;
      lVar33 = local_80;
    }
    if (iVar38 < iVar139) {
      iVar41 = iVar41 + (int)uVar74;
      uVar74 = uVar79;
      if (1 < uVar76) {
        uVar69 = uVar76 & 0xfffffffffffffffe;
        uVar74 = uVar69 + uVar79;
        piVar73 = (int *)((long)pvVar17 + uVar79 * 4 + 4);
        uVar79 = uVar69;
        do {
          uVar79 = uVar79 - 2;
          cVar10 = tf_select_table[(long)iVar41 + (long)piVar73[1] + uVar89 * 8];
          piVar73[-1] = (int)(char)tf_select_table[(long)iVar41 + (long)piVar73[-1] + uVar89 * 8];
          *piVar73 = (int)cVar10;
          piVar73 = piVar73 + 2;
        } while (uVar79 != 0);
        piVar73 = piVar60;
        if (uVar76 == uVar69) goto LAB_00e9afdc;
      }
      lVar70 = uVar26 - uVar74;
      piVar67 = (int *)((long)pvVar17 + uVar74 * 4);
      do {
        lVar70 = lVar70 + -1;
        *piVar67 = (int)(char)tf_select_table[(long)*piVar67 + (long)iVar41 + uVar89 * 8];
        piVar67 = piVar67 + 1;
      } while (lVar70 != 0);
    }
LAB_00e9afdc:
    iVar41 = (int)uVar27;
    local_2b8 = lVar59;
    local_2ac = iVar37;
    local_2a8 = iVar173;
    local_2a4 = iVar40;
    local_2a0 = iVar71;
    local_29c = uVar64;
    local_298 = iVar174;
    local_294 = uVar42;
    local_290 = pvVar90;
    local_284 = iVar164;
    local_280 = lVar77;
    local_278 = lVar85;
    local_26c = uVar98;
    local_268 = lVar95;
    local_25c = iVar165;
    local_258 = uVar7;
    local_254 = uVar104;
    local_250 = pvVar15;
    local_248 = lVar83;
    local_240 = pvVar16;
    local_238 = lVar81;
    local_22c = iVar166;
    local_228 = uVar63;
    local_220 = lVar68;
    local_214 = iVar167;
    local_210 = lVar65;
    local_208 = lVar87;
    local_200 = lVar91;
    local_1f4 = uVar53;
    local_1f0 = uVar88;
    local_1ec = iVar168;
    local_1e8 = uVar99;
    local_1e0 = uVar52;
    local_1d8 = uVar84;
    local_1d0 = piVar51;
    local_1c8 = piVar56;
    local_1c0 = pvVar17;
    local_1b8 = pvVar18;
    local_1b0 = uVar75;
    local_1ac = iVar169;
    local_1a8 = pvVar19;
    local_19c = uVar72;
    local_198 = lVar92;
    local_190 = uVar55;
    local_188 = uVar45;
    local_180 = (int *)uVar46;
    local_178 = sVar20;
    local_170 = uVar2;
    local_168 = lVar21;
    local_160 = uVar3;
    local_158 = piVar49;
    local_150 = uVar4;
    local_148 = ppiVar22;
    local_140 = psVar93;
    local_138 = sVar23;
    local_130 = (undefined  [8])uVar86;
    local_128 = uVar24;
    local_120 = uVar25;
    local_118 = piVar60;
    local_110 = uVar26;
    local_108 = uVar27;
    local_100 = ppiVar28;
    local_f8 = puVar29;
    local_e8 = piVar31;
    local_e0 = uVar32;
    local_d8 = iVar170;
    local_d4 = iVar171;
    local_d0[0] = sVar36;
    local_cc = uVar8;
    local_c8 = uVar9;
    local_c4 = uVar80;
    local_c0[0] = sVar118;
    local_bc = iVar172;
    local_80 = lVar33;
    if (*(int *)(puVar34 + 0x18) + (int)LZCOUNT(*(undefined4 *)(puVar34 + 0x20)) + -0x1c <= iVar39)
    {
      local_f0 = (int *)sVar30;
      if (*(int *)((long)ppiVar43 + 0x44) == 0) {
        if (iVar38 == 0) {
          local_1e8._0_4_ = (int)uVar99;
          if ((((int)local_1e8 != 0) || (*(int *)((long)ppiVar43 + 0x1c) < 3)) ||
             (iVar58 = (int)uVar86, (int)(uVar75 + iVar58 * -10) < 0 != SBORROW4(uVar75,iVar58 * 10)
             )) {
            if (*(int *)((long)ppiVar43 + 0x1c) != 0) goto LAB_00e9b048;
            goto LAB_00e9b054;
          }
          uVar42 = *(undefined4 *)((long)ppiVar43 + 0x54);
          *(int *)(lVar78 + -0x20) = iVar58;
          lVar59 = local_198;
          *(long *)(lVar78 + -0x10) = local_2b8;
          *(int *)(lVar78 + -0x18) = local_22c;
          uVar42 = spreading_decision(piVar73,lVar59,(long)ppiVar43 + 0x5c,uVar42,
                                      (long)ppiVar43 + 100,ppiVar22,iVar37 != 0,uVar52);
          *(undefined4 *)((long)ppiVar43 + 0x54) = uVar42;
          iVar41 = (int)local_108;
        }
        else if (*(int *)((long)ppiVar43 + 0x1c) == 0) {
LAB_00e9b054:
          uVar42 = 0;
          *(undefined4 *)((long)ppiVar43 + 0x54) = 0;
        }
        else if (iVar58 == 0) {
          uVar42 = 3;
          *(undefined4 *)((long)ppiVar43 + 0x54) = 3;
        }
        else {
LAB_00e9b048:
          uVar42 = 2;
          *(undefined4 *)((long)ppiVar43 + 0x54) = 2;
        }
      }
      else {
        uVar42 = 2;
        *(undefined4 *)(ppiVar43 + 0xd) = 0;
        *(undefined4 *)((long)ppiVar43 + 0x54) = 2;
      }
      ec_enc_icdf(puVar34,uVar42,&DAT_005691bd,5);
      piVar73 = local_118;
      ppiVar43 = local_100;
    }
    if (*(int *)((long)ppiVar43 + 0x44) != 0) {
      iVar58 = 8;
      if ((int)local_1f4 < 0x1b) {
        iVar58 = (int)local_1f4 / 3;
      }
      *local_e8 = iVar58;
    }
    uVar76 = (ulong)local_130;
    piVar51 = (int *)(lVar78 - (local_210 + 0xfU & 0xfffffffffffffff0));
    local_f0 = piVar51;
    init_caps(piVar73,piVar51,uVar89 & 0xffffffff,(ulong)local_130 & 0xffffffff);
    local_148 = (int **)CONCAT44(local_148._4_4_,iVar39 << 3);
    iVar39 = ec_tell_frac(puVar34);
    ppiVar43 = local_100;
    if ((int)local_e0 < iVar41) {
      iVar58 = 6;
      local_120 = (ulong)local_120._4_4_ << 0x20;
      uVar79 = local_160;
      do {
        uVar74 = uVar79 + 1;
        iVar38 = ((int)psVar93[uVar74] - (int)psVar93[uVar79]) * (int)uVar76 <<
                 (ulong)((uint)uVar89 & 0x1f);
        iVar41 = iVar38 * 8;
        if (iVar38 < 0x31) {
          iVar38 = 0x30;
        }
        if (iVar38 <= iVar41) {
          iVar41 = iVar38;
        }
        iVar38 = (int)local_148 - (int)local_120;
        if (iVar39 + iVar58 * 8 < iVar38) {
          if (local_f0[uVar79] < 1) {
            iVar37 = 0;
            uVar76 = (ulong)local_130;
          }
          else {
            iVar37 = 0;
            iVar173 = 0;
            iVar40 = iVar58;
            do {
              puVar34 = local_f8;
              iVar71 = local_e8[uVar79];
              ec_enc_bit_logp(local_f8,iVar173 < iVar71,iVar40);
              iVar39 = ec_tell_frac(puVar34);
              uVar76 = (ulong)local_130;
              ppiVar43 = local_100;
              if (iVar71 <= iVar173) goto LAB_00e9b22c;
              iVar38 = iVar38 - iVar41;
              if (iVar38 <= iVar39 + 8) {
                if (iVar58 < 4) {
                  iVar58 = 3;
                }
                iVar58 = iVar58 + -1;
                iVar38 = iVar41 + (int)local_120 + iVar37;
                iVar37 = iVar41 + iVar37;
                local_120 = CONCAT44(local_120._4_4_,iVar38);
                goto LAB_00e9b120;
              }
              iVar37 = iVar37 + iVar41;
              iVar173 = iVar173 + 1;
              iVar40 = 1;
            } while (iVar37 < local_f0[uVar79]);
            iVar173 = 1;
LAB_00e9b22c:
            local_120 = CONCAT44(local_120._4_4_,(int)local_120 + iVar37);
            iVar38 = iVar58;
            if (iVar58 < 4) {
              iVar38 = 3;
            }
            if (iVar173 != 0) {
              iVar58 = iVar38 + -1;
            }
          }
        }
        else {
          iVar37 = 0;
        }
LAB_00e9b120:
        local_e8[uVar79] = iVar37;
        uVar79 = uVar74;
        psVar93 = local_140;
        uVar89 = local_128;
      } while (uVar74 != local_110);
    }
    else {
      local_120 = (ulong)local_120._4_4_ << 0x20;
    }
    uVar79 = local_108;
    lVar59 = local_198;
    iVar38 = local_1ec;
    iVar37 = (int)uVar76;
    iVar41 = (uint)local_188;
    uVar64 = (uint)uVar89;
    iVar58 = (int)local_108;
    if (iVar37 == 2) {
      if (uVar64 != 0) {
        lVar77 = 0;
        uVar98 = 1;
        uVar104 = 1;
        psVar93 = *(short **)(local_118 + 6);
        sVar36 = *psVar93;
        do {
          lVar77 = lVar77 + 1;
          iVar173 = (int)sVar36 << (ulong)(uVar64 & 0x1f);
          sVar36 = psVar93[lVar77];
          iVar40 = (int)sVar36 << (ulong)(uVar64 & 0x1f);
          if (iVar173 < iVar40) {
            lVar78 = (long)iVar173;
            uVar74 = iVar40 - lVar78;
            if (7 < uVar74) {
              lVar95 = (long)local_158 + lVar78;
              uVar52 = uVar74 & 0xfffffffffffffff8;
              auVar108 = ZEXT816(0);
              lVar85 = lVar78 * 2;
              auVar127 = ZEXT816(0);
              lVar78 = uVar52 + lVar78;
              auVar100 = ZEXT416(uVar98);
              auVar114 = ZEXT416(uVar104);
              pauVar61 = (undefined (*) [16])(local_198 + lVar95 * 2);
              uVar63 = uVar52;
              pauVar47 = (undefined (*) [16])(local_198 + lVar85);
              do {
                auVar115 = *pauVar47;
                auVar128 = *pauVar61;
                uVar63 = uVar63 - 8;
                auVar138 = NEON_sabd(auVar115,auVar128,2);
                iVar139 = MP_INT_ABS((int)auVar115._0_2_);
                iVar142 = MP_INT_ABS((int)auVar115._2_2_);
                iVar144 = MP_INT_ABS((int)auVar115._4_2_);
                iVar146 = MP_INT_ABS((int)auVar115._6_2_);
                iVar148 = MP_INT_ABS((int)auVar115._8_2_);
                iVar150 = MP_INT_ABS((int)auVar115._10_2_);
                iVar152 = MP_INT_ABS((int)auVar115._12_2_);
                iVar154 = MP_INT_ABS((int)auVar115._14_2_);
                iVar160 = MP_INT_ABS((int)auVar128._0_2_);
                iVar161 = MP_INT_ABS((int)auVar128._2_2_);
                iVar162 = MP_INT_ABS((int)auVar128._4_2_);
                iVar163 = MP_INT_ABS((int)auVar128._6_2_);
                iVar156 = MP_INT_ABS((int)auVar128._8_2_);
                iVar157 = MP_INT_ABS((int)auVar128._10_2_);
                iVar158 = MP_INT_ABS((int)auVar128._12_2_);
                iVar159 = MP_INT_ABS((int)auVar128._14_2_);
                iVar173 = auVar100._4_4_;
                iVar71 = auVar100._8_4_;
                iVar174 = auVar100._12_4_;
                iVar164 = auVar108._4_4_;
                iVar165 = auVar108._8_4_;
                iVar166 = auVar108._12_4_;
                iVar140 = MP_INT_ABS((int)auVar128._0_2_ + (int)auVar115._0_2_);
                iVar143 = MP_INT_ABS((int)auVar128._2_2_ + (int)auVar115._2_2_);
                iVar145 = MP_INT_ABS((int)auVar128._4_2_ + (int)auVar115._4_2_);
                iVar147 = MP_INT_ABS((int)auVar128._6_2_ + (int)auVar115._6_2_);
                iVar149 = MP_INT_ABS((int)auVar128._8_2_ + (int)auVar115._8_2_);
                iVar151 = MP_INT_ABS((int)auVar128._10_2_ + (int)auVar115._10_2_);
                iVar153 = MP_INT_ABS((int)auVar128._12_2_ + (int)auVar115._12_2_);
                iVar155 = MP_INT_ABS((int)auVar128._14_2_ + (int)auVar115._14_2_);
                iVar170 = auVar127._4_4_;
                iVar171 = auVar127._8_4_;
                iVar172 = auVar127._12_4_;
                iVar167 = auVar114._4_4_;
                iVar168 = auVar114._8_4_;
                iVar169 = auVar114._12_4_;
                auVar108._0_4_ = iVar148 + auVar108._0_4_ + iVar156;
                auVar108._4_4_ = iVar150 + iVar164 + iVar157;
                auVar108._8_4_ = iVar152 + iVar165 + iVar158;
                auVar108._12_4_ = iVar154 + iVar166 + iVar159;
                auVar100._0_4_ = iVar139 + auVar100._0_4_ + iVar160;
                auVar100._4_4_ = iVar142 + iVar173 + iVar161;
                auVar100._8_4_ = iVar144 + iVar71 + iVar162;
                auVar100._12_4_ = iVar146 + iVar174 + iVar163;
                auVar127._0_4_ = auVar127._0_4_ + (uint)auVar138._8_2_ + iVar149;
                auVar127._4_4_ = iVar170 + (uint)auVar138._10_2_ + iVar151;
                auVar127._8_4_ = iVar171 + (uint)auVar138._12_2_ + iVar153;
                auVar127._12_4_ = iVar172 + (uint)auVar138._14_2_ + iVar155;
                auVar114._0_4_ = auVar114._0_4_ + (uint)auVar138._0_2_ + iVar140;
                auVar114._4_4_ = iVar167 + (uint)auVar138._2_2_ + iVar143;
                auVar114._8_4_ = iVar168 + (uint)auVar138._4_2_ + iVar145;
                auVar114._12_4_ = iVar169 + (uint)auVar138._6_2_ + iVar147;
                pauVar61 = pauVar61 + 1;
                pauVar47 = pauVar47 + 1;
              } while (uVar63 != 0);
              uVar104 = auVar114._0_4_ + auVar127._0_4_ + auVar114._4_4_ + auVar127._4_4_ +
                        auVar114._8_4_ + auVar127._8_4_ + auVar114._12_4_ + auVar127._12_4_;
              uVar98 = auVar100._0_4_ + auVar108._0_4_ + auVar100._4_4_ + auVar108._4_4_ +
                       auVar100._8_4_ + auVar108._8_4_ + auVar100._12_4_ + auVar108._12_4_;
              if (uVar74 == uVar52) goto LAB_00e9b2d8;
            }
            lVar85 = iVar40 - lVar78;
            psVar97 = (short *)(local_198 + lVar78 * 2);
            psVar66 = (short *)(local_198 + ((long)local_158 + lVar78) * 2);
            do {
              sVar118 = *psVar97;
              sVar119 = *psVar66;
              iVar173 = (int)sVar119 + (int)sVar118;
              iVar174 = (int)sVar118;
              iVar71 = iVar174 - sVar119;
              iVar40 = -iVar174;
              if (-1 < sVar118) {
                iVar40 = iVar174;
              }
              iVar164 = (int)sVar119;
              iVar174 = -iVar164;
              if (-1 < iVar164) {
                iVar174 = iVar164;
              }
              iVar164 = -iVar173;
              if (-1 < iVar173) {
                iVar164 = iVar173;
              }
              iVar173 = -iVar71;
              if (-1 < iVar71) {
                iVar173 = iVar71;
              }
              uVar98 = iVar40 + uVar98 + iVar174;
              uVar104 = iVar173 + uVar104 + iVar164;
              lVar85 = lVar85 + -1;
              psVar97 = psVar97 + 1;
              psVar66 = psVar66 + 1;
            } while (lVar85 != 0);
          }
LAB_00e9b2d8:
        } while (lVar77 != 0xd);
        sVar36 = 5;
        if (1 < uVar64) {
          sVar36 = 0xd;
        }
        sVar118 = (short)((int)psVar93[0xd] << (ulong)(uVar64 + 1 & 0x1f));
        local_c4 = (uint)((int)((ulong)((long)sVar118 * (long)(int)uVar98) >> 0xf) <
                         (int)((ulong)((long)(short)(sVar118 + sVar36) *
                                      ((long)(int)uVar104 * 0xb5040000 >> 0x20)) >> 0xf));
      }
      iVar40 = hysteresis_decision(local_214 / 1000,&DAT_005691c2,&DAT_005691ec,0x15,
                                   *(undefined4 *)((long)ppiVar43 + 0xec));
      iVar173 = (int)local_e0;
      if ((int)local_160 <= iVar40) {
        iVar173 = iVar40;
      }
      if (iVar173 <= iVar58) {
        iVar58 = iVar173;
      }
      *(int *)((long)local_100 + 0xec) = iVar58;
      ppiVar43 = local_100;
    }
    sVar36 = local_d0[0];
    puVar34 = local_f8;
    piVar56 = local_118;
    piVar73 = local_158;
    iVar58 = local_214;
    if ((int)local_148 - (int)local_120 < iVar39 + 0x30) {
      uVar42 = 5;
      uVar104 = (uint)local_268;
      uVar98 = local_19c;
    }
    else {
      if (((int)local_160 < 1) && (*(int *)((long)ppiVar43 + 0x44) == 0)) {
        piVar51[-8] = *(int *)((long)ppiVar43 + 0xec);
        *(short *)(piVar51 + -10) = sVar36;
        *(int ***)(piVar51 + -0xc) = ppiVar43 + 0x1d;
        piVar51[-4] = iVar58;
        *(short *)(piVar51 + -6) = (short)local_2a8;
        uVar42 = FUN_00e9f6dc(piVar56,lVar59,local_1b8,uVar79 & 0xffffffff,uVar89 & 0xffffffff,
                              uVar76 & 0xffffffff,piVar73,local_1d0);
      }
      else {
        uVar42 = 5;
        *(undefined2 *)(ppiVar43 + 0x1d) = 0;
      }
      uVar104 = (uint)local_268;
      ec_enc_icdf(puVar34,uVar42,&DAT_00569216,7);
      iVar39 = ec_tell_frac(puVar34);
      iVar58 = local_214;
      uVar98 = local_19c;
      ppiVar43 = local_100;
    }
    local_214 = iVar58;
    if (0 < iVar38) {
      iVar173 = local_118[8];
      uVar88 = 0x4fb >> (ulong)(uVar104 & 0x1f);
      uVar53 = uVar98;
      if ((int)uVar88 <= (int)uVar98) {
        uVar53 = uVar88;
      }
      if ((int)local_e0 == 0) {
        uVar88 = iVar38 + local_298 * -8;
        iVar40 = *(int *)(ppiVar43 + 7);
      }
      else {
        uVar88 = (iVar38 + iVar37 * -0x48) - 0x20;
        uVar88 = uVar88 & ((int)uVar88 >> 0x1f ^ 0xffffffffU);
        iVar40 = *(int *)(ppiVar43 + 7);
      }
      if (iVar40 != 0) {
        uVar88 = (*(int *)((long)ppiVar43 + 0xdc) >> (iVar173 - uVar64 & 0x1f)) + uVar88;
      }
      local_188._4_4_ = (uint)(local_188 >> 0x20);
      local_188 = CONCAT44(local_188._4_4_,iVar41);
      if ((int)local_160 == 0) {
        iVar41 = local_118[2];
        if (*(int *)(ppiVar43 + 0xc) != 0) {
          iVar41 = *(int *)(ppiVar43 + 0xc);
        }
        lVar59 = *(long *)(local_118 + 6);
        iVar174 = *(int *)((long)ppiVar43 + 0xec);
        iVar71 = (int)*(short *)(lVar59 + (long)iVar41 * 2);
        if (iVar37 == 2) {
          iVar164 = iVar174;
          if (iVar41 <= iVar174) {
            iVar164 = iVar41;
          }
          iVar71 = *(short *)(lVar59 + (long)iVar164 * 2) + iVar71;
        }
        iVar71 = iVar71 << (ulong)(uVar64 & 0x1f);
        iVar164 = *(int *)((long)ppiVar43 + 0x44);
        uVar104 = uVar88;
        if ((*local_1d0 != 0) && (*(float *)((long)ppiVar43 + 0x8c) < 0.4)) {
          uVar104 = uVar88 - (int)((0.4 - *(float *)((long)ppiVar43 + 0x8c)) * (float)(iVar71 << 3))
          ;
        }
        if (iVar37 == 2) {
          if (iVar41 <= iVar174) {
            iVar174 = iVar41;
          }
          sVar36 = *(short *)(local_100 + 0x1d);
          sVar119 = (short)((int)*(short *)(lVar59 + (long)iVar174 * 2) << (ulong)(uVar64 & 0x1f)) -
                    (short)iVar174;
          sVar118 = 0;
          if ((short)iVar71 != 0) {
            sVar118 = (short)((sVar119 * 0x6666) / (int)(short)iVar71);
          }
          if (0xff < sVar36) {
            sVar36 = 0x100;
          }
          iVar41 = (int)(short)(sVar119 * 8) * (int)(short)(sVar36 + -0x1a) >> 8;
          iVar37 = (int)((ulong)((long)sVar118 * (long)(int)uVar104) >> 0xf);
          if (iVar41 <= iVar37) {
            iVar37 = iVar41;
          }
          uVar104 = uVar104 - iVar37;
          ppiVar43 = local_100;
        }
        iVar41 = local_d4 + (-0x13 << (ulong)(uVar64 & 0x1f)) + uVar104;
        piVar73 = ppiVar43[0x1e];
        iVar41 = ((uint)((ulong)((long)iVar41 * (long)(short)(local_d0[0] + -0x2d1)) >> 0xe) &
                 0xfffffffe) + iVar41;
        if ((iVar164 == 0) && (*local_1d0 != 0)) {
          fVar14 = -0.12;
          if (0.0 <= *(float *)(ppiVar43 + 0x10) + -0.15) {
            fVar14 = *(float *)(ppiVar43 + 0x10) + -0.15 + -0.12;
          }
          iVar37 = 0;
          if (local_29c != 0) {
            iVar37 = (int)((float)(iVar71 << 3) * 0.8);
          }
          iVar41 = iVar41 + iVar37 + (int)((float)(iVar71 << 3) * 1.2 * fVar14);
        }
        if (iVar164 == 0 && piVar73 != (int *)0x0) {
          iVar37 = iVar41 + 3;
          if (-1 < iVar41) {
            iVar37 = iVar41;
          }
          iVar71 = iVar41 + ((int)(short)(iVar71 << 3) * (int)(short)local_2a0 >> 10);
          iVar41 = iVar37 >> 2;
          if (iVar37 >> 2 <= iVar71) {
            iVar41 = iVar71;
          }
        }
        iVar37 = (int)(short)((short)((int)*(short *)(lVar59 + (long)(local_118[2] + -2) * 2) <<
                                     (ulong)(uVar64 & 0x1f)) * (short)uVar76 * 8) *
                 (int)(short)local_294 >> 10;
        if (iVar37 <= iVar41 >> 2) {
          iVar37 = iVar41 >> 2;
        }
        if (iVar37 <= iVar41) {
          iVar41 = iVar37;
        }
        if (iVar40 != 0 && (iVar164 != 0 || piVar73 == (int *)0x0)) {
          iVar41 = uVar88 + (int)((ulong)((long)(int)(iVar41 - uVar88) * 0x55c3) >> 0xf);
        }
        if ((local_d0[0] < 0xccd) && (piVar73 == (int *)0x0)) {
          iVar58 = 96000 - iVar58;
          if (31999 < iVar58) {
            iVar58 = 32000;
          }
          iVar37 = 0;
          if (-1 < iVar58) {
            iVar37 = (short)iVar58 * 0xd01 >> 0xf;
          }
          iVar41 = iVar41 + (int)((ulong)((long)(short)((uint)(local_2a4 * iVar37) >> 10) *
                                         (long)iVar41) >> 0xf);
        }
        iVar58 = uVar88 * 2;
        if (iVar41 <= (int)(uVar88 * 2)) {
          iVar58 = iVar41;
        }
        uVar104 = ((int)local_120 + iVar39 + 0x3f >> 6) + 2;
      }
      else {
        uVar75 = 0x60 >> (ulong)(uVar104 & 0x1f);
        uVar104 = 0x90 >> (ulong)(uVar104 & 0x1f);
        if (99 < *(int *)(ppiVar43 + 0x18)) {
          uVar75 = 0;
        }
        if (*(int *)(ppiVar43 + 0x18) < 0x65) {
          uVar104 = 0;
        }
        iVar41 = ((uVar75 + uVar88) - uVar104) + ((short)(local_d0[0] + -0x1000) * 400 >> 0xe);
        iVar58 = iVar41;
        if (iVar41 < 0x191) {
          iVar58 = 400;
        }
        uVar88 = local_284 + (int)local_120 + 0x167 >> 6;
        uVar104 = ((int)local_120 + iVar39 + 0x3f >> 6) + 2;
        if (local_d0[0] < 0x2cce) {
          iVar58 = iVar41;
        }
        if ((int)uVar104 <= (int)uVar88) {
          uVar104 = uVar88;
        }
      }
      uVar88 = iVar58 + iVar39 + 0x20 >> 6;
      iVar39 = (iVar58 + iVar39) - iVar38;
      if ((int)uVar104 <= (int)uVar88) {
        uVar104 = uVar88;
      }
      iVar58 = *(int *)(ppiVar43 + 0x1c);
      uVar88 = uVar53;
      if ((int)uVar104 <= (int)uVar53) {
        uVar88 = uVar104;
      }
      iVar41 = uVar88 << 6;
      if (local_1f0 == 0) {
        uVar88 = 2;
        iVar39 = 0;
        iVar41 = 0x80;
      }
      local_19c = uVar98;
      if (iVar58 < 0x3ca) {
        *(int *)(ppiVar43 + 0x1c) = iVar58 + 1;
        sVar36 = celt_rcp(iVar58 * 0x10000 + 0x150000);
        ppiVar43 = local_100;
        if (*(int *)(local_100 + 7) != 0) goto LAB_00e9b9fc;
LAB_00e9ba74:
        iVar37 = SUB84(local_130,0);
      }
      else {
        sVar36 = 0x21;
        if (iVar40 == 0) goto LAB_00e9ba74;
LAB_00e9b9fc:
        iVar58 = (iVar41 - iVar38) + *(int *)((long)ppiVar43 + 0xd4);
        iVar37 = SUB84(local_130,0);
        iVar39 = *(int *)(ppiVar43 + 0x1b) +
                 (int)((ulong)((long)sVar36 *
                              (long)((iVar39 << (ulong)(iVar173 - uVar64 & 0x1f)) -
                                    (*(int *)((long)ppiVar43 + 0xdc) + *(int *)(ppiVar43 + 0x1b))))
                      >> 0xf);
        *(int *)((long)ppiVar43 + 0xd4) = iVar58;
        *(int *)(ppiVar43 + 0x1b) = iVar39;
        *(int *)((long)ppiVar43 + 0xdc) = -iVar39;
        if (iVar58 < 0) {
          uVar98 = (uint)-iVar58 >> 6;
          *(undefined4 *)((long)ppiVar43 + 0xd4) = 0;
          if (local_1f0 == 0) {
            uVar98 = 0;
          }
          uVar88 = uVar98 + uVar88;
        }
      }
      iVar58 = local_214;
      uVar98 = uVar53;
      if ((int)uVar88 <= (int)uVar53) {
        uVar98 = uVar88;
      }
      ec_enc_shrink(puVar34,uVar98);
      iVar41 = (uint)local_188;
    }
    uVar89 = local_210 + 0xfU & 0xfffffffffffffff0;
    local_120 = (long)piVar51 - uVar89;
    local_140 = (short *)(local_120 - uVar89);
    lVar59 = (long)local_140 - uVar89;
    local_19c = uVar98;
    uVar104 = ec_tell_frac(puVar34);
    piVar73 = local_118;
    uVar53 = 0;
    iVar39 = uVar98 * 0x40 + ~uVar104;
    if (iVar41 == 0) {
      iVar38 = 0;
    }
    else {
      iVar38 = 0;
      if (1 < uVar64) {
        bVar35 = (int)local_248 + 0x10 <= iVar39;
        uVar53 = (uint)bVar35;
        iVar38 = (uint)bVar35 << 3;
      }
    }
    local_148 = (int **)CONCAT44(local_148._4_4_,uVar53);
    if (*local_1d0 == 0) {
      iVar58 = (int)local_108 + -1;
    }
    else {
      if (iVar58 < iVar37 * 32000) {
        iVar41 = 0xd;
      }
      else if (iVar58 < iVar37 * 48000) {
        iVar41 = 0x10;
      }
      else if (iVar58 < iVar37 * 60000) {
        iVar41 = 0x12;
      }
      else {
        iVar41 = 0x13;
        if (iVar37 * 80000 <= iVar58) {
          iVar41 = 0x14;
        }
      }
      iVar58 = *(int *)((long)local_100 + 0x9c);
      if (*(int *)((long)local_100 + 0x9c) <= iVar41) {
        iVar58 = iVar41;
      }
    }
    lVar77 = (long)local_100 + 0xec;
    uVar7 = *(undefined4 *)(local_100 + 0xc);
    if (*(int *)((long)local_100 + 0x44) != 0) {
      iVar58 = 1;
    }
    local_1ac = uVar98 * 0x40;
    *(int *)(lVar59 + -0x10) = iVar58;
    uVar76 = local_e0;
    piVar56 = local_e8;
    *(undefined4 *)(lVar59 + -0x18) = uVar7;
    *(undefined4 *)(lVar59 + -0x20) = 1;
    lVar78 = (long)local_140;
    *(int *)(lVar59 + -0x60) = iVar39 - iVar38;
    piVar51 = local_f0;
    uVar89 = local_110;
    lVar85 = local_120;
    *(undefined **)(lVar59 + -0x28) = puVar34;
    *(uint *)(lVar59 + -0x30) = uVar64;
    *(undefined4 **)(lVar59 + -0x58) = &local_c8;
    *(long *)(lVar59 + -0x50) = lVar78;
    *(int *)(lVar59 + -0x38) = iVar37;
    local_e8 = (int *)lVar59;
    *(long *)(lVar59 + -0x48) = lVar85;
    *(long *)(lVar59 + -0x40) = lVar59;
    iVar41 = clt_compute_allocation(piVar73,uVar76,uVar89,piVar56,piVar51,uVar42,lVar77,&local_c4);
    ppiVar43 = local_100;
    uVar79 = local_108;
    piVar73 = local_118;
    uVar76 = (ulong)local_130;
    uVar89 = local_160;
    iVar58 = *(int *)(local_100 + 0xc);
    iVar39 = iVar41;
    if (iVar58 != 0) {
      iVar39 = iVar58 + -1;
      if (iVar58 + -1 <= iVar41) {
        iVar39 = iVar41;
      }
      if (iVar58 + 1 < iVar39) {
        iVar39 = iVar58 + 1;
      }
    }
    *(int *)(local_100 + 0xc) = iVar39;
    iVar39 = local_19c * 8;
    quant_fine_energy(local_118,local_160 & 0xffffffff,local_108 & 0xffffffff,local_1a8,local_208,
                      local_120,puVar34,(ulong)local_130 & 0xffffffff);
    uVar64 = local_c4;
    lVar78 = local_198;
    lVar59 = lVar59 - (local_220 + 0xfU & 0xfffffffffffffff0);
    uVar42 = *(undefined4 *)(ppiVar43 + 9);
    uVar7 = *(undefined4 *)((long)ppiVar43 + 0x4c);
    lVar77 = local_198 + (long)local_158 * 2;
    uVar8 = *(undefined4 *)((long)ppiVar43 + 0x54);
    uVar9 = *(undefined4 *)((long)ppiVar43 + 0xec);
    if ((int)uVar76 != 2) {
      lVar77 = 0;
    }
    iVar38 = local_1ac - iVar38;
    *(undefined4 *)(lVar59 + -0x20) = *(undefined4 *)((long)ppiVar43 + 0x1c);
    uVar76 = local_128;
    *(undefined4 *)(lVar59 + -0x70) = uVar8;
    *(uint *)(lVar59 + -0x68) = uVar64;
    *(int *)(lVar59 + -0x38) = (int)uVar76;
    pvVar90 = local_1c0;
    piVar51 = local_1c8;
    *(int *)(lVar59 + -0x78) = (int)local_1e8;
    lVar85 = (long)local_140;
    *(undefined4 *)(lVar59 + -0x10) = uVar42;
    *(undefined4 *)(lVar59 + -0x18) = uVar7;
    *(int ***)(lVar59 + -0x28) = ppiVar43 + 10;
    *(int *)(lVar59 + -0x30) = iVar41;
    *(undefined **)(lVar59 + -0x40) = puVar34;
    *(undefined4 *)(lVar59 + -0x48) = local_c8;
    *(int *)(lVar59 + -0x50) = iVar38;
    *(void **)(lVar59 + -0x58) = pvVar90;
    *(undefined4 *)(lVar59 + -0x60) = uVar9;
    *(long *)(lVar59 + -0x80) = lVar85;
    quant_all_bands(1,piVar73,uVar89 & 0xffffffff,uVar79 & 0xffffffff,lVar78,lVar77,lVar59,piVar51);
    if ((int)local_148 != 0) {
      ec_enc_bits(puVar34,*(int *)(ppiVar43 + 0xf) < 2,1);
    }
    uVar63 = local_108;
    piVar73 = local_118;
    lVar77 = local_120;
    uVar42 = *(undefined4 *)(puVar34 + 0x20);
    iVar58 = *(int *)(puVar34 + 0x18);
    *(undefined **)(lVar59 + -0x10) = puVar34;
    uVar89 = local_e0;
    lVar85 = (long)local_e8;
    pvVar90 = local_1a8;
    lVar78 = local_208;
    *(int *)(lVar59 + -8) = SUB84(local_130,0);
    quant_energy_finalise
              (piVar73,uVar89,uVar63 & 0xffffffff,pvVar90,lVar78,lVar77,lVar85,
               (iVar39 - (iVar58 + (int)LZCOUNT(uVar42))) + 0x20);
    memset(local_250,0,local_138);
    uVar74 = local_110;
    sVar20 = local_138;
    uVar79 = local_150;
    lVar95 = local_168;
    uVar76 = local_1d8;
    lVar85 = local_200;
    pvVar90 = local_240;
    lVar77 = local_278;
    lVar59 = 0;
    uVar89 = 0;
    uVar52 = local_190 & 0xfffffffffffffff0;
    auVar101._8_2_ = 0x4000;
    auVar101._0_8_ = 0x4000400040004000;
    auVar101._10_2_ = 0x4000;
    auVar101._12_2_ = 0x4000;
    auVar101._14_2_ = 0x4000;
    pauVar61 = (undefined (*) [16])(local_280 + lVar78 + 0x10);
    auVar109._8_2_ = 0xc000;
    auVar109._0_8_ = 0xc000c000c000c000;
    auVar109._10_2_ = 0xc000;
    auVar109._12_2_ = 0xc000;
    auVar109._14_2_ = 0xc000;
    puVar44 = (undefined8 *)((long)ppiVar43 + local_1d8 * 6 + local_280 + local_278 + 0x10c);
    do {
      if ((int)local_160 < (int)uVar63) {
        pauVar47 = pauVar61;
        uVar55 = local_160;
        uVar84 = uVar52;
        puVar54 = puVar44;
        if (0xf < local_190) {
          do {
            uVar84 = uVar84 - 0x10;
            auVar115 = NEON_smin(pauVar47[-1],auVar101,2);
            auVar128 = NEON_smin(*pauVar47,auVar101,2);
            auVar115 = NEON_smax(auVar115,auVar109,2);
            auVar128 = NEON_smax(auVar128,auVar109,2);
            puVar54[-1] = auVar115._8_8_;
            puVar54[-2] = auVar115._0_8_;
            puVar54[1] = auVar128._8_8_;
            *puVar54 = auVar128._0_8_;
            pauVar47 = pauVar47 + 2;
            puVar54 = puVar54 + 4;
          } while (uVar84 != 0);
          uVar55 = uVar52 + local_160;
          if (local_190 == uVar52) goto LAB_00e9beb0;
        }
        lVar83 = local_110 - uVar55;
        lVar81 = (uVar55 + lVar59) * 2;
        puVar48 = (undefined2 *)((long)ppiVar43 + lVar81 + local_1d8 * 6 + local_278 + 0xfc);
        psVar93 = (short *)(lVar78 + lVar81);
        do {
          iVar39 = (int)*psVar93;
          if (0x3fff < *psVar93) {
            iVar39 = 0x4000;
          }
          if (iVar39 == -0x4000 || iVar39 + 0x4000 < 0 != SCARRY4(iVar39,0x4000)) {
            iVar39 = -0x4000;
          }
          lVar83 = lVar83 + -1;
          *puVar48 = (short)iVar39;
          puVar48 = puVar48 + 1;
          psVar93 = psVar93 + 1;
        } while (lVar83 != 0);
      }
LAB_00e9beb0:
      uVar89 = uVar89 + 1;
      pauVar61 = (undefined (*) [16])(*pauVar61 + sVar94);
      puVar44 = (undefined8 *)((long)puVar44 + sVar94);
      lVar59 = lVar59 + local_150;
    } while ((int *)uVar89 != local_180);
    if (((local_1f0 & 1) == 0) && (0 < (int)(uint)local_228)) {
      if ((uint)local_228 < 0x10) {
        uVar63 = 0;
      }
      else {
        uVar63 = local_228 & 0xfffffff0;
        puVar44 = (undefined8 *)((long)local_100 + local_200 * 4 + 0x10c);
        uVar89 = uVar63;
        do {
          *(undefined2 *)puVar44 = 0x9000;
          *(undefined2 *)((long)puVar44 + 2) = 0x9000;
          *(undefined2 *)((long)puVar44 + 4) = 0x9000;
          *(undefined2 *)((long)puVar44 + 6) = 0x9000;
          puVar44[-2] = 0x9000900090009000;
          *(undefined2 *)(puVar44 + 2) = 0x9000;
          *(undefined2 *)((long)puVar44 + 0x12) = 0x9000;
          *(undefined2 *)((long)puVar44 + 0x14) = 0x9000;
          *(undefined2 *)((long)puVar44 + 0x16) = 0x9000;
          *puVar44 = 0x9000900090009000;
          puVar44 = puVar44 + 4;
          uVar89 = uVar89 - 0x10;
        } while (uVar89 != 0);
        if (uVar63 == (local_228 & 0xffffffff)) goto LAB_00e9bfd8;
      }
      lVar59 = (local_228 & 0xffffffff) - uVar63;
      puVar48 = (undefined2 *)((long)local_100 + local_278 + uVar63 * 2 + 0xfc);
      do {
        lVar59 = lVar59 + -1;
        *puVar48 = 0x9000;
        puVar48 = puVar48 + 1;
      } while (lVar59 != 0);
    }
LAB_00e9bfd8:
    *(int *)((long)local_100 + 0x6c) = local_bc;
    *(short *)(local_100 + 0xe) = (short)local_25c;
    *(undefined4 *)((long)local_100 + 0x74) = local_258;
    if (local_26c != 0) {
      memcpy((void *)((long)local_1a8 + sVar94),local_1a8,sVar94);
    }
    if ((uint)local_188 == 0) {
      memcpy(local_290,pvVar90,sVar20);
      memcpy(pvVar90,local_1a8,sVar20);
    }
    else if (0 < (int)(uint)uVar76) {
      uVar89 = uVar76 & 0xffffffff;
      if ((uint)uVar76 < 0x10) {
LAB_00e9c084:
        uVar63 = 0;
      }
      else {
        lVar59 = lVar77 + uVar76 * 2;
        if (((ulong)((long)local_100 + lVar59 + 0xfc) < (long)local_100 + lVar77 + uVar89 * 2 + 0xfc
            ) && ((ulong)((long)local_100 + lVar77 + 0xfc) <
                  (long)local_100 + lVar59 + uVar89 * 2 + 0xfc)) goto LAB_00e9c084;
        uVar63 = uVar76 & 0xfffffff0;
        pauVar61 = (undefined (*) [16])((long)local_100 + lVar85 * 4 + 0x10c);
        uVar52 = uVar63;
        do {
          pauVar50 = (undefined (*) [16])(*pauVar61 + sVar20);
          uVar52 = uVar52 - 0x10;
          pauVar47 = pauVar61 + -1;
          auVar115 = *pauVar61;
          pauVar61 = pauVar61 + 2;
          auVar128 = NEON_smin(pauVar50[-1],*pauVar47,2);
          auVar115 = NEON_smin(*pauVar50,auVar115,2);
          *(long *)(pauVar50[-1] + 8) = auVar128._8_8_;
          *(long *)pauVar50[-1] = auVar128._0_8_;
          *(long *)(*pauVar50 + 8) = auVar115._8_8_;
          *(long *)*pauVar50 = auVar115._0_8_;
        } while (uVar52 != 0);
        if (uVar63 == uVar89) goto LAB_00e9c0f0;
      }
      lVar59 = uVar89 - uVar63;
      psVar93 = (short *)((long)local_100 + lVar77 + uVar63 * 2 + 0xfc);
      do {
        sVar36 = *(short *)((long)psVar93 + sVar20);
        if (*psVar93 <= *(short *)((long)psVar93 + sVar20)) {
          sVar36 = *psVar93;
        }
        lVar59 = lVar59 + -1;
        *(short *)((long)psVar93 + sVar20) = sVar36;
        psVar93 = psVar93 + 1;
      } while (lVar59 != 0);
    }
LAB_00e9c0f0:
    puVar34 = local_f8;
    uVar64 = local_19c;
    lVar65 = local_238;
    lVar83 = uVar74 + uVar76;
    uVar63 = uVar79 - uVar74;
    lVar81 = lVar77 + 0xfc;
    lVar68 = (uVar76 + lVar85) * 4 + 0xfc;
    lVar85 = uVar79 + uVar76;
    uVar84 = uVar63 & 0xfffffffffffffff0;
    puVar44 = (undefined8 *)((long)local_100 + lVar77 + 0x10c);
    uVar89 = 0;
    auVar110._8_2_ = 0x9000;
    auVar110._0_8_ = 0x9000900090009000;
    auVar110._10_2_ = 0x9000;
    auVar110._12_2_ = 0x9000;
    auVar110._14_2_ = 0x9000;
    uVar52 = local_e0 & 0xfffffff0;
    uVar76 = uVar84 + uVar74;
    lVar59 = (long)local_100 + lVar77 + 0xfc;
    lVar78 = (long)local_100 + lVar95 + lVar77 + 0xfc;
    lVar77 = (long)local_100 + lVar77 + sVar20 + 0xfc;
    puVar54 = (undefined8 *)((long)puVar44 + local_178);
    do {
      lVar95 = sVar94 * uVar89;
      uVar99 = auVar110._8_8_;
      if (0 < (int)(uint)local_e0) {
        if ((uint)local_e0 < 0x10) {
          uVar86 = 0;
        }
        else {
          lVar87 = local_e0 * 2 + lVar95;
          uVar55 = (long)local_100 + lVar95 + lVar81;
          uVar45 = (long)local_100 + lVar87 + lVar68;
          uVar46 = (long)local_100 + lVar95 + lVar68;
          uVar2 = (long)local_100 + lVar87 + lVar81;
          uVar3 = (long)local_100 + sVar20 + local_e0 * 2 + lVar95 + lVar81;
          uVar86 = 0;
          uVar4 = (long)local_100 + local_138 + lVar95 + lVar81;
          uVar74 = local_110;
          uVar79 = local_150;
          if (((uVar45 <= uVar55 || uVar2 <= uVar46) && (uVar3 <= uVar55 || uVar2 <= uVar4)) &&
             (puVar57 = puVar44, uVar55 = uVar52, uVar3 <= uVar46 || uVar45 <= uVar4)) {
            do {
              puVar5 = (undefined8 *)((long)puVar57 + local_168);
              puVar57[-1] = 0;
              puVar57[-2] = 0;
              puVar57[1] = 0;
              *puVar57 = 0;
              puVar6 = (undefined8 *)((long)puVar57 + local_138);
              uVar55 = uVar55 - 0x10;
              puVar5[-1] = uVar99;
              puVar5[-2] = 0x9000900090009000;
              puVar5[1] = uVar99;
              *puVar5 = 0x9000900090009000;
              puVar6[-1] = uVar99;
              puVar6[-2] = 0x9000900090009000;
              puVar6[1] = uVar99;
              *puVar6 = 0x9000900090009000;
              puVar57 = puVar57 + 4;
            } while (uVar55 != 0);
            uVar86 = uVar52;
            if (uVar52 == local_e0) goto LAB_00e9c1ec;
          }
        }
        lVar91 = uVar86 * 2;
        lVar87 = 0;
        do {
          lVar92 = lVar87 * 2;
          lVar87 = lVar87 + 1;
          *(undefined2 *)(lVar59 + lVar91 + lVar92) = 0;
          *(undefined2 *)(lVar78 + lVar91 + lVar92) = 0x9000;
          *(undefined2 *)(lVar77 + lVar91 + lVar92) = 0x9000;
        } while (local_e0 - uVar86 != lVar87);
      }
LAB_00e9c1ec:
      if ((int)local_108 < (int)uVar79) {
        uVar55 = uVar74;
        if (0xf < uVar63) {
          uVar45 = (long)local_100 + sVar94 + lVar95 + lVar81;
          uVar46 = (long)local_100 + sVar94 + lVar95 + lVar68;
          uVar2 = (long)local_100 + local_178 + lVar95 + lVar81;
          uVar3 = (long)local_100 + local_178 + lVar95 + lVar68;
          uVar4 = (long)local_100 + lVar83 * 2 + lVar95 + lVar81;
          uVar86 = (long)local_100 + lVar85 * 2 + lVar95 + lVar81;
          uVar55 = local_110;
          uVar74 = local_110;
          if (((uVar46 <= uVar2 || uVar45 <= uVar3) && (uVar86 <= uVar2 || uVar45 <= uVar4)) &&
             (puVar57 = puVar54, uVar45 = uVar84, uVar86 <= uVar3 || uVar46 <= uVar4)) {
            do {
              puVar5 = (undefined8 *)((long)puVar57 + local_168);
              puVar57[-1] = 0;
              puVar57[-2] = 0;
              puVar57[1] = 0;
              *puVar57 = 0;
              puVar6 = (undefined8 *)((long)puVar57 + local_138);
              uVar45 = uVar45 - 0x10;
              puVar5[-1] = uVar99;
              puVar5[-2] = 0x9000900090009000;
              puVar5[1] = uVar99;
              *puVar5 = 0x9000900090009000;
              puVar6[-1] = uVar99;
              puVar6[-2] = 0x9000900090009000;
              puVar6[1] = uVar99;
              *puVar6 = 0x9000900090009000;
              puVar57 = puVar57 + 4;
            } while (uVar45 != 0);
            uVar55 = uVar76;
            if (uVar63 == uVar84) goto LAB_00e9c174;
          }
        }
        lVar87 = uVar55 * 2;
        lVar95 = 0;
        do {
          lVar91 = lVar95 * 2;
          lVar95 = lVar95 + 1;
          *(undefined2 *)(lVar59 + lVar87 + lVar91) = 0;
          *(undefined2 *)(lVar78 + lVar87 + lVar91) = 0x9000;
          *(undefined2 *)(lVar77 + lVar87 + lVar91) = 0x9000;
        } while (uVar79 - uVar55 != lVar95);
      }
LAB_00e9c174:
      uVar89 = uVar89 + 1;
      puVar44 = (undefined8 *)((long)puVar44 + sVar94);
      lVar59 = lVar59 + sVar94;
      lVar78 = lVar78 + sVar94;
      lVar77 = lVar77 + sVar94;
      puVar54 = (undefined8 *)((long)puVar54 + sVar94);
    } while (uVar89 != local_170);
    if (((uint)((uint)local_188 == 0) & (local_254 ^ 0xffffffff)) == 0) {
      iVar39 = *(int *)(local_100 + 0xf) + 1;
    }
    else {
      iVar39 = 0;
    }
    *(int *)(local_100 + 0xf) = iVar39;
    *(undefined4 *)(local_100 + 10) = *(undefined4 *)(local_f8 + 0x20);
    ec_enc_done(local_f8);
    if (*(int *)(puVar34 + 0x30) != 0) {
      uVar64 = 0xfffffffd;
    }
    if (*(long *)(lVar65 + 0x28) == local_80) {
      return;
    }
    goto LAB_00e991d8;
  }
  lVar59 = *(long *)(lVar59 + 0x28);
joined_r0x00e991d4:
  uVar64 = 0xffffffff;
  if (lVar59 == local_80) {
                    /* WARNING: Read-only address (ram,0x004c3940) is written */
    return;
  }
LAB_00e991d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar64);
code_r0x00e991c4:
  lVar59 = *(long *)(lVar59 + 0x28);
  goto joined_r0x00e991d4;
}


