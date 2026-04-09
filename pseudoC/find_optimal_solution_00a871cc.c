// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: find_optimal_solution
// Entry Point: 00a871cc
// Size: 3412 bytes
// Signature: undefined __cdecl find_optimal_solution(uint param_1, vec4F param_2, vec4F param_3, color_cell_compressor_params * param_4, color_cell_compressor_results * param_5)


/* BC7EncodeUtil::BC7Enc16::find_optimal_solution(unsigned int, BC7EncodeUtil::BC7Enc16::vec4F,
   BC7EncodeUtil::BC7Enc16::vec4F, BC7EncodeUtil::BC7Enc16::color_cell_compressor_params const*,
   BC7EncodeUtil::BC7Enc16::color_cell_compressor_results*) */

void BC7EncodeUtil::BC7Enc16::find_optimal_solution
               (float param_1_00,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,int param_1,
               color_cell_compressor_params *param_10,long *param_11,undefined8 param_12,
               uint param_13,uint param_14,uint param_15,uint param_16)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  undefined4 *puVar23;
  uint uVar24;
  long *plVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  byte *pbVar29;
  int iVar30;
  uint uVar31;
  uint *puVar32;
  byte *pbVar33;
  undefined8 *puVar34;
  uint uVar35;
  char cVar36;
  ulong uVar37;
  uint uVar38;
  float *pfVar39;
  uint unaff_w21;
  float *pfVar40;
  uint unaff_w25;
  uint unaff_w26;
  uint uVar41;
  undefined8 *puVar42;
  ulong uVar43;
  long lVar44;
  undefined uVar45;
  undefined uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  undefined auVar53 [16];
  float fVar54;
  uint uVar55;
  undefined auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  byte local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  undefined8 local_88;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar16 = tpidr_el0;
  local_78 = *(long *)(lVar16 + 0x28);
  local_88._0_4_ = 0.0;
  if ((0.0 <= param_1_00) && (local_88._0_4_ = param_1_00, 1.0 < param_1_00)) {
    local_88._0_4_ = 1.0;
  }
  local_88._4_4_ = 0.0;
  if ((0.0 <= param_2) && (local_88._4_4_ = param_2, 1.0 < param_2)) {
    local_88._4_4_ = 1.0;
  }
  local_80 = 0.0;
  if ((0.0 <= param_3) && (local_80 = param_3, 1.0 < param_3)) {
    local_80 = 1.0;
  }
  local_7c = 0.0;
  if ((0.0 <= param_4) && (local_7c = param_4, 1.0 < param_4)) {
    local_7c = 1.0;
  }
  local_98._0_4_ = 0.0;
  if ((0.0 <= param_5) && (local_98._0_4_ = param_5, 1.0 < param_5)) {
    local_98._0_4_ = 1.0;
  }
  local_98._4_4_ = 0.0;
  if ((0.0 <= param_6) && (local_98._4_4_ = param_6, 1.0 < param_6)) {
    local_98._4_4_ = 1.0;
  }
  local_90 = 0.0;
  if ((0.0 <= param_7) && (local_90 = param_7, 1.0 < param_7)) {
    local_90 = 1.0;
  }
  local_8c = 0.0;
  if ((0.0 <= param_8) && (local_8c = param_8, 1.0 < param_8)) {
    local_8c = 1.0;
  }
  uVar28 = *(uint *)(param_10 + 0x28);
  if (param_10[0x3d] == (color_cell_compressor_params)0x0) {
    uVar8 = ~(-1 << (ulong)(uVar28 & 0x1f));
    fVar48 = (float)uVar8;
    fVar49 = (float)NEON_fmadd((float)local_88,fVar48,0x3f000000);
    fVar51 = (float)NEON_fmadd(local_88._4_4_,fVar48,0x3f000000);
    fVar54 = (float)NEON_fmadd(local_80,fVar48,0x3f000000);
    fVar50 = (float)NEON_fmadd(local_7c,fVar48,0x3f000000);
    fVar58 = (float)NEON_fmadd((float)local_98,fVar48,0x3f000000);
    fVar59 = (float)NEON_fmadd(local_98._4_4_,fVar48,0x3f000000);
    fVar47 = (float)NEON_fmadd(local_8c,fVar48,0x3f000000);
    fVar48 = (float)NEON_fmadd(local_90,fVar48,0x3f000000);
    uVar28 = (uint)fVar49;
    uVar31 = (uint)fVar51;
    uVar35 = (uint)fVar54;
    uVar38 = (uint)fVar50;
    uVar41 = (uint)fVar58;
    uVar55 = (uint)fVar59;
    uVar24 = (uint)fVar48;
    if (0xfe < (int)uVar28) {
      uVar28 = 0xff;
    }
    if (0xfe < (int)uVar31) {
      uVar31 = 0xff;
    }
    uVar28 = uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar35) {
      uVar35 = 0xff;
    }
    uVar21 = (uint)fVar47;
    uVar31 = uVar31 & ((int)uVar31 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar38) {
      uVar38 = 0xff;
    }
    uVar35 = uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar41) {
      uVar41 = 0xff;
    }
    if (0xfe < (int)uVar55) {
      uVar55 = 0xff;
    }
    uVar41 = uVar41 & ((int)uVar41 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar24) {
      uVar24 = 0xff;
    }
    uVar38 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar21) {
      uVar21 = 0xff;
    }
    uVar55 = uVar55 & ((int)uVar55 >> 0x1f ^ 0xffffffffU);
    uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
    uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
    local_a0._0_4_ =
         CONCAT13((char)uVar38,CONCAT12((char)uVar35,CONCAT11((char)uVar31,(char)uVar28)));
    local_a8._0_4_ =
         CONCAT13((char)uVar21,CONCAT12((char)uVar24,CONCAT11((char)uVar55,(char)uVar41)));
    if (param_1 == 1) {
      uVar9 = uVar8 >> 1;
      if (((uVar28 & 0xff) == (uVar41 & 0xff)) && ((float)local_88 - (float)local_98 != 0.0)) {
        if (uVar9 < uVar28) {
LAB_00a87d94:
          puVar20 = &local_a0;
          cVar36 = -1;
        }
        else {
          if (uVar8 <= uVar28) {
            if ((uVar28 & 0xff) == 0) goto LAB_00a87da4;
            goto LAB_00a87d94;
          }
          puVar20 = &local_a8;
          cVar36 = '\x01';
        }
        *(char *)puVar20 = cVar36 + (char)uVar28;
      }
LAB_00a87da4:
      puVar20 = &local_a0;
      if (((uVar31 & 0xff) == (uVar55 & 0xff)) && (local_88._4_4_ - local_98._4_4_ != 0.0)) {
        if (uVar9 < uVar31) {
LAB_00a87df0:
          cVar36 = -1;
          puVar34 = puVar20;
        }
        else {
          if (uVar8 <= uVar31) {
            if ((uVar31 & 0xff) == 0) goto LAB_00a87dfc;
            goto LAB_00a87df0;
          }
          cVar36 = '\x01';
          puVar34 = &local_a8;
        }
        *(char *)((ulong)puVar34 | 1) = cVar36 + (char)uVar31;
      }
LAB_00a87dfc:
      if (((uVar35 & 0xff) == (uVar24 & 0xff)) && (local_80 - local_90 != 0.0)) {
        if (uVar9 < uVar35) {
LAB_00a87e40:
          cVar36 = -1;
        }
        else {
          if (uVar8 <= uVar35) {
            if ((uVar35 & 0xff) == 0) goto LAB_00a87e4c;
            goto LAB_00a87e40;
          }
          cVar36 = '\x01';
          puVar20 = &local_a8;
        }
        *(char *)((ulong)puVar20 | 2) = cVar36 + (char)uVar35;
      }
    }
LAB_00a87e4c:
    if (((((*param_11 != -1) && (((uint)local_a0 & 0xff) == (uint)*(byte *)(param_11 + 1))) &&
         (local_a0._1_1_ == *(char *)((long)param_11 + 9))) &&
        ((local_a0._2_1_ == *(char *)((long)param_11 + 10) &&
         ((uint)*(byte *)((long)param_11 + 0xb) == (uVar38 & 0xff))))) &&
       (((((uint)local_a8 & 0xff) == (uint)*(byte *)((long)param_11 + 0xc) &&
         ((local_a8._1_1_ == *(char *)((long)param_11 + 0xd) &&
          (local_a8._2_1_ == *(char *)((long)param_11 + 0xe))))) &&
        ((uint)*(byte *)((long)param_11 + 0xf) == (uVar21 & 0xff))))) goto LAB_00a87ee4;
    plVar25 = param_11 + 2;
    puVar20 = &local_a0;
    puVar23 = (undefined4 *)&local_a8;
  }
  else {
    uVar31 = uVar28 + 1;
    uVar41 = -1 << (ulong)(uVar31 & 0x1f);
    uVar35 = ~uVar41;
    iVar15 = -2 - uVar41;
    fVar47 = (float)uVar35;
    uVar41 = 3;
    if (param_10[0x3c] != (color_cell_compressor_params)0x0) {
      uVar41 = 4;
    }
    uVar37 = (ulong)uVar41;
    if (param_10[0x3e] == (color_cell_compressor_params)0x0) {
      fVar48 = 1e+09;
      uVar28 = 7 - uVar28;
      uVar41 = 0;
      fVar49 = fVar48;
      bVar18 = true;
      do {
        bVar17 = bVar18;
        fVar59 = (float)uVar41;
        uVar38 = uVar41 + iVar15;
        fVar61 = (float)NEON_fnmsub((float)local_88,fVar47,fVar59);
        fVar60 = (float)NEON_fnmsub((float)local_98,fVar47,fVar59);
        fVar58 = (float)NEON_fnmsub(local_88._4_4_,fVar47,fVar59);
        fVar54 = (float)NEON_fnmsub(local_98._4_4_,fVar47,fVar59);
        fVar51 = (float)NEON_fnmsub(local_80,fVar47,fVar59);
        fVar57 = (float)NEON_fnmsub(local_90,fVar47,fVar59);
        fVar50 = (float)NEON_fnmsub(local_7c,fVar47,fVar59);
        fVar59 = (float)NEON_fnmsub(local_8c,fVar47,fVar59);
        iVar19 = (int)(fVar61 * 0.5 + 0.5);
        iVar26 = (int)(fVar60 * 0.5 + 0.5);
        iVar27 = (int)(fVar58 * 0.5 + 0.5);
        iVar30 = (int)(fVar54 * 0.5 + 0.5);
        uVar24 = uVar41 | iVar19 << 1;
        uVar8 = uVar41 | iVar26 << 1;
        uVar21 = uVar41 | iVar27 << 1;
        uVar55 = uVar38;
        if ((int)uVar24 <= (int)uVar38) {
          uVar55 = uVar24;
        }
        uVar24 = uVar41;
        if (-1 < iVar19) {
          uVar24 = uVar55;
        }
        uVar55 = uVar38;
        if ((int)uVar8 <= (int)uVar38) {
          uVar55 = uVar8;
        }
        iVar19 = (int)(fVar51 * 0.5 + 0.5);
        uVar8 = uVar41;
        if (-1 < iVar26) {
          uVar8 = uVar55;
        }
        uVar9 = uVar41 | iVar30 << 1;
        uVar55 = uVar38;
        if ((int)uVar21 <= (int)uVar38) {
          uVar55 = uVar21;
        }
        iVar26 = (int)(fVar57 * 0.5 + 0.5);
        uVar21 = uVar41;
        if (-1 < iVar27) {
          uVar21 = uVar55;
        }
        uVar10 = uVar41 | iVar19 << 1;
        uVar55 = uVar38;
        if ((int)uVar9 <= (int)uVar38) {
          uVar55 = uVar9;
        }
        iVar27 = (int)(fVar50 * 0.5 + 0.5);
        uVar9 = uVar41;
        if (-1 < iVar30) {
          uVar9 = uVar55;
        }
        uVar11 = uVar41 | iVar26 << 1;
        uVar55 = uVar38;
        if ((int)uVar10 <= (int)uVar38) {
          uVar55 = uVar10;
        }
        iVar30 = (int)(fVar59 * 0.5 + 0.5);
        uVar10 = uVar41;
        if (-1 < iVar19) {
          uVar10 = uVar55;
        }
        uVar12 = uVar41 | iVar27 << 1;
        uVar55 = uVar38;
        if ((int)uVar11 <= (int)uVar38) {
          uVar55 = uVar11;
        }
        uVar11 = uVar41;
        if (-1 < iVar26) {
          uVar11 = uVar55;
        }
        uVar55 = uVar38;
        if ((int)uVar12 <= (int)uVar38) {
          uVar55 = uVar12;
        }
        uVar13 = uVar41 | iVar30 << 1;
        uVar12 = uVar41;
        if (-1 < iVar27) {
          uVar12 = uVar55;
        }
        if ((int)uVar13 <= (int)uVar38) {
          uVar38 = uVar13;
        }
        uVar55 = uVar41;
        if (-1 < iVar30) {
          uVar55 = uVar38;
        }
        uVar38 = (uVar24 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar13 = (uVar12 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar14 = (uVar21 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar2 = (uVar10 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar3 = (uVar8 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar4 = (uVar55 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar5 = (uVar9 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar6 = (uVar11 & 0xff) << (ulong)(uVar28 & 0x1f);
        fVar50 = 0.0;
        fVar51 = 0.0;
        local_a0._0_4_ =
             ((uVar2 >> (ulong)(uVar31 & 0x1f) | uVar2) & 0xff) << 0x10 |
             (uVar13 >> (ulong)(uVar31 & 0x1f) | uVar13) << 0x18 |
             ((uVar14 >> (ulong)(uVar31 & 0x1f) | uVar14) & 0xff) << 8 |
             (uVar38 >> (ulong)(uVar31 & 0x1f) | uVar38) & 0xff;
        local_a8._0_4_ =
             ((uVar6 >> (ulong)(uVar31 & 0x1f) | uVar6) & 0xff) << 0x10 |
             (uVar4 >> (ulong)(uVar31 & 0x1f) | uVar4) << 0x18 |
             ((uVar5 >> (ulong)(uVar31 & 0x1f) | uVar5) & 0xff) << 8 |
             (uVar3 >> (ulong)(uVar31 & 0x1f) | uVar3) & 0xff;
        puVar23 = (undefined4 *)&local_a8;
        puVar20 = &local_a0;
        puVar34 = &local_88;
        puVar42 = &local_98;
        uVar22 = uVar37;
        do {
          uVar22 = uVar22 - 1;
          fVar54 = (float)NEON_fmsub(*(undefined4 *)puVar34,0x437f0000,
                                     (float)(ulong)*(byte *)puVar20);
          fVar58 = (float)NEON_fmsub(*(undefined4 *)puVar42,0x437f0000,
                                     (float)(ulong)*(byte *)puVar23);
          fVar51 = fVar51 + fVar54 * fVar54;
          fVar50 = fVar50 + fVar58 * fVar58;
          puVar23 = (undefined4 *)((long)puVar23 + 1);
          puVar20 = (undefined8 *)((long)puVar20 + 1);
          puVar34 = (undefined8 *)((long)puVar34 + 4);
          puVar42 = (undefined8 *)((long)puVar42 + 4);
        } while (uVar22 != 0);
        local_a0._0_4_ = param_13;
        if (fVar51 < fVar48) {
          local_b8 = uVar24 >> 1 & 0x7f;
          param_16 = uVar12 >> 1 & 0x7f;
          local_c0 = uVar21 >> 1 & 0x7f;
          local_c8 = uVar10 >> 1 & 0x7f;
          fVar48 = fVar51;
          local_a0._0_4_ = uVar41;
        }
        local_a0._4_4_ = param_14;
        if (fVar50 < fVar49) {
          local_bc = uVar8 >> 1 & 0x7f;
          param_15 = uVar11 >> 1 & 0x7f;
          unaff_w21 = uVar55 >> 1 & 0x7f;
          local_c4 = uVar9 >> 1 & 0x7f;
          fVar49 = fVar50;
          local_a0._4_4_ = uVar41;
        }
        uVar41 = 1;
        bVar18 = false;
        param_13 = (uint)local_a0;
        param_14 = local_a0._4_4_;
      } while (bVar17);
      local_ae = (byte)param_15;
      local_ad = (byte)unaff_w21;
      local_a8._0_2_ = CONCAT11((char)local_c0,(char)local_b8);
      local_a8._3_1_ = (char)param_16;
      local_a8._0_3_ = CONCAT12((char)local_c8,(undefined2)local_a8);
      local_b0 = (byte)local_bc;
      local_af = (byte)local_c4;
    }
    else {
      uVar28 = 7 - uVar28;
      fVar48 = 1e+09;
      local_bc = (uint)local_b0;
      local_b8 = (uint)local_a8 & 0xff;
      local_c4 = (uint)local_af;
      local_c0 = (uint)local_a8 >> 8 & 0xff;
      uVar38 = 0;
      uVar22 = uVar37 & 4;
      local_cc = (uint)local_ae;
      local_c8 = (uint)local_a8 >> 0x10 & 0xff;
      local_d0 = (uint)local_a8 >> 0x18;
      uVar41 = (uint)local_ad;
      bVar18 = true;
      do {
        bVar17 = bVar18;
        fVar54 = (float)uVar38;
        uVar55 = uVar38 + iVar15;
        fVar60 = (float)NEON_fnmsub((float)local_88,fVar47,fVar54);
        fVar59 = (float)NEON_fnmsub((float)local_98,fVar47,fVar54);
        fVar58 = (float)NEON_fnmsub(local_88._4_4_,fVar47,fVar54);
        fVar51 = (float)NEON_fnmsub(local_98._4_4_,fVar47,fVar54);
        fVar50 = (float)NEON_fnmsub(local_80,fVar47,fVar54);
        fVar61 = (float)NEON_fnmsub(local_90,fVar47,fVar54);
        fVar49 = (float)NEON_fnmsub(local_7c,fVar47,fVar54);
        fVar54 = (float)NEON_fnmsub(local_8c,fVar47,fVar54);
        iVar27 = (int)(fVar60 * 0.5 + 0.5);
        iVar30 = (int)(fVar59 * 0.5 + 0.5);
        iVar19 = (int)(fVar58 * 0.5 + 0.5);
        iVar26 = (int)(fVar51 * 0.5 + 0.5);
        uVar8 = uVar38 | iVar27 << 1;
        uVar21 = uVar38 | iVar30 << 1;
        uVar9 = uVar38 | iVar19 << 1;
        uVar24 = uVar55;
        if ((int)uVar8 <= (int)uVar55) {
          uVar24 = uVar8;
        }
        uVar8 = uVar38;
        if (-1 < iVar27) {
          uVar8 = uVar24;
        }
        uVar24 = uVar55;
        if ((int)uVar21 <= (int)uVar55) {
          uVar24 = uVar21;
        }
        iVar27 = (int)(fVar50 * 0.5 + 0.5);
        uVar21 = uVar38;
        if (-1 < iVar30) {
          uVar21 = uVar24;
        }
        uVar10 = uVar38 | iVar26 << 1;
        uVar24 = uVar55;
        if ((int)uVar9 <= (int)uVar55) {
          uVar24 = uVar9;
        }
        iVar30 = (int)(fVar61 * 0.5 + 0.5);
        uVar9 = uVar38;
        if (-1 < iVar19) {
          uVar9 = uVar24;
        }
        uVar11 = uVar38 | iVar27 << 1;
        uVar24 = uVar55;
        if ((int)uVar10 <= (int)uVar55) {
          uVar24 = uVar10;
        }
        iVar19 = (int)(fVar49 * 0.5 + 0.5);
        uVar10 = uVar38;
        if (-1 < iVar26) {
          uVar10 = uVar24;
        }
        uVar12 = uVar38 | iVar30 << 1;
        uVar24 = uVar55;
        if ((int)uVar11 <= (int)uVar55) {
          uVar24 = uVar11;
        }
        iVar26 = (int)(fVar54 * 0.5 + 0.5);
        uVar11 = uVar38;
        if (-1 < iVar27) {
          uVar11 = uVar24;
        }
        uVar13 = uVar38 | iVar19 << 1;
        uVar24 = uVar55;
        if ((int)uVar12 <= (int)uVar55) {
          uVar24 = uVar12;
        }
        uVar12 = uVar38;
        if (-1 < iVar30) {
          uVar12 = uVar24;
        }
        uVar24 = uVar55;
        if ((int)uVar13 <= (int)uVar55) {
          uVar24 = uVar13;
        }
        uVar14 = uVar38 | iVar26 << 1;
        uVar13 = uVar38;
        if (-1 < iVar19) {
          uVar13 = uVar24;
        }
        if ((int)uVar14 <= (int)uVar55) {
          uVar55 = uVar14;
        }
        uVar14 = (uVar13 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar2 = (uVar11 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar3 = (uVar8 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar24 = uVar38;
        if (-1 < iVar26) {
          uVar24 = uVar55;
        }
        uVar55 = (uVar10 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar4 = (uVar9 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar5 = (uVar24 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar6 = (uVar12 & 0xff) << (ulong)(uVar28 & 0x1f);
        uVar7 = (uVar21 & 0xff) << (ulong)(uVar28 & 0x1f);
        fVar49 = 0.0;
        local_a0._0_4_ =
             ((uVar2 >> (ulong)(uVar31 & 0x1f) | uVar2) & 0xff) << 0x10 |
             (uVar14 >> (ulong)(uVar31 & 0x1f) | uVar14) << 0x18 |
             ((uVar4 >> (ulong)(uVar31 & 0x1f) | uVar4) & 0xff) << 8 |
             (uVar3 >> (ulong)(uVar31 & 0x1f) | uVar3) & 0xff;
        local_b4 = ((uVar6 >> (ulong)(uVar31 & 0x1f) | uVar6) & 0xff) << 0x10 |
                   (uVar5 >> (ulong)(uVar31 & 0x1f) | uVar5) << 0x18 |
                   ((uVar55 >> (ulong)(uVar31 & 0x1f) | uVar55) & 0xff) << 8 |
                   (uVar7 >> (ulong)(uVar31 & 0x1f) | uVar7) & 0xff;
        if (param_10[0x3c] == (color_cell_compressor_params)0x0) {
          uVar43 = 0;
LAB_00a8767c:
          lVar44 = uVar37 - uVar43;
          pbVar29 = (byte *)((long)&local_b4 + uVar43);
          pbVar33 = (byte *)((long)&local_a0 + uVar43);
          pfVar39 = (float *)((long)&local_88 + uVar43 * 4);
          pfVar40 = (float *)((long)&local_98 + uVar43 * 4);
          do {
            lVar44 = lVar44 + -1;
            fVar50 = (float)(ulong)*pbVar33 / 255.0 - *pfVar39;
            fVar51 = (float)(ulong)*pbVar29 / 255.0 - *pfVar40;
            fVar49 = fVar49 + fVar50 * fVar50 + fVar51 * fVar51;
            pbVar29 = pbVar29 + 1;
            pbVar33 = pbVar33 + 1;
            pfVar39 = pfVar39 + 1;
            pfVar40 = pfVar40 + 1;
          } while (lVar44 != 0);
        }
        else {
          puVar20 = &local_98;
          puVar32 = &local_b4;
          uVar43 = uVar22;
          puVar34 = &local_88;
          puVar42 = &local_a0;
          do {
            uVar52 = *(undefined4 *)puVar42;
            uVar55 = *puVar32;
            uVar45 = (undefined)((uint)uVar52 >> 8);
            uVar43 = uVar43 - 4;
            uVar46 = (undefined)(uVar55 >> 8);
            auVar53._6_2_ = 0;
            auVar53._0_6_ =
                 (uint6)CONCAT14(uVar45,(uint)CONCAT12(uVar45,(ushort)(byte)uVar52)) &
                 0xffff0000ffff;
            auVar53[8] = (char)((uint)uVar52 >> 0x10);
            auVar53._9_3_ = 0;
            auVar53[12] = (char)((uint)uVar52 >> 0x18);
            auVar53._13_3_ = 0;
            auVar56._6_2_ = 0;
            auVar56._0_6_ =
                 (uint6)CONCAT14(uVar46,(uint)CONCAT12(uVar46,(ushort)(byte)uVar55)) &
                 0xffff0000ffff;
            auVar56[8] = (char)(uVar55 >> 0x10);
            auVar56._9_3_ = 0;
            auVar56[12] = (char)(uVar55 >> 0x18);
            auVar56._13_3_ = 0;
            auVar53 = NEON_ucvtf(auVar53,4);
            auVar56 = NEON_ucvtf(auVar56,4);
            fVar50 = auVar53._0_4_ / 255.0 - (float)*puVar34;
            fVar51 = auVar53._4_4_ / 255.0 - (float)((ulong)*puVar34 >> 0x20);
            fVar54 = auVar53._8_4_ / 255.0 - (float)puVar34[1];
            fVar58 = auVar53._12_4_ / 255.0 - (float)((ulong)puVar34[1] >> 0x20);
            fVar59 = auVar56._0_4_ / 255.0 - (float)*puVar20;
            fVar60 = auVar56._4_4_ / 255.0 - (float)((ulong)*puVar20 >> 0x20);
            fVar61 = auVar56._8_4_ / 255.0 - (float)puVar20[1];
            fVar57 = auVar56._12_4_ / 255.0 - (float)((ulong)puVar20[1] >> 0x20);
            fVar49 = fVar49 + fVar50 * fVar50 + fVar59 * fVar59 + fVar51 * fVar51 + fVar60 * fVar60
                     + fVar54 * fVar54 + fVar61 * fVar61 + fVar58 * fVar58 + fVar57 * fVar57;
            puVar20 = puVar20 + 2;
            puVar32 = puVar32 + 1;
            puVar34 = puVar34 + 2;
            puVar42 = (undefined8 *)((long)puVar42 + 4);
          } while (uVar43 != 0);
          uVar43 = uVar22;
          if (uVar22 != uVar37) goto LAB_00a8767c;
        }
        local_a0._0_4_ = unaff_w25;
        local_a0._4_4_ = unaff_w26;
        if (fVar49 < fVar48) {
          local_b8 = uVar8 >> 1 & 0x7f;
          local_bc = uVar21 >> 1 & 0x7f;
          uVar41 = uVar24 >> 1 & 0x7f;
          local_c0 = uVar9 >> 1 & 0x7f;
          local_c4 = uVar10 >> 1 & 0x7f;
          local_c8 = uVar11 >> 1 & 0x7f;
          local_cc = uVar12 >> 1 & 0x7f;
          local_d0 = uVar13 >> 1 & 0x7f;
          fVar48 = fVar49;
          local_a0._0_4_ = uVar38;
          local_a0._4_4_ = uVar38;
        }
        uVar38 = 1;
        bVar18 = false;
        unaff_w25 = (uint)local_a0;
        unaff_w26 = local_a0._4_4_;
      } while (bVar17);
      local_ad = (byte)uVar41;
      local_b0 = (byte)local_bc;
      local_a8._0_2_ = CONCAT11((char)local_c0,(char)local_b8);
      local_af = (byte)local_c4;
      local_a8._0_3_ = CONCAT12((char)local_c8,(undefined2)local_a8);
      local_ae = (byte)local_cc;
      local_a8._0_4_ = CONCAT13((char)local_d0,(undefined3)local_a8);
    }
    if (param_1 == 1) {
      uVar35 = (int)uVar35 >> 1;
      uVar28 = uVar35 >> 1;
      if ((((uint)local_a8 & 0xff) == (uint)local_b0) && ((float)local_88 - (float)local_98 != 0.0))
      {
        if (uVar28 < ((uint)local_a8 & 0xff)) {
LAB_00a87c20:
          puVar23 = (undefined4 *)&local_a8;
          cVar36 = -1;
        }
        else {
          if (uVar35 <= ((uint)local_a8 & 0xff)) {
            if (((uint)local_a8 & 0xff) == 0) goto LAB_00a87c30;
            goto LAB_00a87c20;
          }
          puVar23 = (undefined4 *)&local_b0;
          cVar36 = '\x01';
        }
        *(char *)puVar23 = cVar36 + (char)local_a8;
      }
LAB_00a87c30:
      puVar23 = (undefined4 *)&local_a8;
      if (((uint)local_a8._1_1_ == (uint)local_af) && (local_88._4_4_ - local_98._4_4_ != 0.0)) {
        if (uVar28 < local_a8._1_1_) {
LAB_00a87c7c:
          cVar36 = -1;
          puVar1 = puVar23;
        }
        else {
          if (uVar35 <= local_a8._1_1_) {
            if (local_a8._1_1_ == 0) goto LAB_00a87c88;
            goto LAB_00a87c7c;
          }
          cVar36 = '\x01';
          puVar1 = (undefined4 *)&local_b0;
        }
        *(byte *)((ulong)puVar1 | 1) = cVar36 + local_a8._1_1_;
      }
LAB_00a87c88:
      if (((uint)local_a8._2_1_ == (uint)local_ae) && (local_80 - local_90 != 0.0)) {
        if (uVar28 < local_a8._2_1_) {
LAB_00a87ccc:
          cVar36 = -1;
        }
        else {
          if (uVar35 <= local_a8._2_1_) {
            if (local_a8._2_1_ == 0) goto LAB_00a87cd8;
            goto LAB_00a87ccc;
          }
          cVar36 = '\x01';
          puVar23 = (undefined4 *)&local_b0;
        }
        *(byte *)((ulong)puVar23 | 2) = cVar36 + local_a8._2_1_;
      }
    }
LAB_00a87cd8:
    if (((((*param_11 != -1) && (((uint)local_a8 & 0xff) == (uint)*(byte *)(param_11 + 1))) &&
         (local_a8._1_1_ == *(char *)((long)param_11 + 9))) &&
        (((local_a8._2_1_ == *(char *)((long)param_11 + 10) &&
          (local_a8._3_1_ == *(char *)((long)param_11 + 0xb))) &&
         ((local_b0 == *(byte *)((long)param_11 + 0xc) &&
          ((local_af == *(byte *)((long)param_11 + 0xd) &&
           (local_ae == *(byte *)((long)param_11 + 0xe))))))))) &&
       ((local_ad == *(byte *)((long)param_11 + 0xf) &&
        (((uint)local_a0 == *(uint *)(param_11 + 2) &&
         (local_a0._4_4_ == *(uint *)((long)param_11 + 0x14))))))) goto LAB_00a87ee4;
    puVar20 = &local_a8;
    puVar23 = (undefined4 *)&local_b0;
    plVar25 = &local_a0;
  }
  evaluate_solution((color_quad_u8 *)puVar20,(color_quad_u8 *)puVar23,(uint *)plVar25,param_10,
                    (color_cell_compressor_results *)param_11);
LAB_00a87ee4:
  if (*(long *)(lVar16 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*param_11);
}


