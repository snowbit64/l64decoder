// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: color_cell_compression
// Entry Point: 00a87f20
// Size: 7088 bytes
// Signature: undefined __cdecl color_cell_compression(uint param_1, color_cell_compressor_params * param_2, color_cell_compressor_results * param_3, bc7enc16_compress_block_params * param_4)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BC7EncodeUtil::BC7Enc16::color_cell_compression(unsigned int,
   BC7EncodeUtil::BC7Enc16::color_cell_compressor_params const*,
   BC7EncodeUtil::BC7Enc16::color_cell_compressor_results*,
   BC7EncodeUtil::BC7Enc16::bc7enc16_compress_block_params const*) */

ulong BC7EncodeUtil::BC7Enc16::color_cell_compression
                (uint param_1,color_cell_compressor_params *param_2,
                color_cell_compressor_results *param_3,bc7enc16_compress_block_params *param_4)

{
  byte *pbVar1;
  color_quad_u8 *pcVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
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
  bool bVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  color_quad_u8 *pcVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  ulong *puVar31;
  undefined (*pauVar32) [16];
  long lVar33;
  char *pcVar34;
  undefined *puVar35;
  uint uVar36;
  char cVar37;
  uint uVar38;
  int iVar39;
  ulong extraout_x14;
  int iVar40;
  ulong extraout_x15;
  ulong uVar41;
  float fVar42;
  uint uVar43;
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  float fVar51;
  uint uVar52;
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  float fVar60;
  undefined auVar61 [12];
  undefined auVar62 [12];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar73 [16];
  float fVar75;
  undefined auVar76 [12];
  undefined auVar77 [12];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  float fVar84;
  undefined auVar85 [12];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar91 [16];
  float fVar92;
  undefined auVar93 [12];
  undefined auVar94 [16];
  undefined auVar95 [16];
  float fVar97;
  float fVar98;
  undefined8 uVar99;
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined auVar107 [16];
  undefined auVar108 [16];
  float fVar109;
  undefined auVar110 [16];
  undefined auVar111 [16];
  float fVar112;
  undefined auVar113 [16];
  undefined auVar114 [16];
  float fVar115;
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  byte bVar119;
  color_quad_u8 cVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined auVar124 [16];
  undefined auVar125 [16];
  float fVar126;
  undefined auVar127 [16];
  undefined4 uVar128;
  undefined auVar129 [16];
  undefined auVar130 [16];
  undefined auVar131 [16];
  float fVar132;
  undefined4 uVar133;
  undefined auVar134 [16];
  undefined auVar135 [16];
  undefined auVar136 [16];
  undefined4 uVar137;
  undefined4 uVar138;
  float fVar139;
  undefined4 uVar140;
  undefined4 uVar141;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uchar *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined auVar72 [16];
  undefined auVar74 [16];
  undefined auVar80 [16];
  undefined auVar83 [16];
  undefined auVar90 [16];
  undefined auVar96 [16];
  
  lVar8 = tpidr_el0;
  local_a0 = *(long *)(lVar8 + 0x28);
  *(undefined8 *)param_3 = 0xffffffffffffffff;
  if (param_1 == 1) {
    pbVar28 = *(byte **)(param_2 + 8);
    uVar43 = *(uint *)param_2;
    if (1 < uVar43) {
      pbVar29 = pbVar28 + 6;
      lVar33 = (ulong)uVar43 - 1;
      do {
        if ((((uint)*pbVar28 != (uint)pbVar29[-2]) || ((uint)pbVar28[1] != (uint)pbVar29[-1])) ||
           ((uint)pbVar28[2] != (uint)*pbVar29)) goto LAB_00a87ff4;
        pbVar29 = pbVar29 + 4;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
    }
    uVar23 = pack_mode1_to_one_color
                       (param_2,param_3,(uint)*pbVar28,(uint)pbVar28[1],(uint)pbVar28[2],
                        *(uchar **)(param_3 + 0x18));
    if (*(long *)(lVar8 + 0x28) == local_a0) {
      return uVar23;
    }
    goto LAB_00a89acc;
  }
  uVar43 = *(uint *)param_2;
LAB_00a87ff4:
  fVar51 = 0.0;
  fVar60 = 0.0;
  fVar75 = 0.0;
  fVar84 = 0.0;
  if (uVar43 != 0) {
    fVar84 = 0.0;
    fVar75 = 0.0;
    fVar60 = 0.0;
    fVar51 = 0.0;
    uVar23 = (ulong)uVar43;
    pbVar28 = (byte *)(*(long *)(param_2 + 8) + 1);
    do {
      uVar23 = uVar23 - 1;
      pbVar29 = pbVar28 + 1;
      pbVar1 = pbVar28 + 2;
      fVar42 = (float)NEON_ucvtf((uint)pbVar28[-1]);
      fVar92 = (float)NEON_ucvtf((uint)*pbVar28);
      pbVar28 = pbVar28 + 4;
      fVar97 = (float)NEON_ucvtf((uint)*pbVar29);
      fVar103 = (float)NEON_ucvtf((uint)*pbVar1);
      fVar51 = fVar51 + fVar42;
      fVar60 = fVar60 + fVar92;
      fVar75 = fVar75 + fVar97;
      fVar84 = fVar84 + fVar103;
    } while (uVar23 != 0);
  }
  fVar92 = 1.0 / ((float)(ulong)uVar43 * 255.0);
  fVar103 = fVar51 * fVar92;
  fVar97 = fVar60 * fVar92;
  fVar42 = 0.0;
  if ((0.0 <= fVar103) && (fVar42 = fVar103, 1.0 < fVar103)) {
    fVar42 = 1.0;
  }
  fVar92 = fVar75 * fVar92;
  fVar103 = 0.0;
  if ((0.0 <= fVar97) && (fVar103 = fVar97, 1.0 < fVar97)) {
    fVar103 = 1.0;
  }
  fVar97 = 0.0;
  if ((0.0 <= fVar92) && (fVar97 = fVar92, 1.0 < fVar92)) {
    fVar97 = 1.0;
  }
  fVar92 = 1.0 / (float)(ulong)uVar43;
  fVar51 = fVar51 * fVar92;
  fVar60 = fVar60 * fVar92;
  fVar75 = fVar75 * fVar92;
  if (param_2[0x3c] == (color_cell_compressor_params)0x0) {
    if (uVar43 == 0) {
      auVar70 = ZEXT816(0);
      auVar113 = ZEXT816(0);
      auVar135 = ZEXT816(0);
      auVar110 = ZEXT816(0);
      auVar131 = ZEXT816(0);
      auVar87 = ZEXT816(0);
    }
    else {
      auVar87 = ZEXT816(0);
      auVar131 = ZEXT816(0);
      auVar110 = ZEXT816(0);
      auVar135 = ZEXT816(0);
      auVar113 = ZEXT816(0);
      auVar70 = ZEXT816(0);
      uVar23 = (ulong)uVar43;
      pbVar28 = (byte *)(*(long *)(param_2 + 8) + 1);
      do {
        pbVar1 = pbVar28 + -1;
        uVar23 = uVar23 - 1;
        bVar119 = *pbVar28;
        pbVar29 = pbVar28 + 1;
        pbVar28 = pbVar28 + 4;
        fVar109 = (float)NEON_ucvtf((uint)*pbVar1);
        fVar112 = (float)NEON_ucvtf((uint)bVar119);
        fVar98 = (float)NEON_ucvtf((uint)*pbVar29);
        fVar109 = fVar109 - fVar51;
        fVar112 = fVar112 - fVar60;
        fVar98 = fVar98 - fVar75;
        auVar87._0_4_ = NEON_fmadd(fVar109,fVar109,auVar87._0_4_);
        auVar131._0_4_ = NEON_fmadd(fVar109,fVar112,auVar131._0_4_);
        auVar135._0_4_ = NEON_fmadd(fVar112,fVar112,auVar135._0_4_);
        auVar110._0_4_ = NEON_fmadd(fVar109,fVar98,auVar110._0_4_);
        auVar113._0_4_ = NEON_fmadd(fVar112,fVar98,auVar113._0_4_);
        auVar70._0_4_ = NEON_fmadd(fVar98,fVar98,auVar70._0_4_);
      } while (uVar23 != 0);
    }
    uVar141 = auVar87._0_4_;
    fVar98 = auVar131._0_4_;
    uVar138 = NEON_fmadd(uVar141,0x3f666666,fVar98);
    fVar115 = auVar135._0_4_;
    uVar140 = NEON_fmadd(fVar98,0x3f666666,fVar115);
    uVar137 = auVar110._0_4_;
    fVar112 = auVar113._0_4_;
    uVar128 = NEON_fmadd(uVar137,0x3f666666,fVar112);
    fVar132 = (float)NEON_fmadd(uVar137,0x3f333333,uVar138);
    fVar104 = (float)NEON_fmadd(fVar112,0x3f333333,uVar140);
    uVar138 = auVar70._0_4_;
    fVar105 = (float)NEON_fmadd(uVar138,0x3f333333,uVar128);
    fVar109 = ABS(fVar132);
    if (ABS(fVar132) <= ABS(fVar104)) {
      fVar109 = ABS(fVar104);
    }
    if (fVar109 <= ABS(fVar105)) {
      fVar109 = ABS(fVar105);
    }
    if (1e-10 < fVar109) {
      fVar109 = 1.0 / fVar109;
      fVar132 = fVar132 * fVar109;
      fVar104 = fVar104 * fVar109;
      fVar105 = fVar105 * fVar109;
    }
    uVar128 = NEON_fmadd(fVar132,uVar141,fVar98 * fVar104);
    uVar133 = NEON_fmadd(fVar132,fVar98,fVar115 * fVar104);
    uVar140 = NEON_fmadd(fVar132,uVar137,fVar112 * fVar104);
    fVar104 = (float)NEON_fmadd(fVar105,uVar137,uVar128);
    fVar121 = (float)NEON_fmadd(fVar105,fVar112,uVar133);
    fVar132 = (float)NEON_fmadd(fVar105,uVar138,uVar140);
    fVar109 = ABS(fVar104);
    if (ABS(fVar104) <= ABS(fVar121)) {
      fVar109 = ABS(fVar121);
    }
    if (fVar109 <= ABS(fVar132)) {
      fVar109 = ABS(fVar132);
    }
    if (1e-10 < fVar109) {
      fVar109 = 1.0 / fVar109;
      fVar104 = fVar104 * fVar109;
      fVar121 = fVar121 * fVar109;
      fVar132 = fVar132 * fVar109;
    }
    uVar141 = NEON_fmadd(fVar104,uVar141,fVar98 * fVar121);
    uVar140 = NEON_fmadd(fVar104,fVar98,fVar115 * fVar121);
    fVar98 = (float)NEON_fmadd(fVar132,uVar137,uVar141);
    fVar115 = (float)NEON_fmadd(fVar132,fVar112,uVar140);
    uVar141 = NEON_fmadd(fVar104,uVar137,fVar112 * fVar121);
    fVar112 = (float)NEON_fmadd(fVar132,uVar138,uVar141);
    fVar109 = ABS(fVar98);
    if (ABS(fVar98) <= ABS(fVar115)) {
      fVar109 = ABS(fVar115);
    }
    if (fVar109 <= ABS(fVar112)) {
      fVar109 = ABS(fVar112);
    }
    if (1e-10 < fVar109) {
      fVar109 = 1.0 / fVar109;
      fVar98 = fVar98 * fVar109;
      fVar115 = fVar115 * fVar109;
      fVar112 = fVar112 * fVar109;
    }
    fVar109 = 0.0;
    uVar138 = NEON_fmadd(fVar98,fVar98,fVar115 * fVar115);
    fVar132 = (float)NEON_fmadd(fVar112,fVar112,uVar138);
    if (1e-10 <= fVar132) {
      fVar132 = 1.0 / SQRT(fVar132);
      fVar98 = fVar98 * fVar132;
      fVar115 = fVar115 * fVar132;
      fVar112 = fVar112 * fVar132;
    }
    else {
      fVar98 = 0.0;
      fVar115 = 0.0;
      fVar112 = 0.0;
    }
  }
  else {
    if (uVar43 == 0) {
      fVar98 = 0.0;
      fVar115 = 0.0;
      fVar112 = 0.0;
      fVar109 = 0.0;
    }
    else {
      fVar109 = 0.0;
      fVar112 = 0.0;
      fVar115 = 0.0;
      fVar98 = 0.0;
      lVar33 = 0;
      do {
        pbVar28 = (byte *)(*(long *)(param_2 + 8) + lVar33);
        bVar22 = lVar33 != 0;
        fVar104 = (float)NEON_ucvtf((uint)pbVar28[1]);
        fVar121 = (float)NEON_ucvtf((uint)*pbVar28);
        fVar104 = fVar104 - fVar60;
        fVar105 = (float)NEON_ucvtf((uint)pbVar28[2]);
        fVar121 = fVar121 - fVar51;
        fVar132 = fVar104;
        if (bVar22) {
          fVar132 = fVar115;
        }
        fVar122 = (float)NEON_ucvtf((uint)pbVar28[3]);
        fVar105 = fVar105 - fVar75;
        fVar126 = fVar121;
        if (bVar22) {
          fVar126 = fVar98;
        }
        fVar122 = fVar122 - fVar84 * fVar92;
        fVar123 = fVar105;
        if (bVar22) {
          fVar123 = fVar112;
        }
        uVar138 = NEON_fmadd(fVar126,fVar126,fVar132 * fVar132);
        fVar106 = fVar122;
        if (bVar22) {
          fVar106 = fVar109;
        }
        uVar138 = NEON_fmadd(fVar123,fVar123,uVar138);
        fVar139 = (float)NEON_fmadd(fVar106,fVar106,uVar138);
        if (fVar139 != 0.0) {
          fVar139 = 1.0 / SQRT(fVar139);
          fVar126 = fVar126 * fVar139;
          fVar132 = fVar132 * fVar139;
          fVar123 = fVar123 * fVar139;
          fVar106 = fVar106 * fVar139;
        }
        lVar33 = lVar33 + 4;
        uVar141 = NEON_fmadd(fVar121 * fVar121,fVar126,fVar121 * fVar104 * fVar132);
        uVar137 = NEON_fmadd(fVar121 * fVar104,fVar126,fVar104 * fVar104 * fVar132);
        uVar140 = NEON_fmadd(fVar121 * fVar105,fVar126,fVar104 * fVar105 * fVar132);
        uVar138 = NEON_fmadd(fVar121 * fVar122,fVar126,fVar104 * fVar122 * fVar132);
        uVar141 = NEON_fmadd(fVar121 * fVar105,fVar123,uVar141);
        uVar137 = NEON_fmadd(fVar104 * fVar105,fVar123,uVar137);
        uVar140 = NEON_fmadd(fVar105 * fVar105,fVar123,uVar140);
        uVar138 = NEON_fmadd(fVar105 * fVar122,fVar123,uVar138);
        fVar121 = (float)NEON_fmadd(fVar121 * fVar122,fVar106,uVar141);
        fVar126 = (float)NEON_fmadd(fVar104 * fVar122,fVar106,uVar137);
        fVar104 = (float)NEON_fmadd(fVar105 * fVar122,fVar106,uVar140);
        fVar132 = (float)NEON_fmadd(fVar122 * fVar122,fVar106,uVar138);
        fVar98 = fVar98 + fVar121;
        fVar115 = fVar115 + fVar126;
        fVar112 = fVar112 + fVar104;
        fVar109 = fVar109 + fVar132;
      } while ((ulong)uVar43 * 4 - lVar33 != 0);
    }
    uVar138 = NEON_fmadd(fVar98,fVar98,fVar115 * fVar115);
    uVar138 = NEON_fmadd(fVar112,fVar112,uVar138);
    fVar132 = (float)NEON_fmadd(fVar109,fVar109,uVar138);
    if (fVar132 != 0.0) {
      fVar132 = 1.0 / SQRT(fVar132);
      fVar98 = fVar98 * fVar132;
      fVar115 = fVar115 * fVar132;
      fVar112 = fVar112 * fVar132;
      fVar109 = fVar109 * fVar132;
    }
  }
  uVar138 = NEON_fmadd(fVar98,fVar98,fVar115 * fVar115);
  uVar138 = NEON_fmadd(fVar112,fVar112,uVar138);
  fVar132 = (float)NEON_fmadd(fVar109,fVar109,uVar138);
  if (fVar132 < 0.5) {
    bVar22 = param_2[0x3f] != (color_cell_compressor_params)0x0;
    fVar98 = 1.0;
    if (bVar22) {
      fVar98 = 0.213;
    }
    uVar138 = 0x3f800000;
    if (bVar22) {
      uVar138 = 0x3f02dfa4;
    }
    fVar115 = 1.0;
    if (bVar22) {
      fVar115 = 0.715;
    }
    fVar112 = 1.0;
    if (bVar22) {
      fVar112 = 0.072;
    }
    uVar138 = NEON_fmadd(fVar98,fVar98,uVar138);
    fVar109 = 0.0;
    if (param_2[0x3c] != (color_cell_compressor_params)0x0) {
      fVar109 = fVar115;
    }
    uVar138 = NEON_fmadd(fVar112,fVar112,uVar138);
    fVar132 = (float)NEON_fmadd(fVar109,fVar109,uVar138);
    if (fVar132 != 0.0) {
      fVar132 = 1.0 / SQRT(fVar132);
      fVar98 = fVar98 * fVar132;
      fVar115 = fVar115 * fVar132;
      fVar112 = fVar112 * fVar132;
      fVar109 = fVar109 * fVar132;
    }
  }
  if (uVar43 != 0) {
    uVar23 = (ulong)uVar43;
    pbVar28 = (byte *)(*(long *)(param_2 + 8) + 1);
    fVar104 = -1e+09;
    fVar132 = 1e+09;
    do {
      pbVar29 = pbVar28 + 1;
      fVar105 = (float)NEON_ucvtf((uint)*pbVar28);
      pbVar1 = pbVar28 + 2;
      fVar121 = (float)NEON_ucvtf((uint)pbVar28[-1]);
      pbVar28 = pbVar28 + 4;
      fVar126 = (float)NEON_ucvtf((uint)*pbVar29);
      fVar122 = (float)NEON_ucvtf((uint)*pbVar1);
      uVar138 = NEON_fmadd(fVar121 - fVar51,fVar98,fVar115 * (fVar105 - fVar60));
      uVar138 = NEON_fmadd(fVar126 - fVar75,fVar112,uVar138);
      fVar105 = (float)NEON_fmadd(fVar122 - fVar84 * fVar92,fVar109,uVar138);
      if (fVar105 <= fVar132) {
        fVar132 = fVar105;
      }
      if (fVar104 <= fVar105) {
        fVar104 = fVar105;
      }
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  lVar33 = find_optimal_solution(param_1,param_2,param_3);
  if (lVar33 == 0) {
LAB_00a8899c:
    uVar23 = 0;
  }
  else {
    if (param_4[0x19] != (bc7enc16_compress_block_params)0x0) {
      local_100 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uVar43 = *(uint *)param_2;
      uVar23 = (ulong)uVar43;
      local_b0 = 0;
      local_a8 = 0;
      if (param_2[0x3c] == (color_cell_compressor_params)0x0) {
        if (uVar43 == 0) {
          fVar92 = 0.0;
          auVar130 = ZEXT816(0);
          fVar84 = 0.0;
          auVar116 = ZEXT816(0);
          fVar75 = 0.0;
          auVar134 = ZEXT816(0);
          fVar60 = 0.0;
          fVar109 = 0.0;
          fVar51 = 0.0;
        }
        else {
          fVar51 = 0.0;
          fVar109 = 0.0;
          fVar60 = 0.0;
          auVar134 = ZEXT816(0);
          fVar75 = 0.0;
          auVar116 = ZEXT816(0);
          fVar84 = 0.0;
          auVar130 = ZEXT816(0);
          fVar92 = 0.0;
          pcVar27 = *(color_quad_u8 **)(param_2 + 8) + 2;
          pbVar28 = *(byte **)(param_3 + 0x18);
          do {
            uVar23 = uVar23 - 1;
            pcVar2 = pcVar27 + -1;
            pfVar3 = (float *)(*(vec4F **)(param_2 + 0x20) + (ulong)*pbVar28 * 0x10);
            cVar120 = *pcVar27;
            fVar112 = (float)NEON_ucvtf((uint)(byte)pcVar27[-2]);
            pcVar27 = pcVar27 + 4;
            fVar98 = (float)NEON_ucvtf((uint)(byte)*pcVar2);
            fVar132 = pfVar3[3];
            fVar115 = (float)NEON_ucvtf((uint)(byte)cVar120);
            fVar92 = fVar92 + fVar112;
            fVar84 = fVar84 + fVar98;
            fVar51 = fVar51 + *pfVar3;
            fVar109 = fVar109 + pfVar3[1];
            fVar60 = fVar60 + pfVar3[2];
            auVar134._0_4_ = NEON_fmadd(fVar132,fVar112,auVar134._0_4_);
            auVar130._0_4_ = NEON_fmadd(fVar132,fVar98,auVar130._0_4_);
            auVar116._0_4_ = NEON_fmadd(fVar132,fVar115,auVar116._0_4_);
            fVar75 = fVar75 + fVar115;
            pbVar28 = pbVar28 + 1;
          } while (uVar23 != 0);
        }
        fVar132 = auVar134._0_4_;
        fVar115 = auVar130._0_4_;
        fVar98 = auVar116._0_4_;
        fVar104 = (float)NEON_fmadd(fVar51,fVar60,fVar109 * -fVar109);
        fVar112 = 1.0 / fVar104;
        if (fVar104 == 0.0) {
          fVar112 = fVar104;
        }
        fVar109 = fVar112 * -fVar109;
        fVar51 = fVar51 * fVar112;
        fVar60 = fVar60 * fVar112;
        NEON_fmadd(fVar60,fVar132,(fVar92 - fVar132) * fVar109);
        NEON_fmadd(fVar109,fVar132,(fVar92 - fVar132) * fVar51);
        NEON_fmadd(fVar60,fVar115,(fVar84 - fVar115) * fVar109);
        NEON_fmadd(fVar109,fVar115,(fVar84 - fVar115) * fVar51);
        NEON_fmadd(fVar60,fVar98,(fVar75 - fVar98) * fVar109);
        NEON_fmadd(fVar109,fVar98,(fVar75 - fVar98) * fVar51);
      }
      else {
        compute_least_squares_endpoints_rgba
                  (uVar43,*(byte **)(param_3 + 0x18),*(vec4F **)(param_2 + 0x20),(vec4F *)&local_100
                   ,(vec4F *)&local_b0,*(color_quad_u8 **)(param_2 + 8));
      }
      lVar33 = find_optimal_solution(param_1,param_2,param_3);
      if (lVar33 == 0) goto LAB_00a8899c;
    }
    if (*(int *)(param_4 + 0x14) == 0) {
LAB_00a89a08:
      if (param_1 == 1) {
        local_e0 = *(uchar **)(param_3 + 0x20);
        fVar60 = (float)NEON_fmadd(fVar42,0x437f0000,0x3f000000);
        fVar75 = (float)NEON_fmadd(fVar103,0x437f0000,0x3f000000);
        fVar51 = (float)NEON_fmadd(fVar97,0x437f0000,0x3f000000);
        auVar70 = *(undefined (*) [16])param_3;
        uStack_f8 = auVar70._8_4_;
        uStack_f4 = auVar70._12_4_;
        local_100 = auVar70._0_4_;
        uStack_fc = auVar70._4_4_;
        uStack_e8 = SUB168(*(undefined (*) [16])(param_3 + 0x10),8);
        uStack_f0 = SUB168(*(undefined (*) [16])(param_3 + 0x10),0);
        uVar24 = pack_mode1_to_one_color
                           (param_2,(color_cell_compressor_results *)&local_100,(int)fVar60,
                            (int)fVar75,(int)fVar51,local_e0);
        uVar23 = *(ulong *)param_3;
        if (uVar24 < *(ulong *)param_3) {
          auVar21._8_4_ = uStack_f8;
          auVar21._0_8_ = CONCAT44(uStack_fc,local_100);
          auVar21._12_4_ = uStack_f4;
          *(long *)(param_3 + 8) = auVar21._8_8_;
          *(ulong *)param_3 = CONCAT44(uStack_fc,local_100);
          *(undefined8 *)(param_3 + 0x18) = uStack_e8;
          *(undefined8 *)(param_3 + 0x10) = uStack_f0;
          *(uchar **)(param_3 + 0x20) = local_e0;
          memcpy(*(void **)(param_3 + 0x18),local_e0,(ulong)*(uint *)param_2);
          *(ulong *)param_3 = uVar24;
          uVar23 = uVar24;
        }
      }
      else {
        uVar23 = *(ulong *)param_3;
      }
    }
    else {
      uVar4 = *(uint *)param_2;
      uVar23 = (ulong)uVar4;
      uVar43 = 0x10;
      __memcpy_chk(&local_100,*(undefined8 *)(param_3 + 0x18),uVar23,0x10);
      iVar5 = *(int *)(param_2 + 0x10);
      uVar7 = iVar5 - 1;
      if (uVar4 == 0) {
        uVar52 = 0;
      }
      else {
        if (uVar4 < 8) {
          uVar25 = 0;
          uVar52 = 0;
          uVar43 = 0x10;
LAB_00a88af8:
          lVar33 = uVar23 - uVar25;
          pbVar28 = (byte *)((long)&local_100 + uVar25);
          do {
            bVar119 = *pbVar28;
            if (bVar119 <= uVar43) {
              uVar43 = (uint)bVar119;
            }
            if (uVar52 <= bVar119) {
              uVar52 = (uint)bVar119;
            }
            lVar33 = lVar33 + -1;
            pbVar28 = pbVar28 + 1;
          } while (lVar33 != 0);
        }
        else if (uVar4 < 0x10) {
          uVar52 = 0;
          uVar43 = 0x10;
          uVar24 = 0;
LAB_00a88a84:
          auVar44._0_8_ = CONCAT44(uVar43,uVar43);
          auVar44._8_4_ = uVar43;
          auVar44._12_4_ = uVar43;
          auVar53._0_8_ = CONCAT44(uVar52,uVar52);
          auVar53._8_4_ = uVar52;
          auVar53._12_4_ = uVar52;
          uVar25 = uVar23 & 0xfffffff8;
          auVar63._8_8_ = auVar44._8_8_;
          auVar63._0_8_ = auVar44._0_8_;
          lVar33 = uVar24 - uVar25;
          auVar107._8_8_ = auVar53._8_8_;
          auVar107._0_8_ = auVar53._0_8_;
          puVar31 = (ulong *)((long)&local_100 + uVar24);
          do {
            auVar86._0_8_ = *puVar31;
            auVar86._8_8_ = 0;
            lVar33 = lVar33 + 8;
            auVar70 = a64_TBL(ZEXT816(0),auVar86,ZEXT816(0),_DAT_004c4d70);
            auVar87 = a64_TBL(ZEXT816(0),auVar86,ZEXT816(0),_DAT_004c4f40);
            auVar63 = NEON_umin(auVar63,auVar70,4);
            auVar44 = NEON_umin(auVar44,auVar87,4);
            auVar107 = NEON_umax(auVar107,auVar70,4);
            auVar53 = NEON_umax(auVar53,auVar87,4);
            puVar31 = puVar31 + 1;
          } while (lVar33 != 0);
          auVar87 = NEON_umax(auVar53,auVar107,4);
          auVar70 = NEON_umin(auVar44,auVar63,4);
          uVar52 = NEON_umaxv(auVar87,4);
          uVar43 = NEON_uminv(auVar70,4);
          if (uVar25 != uVar23) goto LAB_00a88af8;
        }
        else {
          uVar25 = uVar23 & 0xfffffff0;
          auVar70 = ZEXT816(0);
          auVar136._8_4_ = 0x10;
          auVar136._0_8_ = 0x1000000010;
          auVar136._12_4_ = 0x10;
          auVar78._8_4_ = 0x10;
          auVar78._0_8_ = 0x1000000010;
          auVar78._12_4_ = 0x10;
          auVar94._8_4_ = 0x10;
          auVar94._0_8_ = 0x1000000010;
          auVar94._12_4_ = 0x10;
          auVar100._8_4_ = 0x10;
          auVar100._0_8_ = 0x1000000010;
          auVar100._12_4_ = 0x10;
          auVar87 = ZEXT816(0);
          auVar110 = ZEXT816(0);
          auVar113 = ZEXT816(0);
          auVar131 = ZEXT816(0);
          pauVar32 = (undefined (*) [16])&local_100;
          uVar24 = uVar25;
          do {
            auVar135 = *pauVar32;
            uVar24 = uVar24 - 0x10;
            auVar116 = a64_TBL(ZEXT816(0),auVar135,auVar70,_DAT_004c4a50);
            auVar130 = a64_TBL(ZEXT816(0),auVar135,auVar70,_DAT_004c37b0);
            auVar134 = a64_TBL(ZEXT816(0),auVar135,auVar70,_DAT_004c4d70);
            auVar135 = a64_TBL(ZEXT816(0),auVar135,auVar70,_DAT_004c4f40);
            auVar100 = NEON_umin(auVar100,auVar116,4);
            auVar94 = NEON_umin(auVar94,auVar130,4);
            auVar78 = NEON_umin(auVar78,auVar134,4);
            auVar136 = NEON_umin(auVar136,auVar135,4);
            auVar131 = NEON_umax(auVar131,auVar116,4);
            auVar113 = NEON_umax(auVar113,auVar130,4);
            auVar110 = NEON_umax(auVar110,auVar134,4);
            auVar87 = NEON_umax(auVar87,auVar135,4);
            pauVar32 = pauVar32 + 1;
          } while (uVar24 != 0);
          auVar70 = NEON_umax(auVar87,auVar113,4);
          auVar87 = NEON_umax(auVar110,auVar131,4);
          auVar110 = NEON_umin(auVar136,auVar94,4);
          auVar113 = NEON_umin(auVar78,auVar100,4);
          auVar70 = NEON_umax(auVar70,auVar87,4);
          auVar87 = NEON_umin(auVar110,auVar113,4);
          uVar52 = NEON_umaxv(auVar70,4);
          uVar43 = NEON_uminv(auVar87,4);
          if (uVar25 != uVar23) {
            uVar24 = uVar25;
            if ((uVar4 >> 3 & 1) == 0) goto LAB_00a88af8;
            goto LAB_00a88a84;
          }
        }
        if (uVar4 != 0) {
          if (uVar4 < 8) {
            uVar25 = 0;
          }
          else {
            auVar45._4_4_ = uVar43;
            auVar45._0_4_ = uVar43;
            auVar45._8_4_ = uVar43;
            auVar45._12_4_ = uVar43;
            auVar54._4_4_ = uVar7;
            auVar54._0_4_ = uVar7;
            auVar54._8_4_ = uVar7;
            auVar54._12_4_ = uVar7;
            if (uVar4 < 0x10) {
              uVar24 = 0;
            }
            else {
              uVar25 = uVar23 & 0xfffffff0;
              auVar70 = ZEXT816(0);
              pauVar32 = (undefined (*) [16])&local_100;
              puVar30 = &local_b0;
              uVar24 = uVar25;
              do {
                auVar87 = *pauVar32;
                uVar24 = uVar24 - 0x10;
                auVar110 = a64_TBL(ZEXT816(0),auVar87,auVar70,_DAT_004c4a50);
                auVar113 = a64_TBL(ZEXT816(0),auVar87,auVar70,_DAT_004c37b0);
                auVar131 = a64_TBL(ZEXT816(0),auVar87,auVar70,_DAT_004c4d70);
                auVar135 = a64_TBL(ZEXT816(0),auVar87,auVar70,_DAT_004c4f40);
                auVar116 = NEON_cmeq(auVar45,auVar110,4);
                auVar130 = NEON_cmeq(auVar45,auVar113,4);
                auVar134 = NEON_cmeq(auVar45,auVar131,4);
                auVar136 = NEON_cmeq(auVar45,auVar135,4);
                auVar110 = NEON_cmhi(auVar54,auVar110,4);
                auVar113 = NEON_cmhi(auVar54,auVar113,4);
                auVar131 = NEON_cmhi(auVar54,auVar131,4);
                auVar135 = NEON_cmhi(auVar54,auVar135,4);
                uVar41 = (ulong)CONCAT15(auVar134[12] & auVar131[12],
                                         CONCAT14(auVar134[8] & auVar131[8],
                                                  CONCAT13(auVar134[4] & auVar131[4],
                                                           CONCAT12(auVar134[0] & auVar131[0],
                                                                    CONCAT11(auVar136[12] &
                                                                             auVar135[12],
                                                                             auVar136[8] &
                                                                             auVar135[8]))))) &
                         0x10101010101;
                *(byte *)(puVar30 + 2) = auVar87[8] + (auVar130[0] & auVar113[0] & 1);
                *(byte *)((long)puVar30 + 0x11) = auVar87[9] + (auVar130[4] & auVar113[4] & 1);
                *(byte *)((long)puVar30 + 0x12) = auVar87[10] + (auVar130[8] & auVar113[8] & 1);
                *(byte *)((long)puVar30 + 0x13) = auVar87[11] + (auVar130[12] & auVar113[12] & 1);
                *(byte *)((long)puVar30 + 0x14) = auVar87[12] + (auVar116[0] & auVar110[0] & 1);
                *(byte *)((long)puVar30 + 0x15) = auVar87[13] + (auVar116[4] & auVar110[4] & 1);
                *(byte *)((long)puVar30 + 0x16) = auVar87[14] + (auVar116[8] & auVar110[8] & 1);
                *(byte *)((long)puVar30 + 0x17) = auVar87[15] + (auVar116[12] & auVar110[12] & 1);
                *(byte *)puVar30 = auVar87[0] + (auVar136[0] & auVar135[0] & 1);
                *(byte *)((long)puVar30 + 1) = auVar87[1] + (auVar136[4] & auVar135[4] & 1);
                *(char *)((long)puVar30 + 2) = auVar87[2] + (char)uVar41;
                *(char *)((long)puVar30 + 3) = auVar87[3] + (char)(uVar41 >> 8);
                *(char *)((long)puVar30 + 4) = auVar87[4] + (char)(uVar41 >> 0x10);
                *(char *)((long)puVar30 + 5) = auVar87[5] + (char)(uVar41 >> 0x18);
                *(char *)((long)puVar30 + 6) = auVar87[6] + (char)(uVar41 >> 0x20);
                *(char *)((long)puVar30 + 7) = auVar87[7] + (char)(uVar41 >> 0x28);
                pauVar32 = pauVar32 + 1;
                puVar30 = puVar30 + 2;
              } while (uVar24 != 0);
              if (uVar25 == uVar23) goto LAB_00a88cac;
              uVar24 = uVar25;
              if ((uVar4 >> 3 & 1) == 0) goto LAB_00a88c70;
            }
            uVar25 = uVar23 & 0xfffffff8;
            lVar33 = uVar24 - uVar25;
            puVar31 = (ulong *)((long)&local_100 + uVar24);
            puVar30 = (undefined8 *)((long)&local_b0 + uVar24);
            do {
              auVar64._0_8_ = *puVar31;
              auVar64._8_8_ = 0;
              lVar33 = lVar33 + 8;
              auVar70 = a64_TBL(ZEXT816(0),auVar64,ZEXT816(0),_DAT_004c4d70);
              auVar87 = a64_TBL(ZEXT816(0),auVar64,ZEXT816(0),_DAT_004c4f40);
              auVar110 = NEON_cmeq(auVar45,auVar70,4);
              auVar113 = NEON_cmeq(auVar45,auVar87,4);
              auVar70 = NEON_cmhi(auVar54,auVar70,4);
              auVar87 = NEON_cmhi(auVar54,auVar87,4);
              uVar24 = CONCAT17(auVar110[12] & auVar70[12],
                                CONCAT16(auVar110[8] & auVar70[8],
                                         CONCAT15(auVar110[4] & auVar70[4],
                                                  CONCAT14(auVar110[0] & auVar70[0],
                                                           CONCAT13(auVar113[12] & auVar87[12],
                                                                    CONCAT12(auVar113[8] &
                                                                             auVar87[8],
                                                                             CONCAT11(auVar113[4] &
                                                                                      auVar87[4],
                                                                                      auVar113[0] &
                                                                                      auVar87[0]))))
                                                 ))) & 0x101010101010101;
              *puVar30 = CONCAT17((char)(auVar64._0_8_ >> 0x38) + (char)(uVar24 >> 0x38),
                                  CONCAT16((char)(auVar64._0_8_ >> 0x30) + (char)(uVar24 >> 0x30),
                                           CONCAT15((char)(auVar64._0_8_ >> 0x28) +
                                                    (char)(uVar24 >> 0x28),
                                                    CONCAT14((char)(auVar64._0_8_ >> 0x20) +
                                                             (char)(uVar24 >> 0x20),
                                                             CONCAT13((char)(auVar64._0_8_ >> 0x18)
                                                                      + (char)(uVar24 >> 0x18),
                                                                      CONCAT12((char)(auVar64._0_8_
                                                                                     >> 0x10) +
                                                                               (char)(uVar24 >> 0x10
                                                                                     ),CONCAT11((
                                                  char)(auVar64._0_8_ >> 8) + (char)(uVar24 >> 8),
                                                  (char)auVar64._0_8_ + (char)uVar24)))))));
              puVar31 = puVar31 + 1;
              puVar30 = puVar30 + 1;
            } while (lVar33 != 0);
            if (uVar25 == uVar23) goto LAB_00a88cac;
          }
LAB_00a88c70:
          lVar33 = uVar23 - uVar25;
          pbVar28 = (byte *)((long)&local_100 + uVar25);
          pcVar34 = (char *)((long)&local_b0 + uVar25);
          do {
            bVar119 = *pbVar28;
            lVar33 = lVar33 + -1;
            *pcVar34 = bVar119 + (uVar43 == bVar119 && (bVar119 <= uVar7 && uVar7 != bVar119));
            pbVar28 = pbVar28 + 1;
            pcVar34 = pcVar34 + 1;
          } while (lVar33 != 0);
        }
      }
LAB_00a88cac:
      local_c0 = 0;
      local_b8._0_4_ = 0.0;
      local_b8._4_4_ = 0.0;
      local_d0 = 0;
      local_c8._0_4_ = 0.0;
      local_c8._4_4_ = 0.0;
      if (param_2[0x3c] == (color_cell_compressor_params)0x0) {
        if (uVar4 == 0) {
          fVar84 = 0.0;
          auVar46 = ZEXT816(0);
          fVar60 = 0.0;
          auVar65 = ZEXT816(0);
          fVar92 = 0.0;
          auVar55 = ZEXT816(0);
          fVar51 = 0.0;
          fVar109 = 0.0;
          fVar75 = 0.0;
        }
        else {
          fVar75 = 0.0;
          fVar109 = 0.0;
          fVar51 = 0.0;
          auVar55 = ZEXT816(0);
          fVar92 = 0.0;
          auVar65 = ZEXT816(0);
          fVar60 = 0.0;
          auVar46 = ZEXT816(0);
          fVar84 = 0.0;
          pcVar27 = *(color_quad_u8 **)(param_2 + 8) + 2;
          puVar30 = &local_b0;
          do {
            uVar23 = uVar23 - 1;
            pcVar2 = pcVar27 + -1;
            pfVar3 = (float *)(*(vec4F **)(param_2 + 0x20) + (ulong)*(byte *)puVar30 * 0x10);
            cVar120 = *pcVar27;
            fVar112 = (float)NEON_ucvtf((uint)(byte)pcVar27[-2]);
            pcVar27 = pcVar27 + 4;
            fVar98 = (float)NEON_ucvtf((uint)(byte)*pcVar2);
            fVar132 = pfVar3[3];
            fVar115 = (float)NEON_ucvtf((uint)(byte)cVar120);
            fVar84 = fVar84 + fVar112;
            fVar60 = fVar60 + fVar98;
            fVar75 = fVar75 + *pfVar3;
            fVar109 = fVar109 + pfVar3[1];
            fVar51 = fVar51 + pfVar3[2];
            auVar55._0_4_ = NEON_fmadd(fVar132,fVar112,auVar55._0_4_);
            auVar46._0_4_ = NEON_fmadd(fVar132,fVar98,auVar46._0_4_);
            auVar65._0_4_ = NEON_fmadd(fVar132,fVar115,auVar65._0_4_);
            fVar92 = fVar92 + fVar115;
            puVar30 = (undefined8 *)((long)puVar30 + 1);
          } while (uVar23 != 0);
        }
        fVar132 = auVar65._0_4_;
        fVar115 = auVar55._0_4_;
        fVar98 = auVar46._0_4_;
        fVar104 = (float)NEON_fmadd(fVar75,fVar51,fVar109 * -fVar109);
        fVar112 = 1.0 / fVar104;
        if (fVar104 == 0.0) {
          fVar112 = fVar104;
        }
        fVar109 = fVar112 * -fVar109;
        fVar75 = fVar75 * fVar112;
        fVar51 = fVar51 * fVar112;
        local_b8._0_4_ = (float)NEON_fmadd(fVar51,fVar132,(fVar92 - fVar132) * fVar109);
        local_c8._0_4_ = (float)NEON_fmadd(fVar109,fVar132,(fVar92 - fVar132) * fVar75);
        local_c0._0_4_ = (float)NEON_fmadd(fVar51,fVar115,(fVar84 - fVar115) * fVar109);
        local_d0._0_4_ = (float)NEON_fmadd(fVar109,fVar115,(fVar84 - fVar115) * fVar75);
        local_c0._4_4_ = (float)NEON_fmadd(fVar51,fVar98,(fVar60 - fVar98) * fVar109);
        local_d0._4_4_ = (float)NEON_fmadd(fVar109,fVar98,(fVar60 - fVar98) * fVar75);
        local_b8._4_4_ = 255.0;
        local_c8._4_4_ = 255.0;
      }
      else {
        compute_least_squares_endpoints_rgba
                  (uVar4,(uchar *)&local_b0,*(vec4F **)(param_2 + 0x20),(vec4F *)&local_c0,
                   (vec4F *)&local_d0,*(color_quad_u8 **)(param_2 + 8));
      }
      local_b8 = CONCAT44(local_b8._4_4_ * 0.003921569,(float)local_b8 * 0.003921569);
      local_c8 = CONCAT44(local_c8._4_4_ * 0.003921569,(float)local_c8 * 0.003921569);
      local_c0 = CONCAT44(local_c0._4_4_ * 0.003921569,(float)local_c0 * 0.003921569);
      local_d0 = CONCAT44(local_d0._4_4_ * 0.003921569,(float)local_d0 * 0.003921569);
      lVar33 = find_optimal_solution(param_1,param_2,param_3);
      if (lVar33 != 0) {
        uVar4 = *(uint *)param_2;
        uVar23 = (ulong)uVar4;
        if (uVar4 == 0) {
          if (param_2[0x3c] != (color_cell_compressor_params)0x0) goto LAB_00a88ffc;
LAB_00a890d0:
          fVar51 = 0.0;
          auVar48 = ZEXT816(0);
          fVar75 = 0.0;
          auVar57 = ZEXT816(0);
          fVar84 = 0.0;
          auVar66 = ZEXT816(0);
          fVar109 = 0.0;
          fVar92 = 0.0;
          fVar60 = 0.0;
LAB_00a890f4:
          fVar132 = auVar66._0_4_;
          fVar98 = auVar48._0_4_;
          fVar115 = auVar57._0_4_;
          fVar104 = (float)NEON_fmadd(fVar60,fVar109,fVar92 * -fVar92);
          local_c8._4_4_ = 1.0;
          fVar112 = 1.0 / fVar104;
          if (fVar104 == 0.0) {
            fVar112 = fVar104;
          }
          fVar92 = fVar112 * -fVar92;
          fVar60 = fVar60 * fVar112;
          fVar109 = fVar109 * fVar112;
          local_c0._0_4_ = (float)NEON_fmadd(fVar109,fVar132,(fVar51 - fVar132) * fVar92);
          local_d0._0_4_ = (float)NEON_fmadd(fVar92,fVar132,(fVar51 - fVar132) * fVar60);
          local_c0._4_4_ = (float)NEON_fmadd(fVar109,fVar98,(fVar75 - fVar98) * fVar92);
          local_d0._4_4_ = (float)NEON_fmadd(fVar92,fVar98,(fVar75 - fVar98) * fVar60);
          local_b8._0_4_ = (float)NEON_fmadd(fVar109,fVar115,(fVar84 - fVar115) * fVar92);
          local_c8._0_4_ = (float)NEON_fmadd(fVar92,fVar115,(fVar84 - fVar115) * fVar60);
          local_b8._4_4_ = 1.0;
        }
        else {
          if (uVar4 < 8) {
            uVar25 = 0;
LAB_00a88fb8:
            lVar33 = uVar23 - uVar25;
            pbVar28 = (byte *)((long)&local_100 + uVar25);
            pcVar34 = (char *)((long)&local_b0 + uVar25);
            do {
              bVar119 = *pbVar28;
              lVar33 = lVar33 + -1;
              *pcVar34 = bVar119 - (bVar119 != 0 && uVar52 == bVar119);
              pbVar28 = pbVar28 + 1;
              pcVar34 = pcVar34 + 1;
            } while (lVar33 != 0);
          }
          else {
            auVar47._4_4_ = uVar52;
            auVar47._0_4_ = uVar52;
            auVar47._8_4_ = uVar52;
            auVar47._12_4_ = uVar52;
            if (uVar4 < 0x10) {
              uVar24 = 0;
LAB_00a88f4c:
              uVar25 = uVar23 & 0xfffffff8;
              lVar33 = uVar24 - uVar25;
              puVar31 = (ulong *)((long)&local_100 + uVar24);
              puVar30 = (undefined8 *)((long)&local_b0 + uVar24);
              do {
                auVar56._0_8_ = *puVar31;
                auVar56._8_8_ = 0;
                lVar33 = lVar33 + 8;
                auVar70 = a64_TBL(ZEXT816(0),auVar56,ZEXT816(0),_DAT_004c4d70);
                auVar87 = a64_TBL(ZEXT816(0),auVar56,ZEXT816(0),_DAT_004c4f40);
                auVar70 = NEON_cmeq(auVar47,auVar70,4);
                auVar87 = NEON_cmeq(auVar47,auVar87,4);
                uVar99 = NEON_cmeq(auVar56._0_8_,0,1);
                *puVar30 = CONCAT17((char)(auVar56._0_8_ >> 0x38) +
                                    (auVar70[12] & ~(byte)((ulong)uVar99 >> 0x38)),
                                    CONCAT16((char)(auVar56._0_8_ >> 0x30) +
                                             (auVar70[8] & ~(byte)((ulong)uVar99 >> 0x30)),
                                             CONCAT15((char)(auVar56._0_8_ >> 0x28) +
                                                      (auVar70[4] & ~(byte)((ulong)uVar99 >> 0x28)),
                                                      CONCAT14((char)(auVar56._0_8_ >> 0x20) +
                                                               (auVar70[0] &
                                                               ~(byte)((ulong)uVar99 >> 0x20)),
                                                               CONCAT13((char)(auVar56._0_8_ >> 0x18
                                                                              ) + (auVar87[12] &
                                                                                  ~(byte)((ulong)
                                                  uVar99 >> 0x18)),
                                                  CONCAT12((char)(auVar56._0_8_ >> 0x10) +
                                                           (auVar87[8] &
                                                           ~(byte)((ulong)uVar99 >> 0x10)),
                                                           CONCAT11((char)(auVar56._0_8_ >> 8) +
                                                                    (auVar87[4] &
                                                                    ~(byte)((ulong)uVar99 >> 8)),
                                                                    (char)auVar56._0_8_ +
                                                                    (auVar87[0] & ~(byte)uVar99)))))
                                                  )));
                puVar31 = puVar31 + 1;
                puVar30 = puVar30 + 1;
              } while (lVar33 != 0);
              if (uVar25 != uVar23) goto LAB_00a88fb8;
            }
            else {
              uVar25 = uVar23 & 0xfffffff0;
              auVar70 = ZEXT816(0);
              pauVar32 = (undefined (*) [16])&local_100;
              puVar30 = &local_b0;
              uVar24 = uVar25;
              do {
                auVar87 = *pauVar32;
                uVar24 = uVar24 - 0x10;
                auVar110 = a64_TBL(ZEXT816(0),auVar87,auVar70,_DAT_004c4a50);
                auVar113 = a64_TBL(ZEXT816(0),auVar87,auVar70,_DAT_004c37b0);
                auVar131 = a64_TBL(ZEXT816(0),auVar87,auVar70,_DAT_004c4d70);
                auVar116 = a64_TBL(ZEXT816(0),auVar87,auVar70,_DAT_004c4f40);
                auVar110 = NEON_cmeq(auVar47,auVar110,4);
                auVar113 = NEON_cmeq(auVar47,auVar113,4);
                auVar135 = NEON_cmeq(auVar47,auVar131,4);
                auVar116 = NEON_cmeq(auVar47,auVar116,4);
                auVar131 = NEON_cmeq(auVar87,0,1);
                *(byte *)(puVar30 + 2) = auVar87[8] + (auVar113[0] & ~auVar131[8]);
                *(byte *)((long)puVar30 + 0x11) = auVar87[9] + (auVar113[4] & ~auVar131[9]);
                *(byte *)((long)puVar30 + 0x12) = auVar87[10] + (auVar113[8] & ~auVar131[10]);
                *(byte *)((long)puVar30 + 0x13) = auVar87[11] + (auVar113[12] & ~auVar131[11]);
                *(byte *)((long)puVar30 + 0x14) = auVar87[12] + (auVar110[0] & ~auVar131[12]);
                *(byte *)((long)puVar30 + 0x15) = auVar87[13] + (auVar110[4] & ~auVar131[13]);
                *(byte *)((long)puVar30 + 0x16) = auVar87[14] + (auVar110[8] & ~auVar131[14]);
                *(byte *)((long)puVar30 + 0x17) = auVar87[15] + (auVar110[12] & ~auVar131[15]);
                *(byte *)puVar30 = auVar87[0] + (auVar116[0] & ~auVar131[0]);
                *(byte *)((long)puVar30 + 1) = auVar87[1] + (auVar116[4] & ~auVar131[1]);
                *(byte *)((long)puVar30 + 2) = auVar87[2] + (auVar116[8] & ~auVar131[2]);
                *(byte *)((long)puVar30 + 3) = auVar87[3] + (auVar116[12] & ~auVar131[3]);
                *(byte *)((long)puVar30 + 4) = auVar87[4] + (auVar135[0] & ~auVar131[4]);
                *(byte *)((long)puVar30 + 5) = auVar87[5] + (auVar135[4] & ~auVar131[5]);
                *(byte *)((long)puVar30 + 6) = auVar87[6] + (auVar135[8] & ~auVar131[6]);
                *(byte *)((long)puVar30 + 7) = auVar87[7] + (auVar135[12] & ~auVar131[7]);
                pauVar32 = pauVar32 + 1;
                puVar30 = puVar30 + 2;
              } while (uVar24 != 0);
              if (uVar25 != uVar23) {
                uVar24 = uVar25;
                if ((uVar4 >> 3 & 1) == 0) goto LAB_00a88fb8;
                goto LAB_00a88f4c;
              }
            }
          }
          if (param_2[0x3c] == (color_cell_compressor_params)0x0) {
            if (uVar4 == 0) goto LAB_00a890d0;
            fVar60 = 0.0;
            fVar92 = 0.0;
            fVar109 = 0.0;
            auVar66 = ZEXT816(0);
            fVar84 = 0.0;
            auVar57 = ZEXT816(0);
            fVar75 = 0.0;
            auVar48 = ZEXT816(0);
            fVar51 = 0.0;
            pbVar28 = (byte *)(*(long *)(param_2 + 8) + 2);
            puVar30 = &local_b0;
            do {
              uVar23 = uVar23 - 1;
              pbVar29 = pbVar28 + -1;
              pfVar3 = (float *)(*(long *)(param_2 + 0x20) + (ulong)*(byte *)puVar30 * 0x10);
              bVar119 = *pbVar28;
              fVar112 = (float)NEON_ucvtf((uint)pbVar28[-2]);
              pbVar28 = pbVar28 + 4;
              fVar98 = (float)NEON_ucvtf((uint)*pbVar29);
              fVar132 = pfVar3[3];
              fVar115 = (float)NEON_ucvtf((uint)bVar119);
              fVar51 = fVar51 + fVar112;
              fVar75 = fVar75 + fVar98;
              fVar60 = fVar60 + *pfVar3;
              fVar92 = fVar92 + pfVar3[1];
              fVar109 = fVar109 + pfVar3[2];
              auVar66._0_4_ = NEON_fmadd(fVar132,fVar112,auVar66._0_4_);
              auVar48._0_4_ = NEON_fmadd(fVar132,fVar98,auVar48._0_4_);
              auVar57._0_4_ = NEON_fmadd(fVar132,fVar115,auVar57._0_4_);
              fVar84 = fVar84 + fVar115;
              puVar30 = (undefined8 *)((long)puVar30 + 1);
            } while (uVar23 != 0);
            goto LAB_00a890f4;
          }
LAB_00a88ffc:
          compute_least_squares_endpoints_rgba
                    (uVar4,(uchar *)&local_b0,*(vec4F **)(param_2 + 0x20),(vec4F *)&local_c0,
                     (vec4F *)&local_d0,*(color_quad_u8 **)(param_2 + 8));
          local_c8._4_4_ = local_c8._4_4_ * 0.003921569;
          local_b8._4_4_ = local_b8._4_4_ * 0.003921569;
        }
        local_c0 = CONCAT44(local_c0._4_4_ * 0.003921569,(float)local_c0 * 0.003921569);
        local_b8 = CONCAT44(local_b8._4_4_,(float)local_b8 * 0.003921569);
        local_d0 = CONCAT44(local_d0._4_4_ * 0.003921569,(float)local_d0 * 0.003921569);
        local_c8 = CONCAT44(local_c8._4_4_,(float)local_c8 * 0.003921569);
        lVar33 = find_optimal_solution(param_1,param_2,param_3);
        if (lVar33 != 0) {
          uVar4 = *(uint *)param_2;
          uVar23 = (ulong)uVar4;
          if (uVar4 == 0) {
            if (param_2[0x3c] != (color_cell_compressor_params)0x0) goto LAB_00a8929c;
LAB_00a893d8:
            fVar51 = 0.0;
            auVar49 = ZEXT816(0);
            fVar75 = 0.0;
            auVar58 = ZEXT816(0);
            fVar84 = 0.0;
            auVar67 = ZEXT816(0);
            fVar109 = 0.0;
            fVar92 = 0.0;
            fVar60 = 0.0;
LAB_00a893fc:
            fVar132 = auVar67._0_4_;
            fVar98 = auVar49._0_4_;
            fVar115 = auVar58._0_4_;
            fVar104 = (float)NEON_fmadd(fVar60,fVar109,fVar92 * -fVar92);
            fVar112 = 1.0 / fVar104;
            if (fVar104 == 0.0) {
              fVar112 = fVar104;
            }
            fVar92 = fVar112 * -fVar92;
            fVar60 = fVar60 * fVar112;
            fVar109 = fVar109 * fVar112;
            uVar138 = NEON_fmadd(fVar109,fVar132,(fVar51 - fVar132) * fVar92);
            NEON_fmadd(fVar92,fVar132,(fVar51 - fVar132) * fVar60);
            NEON_fmadd(fVar109,fVar98,(fVar75 - fVar98) * fVar92);
            NEON_fmadd(fVar92,fVar98,(fVar75 - fVar98) * fVar60);
            NEON_fmadd(fVar109,fVar115,(fVar84 - fVar115) * fVar92);
            NEON_fmadd(fVar92,fVar115,(fVar84 - fVar115) * fVar60);
            local_c0 = CONCAT44(local_c0._4_4_,uVar138);
          }
          else {
            if (uVar4 == 1) {
              uVar26 = 0;
LAB_00a892dc:
              pbVar28 = (byte *)((long)&local_100 + uVar26);
              lVar33 = uVar23 - uVar26;
              pcVar34 = (char *)((long)&local_b0 + uVar26);
              do {
                bVar119 = *pbVar28;
                uVar36 = (uint)bVar119;
                if ((uVar43 == uVar36) && (uVar43 < *(int *)(param_2 + 0x10) - 1U)) {
                  cVar37 = '\x01';
                }
                else {
                  cVar37 = -(uVar36 != 0 && uVar52 == uVar36);
                }
                pbVar28 = pbVar28 + 1;
                lVar33 = lVar33 + -1;
                *pcVar34 = bVar119 + cVar37;
                pcVar34 = pcVar34 + 1;
              } while (lVar33 != 0);
            }
            else {
              uVar26 = uVar23 & 0xfffffffe;
              pbVar28 = (byte *)((ulong)&local_100 | 1);
              pcVar34 = (char *)((ulong)&local_b0 | 1);
              uVar24 = uVar26;
              uVar25 = extraout_x14;
              uVar41 = extraout_x15;
              do {
                iVar39 = (int)uVar25;
                iVar40 = (int)uVar41;
                pbVar29 = pbVar28 + -1;
                uVar36 = (uint)*pbVar29;
                if (uVar43 == uVar36) {
                  iVar40 = *(int *)(param_2 + 0x10);
                }
                bVar119 = *pbVar28;
                uVar38 = (uint)bVar119;
                if (uVar43 == uVar38) {
                  iVar39 = *(int *)(param_2 + 0x10);
                }
                uVar6 = -(uint)(uVar36 != 0 && uVar52 == uVar36);
                pbVar28 = pbVar28 + 2;
                if (uVar43 < iVar40 - 1U && uVar43 == uVar36) {
                  uVar6 = 1;
                }
                uVar41 = (ulong)uVar6;
                uVar36 = -(uint)(uVar38 != 0 && uVar52 == uVar38);
                if (uVar43 < iVar39 - 1U && uVar43 == uVar38) {
                  uVar36 = 1;
                }
                uVar25 = (ulong)uVar36;
                uVar24 = uVar24 - 2;
                pcVar34[-1] = *pbVar29 + (char)uVar6;
                *pcVar34 = bVar119 + (char)uVar36;
                pcVar34 = pcVar34 + 2;
              } while (uVar24 != 0);
              if (uVar26 != uVar23) goto LAB_00a892dc;
            }
            if (param_2[0x3c] == (color_cell_compressor_params)0x0) {
              if (uVar4 == 0) goto LAB_00a893d8;
              fVar60 = 0.0;
              fVar92 = 0.0;
              fVar109 = 0.0;
              auVar67 = ZEXT816(0);
              fVar84 = 0.0;
              auVar58 = ZEXT816(0);
              fVar75 = 0.0;
              auVar49 = ZEXT816(0);
              fVar51 = 0.0;
              pbVar28 = (byte *)(*(long *)(param_2 + 8) + 2);
              puVar30 = &local_b0;
              do {
                uVar23 = uVar23 - 1;
                pbVar29 = pbVar28 + -1;
                pfVar3 = (float *)(*(long *)(param_2 + 0x20) + (ulong)*(byte *)puVar30 * 0x10);
                bVar119 = *pbVar28;
                fVar112 = (float)NEON_ucvtf((uint)pbVar28[-2]);
                pbVar28 = pbVar28 + 4;
                fVar98 = (float)NEON_ucvtf((uint)*pbVar29);
                fVar132 = pfVar3[3];
                fVar115 = (float)NEON_ucvtf((uint)bVar119);
                fVar51 = fVar51 + fVar112;
                fVar75 = fVar75 + fVar98;
                fVar60 = fVar60 + *pfVar3;
                fVar92 = fVar92 + pfVar3[1];
                fVar109 = fVar109 + pfVar3[2];
                auVar67._0_4_ = NEON_fmadd(fVar132,fVar112,auVar67._0_4_);
                auVar49._0_4_ = NEON_fmadd(fVar132,fVar98,auVar49._0_4_);
                auVar58._0_4_ = NEON_fmadd(fVar132,fVar115,auVar58._0_4_);
                fVar84 = fVar84 + fVar115;
                puVar30 = (undefined8 *)((long)puVar30 + 1);
              } while (uVar23 != 0);
              goto LAB_00a893fc;
            }
LAB_00a8929c:
            compute_least_squares_endpoints_rgba
                      (uVar4,(uchar *)&local_b0,*(vec4F **)(param_2 + 0x20),(vec4F *)&local_c0,
                       (vec4F *)&local_d0,*(color_quad_u8 **)(param_2 + 8));
          }
          lVar33 = find_optimal_solution(param_1,param_2,param_3);
          if (lVar33 != 0) {
            uVar43 = *(uint *)(param_4 + 0x14);
            iVar40 = uVar43 - 2;
            if ((1 < uVar43) && ((ulong)((uint)(*(int *)param_2 * 0x38) >> 4) < *(ulong *)param_3))
            {
              if (uVar43 < 4) {
                iVar40 = 1;
              }
              if (iVar40 + 1 < 0 == SCARRY4(iVar40,1)) {
                fVar51 = (float)uVar7;
                iVar39 = -iVar40;
                do {
                  if ((int)(iVar5 - 2U) <= (int)(iVar40 + uVar7)) {
                    fVar60 = (float)iVar39;
                    bVar22 = false;
                    uVar43 = iVar5 - 2U;
                    do {
                      if ((iVar39 != 0) || (uVar43 != uVar7)) {
                        uVar4 = *(uint *)param_2;
                        uVar23 = (ulong)uVar4;
                        if (uVar4 != 0) {
                          fVar75 = (float)uVar43 - fVar60;
                          if (uVar4 < 8) {
                            uVar25 = 0;
                          }
                          else {
                            if (uVar4 < 0x10) {
                              uVar24 = 0;
                            }
                            else {
                              uVar25 = uVar23 & 0xfffffff0;
                              pauVar32 = (undefined (*) [16])&local_100;
                              puVar30 = &local_b0;
                              uVar24 = uVar25;
                              do {
                                uVar24 = uVar24 - 0x10;
                                auVar110 = a64_TBL(ZEXT816(0),*pauVar32,ZEXT816(0),_DAT_004c4a50);
                                auVar87 = a64_TBL(ZEXT816(0),*pauVar32,ZEXT816(0),_DAT_004c37b0);
                                auVar70 = a64_TBL(ZEXT816(0),*pauVar32,ZEXT816(0),_DAT_004c4d70);
                                auVar113 = a64_TBL(ZEXT816(0),*pauVar32,ZEXT816(0),_DAT_004c4f40);
                                auVar110 = NEON_ucvtf(auVar110,4);
                                auVar87 = NEON_ucvtf(auVar87,4);
                                auVar70 = NEON_ucvtf(auVar70,4);
                                auVar113 = NEON_ucvtf(auVar113,4);
                                auVar89._0_4_ =
                                     (int)(((auVar110._0_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar89._4_4_ =
                                     (int)(((auVar110._4_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar89._8_4_ =
                                     (int)(((auVar110._8_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar89._12_4_ =
                                     (int)(((auVar110._12_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar110 = NEON_fcmlt(auVar89,0,4);
                                auVar13._4_4_ = fVar51;
                                auVar13._0_4_ = fVar51;
                                auVar13._8_4_ = fVar51;
                                auVar13._12_4_ = fVar51;
                                auVar131 = NEON_fcmgt(auVar89,auVar13,4);
                                auVar82._0_4_ =
                                     (int)(((auVar87._0_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar82._4_4_ =
                                     (int)(((auVar87._4_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar82._8_4_ =
                                     (int)(((auVar87._8_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar82._12_4_ =
                                     (int)(((auVar87._12_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar117[0] = ~auVar110[0] & ~auVar131[0];
                                auVar117[1] = ~auVar110[1] & ~auVar131[1];
                                auVar117[2] = ~auVar110[2] & ~auVar131[2];
                                auVar117[3] = ~auVar110[3] & ~auVar131[3];
                                auVar117[4] = ~auVar110[4] & ~auVar131[4];
                                auVar117[5] = ~auVar110[5] & ~auVar131[5];
                                auVar117[6] = ~auVar110[6] & ~auVar131[6];
                                auVar117[7] = ~auVar110[7] & ~auVar131[7];
                                auVar117[8] = ~auVar110[8] & ~auVar131[8];
                                auVar117[9] = ~auVar110[9] & ~auVar131[9];
                                auVar117[10] = ~auVar110[10] & ~auVar131[10];
                                auVar117[11] = ~auVar110[11] & ~auVar131[11];
                                auVar117[12] = ~auVar110[12] & ~auVar131[12];
                                auVar117[13] = ~auVar110[13] & ~auVar131[13];
                                auVar117[14] = ~auVar110[14] & ~auVar131[14];
                                auVar117[15] = ~auVar110[15] & ~auVar131[15];
                                auVar131 = NEON_fcmlt(auVar82,0,4);
                                auVar14._4_4_ = fVar51;
                                auVar14._0_4_ = fVar51;
                                auVar14._8_4_ = fVar51;
                                auVar14._12_4_ = fVar51;
                                auVar135 = NEON_fcmgt(auVar82,auVar14,4);
                                auVar15._4_4_ = fVar51;
                                auVar15._0_4_ = fVar51;
                                auVar15._8_4_ = fVar51;
                                auVar15._12_4_ = fVar51;
                                auVar87 = NEON_bif(auVar89,auVar15,auVar117,1);
                                auVar73._0_4_ =
                                     (int)(((auVar70._0_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar73._4_4_ =
                                     (int)(((auVar70._4_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar73._8_4_ =
                                     (int)(((auVar70._8_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar73._12_4_ =
                                     (int)(((auVar70._12_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                fVar109 = (float)CONCAT13(auVar87[3] & ~auVar110[3],
                                                          CONCAT12(auVar87[2] & ~auVar110[2],
                                                                   CONCAT11(auVar87[1] &
                                                                            ~auVar110[1],
                                                                            auVar87[0] &
                                                                            ~auVar110[0])));
                                auVar85._0_8_ =
                                     CONCAT17(auVar87[7] & ~auVar110[7],
                                              CONCAT16(auVar87[6] & ~auVar110[6],
                                                       CONCAT15(auVar87[5] & ~auVar110[5],
                                                                CONCAT14(auVar87[4] & ~auVar110[4],
                                                                         fVar109))));
                                auVar85[8] = auVar87[8] & ~auVar110[8];
                                auVar85[9] = auVar87[9] & ~auVar110[9];
                                auVar85[10] = auVar87[10] & ~auVar110[10];
                                auVar85[11] = auVar87[11] & ~auVar110[11];
                                auVar90[12] = auVar87[12] & ~auVar110[12];
                                auVar90._0_12_ = auVar85;
                                auVar90[13] = auVar87[13] & ~auVar110[13];
                                auVar90[14] = auVar87[14] & ~auVar110[14];
                                auVar90[15] = auVar87[15] & ~auVar110[15];
                                auVar124[0] = ~auVar131[0] & ~auVar135[0];
                                auVar124[1] = ~auVar131[1] & ~auVar135[1];
                                auVar124[2] = ~auVar131[2] & ~auVar135[2];
                                auVar124[3] = ~auVar131[3] & ~auVar135[3];
                                auVar124[4] = ~auVar131[4] & ~auVar135[4];
                                auVar124[5] = ~auVar131[5] & ~auVar135[5];
                                auVar124[6] = ~auVar131[6] & ~auVar135[6];
                                auVar124[7] = ~auVar131[7] & ~auVar135[7];
                                auVar124[8] = ~auVar131[8] & ~auVar135[8];
                                auVar124[9] = ~auVar131[9] & ~auVar135[9];
                                auVar124[10] = ~auVar131[10] & ~auVar135[10];
                                auVar124[11] = ~auVar131[11] & ~auVar135[11];
                                auVar124[12] = ~auVar131[12] & ~auVar135[12];
                                auVar124[13] = ~auVar131[13] & ~auVar135[13];
                                auVar124[14] = ~auVar131[14] & ~auVar135[14];
                                auVar124[15] = ~auVar131[15] & ~auVar135[15];
                                auVar87 = NEON_fcmlt(auVar73,0,4);
                                auVar16._4_4_ = fVar51;
                                auVar16._0_4_ = fVar51;
                                auVar16._8_4_ = fVar51;
                                auVar16._12_4_ = fVar51;
                                auVar110 = NEON_fcmgt(auVar73,auVar16,4);
                                auVar17._4_4_ = fVar51;
                                auVar17._0_4_ = fVar51;
                                auVar17._8_4_ = fVar51;
                                auVar17._12_4_ = fVar51;
                                auVar70 = NEON_bif(auVar82,auVar17,auVar124,1);
                                auVar95._0_4_ =
                                     (int)(((auVar113._0_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar95._4_4_ =
                                     (int)(((auVar113._4_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar95._8_4_ =
                                     (int)(((auVar113._8_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                auVar95._12_4_ =
                                     (int)(((auVar113._12_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                                fVar92 = (float)CONCAT13(auVar70[3] & ~auVar131[3],
                                                         CONCAT12(auVar70[2] & ~auVar131[2],
                                                                  CONCAT11(auVar70[1] & ~auVar131[1]
                                                                           ,auVar70[0] &
                                                                            ~auVar131[0])));
                                auVar77._0_8_ =
                                     CONCAT17(auVar70[7] & ~auVar131[7],
                                              CONCAT16(auVar70[6] & ~auVar131[6],
                                                       CONCAT15(auVar70[5] & ~auVar131[5],
                                                                CONCAT14(auVar70[4] & ~auVar131[4],
                                                                         fVar92))));
                                auVar77[8] = auVar70[8] & ~auVar131[8];
                                auVar77[9] = auVar70[9] & ~auVar131[9];
                                auVar77[10] = auVar70[10] & ~auVar131[10];
                                auVar77[11] = auVar70[11] & ~auVar131[11];
                                auVar83[12] = auVar70[12] & ~auVar131[12];
                                auVar83._0_12_ = auVar77;
                                auVar83[13] = auVar70[13] & ~auVar131[13];
                                auVar83[14] = auVar70[14] & ~auVar131[14];
                                auVar83[15] = auVar70[15] & ~auVar131[15];
                                auVar127[0] = ~auVar87[0] & ~auVar110[0];
                                auVar127[1] = ~auVar87[1] & ~auVar110[1];
                                auVar127[2] = ~auVar87[2] & ~auVar110[2];
                                auVar127[3] = ~auVar87[3] & ~auVar110[3];
                                auVar127[4] = ~auVar87[4] & ~auVar110[4];
                                auVar127[5] = ~auVar87[5] & ~auVar110[5];
                                auVar127[6] = ~auVar87[6] & ~auVar110[6];
                                auVar127[7] = ~auVar87[7] & ~auVar110[7];
                                auVar127[8] = ~auVar87[8] & ~auVar110[8];
                                auVar127[9] = ~auVar87[9] & ~auVar110[9];
                                auVar127[10] = ~auVar87[10] & ~auVar110[10];
                                auVar127[11] = ~auVar87[11] & ~auVar110[11];
                                auVar127[12] = ~auVar87[12] & ~auVar110[12];
                                auVar127[13] = ~auVar87[13] & ~auVar110[13];
                                auVar127[14] = ~auVar87[14] & ~auVar110[14];
                                auVar127[15] = ~auVar87[15] & ~auVar110[15];
                                auVar110 = NEON_fcmlt(auVar95,0,4);
                                auVar18._4_4_ = fVar51;
                                auVar18._0_4_ = fVar51;
                                auVar18._8_4_ = fVar51;
                                auVar18._12_4_ = fVar51;
                                auVar113 = NEON_fcmgt(auVar95,auVar18,4);
                                auVar19._4_4_ = fVar51;
                                auVar19._0_4_ = fVar51;
                                auVar19._8_4_ = fVar51;
                                auVar19._12_4_ = fVar51;
                                auVar70 = NEON_bif(auVar73,auVar19,auVar127,1);
                                fVar84 = (float)CONCAT13(auVar70[3] & ~auVar87[3],
                                                         CONCAT12(auVar70[2] & ~auVar87[2],
                                                                  CONCAT11(auVar70[1] & ~auVar87[1],
                                                                           auVar70[0] & ~auVar87[0])
                                                                 ));
                                auVar62._0_8_ =
                                     CONCAT17(auVar70[7] & ~auVar87[7],
                                              CONCAT16(auVar70[6] & ~auVar87[6],
                                                       CONCAT15(auVar70[5] & ~auVar87[5],
                                                                CONCAT14(auVar70[4] & ~auVar87[4],
                                                                         fVar84))));
                                auVar62[8] = auVar70[8] & ~auVar87[8];
                                auVar62[9] = auVar70[9] & ~auVar87[9];
                                auVar62[10] = auVar70[10] & ~auVar87[10];
                                auVar62[11] = auVar70[11] & ~auVar87[11];
                                auVar74[12] = auVar70[12] & ~auVar87[12];
                                auVar74._0_12_ = auVar62;
                                auVar74[13] = auVar70[13] & ~auVar87[13];
                                auVar74[14] = auVar70[14] & ~auVar87[14];
                                auVar74[15] = auVar70[15] & ~auVar87[15];
                                auVar129[0] = ~auVar110[0] & ~auVar113[0];
                                auVar129[1] = ~auVar110[1] & ~auVar113[1];
                                auVar129[2] = ~auVar110[2] & ~auVar113[2];
                                auVar129[3] = ~auVar110[3] & ~auVar113[3];
                                auVar129[4] = ~auVar110[4] & ~auVar113[4];
                                auVar129[5] = ~auVar110[5] & ~auVar113[5];
                                auVar129[6] = ~auVar110[6] & ~auVar113[6];
                                auVar129[7] = ~auVar110[7] & ~auVar113[7];
                                auVar129[8] = ~auVar110[8] & ~auVar113[8];
                                auVar129[9] = ~auVar110[9] & ~auVar113[9];
                                auVar129[10] = ~auVar110[10] & ~auVar113[10];
                                auVar129[11] = ~auVar110[11] & ~auVar113[11];
                                auVar129[12] = ~auVar110[12] & ~auVar113[12];
                                auVar129[13] = ~auVar110[13] & ~auVar113[13];
                                auVar129[14] = ~auVar110[14] & ~auVar113[14];
                                auVar129[15] = ~auVar110[15] & ~auVar113[15];
                                auVar20._4_4_ = fVar51;
                                auVar20._0_4_ = fVar51;
                                auVar20._8_4_ = fVar51;
                                auVar20._12_4_ = fVar51;
                                auVar70 = NEON_bif(auVar95,auVar20,auVar129,1);
                                fVar112 = (float)CONCAT13(auVar70[3] & ~auVar110[3],
                                                          CONCAT12(auVar70[2] & ~auVar110[2],
                                                                   CONCAT11(auVar70[1] &
                                                                            ~auVar110[1],
                                                                            auVar70[0] &
                                                                            ~auVar110[0])));
                                auVar93._0_8_ =
                                     CONCAT17(auVar70[7] & ~auVar110[7],
                                              CONCAT16(auVar70[6] & ~auVar110[6],
                                                       CONCAT15(auVar70[5] & ~auVar110[5],
                                                                CONCAT14(auVar70[4] & ~auVar110[4],
                                                                         fVar112))));
                                auVar93[8] = auVar70[8] & ~auVar110[8];
                                auVar93[9] = auVar70[9] & ~auVar110[9];
                                auVar93[10] = auVar70[10] & ~auVar110[10];
                                auVar93[11] = auVar70[11] & ~auVar110[11];
                                auVar96[12] = auVar70[12] & ~auVar110[12];
                                auVar96._0_12_ = auVar93;
                                auVar96[13] = auVar70[13] & ~auVar110[13];
                                auVar96[14] = auVar70[14] & ~auVar110[14];
                                auVar96[15] = auVar70[15] & ~auVar110[15];
                                auVar125._0_4_ = (int)fVar109;
                                auVar125._4_4_ = (int)(float)((ulong)auVar85._0_8_ >> 0x20);
                                auVar125._8_4_ = (int)auVar85._8_4_;
                                auVar125._12_4_ = (int)auVar90._12_4_;
                                auVar118._0_4_ = (int)fVar92;
                                auVar118._4_4_ = (int)(float)((ulong)auVar77._0_8_ >> 0x20);
                                auVar118._8_4_ = (int)auVar77._8_4_;
                                auVar118._12_4_ = (int)auVar83._12_4_;
                                auVar114._0_4_ = (int)fVar84;
                                auVar114._4_4_ = (int)(float)((ulong)auVar62._0_8_ >> 0x20);
                                auVar114._8_4_ = (int)auVar62._8_4_;
                                auVar114._12_4_ = (int)auVar74._12_4_;
                                auVar111._0_4_ = (int)fVar112;
                                auVar111._4_4_ = (int)(float)((ulong)auVar93._0_8_ >> 0x20);
                                auVar111._8_4_ = (int)auVar93._8_4_;
                                auVar111._12_4_ = (int)auVar96._12_4_;
                                auVar70 = a64_TBL(ZEXT816(0),auVar111,auVar114,auVar118,auVar125,
                                                  _DAT_004c3bd0);
                                puVar30[1] = auVar70._8_8_;
                                *puVar30 = auVar70._0_8_;
                                pauVar32 = pauVar32 + 1;
                                puVar30 = puVar30 + 2;
                              } while (uVar24 != 0);
                              if (uVar25 == uVar23) goto LAB_00a89574;
                              uVar24 = uVar25;
                              if ((uVar4 >> 3 & 1) == 0) goto LAB_00a898ec;
                            }
                            uVar25 = uVar23 & 0xfffffff8;
                            lVar33 = uVar24 - uVar25;
                            puVar31 = (ulong *)((long)&local_100 + uVar24);
                            puVar30 = (undefined8 *)((long)&local_b0 + uVar24);
                            do {
                              auVar69._0_8_ = *puVar31;
                              auVar69._8_8_ = 0;
                              lVar33 = lVar33 + 8;
                              auVar87 = a64_TBL(ZEXT816(0),auVar69,ZEXT816(0),_DAT_004c4d70);
                              auVar70 = a64_TBL(ZEXT816(0),auVar69,ZEXT816(0),_DAT_004c4f40);
                              auVar87 = NEON_ucvtf(auVar87,4);
                              auVar70 = NEON_ucvtf(auVar70,4);
                              auVar79._0_4_ =
                                   (int)(((auVar87._0_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                              auVar79._4_4_ =
                                   (int)(((auVar87._4_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                              auVar79._8_4_ =
                                   (int)(((auVar87._8_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                              auVar79._12_4_ =
                                   (int)(((auVar87._12_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                              auVar87 = NEON_fcmlt(auVar79,0,4);
                              auVar9._4_4_ = fVar51;
                              auVar9._0_4_ = fVar51;
                              auVar9._8_4_ = fVar51;
                              auVar9._12_4_ = fVar51;
                              auVar110 = NEON_fcmgt(auVar79,auVar9,4);
                              auVar71._0_4_ =
                                   (int)(((auVar70._0_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                              auVar71._4_4_ =
                                   (int)(((auVar70._4_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                              auVar71._8_4_ =
                                   (int)(((auVar70._8_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                              auVar71._12_4_ =
                                   (int)(((auVar70._12_4_ - fVar60) * fVar51) / fVar75 + 0.5);
                              auVar101[0] = ~auVar87[0] & ~auVar110[0];
                              auVar101[1] = ~auVar87[1] & ~auVar110[1];
                              auVar101[2] = ~auVar87[2] & ~auVar110[2];
                              auVar101[3] = ~auVar87[3] & ~auVar110[3];
                              auVar101[4] = ~auVar87[4] & ~auVar110[4];
                              auVar101[5] = ~auVar87[5] & ~auVar110[5];
                              auVar101[6] = ~auVar87[6] & ~auVar110[6];
                              auVar101[7] = ~auVar87[7] & ~auVar110[7];
                              auVar101[8] = ~auVar87[8] & ~auVar110[8];
                              auVar101[9] = ~auVar87[9] & ~auVar110[9];
                              auVar101[10] = ~auVar87[10] & ~auVar110[10];
                              auVar101[11] = ~auVar87[11] & ~auVar110[11];
                              auVar101[12] = ~auVar87[12] & ~auVar110[12];
                              auVar101[13] = ~auVar87[13] & ~auVar110[13];
                              auVar101[14] = ~auVar87[14] & ~auVar110[14];
                              auVar101[15] = ~auVar87[15] & ~auVar110[15];
                              auVar110 = NEON_fcmlt(auVar71,0,4);
                              auVar10._4_4_ = fVar51;
                              auVar10._0_4_ = fVar51;
                              auVar10._8_4_ = fVar51;
                              auVar10._12_4_ = fVar51;
                              auVar113 = NEON_fcmgt(auVar71,auVar10,4);
                              auVar11._4_4_ = fVar51;
                              auVar11._0_4_ = fVar51;
                              auVar11._8_4_ = fVar51;
                              auVar11._12_4_ = fVar51;
                              auVar70 = NEON_bif(auVar79,auVar11,auVar101,1);
                              fVar84 = (float)CONCAT13(auVar70[3] & ~auVar87[3],
                                                       CONCAT12(auVar70[2] & ~auVar87[2],
                                                                CONCAT11(auVar70[1] & ~auVar87[1],
                                                                         auVar70[0] & ~auVar87[0])))
                              ;
                              auVar76._0_8_ =
                                   CONCAT17(auVar70[7] & ~auVar87[7],
                                            CONCAT16(auVar70[6] & ~auVar87[6],
                                                     CONCAT15(auVar70[5] & ~auVar87[5],
                                                              CONCAT14(auVar70[4] & ~auVar87[4],
                                                                       fVar84))));
                              auVar76[8] = auVar70[8] & ~auVar87[8];
                              auVar76[9] = auVar70[9] & ~auVar87[9];
                              auVar76[10] = auVar70[10] & ~auVar87[10];
                              auVar76[11] = auVar70[11] & ~auVar87[11];
                              auVar80[12] = auVar70[12] & ~auVar87[12];
                              auVar80._0_12_ = auVar76;
                              auVar80[13] = auVar70[13] & ~auVar87[13];
                              auVar80[14] = auVar70[14] & ~auVar87[14];
                              auVar80[15] = auVar70[15] & ~auVar87[15];
                              auVar108[0] = ~auVar110[0] & ~auVar113[0];
                              auVar108[1] = ~auVar110[1] & ~auVar113[1];
                              auVar108[2] = ~auVar110[2] & ~auVar113[2];
                              auVar108[3] = ~auVar110[3] & ~auVar113[3];
                              auVar108[4] = ~auVar110[4] & ~auVar113[4];
                              auVar108[5] = ~auVar110[5] & ~auVar113[5];
                              auVar108[6] = ~auVar110[6] & ~auVar113[6];
                              auVar108[7] = ~auVar110[7] & ~auVar113[7];
                              auVar108[8] = ~auVar110[8] & ~auVar113[8];
                              auVar108[9] = ~auVar110[9] & ~auVar113[9];
                              auVar108[10] = ~auVar110[10] & ~auVar113[10];
                              auVar108[11] = ~auVar110[11] & ~auVar113[11];
                              auVar108[12] = ~auVar110[12] & ~auVar113[12];
                              auVar108[13] = ~auVar110[13] & ~auVar113[13];
                              auVar108[14] = ~auVar110[14] & ~auVar113[14];
                              auVar108[15] = ~auVar110[15] & ~auVar113[15];
                              auVar88._0_4_ = (int)fVar84;
                              auVar88._4_4_ = (int)(float)((ulong)auVar76._0_8_ >> 0x20);
                              auVar88._8_4_ = (int)auVar76._8_4_;
                              auVar88._12_4_ = (int)auVar80._12_4_;
                              auVar12._4_4_ = fVar51;
                              auVar12._0_4_ = fVar51;
                              auVar12._8_4_ = fVar51;
                              auVar12._12_4_ = fVar51;
                              auVar70 = NEON_bif(auVar71,auVar12,auVar108,1);
                              fVar84 = (float)CONCAT13(auVar70[3] & ~auVar110[3],
                                                       CONCAT12(auVar70[2] & ~auVar110[2],
                                                                CONCAT11(auVar70[1] & ~auVar110[1],
                                                                         auVar70[0] & ~auVar110[0]))
                                                      );
                              auVar61._0_8_ =
                                   CONCAT17(auVar70[7] & ~auVar110[7],
                                            CONCAT16(auVar70[6] & ~auVar110[6],
                                                     CONCAT15(auVar70[5] & ~auVar110[5],
                                                              CONCAT14(auVar70[4] & ~auVar110[4],
                                                                       fVar84))));
                              auVar61[8] = auVar70[8] & ~auVar110[8];
                              auVar61[9] = auVar70[9] & ~auVar110[9];
                              auVar61[10] = auVar70[10] & ~auVar110[10];
                              auVar61[11] = auVar70[11] & ~auVar110[11];
                              auVar72[12] = auVar70[12] & ~auVar110[12];
                              auVar72._0_12_ = auVar61;
                              auVar72[13] = auVar70[13] & ~auVar110[13];
                              auVar72[14] = auVar70[14] & ~auVar110[14];
                              auVar72[15] = auVar70[15] & ~auVar110[15];
                              auVar81._0_4_ = (int)fVar84;
                              auVar81._4_4_ = (int)(float)((ulong)auVar61._0_8_ >> 0x20);
                              auVar81._8_4_ = (int)auVar61._8_4_;
                              auVar81._12_4_ = (int)auVar72._12_4_;
                              auVar70 = a64_TBL(ZEXT816(0),auVar81,auVar88,_DAT_004c4870);
                              *puVar30 = auVar70._0_8_;
                              puVar31 = puVar31 + 1;
                              puVar30 = puVar30 + 1;
                            } while (lVar33 != 0);
                            if (uVar25 == uVar23) goto LAB_00a89574;
                          }
LAB_00a898ec:
                          pbVar28 = (byte *)((long)&local_100 + uVar25);
                          lVar33 = uVar23 - uVar25;
                          puVar35 = (undefined *)((long)&local_b0 + uVar25);
                          do {
                            fVar84 = (float)NEON_ucvtf((uint)*pbVar28);
                            fVar92 = (float)(int)(((fVar84 - fVar60) * fVar51) / fVar75 + 0.5);
                            fVar84 = 0.0;
                            if ((0.0 <= fVar92) && (fVar84 = fVar92, fVar51 < fVar92)) {
                              fVar84 = fVar51;
                            }
                            pbVar28 = pbVar28 + 1;
                            lVar33 = lVar33 + -1;
                            *puVar35 = (char)(int)fVar84;
                            puVar35 = puVar35 + 1;
                          } while (lVar33 != 0);
                        }
LAB_00a89574:
                        local_c0 = 0;
                        local_b8 = 0;
                        local_d0 = 0;
                        local_c8 = 0;
                        if (param_2[0x3c] == (color_cell_compressor_params)0x0) {
                          if (uVar4 == 0) {
                            fVar84 = 0.0;
                            auVar50 = ZEXT816(0);
                            fVar109 = 0.0;
                            auVar68 = ZEXT816(0);
                            fVar112 = 0.0;
                            auVar59 = ZEXT816(0);
                            fVar92 = 0.0;
                            fVar98 = 0.0;
                            fVar75 = 0.0;
                          }
                          else {
                            fVar75 = 0.0;
                            fVar98 = 0.0;
                            fVar92 = 0.0;
                            auVar59 = ZEXT816(0);
                            fVar112 = 0.0;
                            auVar68 = ZEXT816(0);
                            fVar109 = 0.0;
                            auVar50 = ZEXT816(0);
                            fVar84 = 0.0;
                            pcVar27 = *(color_quad_u8 **)(param_2 + 8) + 2;
                            puVar30 = &local_b0;
                            do {
                              uVar23 = uVar23 - 1;
                              pcVar2 = pcVar27 + -1;
                              pfVar3 = (float *)(*(vec4F **)(param_2 + 0x20) +
                                                (ulong)*(byte *)puVar30 * 0x10);
                              cVar120 = *pcVar27;
                              fVar115 = (float)NEON_ucvtf((uint)(byte)pcVar27[-2]);
                              pcVar27 = pcVar27 + 4;
                              fVar132 = (float)NEON_ucvtf((uint)(byte)*pcVar2);
                              fVar105 = pfVar3[3];
                              fVar104 = (float)NEON_ucvtf((uint)(byte)cVar120);
                              fVar84 = fVar84 + fVar115;
                              fVar109 = fVar109 + fVar132;
                              fVar75 = fVar75 + *pfVar3;
                              fVar98 = fVar98 + pfVar3[1];
                              fVar92 = fVar92 + pfVar3[2];
                              auVar59._0_4_ = NEON_fmadd(fVar105,fVar115,auVar59._0_4_);
                              auVar50._0_4_ = NEON_fmadd(fVar105,fVar132,auVar50._0_4_);
                              auVar68._0_4_ = NEON_fmadd(fVar105,fVar104,auVar68._0_4_);
                              fVar112 = fVar112 + fVar104;
                              puVar30 = (undefined8 *)((long)puVar30 + 1);
                            } while (uVar23 != 0);
                          }
                          fVar105 = auVar68._0_4_;
                          fVar104 = auVar59._0_4_;
                          fVar132 = auVar50._0_4_;
                          fVar121 = (float)NEON_fmadd(fVar75,fVar92,fVar98 * -fVar98);
                          fVar115 = 1.0 / fVar121;
                          if (fVar121 == 0.0) {
                            fVar115 = fVar121;
                          }
                          fVar98 = fVar115 * -fVar98;
                          fVar75 = fVar75 * fVar115;
                          fVar92 = fVar92 * fVar115;
                          uVar141 = NEON_fmadd(fVar92,fVar105,(fVar112 - fVar105) * fVar98);
                          uVar138 = NEON_fmadd(fVar98,fVar105,(fVar112 - fVar105) * fVar75);
                          local_d0._0_4_ =
                               (float)NEON_fmadd(fVar98,fVar104,(fVar84 - fVar104) * fVar75);
                          local_c0._0_4_ =
                               (float)NEON_fmadd(fVar92,fVar104,(fVar84 - fVar104) * fVar98);
                          local_c0._4_4_ =
                               (float)NEON_fmadd(fVar92,fVar132,(fVar109 - fVar132) * fVar98);
                          local_d0._4_4_ =
                               (float)NEON_fmadd(fVar98,fVar132,(fVar109 - fVar132) * fVar75);
                          auVar102._4_12_ = SUB1612(ZEXT816(0x437f0000437f0000),4);
                          auVar102._0_4_ = uVar141;
                          local_b8 = auVar102._0_8_;
                          auVar91._4_12_ = auVar102._4_12_;
                          auVar91._0_4_ = uVar138;
                          local_c8 = auVar91._0_8_;
                        }
                        else {
                          compute_least_squares_endpoints_rgba
                                    (uVar4,(uchar *)&local_b0,*(vec4F **)(param_2 + 0x20),
                                     (vec4F *)&local_c0,(vec4F *)&local_d0,
                                     *(color_quad_u8 **)(param_2 + 8));
                        }
                        local_b8 = CONCAT44((float)((ulong)local_b8 >> 0x20) * 0.003921569,
                                            (float)local_b8 * 0.003921569);
                        local_c8 = CONCAT44((float)((ulong)local_c8 >> 0x20) * 0.003921569,
                                            (float)local_c8 * 0.003921569);
                        local_c0 = CONCAT44(local_c0._4_4_ * 0.003921569,
                                            (float)local_c0 * 0.003921569);
                        local_d0 = CONCAT44(local_d0._4_4_ * 0.003921569,
                                            (float)local_d0 * 0.003921569);
                        lVar33 = find_optimal_solution(param_1,param_2,param_3);
                        if (lVar33 == 0) {
                          if (!bVar22) goto LAB_00a899f0;
                          break;
                        }
                      }
                      uVar4 = uVar43 + 1;
                      bVar22 = (int)(iVar40 + uVar7) <= (int)uVar43;
                      uVar43 = uVar4;
                    } while (uVar4 != iVar5 + iVar40);
                  }
                  iVar39 = iVar39 + 1;
                } while (iVar39 != 2);
              }
            }
            goto LAB_00a89a08;
          }
        }
      }
LAB_00a899f0:
      uVar23 = 0;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_a0) {
                    /* WARNING: Read-only address (ram,0x004c37b0) is written */
                    /* WARNING: Read-only address (ram,0x004c3bd0) is written */
                    /* WARNING: Read-only address (ram,0x004c4870) is written */
                    /* WARNING: Read-only address (ram,0x004c4a50) is written */
                    /* WARNING: Read-only address (ram,0x004c4d70) is written */
                    /* WARNING: Read-only address (ram,0x004c4f40) is written */
    return uVar23;
  }
LAB_00a89acc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


