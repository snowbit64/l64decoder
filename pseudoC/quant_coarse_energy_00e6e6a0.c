// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quant_coarse_energy
// Entry Point: 00e6e6a0
// Size: 1488 bytes
// Signature: undefined quant_coarse_energy(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined8 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17)


void quant_coarse_energy(long param_1,ulong param_2,int param_3,int param_4,long param_5,
                        void *param_6,uint param_7,void *param_8,long *param_9,uint param_10,
                        uint param_11,int param_12,int param_13,int *param_14,int param_15,
                        int param_16,int param_17)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  void *__dest;
  undefined (*pauVar14) [16];
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  short *psVar18;
  long lVar19;
  short *psVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined (*pauVar30) [16];
  undefined *__dest_00;
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
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  undefined auVar62 [16];
  undefined auVar63 [16];
  void *pvStack_1b0;
  long *plStack_1a8;
  uint auStack_1a0 [6];
  undefined2 auStack_188 [4];
  int aiStack_180 [4];
  undefined auStack_170 [4];
  int local_16c;
  void *local_168;
  long local_160;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  uint local_144;
  int local_140;
  int local_13c;
  ulong local_138;
  int local_12c;
  void *local_128;
  long local_120;
  int *local_118;
  undefined *local_110;
  ulong local_108;
  long local_100;
  uint local_f4;
  long local_f0;
  long lStack_e8;
  undefined4 local_e0;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_70;
  
  local_120 = tpidr_el0;
  local_70 = *(long *)(local_120 + 0x28);
  iVar13 = (int)param_2;
  if (param_13 == 0) {
    if (param_15 == 0) {
      iVar31 = *param_14;
      iVar32 = (param_3 - iVar13) * param_10;
      if (iVar31 != iVar32 * 2 && iVar31 + iVar32 * -2 < 0 == SBORROW4(iVar31,iVar32 * 2)) {
        local_144 = (uint)(iVar32 < param_12);
        goto LAB_00e6e6fc;
      }
    }
    local_144 = 0;
    lVar22 = (long)*(int *)(param_1 + 8);
    if (param_4 <= iVar13) goto LAB_00e6e88c;
LAB_00e6e718:
    lVar25 = (long)iVar13;
    uVar26 = param_4 - lVar25;
    uVar27 = uVar26 & 0xfffffffffffffff0;
    lVar19 = (-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + 0x10;
    lVar23 = 0;
    uVar24 = 0;
    local_140 = 0;
    uVar11 = param_10;
    if ((int)param_10 < 2) {
      uVar11 = 1;
    }
    puVar28 = (undefined8 *)(param_5 + lVar19);
    pauVar30 = (undefined (*) [16])((long)param_6 + lVar19);
    do {
      lVar19 = lVar25;
      if (uVar26 < 0x10) {
LAB_00e6e808:
        lVar15 = param_4 - lVar19;
        lVar19 = (lVar19 + lVar23) * 2;
        psVar18 = (short *)((long)param_6 + lVar19);
        psVar20 = (short *)(param_5 + lVar19);
        do {
          lVar15 = lVar15 + -1;
          iVar31 = ((int)*psVar20 >> 3) - ((int)*psVar18 >> 3);
          local_140 = local_140 + iVar31 * iVar31;
          psVar18 = psVar18 + 1;
          psVar20 = psVar20 + 1;
        } while (lVar15 != 0);
      }
      else {
        iVar32 = 0;
        iVar33 = 0;
        iVar34 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        iVar38 = 0;
        iVar39 = 0;
        iVar40 = 0;
        iVar41 = 0;
        iVar42 = 0;
        iVar43 = 0;
        iVar44 = 0;
        iVar45 = 0;
        iVar31 = 0;
        pauVar14 = pauVar30;
        puVar16 = puVar28;
        uVar17 = uVar27;
        do {
          uVar3 = puVar16[-1];
          uVar2 = puVar16[-2];
          uVar7 = puVar16[1];
          uVar6 = *puVar16;
          uVar17 = uVar17 - 0x10;
          puVar16 = puVar16 + 4;
          auVar62 = pauVar14[-1];
          auVar63 = *pauVar14;
          pauVar14 = pauVar14 + 2;
          sVar46 = ((short)uVar2 >> 3) - (auVar62._0_2_ >> 3);
          sVar47 = ((short)((ulong)uVar2 >> 0x10) >> 3) - (auVar62._2_2_ >> 3);
          sVar48 = ((short)((ulong)uVar2 >> 0x20) >> 3) - (auVar62._4_2_ >> 3);
          sVar49 = (short)((long)uVar2 >> 0x33) - (auVar62._6_2_ >> 3);
          sVar50 = ((short)uVar3 >> 3) - (auVar62._8_2_ >> 3);
          sVar51 = ((short)((ulong)uVar3 >> 0x10) >> 3) - (auVar62._10_2_ >> 3);
          sVar52 = ((short)((ulong)uVar3 >> 0x20) >> 3) - (auVar62._12_2_ >> 3);
          sVar53 = (short)((long)uVar3 >> 0x33) - (auVar62._14_2_ >> 3);
          sVar54 = ((short)uVar6 >> 3) - (auVar63._0_2_ >> 3);
          sVar55 = ((short)((ulong)uVar6 >> 0x10) >> 3) - (auVar63._2_2_ >> 3);
          sVar56 = ((short)((ulong)uVar6 >> 0x20) >> 3) - (auVar63._4_2_ >> 3);
          sVar57 = (short)((long)uVar6 >> 0x33) - (auVar63._6_2_ >> 3);
          sVar58 = ((short)uVar7 >> 3) - (auVar63._8_2_ >> 3);
          sVar59 = ((short)((ulong)uVar7 >> 0x10) >> 3) - (auVar63._10_2_ >> 3);
          sVar60 = ((short)((ulong)uVar7 >> 0x20) >> 3) - (auVar63._12_2_ >> 3);
          sVar61 = (short)((long)uVar7 >> 0x33) - (auVar63._14_2_ >> 3);
          auVar62._2_2_ = sVar47;
          auVar62._0_2_ = sVar46;
          auVar62._4_2_ = sVar48;
          auVar62._6_2_ = sVar49;
          auVar62._8_2_ = sVar50;
          auVar62._10_2_ = sVar51;
          auVar62._12_2_ = sVar52;
          auVar62._14_2_ = sVar53;
          auVar63._2_2_ = sVar47;
          auVar63._0_2_ = sVar46;
          auVar63._4_2_ = sVar48;
          auVar63._6_2_ = sVar49;
          auVar63._8_2_ = sVar50;
          auVar63._10_2_ = sVar51;
          auVar63._12_2_ = sVar52;
          auVar63._14_2_ = sVar53;
          auVar62 = NEON_ext(auVar62,auVar63,8,1);
          local_140 = local_140 + (int)sVar46 * (int)sVar46;
          iVar31 = iVar31 + (int)sVar47 * (int)sVar47;
          iVar32 = iVar32 + (int)sVar48 * (int)sVar48;
          iVar33 = iVar33 + (int)sVar49 * (int)sVar49;
          auVar4._2_2_ = sVar55;
          auVar4._0_2_ = sVar54;
          auVar4._4_2_ = sVar56;
          auVar4._6_2_ = sVar57;
          auVar4._8_2_ = sVar58;
          auVar4._10_2_ = sVar59;
          auVar4._12_2_ = sVar60;
          auVar4._14_2_ = sVar61;
          auVar5._2_2_ = sVar55;
          auVar5._0_2_ = sVar54;
          auVar5._4_2_ = sVar56;
          auVar5._6_2_ = sVar57;
          auVar5._8_2_ = sVar58;
          auVar5._10_2_ = sVar59;
          auVar5._12_2_ = sVar60;
          auVar5._14_2_ = sVar61;
          auVar63 = NEON_ext(auVar4,auVar5,8,1);
          iVar38 = iVar38 + (int)sVar54 * (int)sVar54;
          iVar39 = iVar39 + (int)sVar55 * (int)sVar55;
          iVar40 = iVar40 + (int)sVar56 * (int)sVar56;
          iVar41 = iVar41 + (int)sVar57 * (int)sVar57;
          iVar34 = iVar34 + (int)auVar62._0_2_ * (int)auVar62._0_2_;
          iVar35 = iVar35 + (int)auVar62._2_2_ * (int)auVar62._2_2_;
          iVar36 = iVar36 + (int)auVar62._4_2_ * (int)auVar62._4_2_;
          iVar37 = iVar37 + (int)auVar62._6_2_ * (int)auVar62._6_2_;
          iVar42 = iVar42 + (int)auVar63._0_2_ * (int)auVar63._0_2_;
          iVar43 = iVar43 + (int)auVar63._2_2_ * (int)auVar63._2_2_;
          iVar44 = iVar44 + (int)auVar63._4_2_ * (int)auVar63._4_2_;
          iVar45 = iVar45 + (int)auVar63._6_2_ * (int)auVar63._6_2_;
        } while (uVar17 != 0);
        local_140 = iVar38 + local_140 + iVar42 + iVar34 + iVar39 + iVar31 + iVar43 + iVar35 +
                    iVar40 + iVar32 + iVar44 + iVar36 + iVar41 + iVar33 + iVar45 + iVar37;
        lVar19 = uVar27 + lVar25;
        if (uVar26 != uVar27) goto LAB_00e6e808;
      }
      uVar24 = uVar24 + 1;
      puVar28 = (undefined8 *)((long)puVar28 + lVar22 * 2);
      pauVar30 = (undefined (*) [16])(*pauVar30 + lVar22 * 2);
      lVar23 = lVar23 + lVar22;
    } while (uVar24 != uVar11);
    if (local_140 < 0x320000) {
      local_140 = local_140 >> 0xe;
    }
    else {
      local_140 = 200;
    }
  }
  else {
    local_144 = 1;
LAB_00e6e6fc:
    lVar22 = (long)*(int *)(param_1 + 8);
    if (iVar13 < param_4) goto LAB_00e6e718;
LAB_00e6e88c:
    local_140 = 0;
  }
  local_108 = (ulong)param_11;
  uVar11 = *(uint *)((long)param_9 + 0x1c);
  local_150 = *param_14;
  local_14c = param_12 * 0x80;
  plVar29 = param_9 + 4;
  local_118 = param_14;
  local_90 = *param_9;
  iVar13 = param_3 - iVar13;
  uVar12 = (int)lVar22 * param_10;
  local_148 = *(int *)(param_9 + 3) + (int)LZCOUNT(*(undefined4 *)plVar29);
  uVar24 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1;
  bVar1 = local_148 - 0x1dU <= param_7;
  bVar10 = local_14c < 0x4000;
  bVar9 = false;
  if (bVar10) {
    bVar9 = iVar13 + -10 < 0;
  }
  local_148 = local_148 + -0x20;
  uStack_88 = (undefined4)param_9[1];
  uStack_7c = *(undefined8 *)((long)param_9 + 0x14);
  if ((!bVar10 || iVar13 == 10) || bVar9 != (bVar10 && SBORROW4(iVar13,10))) {
    local_14c = 0x4000;
  }
  if (param_17 != 0) {
    local_14c = 0xc00;
  }
  uVar26 = uVar24 + 0xf & 0xfffffffffffffff0;
  local_a0 = param_9[6];
  uStack_84 = (undefined4)*(undefined8 *)((long)param_9 + 0xc);
  uStack_80 = (undefined4)((ulong)*(undefined8 *)((long)param_9 + 0xc) >> 0x20);
  lStack_a8 = param_9[5];
  local_b0 = *plVar29;
  __dest_00 = auStack_170 + -uVar26;
  local_13c = param_17;
  puVar21 = __dest_00 + -uVar26;
  local_138 = param_2;
  local_12c = param_3;
  local_128 = param_8;
  local_110 = puVar21;
  local_100 = param_1;
  local_f4 = param_7;
  memcpy(__dest_00,param_6,uVar24);
  lVar22 = local_100;
  iVar31 = local_13c;
  iVar13 = local_14c;
  bVar10 = local_144 != 0;
  if ((param_15 != 0 && bVar1) || (bVar1 && bVar10)) {
    iVar32 = (int)local_108;
    *(int *)(puVar21 + -0x28) = iVar32;
    *(int *)(puVar21 + -0x10) = iVar31;
    iVar31 = local_12c;
    *(short *)(puVar21 + -0x18) = (short)iVar13;
    uVar12 = local_f4;
    *(uint *)(puVar21 + -0x30) = param_10;
    *(undefined4 *)(puVar21 + -0x20) = 1;
    puVar8 = local_110;
    iVar13 = local_148;
    *(long **)(puVar21 + -0x38) = param_9;
    uVar24 = local_138;
    *(undefined **)(puVar21 + -0x40) = puVar8;
    uVar12 = FUN_00e6ec70(lVar22,uVar24,iVar31,param_5,__dest_00,uVar12,iVar13,
                          &UNK_005677dd + (long)iVar32 * 0x54);
    if (bVar1 && bVar10) goto LAB_00e6eb6c;
LAB_00e6e994:
    local_144 = uVar12;
    local_16c = ec_tell_frac(param_9);
    lStack_e8 = param_9[2];
    local_f0 = param_9[1];
    local_160 = *param_9;
    local_e0 = *(undefined4 *)(param_9 + 3);
    local_154 = *(int *)((long)param_9 + 0x1c);
    lStack_c8 = param_9[5];
    local_d0 = *plVar29;
    local_168 = (void *)(local_160 + (ulong)uVar11);
    local_c0 = param_9[6];
    uVar26 = (ulong)(local_154 - uVar11);
    puVar21 = puVar21 + -(uVar26 + 0xf & 0x1fffffff0);
    memcpy(puVar21,local_168,uVar26);
    lVar22 = local_100;
    iVar32 = local_12c;
    iVar13 = local_13c;
    param_9[1] = CONCAT44(uStack_84,uStack_88);
    *param_9 = local_90;
    *(undefined8 *)((long)param_9 + 0x14) = uStack_7c;
    *(ulong *)((long)param_9 + 0xc) = CONCAT44(uStack_80,uStack_84);
    *(uint *)((long)param_9 + 0x1c) = uVar11;
    param_9[5] = lStack_a8;
    *plVar29 = local_b0;
    iVar33 = (int)local_108;
    param_9[6] = local_a0;
    *(undefined4 *)(puVar21 + -0x20) = 0;
    *(int *)(puVar21 + -0x10) = iVar13;
    uVar11 = local_f4;
    iVar31 = local_148;
    iVar13 = local_14c;
    *(int *)(puVar21 + -0x28) = iVar33;
    __dest = local_128;
    *(short *)(puVar21 + -0x18) = (short)iVar13;
    uVar24 = local_138;
    *(uint *)(puVar21 + -0x30) = param_10;
    *(void **)(puVar21 + -0x40) = __dest;
    *(long **)(puVar21 + -0x38) = param_9;
    uVar11 = FUN_00e6ec70(lVar22,uVar24,iVar32,param_5,param_6,uVar11,iVar31,
                          &UNK_005677b3 + (long)iVar33 * 0x54);
    if (param_15 != 0 && bVar1) {
      if ((int)local_144 < (int)uVar11) {
LAB_00e6ea9c:
        param_9[2] = lStack_e8;
        param_9[1] = local_f0;
        *(undefined4 *)(param_9 + 3) = local_e0;
        *param_9 = local_160;
        param_9[5] = lStack_c8;
        *plVar29 = local_d0;
        *(int *)((long)param_9 + 0x1c) = local_154;
        param_9[6] = local_c0;
        memcpy(local_168,puVar21,uVar26);
        uVar11 = *(int *)(lVar22 + 8) * param_10;
        memcpy(param_6,__dest_00,-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar11 << 1)
        ;
        iVar13 = *(int *)(lVar22 + 8);
        goto LAB_00e6eb90;
      }
      if (local_144 == uVar11) {
        uVar11 = 0;
        if (param_10 << 9 != 0) {
          uVar11 = (param_16 * local_f4 * local_150) / (param_10 << 9);
        }
        iVar13 = ec_tell_frac(param_9);
        if (local_16c < (int)(iVar13 + uVar11)) goto LAB_00e6ea9c;
      }
    }
    *local_118 = local_140 +
                 (int)((ulong)((long)(short)((uint)((int)*(short *)(&DAT_004c6b68 +
                                                                   (long)(int)local_108 * 2) *
                                                   (int)*(short *)(&DAT_004c6b68 +
                                                                  (long)(int)local_108 * 2)) >> 0xf)
                              * (long)*local_118) >> 0xf);
    if (*(long *)(local_120 + 0x28) == local_70) {
      return;
    }
  }
  else {
    uVar12 = 0;
    if (!bVar1 || !bVar10) goto LAB_00e6e994;
LAB_00e6eb6c:
    lVar22 = local_100;
    uVar11 = *(int *)(local_100 + 8) * param_10;
    memcpy(param_6,__dest_00,-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar11 << 1);
    iVar13 = *(int *)(lVar22 + 8);
    __dest = local_128;
LAB_00e6eb90:
    memcpy(__dest,local_110,
           -(ulong)(iVar13 * param_10 >> 0x1f) & 0xfffffffe00000000 |
           (ulong)(iVar13 * param_10) << 1);
    *local_118 = local_140;
    if (*(long *)(local_120 + 0x28) == local_70) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


