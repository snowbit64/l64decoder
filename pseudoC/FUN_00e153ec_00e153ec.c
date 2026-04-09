// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e153ec
// Entry Point: 00e153ec
// Size: 3160 bytes
// Signature: undefined FUN_00e153ec(void)


void FUN_00e153ec(long *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined (*pauVar14) [16];
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  ulong uVar28;
  int *piVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  uint uVar35;
  undefined4 uVar36;
  undefined auVar37 [16];
  undefined auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  int aiStack_1a0 [4];
  double local_190 [4];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long local_158;
  long local_150;
  long local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  long *local_110;
  long local_108;
  long local_100;
  long local_f8;
  ulong local_f0;
  undefined8 *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  int *local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  
  local_150 = tpidr_el0;
  local_90 = *(long *)(local_150 + 0x28);
  uVar35 = *(uint *)(param_1 + 9);
  uVar28 = (ulong)(int)uVar35;
  lVar24 = param_1[0x17];
  lVar23 = *(long *)(param_1[0xd] + 8);
  lVar25 = *(long *)(param_1[0xd] + 0x88);
  lVar26 = *(long *)(lVar23 + 0x30);
  lVar22 = (long)local_190 - ((long)*(int *)(lVar23 + 4) * 4 + 0xfU & 0xfffffffffffffff0);
  local_c8 = _vorbis_block_alloc(param_1,(long)*(int *)(lVar23 + 4) << 3);
  puVar9 = (undefined8 *)_vorbis_block_alloc(param_1,(long)*(int *)(lVar23 + 4) << 3);
  local_f8 = _vorbis_block_alloc(param_1,(long)*(int *)(lVar23 + 4) << 3);
  iVar8 = *(int *)(lVar23 + 4);
  fVar41 = *(float *)(lVar24 + 8);
  uVar15 = lVar22 - ((long)iVar8 * 4 + 0xfU & 0xfffffffffffffff0);
  local_128 = param_1[7];
  local_d8 = 0;
  if (local_128 != 0) {
    local_d8 = 0xc0;
  }
  local_d8 = *(long *)(lVar25 + 0x68) + (long)*(int *)(lVar24 + 0xc) * 0x60 + local_d8;
  *(int *)((long)param_1 + 0x4c) = (int)local_128;
  uVar2 = uVar35;
  if ((int)uVar35 < 0) {
    uVar2 = uVar35 + 1;
  }
  local_110 = (long *)(ulong)uVar2;
  local_a8 = *(int **)(lVar26 + ((local_128 << 0x20) >> 0x1d) + 0x328);
  local_f0 = -(ulong)((uint)((int)uVar2 >> 1) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)((int)uVar2 >> 1) << 2;
  local_100 = lVar24;
  local_d0 = lVar26;
  local_b8 = uVar28;
  local_b0 = uVar15;
  local_a0 = param_1;
  local_98 = lVar25;
  if (0 < iVar8) {
    lVar24 = 0;
    local_108 = lVar25 + 8;
    fVar31 = (float)NEON_fmadd((float)(ulong)((uint)(4.0 / (float)uVar35) & 0x7fffffff),0x3540a8c1,
                               0xc43f2770);
    do {
      uVar28 = local_f0;
      lVar19 = lVar24 * 8;
      pfVar27 = *(float **)(*param_1 + lVar19);
      uVar10 = _vorbis_block_alloc(param_1,local_f0);
      puVar9[lVar24] = uVar10;
      uVar10 = _vorbis_block_alloc(param_1,uVar28);
      lVar26 = local_c8;
      uVar36 = *(undefined4 *)(param_1 + 6);
      uVar3 = *(undefined4 *)(param_1 + 7);
      uVar4 = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)(local_c8 + lVar19) = uVar10;
      _vorbis_apply_window(pfVar27,local_108,local_d0,uVar36,uVar3,uVar4);
      mdct_forward(**(undefined8 **)(lVar25 + param_1[7] * 8 + 0x10),pfVar27,
                   *(undefined8 *)(lVar26 + lVar19));
      drft_forward(lVar25 + param_1[7] * 0x18 + 0x20,pfVar27);
      fVar32 = (float)NEON_fmadd((float)(ulong)((uint)*pfVar27 & 0x7fffffff),0x3540a8c1,0xc43f2770);
      fVar32 = fVar32 + fVar31 + 0.345 + 0.345;
      *(float *)(local_b0 + lVar24 * 4) = fVar32;
      *pfVar27 = fVar32;
      if (2 < (int)local_b8) {
        lVar26 = 0;
        lVar19 = 4;
        fVar39 = fVar32;
        do {
          lVar21 = lVar26 + 3;
          uVar35 = NEON_fmadd(pfVar27[lVar26 + 1],pfVar27[lVar26 + 1],
                              pfVar27[lVar26 + 2] * pfVar27[lVar26 + 2]);
          lVar26 = lVar26 + 2;
          uVar36 = NEON_fmadd((float)(ulong)(uVar35 & 0x7fffffff),0x3540a8c1,0xc43f2770);
          fVar32 = (float)NEON_fmadd(uVar36,0x3f000000,fVar31 + 0.345);
          fVar32 = fVar32 + 0.345;
          *(float *)((long)pfVar27 + lVar19) = fVar32;
          lVar19 = lVar19 + 4;
          if (fVar32 <= fVar39) {
            fVar32 = fVar39;
          }
          fVar39 = fVar32;
        } while (lVar21 < (long)(uVar28 - 1));
        *(float *)(local_b0 + lVar24 * 4) = fVar32;
      }
      if (0.0 < fVar32) {
        fVar32 = 0.0;
        *(undefined4 *)(local_b0 + lVar24 * 4) = 0;
      }
      lVar24 = lVar24 + 1;
      if (fVar32 <= fVar41) {
        fVar32 = fVar41;
      }
      fVar41 = fVar32;
    } while (lVar24 < *(int *)(lVar23 + 4));
  }
  plVar20 = local_a0;
  uVar28 = local_f0;
  local_120 = _vorbis_block_alloc(local_a0,local_f0);
  local_118 = _vorbis_block_alloc(plVar20,uVar28);
  uVar28 = (ulong)*(uint *)(lVar23 + 4);
  piVar29 = local_a8;
  if (0 < (int)*(uint *)(lVar23 + 4)) {
    local_f0 = 0;
    local_130 = ((long)local_110 << 0x20) >> 0x21;
    local_138 = local_130 & 0xffffffff;
    local_140 = local_130 & 0xfffffff8;
    local_158 = local_130 + 4;
    local_148 = local_130 + local_138;
    uStack_160 = 0x3540a8c1;
    uStack_15c = 0x3540a8c1;
    local_170 = 0xc43f2770c43f2770;
    local_190[2] = -5.746910534253905e+20;
    local_190[1] = 0.345;
    local_190[0] = 0.345;
    do {
      uVar5 = local_130;
      lVar25 = local_f0 * 8;
      lVar26 = *(long *)(*plVar20 + lVar25);
      local_108 = (long)piVar29[local_f0 + 1];
      uVar30 = *(ulong *)(local_c8 + lVar25);
      uVar28 = lVar26 + local_130 * 4;
      *(int *)((long)plVar20 + 0x4c) = (int)local_128;
      puVar11 = (undefined8 *)_vorbis_block_alloc(plVar20,0x78);
      lVar24 = local_d8;
      uVar10 = local_120;
      local_110 = (long *)(local_f8 + lVar25);
      *local_110 = (long)puVar11;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[0xe] = 0;
      if (1 < (int)local_b8) {
        if (((uint)uVar5 < 8) ||
           ((uVar28 < uVar30 + local_138 * 4 && (uVar30 < (ulong)(lVar26 + local_148 * 4))))) {
          uVar18 = 0;
        }
        else {
          pauVar14 = (undefined (*) [16])(uVar30 + 0x10);
          puVar11 = (undefined8 *)(lVar26 + local_158 * 4);
          uVar18 = local_140;
          do {
            auVar34 = pauVar14[-1];
            auVar38 = *pauVar14;
            pauVar14 = pauVar14 + 2;
            uVar18 = uVar18 - 8;
            auVar33._0_8_ = auVar34._0_8_ & 0x7fffffff7fffffff;
            auVar33._8_4_ = auVar34._8_4_ & 0x7fffffff;
            auVar33._12_4_ = auVar34._12_4_ & 0x7fffffff;
            auVar37._0_8_ = auVar38._0_8_ & 0x7fffffff7fffffff;
            auVar37._8_4_ = auVar38._8_4_ & 0x7fffffff;
            auVar37._12_4_ = auVar38._12_4_ & 0x7fffffff;
            auVar34 = NEON_ucvtf(auVar33,4);
            auVar38 = NEON_ucvtf(auVar37,4);
            fVar39 = (float)((ulong)local_170 >> 0x20);
            fVar40 = (float)((ulong)uStack_168 >> 0x20);
            fVar31 = (float)((ulong)local_190[2] >> 0x20);
            fVar32 = (float)((ulong)local_190[3] >> 0x20);
            puVar11[-1] = CONCAT44((float)((double)(fVar32 + fVar40 * auVar34._12_4_) + local_190[1]
                                          ),(float)((double)(SUB84(local_190[3],0) +
                                                            (float)uStack_168 * auVar34._8_4_) +
                                                   local_190[0]));
            puVar11[-2] = CONCAT44((float)((double)(fVar31 + fVar39 * auVar34._4_4_) + local_190[1])
                                   ,(float)((double)(SUB84(local_190[2],0) +
                                                    (float)local_170 * auVar34._0_4_) + local_190[0]
                                           ));
            puVar11[1] = CONCAT44((float)((double)(fVar32 + fVar40 * auVar38._12_4_) + local_190[1])
                                  ,(float)((double)(SUB84(local_190[3],0) +
                                                   (float)uStack_168 * auVar38._8_4_) + local_190[0]
                                          ));
            *puVar11 = CONCAT44((float)((double)(fVar31 + fVar39 * auVar38._4_4_) + local_190[1]),
                                (float)((double)(SUB84(local_190[2],0) +
                                                (float)local_170 * auVar38._0_4_) + local_190[0]));
            puVar11 = puVar11 + 4;
          } while (uVar18 != 0);
          uVar18 = local_140;
          if (local_140 == local_138) goto LAB_00e158b0;
        }
        lVar25 = local_138 - uVar18;
        pfVar27 = (float *)(lVar26 + uVar5 * 4 + uVar18 * 4);
        puVar16 = (uint *)(uVar30 + uVar18 * 4);
        do {
          lVar25 = lVar25 + -1;
          fVar31 = (float)NEON_fmadd((float)(ulong)(*puVar16 & 0x7fffffff),0x3540a8c1,0xc43f2770);
          *pfVar27 = fVar31 + 0.345;
          pfVar27 = pfVar27 + 1;
          puVar16 = puVar16 + 1;
        } while (lVar25 != 0);
      }
LAB_00e158b0:
      _vp_noisemask(local_d8,uVar28,local_120);
      uVar12 = local_118;
      _vp_tonemask(lVar24,lVar26,local_118);
      _vp_offset_and_mix(lVar24,uVar10,uVar12,1,lVar26,uVar30,uVar28);
      plVar20 = local_a0;
      lVar24 = local_108;
      if (*(int *)(local_d0 + (long)piVar29[local_108 + 0x101] * 4 + 0x528) != 1) {
        uVar10 = 0xffffffff;
        goto LAB_00e16004;
      }
      uVar10 = floor1_fit(local_a0,*(undefined8 *)
                                    (*(long *)(local_98 + 0x58) +
                                    (long)piVar29[local_108 + 0x101] * 8),uVar28,lVar26);
      plVar6 = local_110;
      *(undefined8 *)(*local_110 + 0x38) = uVar10;
      iVar8 = vorbis_bitrate_managed(plVar20);
      uVar10 = local_120;
      if ((iVar8 != 0) && (*(long *)(*plVar6 + 0x38) != 0)) {
        piVar1 = piVar29 + lVar24 + 0x101;
        _vp_offset_and_mix(local_d8,local_120,local_118,2,lVar26,uVar30,uVar28);
        lVar24 = local_98;
        uVar12 = floor1_fit(local_a0,*(undefined8 *)(*(long *)(local_98 + 0x58) + (long)*piVar1 * 8)
                            ,uVar28,lVar26);
        *(undefined8 *)(*plVar6 + 0x70) = uVar12;
        _vp_offset_and_mix(local_d8,uVar10,local_118,0,lVar26,uVar30,uVar28);
        plVar20 = local_a0;
        uVar10 = floor1_fit(local_a0,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)*piVar1 * 8),
                            uVar28,lVar26);
        iVar8 = *piVar1;
        *(undefined8 *)*plVar6 = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)*plVar6,((undefined8 *)*plVar6)[7],0x2492);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 8) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)*plVar6,((undefined8 *)*plVar6)[7],0x4924);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x10) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)*plVar6,((undefined8 *)*plVar6)[7],0x6db6);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x18) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)*plVar6,((undefined8 *)*plVar6)[7],0x9249);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x20) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)*plVar6,((undefined8 *)*plVar6)[7],0xb6db);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x28) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)*plVar6,((undefined8 *)*plVar6)[7],0xdb6d);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x30) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)(*plVar6 + 0x38),*(undefined8 *)(*plVar6 + 0x70),0x2492);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x40) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)(*plVar6 + 0x38),*(undefined8 *)(*plVar6 + 0x70),0x4924);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x48) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)(*plVar6 + 0x38),*(undefined8 *)(*plVar6 + 0x70),0x6db6);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x50) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)(*plVar6 + 0x38),*(undefined8 *)(*plVar6 + 0x70),0x9249);
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x58) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)(*plVar6 + 0x38),*(undefined8 *)(*plVar6 + 0x70),0xb6db);
        piVar29 = local_a8;
        iVar8 = *piVar1;
        *(undefined8 *)(*plVar6 + 0x60) = uVar10;
        uVar10 = floor1_interpolate_fit
                           (plVar20,*(undefined8 *)(*(long *)(lVar24 + 0x58) + (long)iVar8 * 8),
                            *(undefined8 *)(*plVar6 + 0x38),*(undefined8 *)(*plVar6 + 0x70),0xdb6d);
        *(undefined8 *)(*plVar6 + 0x68) = uVar10;
      }
      uVar28 = (ulong)*(int *)(lVar23 + 4);
      local_f0 = local_f0 + 1;
      plVar20 = local_a0;
    } while ((long)local_f0 < (long)uVar28);
  }
  local_f0 = (ulong)(int)local_128;
  *(float *)(local_100 + 8) = fVar41;
  lVar26 = uVar15 - ((-(uVar28 >> 0x1f & 1) & 0xfffffff800000000 | (uVar28 & 0xffffffff) << 3) + 0xf
                    & 0xfffffffffffffff0);
  lVar25 = lVar26 - ((-(uVar28 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar28 & 0xffffffff) << 2) + 0xf
                    & 0xfffffffffffffff0);
  iVar8 = vorbis_bitrate_managed(plVar20);
  lVar24 = local_d0;
  local_108 = local_d0 + 0x1350;
  uVar15 = 7;
  if (iVar8 != 0) {
    uVar15 = 0;
  }
  vorbis_bitrate_managed(plVar20);
  puVar16 = (uint *)(piVar29 + 1);
  local_e8 = puVar9;
  local_e0 = lVar22;
  local_c0 = lVar23;
  do {
    uVar10 = *(undefined8 *)(local_100 + uVar15 * 8 + 0x10);
    oggpack_write(uVar10,0,1);
    oggpack_write(uVar10,local_f0,*(undefined4 *)(local_98 + 0x50));
    if (plVar20[7] != 0) {
      oggpack_write(uVar10,plVar20[6],1);
      oggpack_write(uVar10,plVar20[8],1);
    }
    plVar20 = local_a0;
    lVar19 = local_e0;
    puVar9 = local_e8;
    lVar22 = local_f8;
    iVar8 = *(int *)(lVar23 + 4);
    local_b8 = uVar10;
    local_b0 = uVar15;
    if (0 < iVar8) {
      lVar21 = 0;
      do {
        uVar36 = floor1_encode(uVar10,plVar20,
                               *(undefined8 *)
                                (*(long *)(local_98 + 0x58) +
                                (long)local_a8[(long)(int)puVar16[lVar21] + 0x101] * 8),
                               *(undefined8 *)(*(long *)(lVar22 + lVar21 * 8) + local_b0 * 8),
                               puVar9[lVar21]);
        *(undefined4 *)(lVar19 + lVar21 * 4) = uVar36;
        lVar21 = lVar21 + 1;
        iVar8 = *(int *)(local_c0 + 4);
        lVar23 = local_c0;
        lVar24 = local_d0;
        piVar29 = local_a8;
      } while (lVar21 < iVar8);
    }
    plVar20 = local_a0;
    lVar7 = local_c8;
    lVar21 = local_d8;
    lVar19 = local_e0;
    puVar9 = local_e8;
    lVar22 = local_108;
    uVar15 = local_b0 & 0xffffffff;
    uVar36 = *(undefined4 *)(lVar24 + local_a0[7] * 0x3c + local_b0 * 4 + 0x14c4);
    *(int *)(lVar25 + -0x10) = iVar8;
    _vp_couple_quantize_normalize(uVar15,lVar22,lVar21,piVar29,lVar7,puVar9,lVar19,uVar36);
    if (0 < *piVar29) {
      uVar15 = 0;
      do {
        iVar8 = *(int *)(lVar23 + 4);
        lVar22 = (long)piVar29[uVar15 + 0x111];
        if (iVar8 < 1) {
          iVar13 = 0;
        }
        else {
          lVar21 = 0;
          iVar13 = 0;
          do {
            if (uVar15 == puVar16[lVar21]) {
              *(uint *)(lVar25 + (long)iVar13 * 4) = (uint)(*(int *)(lVar19 + lVar21 * 4) != 0);
              *(undefined8 *)(lVar26 + (long)iVar13 * 8) = puVar9[lVar21];
              iVar8 = *(int *)(lVar23 + 4);
              iVar13 = iVar13 + 1;
            }
            lVar21 = lVar21 + 1;
          } while (lVar21 < iVar8);
        }
        lVar21 = lVar24 + lVar22 * 4;
        uVar10 = (**(code **)(*(long *)(_residue_P + (long)*(int *)(lVar21 + 0x828) * 8) + 0x28))
                           (local_a0,*(undefined8 *)(*(long *)(local_98 + 0x60) + lVar22 * 8),lVar26
                            ,lVar25,iVar13);
        uVar28 = (ulong)*(uint *)(lVar23 + 4);
        if ((int)*(uint *)(lVar23 + 4) < 1) {
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          puVar17 = puVar16;
          puVar11 = puVar9;
          do {
            if (uVar15 == *puVar17) {
              *(undefined8 *)(lVar26 + (long)iVar8 * 8) = *puVar11;
              iVar8 = iVar8 + 1;
            }
            puVar11 = puVar11 + 1;
            puVar17 = puVar17 + 1;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        plVar20 = local_a0;
        (**(code **)(*(long *)(_residue_P + (long)*(int *)(lVar21 + 0x828) * 8) + 0x30))
                  (local_b8,local_a0,*(undefined8 *)(*(long *)(local_98 + 0x60) + lVar22 * 8),lVar26
                   ,lVar25,iVar8,uVar10,uVar15 & 0xffffffff);
        uVar15 = uVar15 + 1;
        piVar29 = local_a8;
      } while ((long)uVar15 < (long)*local_a8);
    }
    uVar5 = local_b0;
    local_b8 = local_b0 + 1;
    iVar8 = vorbis_bitrate_managed(plVar20);
    uVar28 = 7;
    if (iVar8 != 0) {
      uVar28 = 0xe;
    }
    uVar15 = local_b8;
  } while (uVar5 < uVar28);
  uVar10 = 0;
LAB_00e16004:
  if (*(long *)(local_150 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


