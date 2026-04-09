// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f7e0
// Entry Point: 00e4f7e0
// Size: 2852 bytes
// Signature: undefined FUN_00e4f7e0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00e4f7e0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined auVar4 [16];
  double dVar5;
  undefined8 *puVar6;
  void *pvVar7;
  int iVar8;
  short *psVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined auVar25 [12];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [12];
  long lVar32;
  undefined auVar29 [16];
  int iVar31;
  int iVar33;
  undefined auVar30 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  ulong uVar41;
  long lVar42;
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  ulong local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90 [2];
  double local_78;
  
  uVar1 = (param_3 & 0x7ffffffe) * 2 + 7 & 0xfffffff8;
  lVar21 = *(long *)(param_1 + 0x80);
  iVar8 = *(int *)(param_1 + 8) + uVar1;
  if (lVar21 == 0) {
    if (uVar1 == 0) {
      lVar10 = param_1 + (ulong)param_2 * 8;
      pvVar7 = (void *)0x0;
      *(undefined8 *)(lVar10 + 0x588) = 0;
    }
    else {
      pvVar7 = malloc((long)(int)uVar1);
      lVar10 = param_1 + (ulong)param_2 * 8;
      iVar8 = iVar8 + uVar1;
      *(void **)(lVar10 + 0x588) = pvVar7;
      pvVar7 = malloc((long)(int)uVar1);
    }
    puVar15 = (ulong *)(lVar10 + 0x588);
    lVar10 = param_1 + (ulong)param_2 * 8;
    uVar2 = (param_3 & 0xfffffffc) + 7 & 0xfffffff8;
    puVar14 = (ulong *)(lVar10 + 0x598);
    iVar8 = iVar8 + uVar2;
    *(void **)(lVar10 + 0x598) = pvVar7;
    *(int *)(param_1 + 8) = iVar8;
    if (uVar2 == 0) goto LAB_00e4f948;
    pvVar7 = malloc((long)(int)uVar2);
  }
  else {
    iVar38 = *(int *)(param_1 + 0x90);
    iVar40 = *(int *)(param_1 + 0x94);
    iVar37 = iVar38 + uVar1;
    if (iVar40 < iVar37) {
      lVar10 = 0;
      iVar39 = iVar37;
    }
    else {
      iVar39 = iVar37 + uVar1;
      lVar10 = lVar21 + iVar38;
      *(int *)(param_1 + 0x90) = iVar37;
      iVar38 = iVar37;
    }
    lVar42 = param_1 + (ulong)param_2 * 8;
    puVar15 = (ulong *)(lVar42 + 0x588);
    *(long *)(lVar42 + 0x588) = lVar10;
    if (iVar40 < iVar39) {
      lVar10 = 0;
      iVar39 = iVar38;
    }
    else {
      lVar10 = lVar21 + iVar38;
      *(int *)(param_1 + 0x90) = iVar39;
    }
    lVar42 = param_1 + (ulong)param_2 * 8;
    uVar2 = (param_3 & 0xfffffffc) + 7 & 0xfffffff8;
    puVar14 = (ulong *)(lVar42 + 0x598);
    iVar8 = iVar8 + uVar1 + uVar2;
    iVar37 = iVar39 + uVar2;
    *(long *)(lVar42 + 0x598) = lVar10;
    *(int *)(param_1 + 8) = iVar8;
    if (iVar40 < iVar37) {
LAB_00e4f948:
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)(lVar21 + iVar39);
      *(int *)(param_1 + 0x90) = iVar37;
    }
  }
  uVar11 = (ulong)param_2;
  *(void **)(param_1 + uVar11 * 8 + 0x5a8) = pvVar7;
  uVar18 = *puVar15;
  if (((uVar18 == 0) || (uVar20 = *puVar14, uVar20 == 0)) || (pvVar7 == (void *)0x0))
  goto LAB_00e50194;
  if (3 < (int)param_3) {
    dVar22 = (double)param_3;
    uVar2 = (param_3 >> 2) - 1;
    if ((uVar2 < 3) ||
       ((lVar10 = (ulong)uVar2 * 8 + 8, uVar18 < uVar20 + lVar10 && (uVar20 < uVar18 + lVar10)))) {
      lVar10 = 0;
      uVar12 = 0;
LAB_00e4f9bc:
      lVar42 = lVar10 * 4 + 4;
      iVar38 = (int)uVar12 << 2;
      iVar37 = (int)lVar10 + 1;
      pfVar17 = (float *)(uVar20 + lVar42);
      iVar40 = (param_3 >> 2) - (int)uVar12;
      pfVar13 = (float *)(uVar18 + lVar42);
      do {
        sincos(((double)iVar38 * 3.141592653589793) / dVar22,&dStack_108,&local_110);
        pfVar13[-1] = (float)local_110;
        *pfVar13 = -(float)dStack_108;
        sincos((((double)iVar37 * 3.141592653589793) / dVar22) * 0.5,&dStack_118,&local_120);
        iVar38 = iVar38 + 4;
        iVar37 = iVar37 + 2;
        iVar40 = iVar40 + -1;
        pfVar13 = pfVar13 + 2;
        pfVar17[-1] = (float)local_120 * 0.5;
        *pfVar17 = (float)dStack_118 * 0.5;
        pfVar17 = pfVar17 + 2;
      } while (iVar40 != 0);
    }
    else {
      uVar41 = (ulong)uVar2 + 1;
      uVar12 = uVar41 & 0x1fffffffc;
      lVar10 = uVar12 << 1;
      lStack_198 = SUB168(_DAT_004c3250,8);
      local_1a0 = SUB168(_DAT_004c3250,0);
      iVar40 = 2;
      iVar39 = 3;
      iVar37 = 0;
      iVar38 = 1;
      lStack_1a8 = SUB168(_DAT_004c4840,8);
      local_1b0 = SUB168(_DAT_004c4840,0);
      auVar36 = NEON_fmov(0x3fe0000000000000,8);
      uVar16 = uVar12;
      do {
        auVar47._0_8_ = (long)(iVar37 << 2);
        auVar47._8_8_ = (long)(iVar38 << 2);
        auVar46._0_8_ = (long)(iVar40 << 2);
        auVar46._8_8_ = (long)(iVar39 << 2);
        auVar47 = NEON_scvtf(auVar47,8);
        auVar44 = NEON_scvtf(auVar46,8);
        sincos((auVar44._0_8_ * 3.141592653589793) / dVar22,&local_b8,&local_c0);
        dVar24 = local_c0;
        sincos((auVar44._8_8_ * 3.141592653589793) / dVar22,&local_a8,&local_b0);
        dVar23 = local_b0;
        sincos((auVar47._0_8_ * 3.141592653589793) / dVar22,&local_98,&local_a0);
        dVar5 = local_a0;
        sincos((auVar47._8_8_ * 3.141592653589793) / dVar22,&local_78,local_90);
        auVar25[8] = (byte)lStack_1a8 | 1;
        auVar25._0_8_ = local_1b0 | 1;
        auVar25[9] = (undefined)((ulong)lStack_1a8 >> 8);
        auVar25[10] = (undefined)((ulong)lStack_1a8 >> 0x10);
        auVar25[11] = (undefined)((ulong)lStack_1a8 >> 0x18);
        auVar48._0_8_ = (long)(int)((uint)local_1b0 | 1);
        auVar48._8_8_ = (long)auVar25._8_4_;
        auVar34._0_8_ = (long)(int)((uint)local_1a0 | 1);
        auVar34._8_8_ = (long)(int)((uint)lStack_198 | 1);
        auVar46 = NEON_scvtf(auVar48,8);
        auVar47 = NEON_scvtf(auVar34,8);
        auVar44._8_4_ = SUB84(local_78,0);
        auVar44._0_8_ = local_98;
        auVar44._12_4_ = (int)((ulong)local_78 >> 0x20);
        lVar42 = (local_1b0 | 1) * 4;
        pfVar13 = (float *)((uVar18 - 4) + lVar42);
        *pfVar13 = (float)dVar5;
        pfVar13[1] = -(float)local_98;
        pfVar13[2] = (float)local_90[0];
        pfVar13[3] = -(float)auVar44._8_8_;
        pfVar13[4] = (float)dVar24;
        pfVar13[5] = -(float)local_b8;
        pfVar13[6] = (float)dVar23;
        pfVar13[7] = -(float)local_a8;
        sincos(((auVar47._0_8_ * 3.141592653589793) / dVar22) * auVar36._0_8_,&local_f8,&local_100);
        dVar24 = local_100;
        sincos(((auVar47._8_8_ * 3.141592653589793) / dVar22) * auVar36._8_8_,&local_e8,&local_f0);
        dVar23 = local_f0;
        sincos(((auVar46._0_8_ * 3.141592653589793) / dVar22) * auVar36._0_8_,&local_d8,&local_e0);
        dVar5 = local_e0;
        sincos(((auVar46._8_8_ * 3.141592653589793) / dVar22) * auVar36._8_8_,&local_c8,&local_d0);
        uVar16 = uVar16 - 4;
        pfVar13 = (float *)((uVar20 - 4) + lVar42);
        local_1a0 = local_1a0 + 8;
        lStack_198 = lStack_198 + 8;
        local_1b0 = local_1b0 + 8;
        lStack_1a8 = lStack_1a8 + 8;
        *pfVar13 = (float)dVar5 * 0.5;
        pfVar13[1] = (float)local_d8 * 0.5;
        pfVar13[2] = (float)local_d0 * 0.5;
        pfVar13[3] = (float)local_c8 * 0.5;
        pfVar13[4] = (float)dVar24 * 0.5;
        pfVar13[5] = (float)local_f8 * 0.5;
        pfVar13[6] = (float)dVar23 * 0.5;
        pfVar13[7] = (float)local_e8 * 0.5;
        iVar37 = iVar37 + 4;
        iVar38 = iVar38 + 4;
        iVar40 = iVar40 + 4;
        iVar39 = iVar39 + 4;
      } while (uVar16 != 0);
      if (uVar41 != uVar12) goto LAB_00e4f9bc;
    }
    if (7 < (int)param_3) {
      iVar37 = (int)param_3 >> 3;
      if (iVar37 < 2) {
        iVar37 = 1;
      }
      if (iVar37 - 1U < 3) {
        lVar10 = 0;
        uVar12 = 0;
      }
      else {
        uVar18 = (ulong)(iVar37 - 1U) + 1;
        uVar12 = uVar18 & 0x1fffffffc;
        lVar10 = uVar12 << 1;
        lVar42 = 2;
        uVar41 = 0;
        uVar20 = uVar12;
        auVar36 = _DAT_004c3250;
        do {
          lVar32 = auVar36._8_8_;
          auVar28[8] = (byte)lVar42 | 1;
          auVar28._0_8_ = uVar41 | 1;
          auVar28[9] = (char)((ulong)lVar42 >> 8);
          auVar28[10] = (char)((ulong)lVar42 >> 0x10);
          auVar28[11] = (char)((ulong)lVar42 >> 0x18);
          auVar29._0_8_ = (long)(int)(((uint)uVar41 | 1) << 1);
          auVar29._8_8_ = (long)(auVar28._8_4_ << 1);
          auVar26._0_8_ = (long)(int)((auVar36._0_4_ | 1) << 1);
          auVar26._8_8_ = (long)(int)((auVar36._8_4_ | 1) << 1);
          auVar46 = NEON_scvtf(auVar29,8);
          auVar44 = NEON_scvtf(auVar26,8);
          sincos((auVar44._0_8_ * 3.141592653589793) / dVar22,&local_158,&local_160);
          dVar24 = local_160;
          sincos((auVar44._8_8_ * 3.141592653589793) / dVar22,&local_148,&local_150);
          dVar23 = local_150;
          sincos((auVar46._0_8_ * 3.141592653589793) / dVar22,&local_138,&local_140);
          dVar5 = local_140;
          sincos((auVar46._8_8_ * 3.141592653589793) / dVar22,&local_128,&local_130);
          uVar20 = uVar20 - 4;
          pfVar13 = (float *)((long)pvVar7 + (uVar41 | 1) * 4 + -4);
          *pfVar13 = (float)dVar5;
          pfVar13[1] = -(float)local_138;
          pfVar13[2] = (float)local_130;
          pfVar13[3] = -(float)local_128;
          pfVar13[4] = (float)dVar24;
          pfVar13[5] = -(float)local_158;
          pfVar13[6] = (float)dVar23;
          pfVar13[7] = -(float)local_148;
          auVar36._0_8_ = auVar36._0_8_ + 8;
          auVar36._8_8_ = lVar32 + 8;
          uVar41 = uVar41 + 8;
          lVar42 = lVar42 + 8;
        } while (uVar20 != 0);
        if (uVar18 == uVar12) goto LAB_00e4ff3c;
      }
      pfVar13 = (float *)((long)pvVar7 + lVar10 * 4 + 4);
      iVar38 = (int)lVar10 * 2 + 2;
      iVar37 = iVar37 - (int)uVar12;
      do {
        sincos(((double)iVar38 * 3.141592653589793) / dVar22,&dStack_168,&local_170);
        iVar38 = iVar38 + 4;
        iVar37 = iVar37 + -1;
        pfVar13[-1] = (float)local_170;
        *pfVar13 = -(float)dStack_168;
        pfVar13 = pfVar13 + 2;
      } while (iVar37 != 0);
    }
  }
LAB_00e4ff3c:
  *(uint *)(param_1 + 8) = iVar8 + uVar1;
  if (lVar21 == 0) {
    if (uVar1 != 0) {
      puVar6 = (undefined8 *)malloc((long)(int)uVar1);
      goto LAB_00e4ff7c;
    }
LAB_00e4ffb8:
    puVar6 = (undefined8 *)(param_1 + uVar11 * 8 + 0x5b8);
  }
  else {
    iVar37 = *(int *)(param_1 + 0x90) + uVar1;
    if (*(int *)(param_1 + 0x94) < iVar37) goto LAB_00e4ffb8;
    puVar6 = (undefined8 *)(lVar21 + *(int *)(param_1 + 0x90));
    *(int *)(param_1 + 0x90) = iVar37;
LAB_00e4ff7c:
    *(undefined8 **)(param_1 + uVar11 * 8 + 0x5b8) = puVar6;
    if (puVar6 == (undefined8 *)0x0) goto LAB_00e50194;
    if (1 < (int)param_3) {
      uVar2 = (int)param_3 >> 1;
      uVar3 = uVar2;
      if ((int)uVar2 < 2) {
        uVar3 = 1;
      }
      uVar18 = (ulong)uVar3;
      dVar22 = (double)uVar2;
      if (uVar3 < 2) {
        uVar20 = 0;
      }
      else {
        auVar36 = NEON_fmov(0x3fe0000000000000,8);
        uVar20 = uVar18 & 0x7ffffffe;
        iVar37 = 0;
        iVar38 = 1;
        uVar12 = uVar20;
        puVar19 = puVar6;
        do {
          auVar27._0_8_ = (long)iVar37;
          auVar27._8_8_ = (long)iVar38;
          auVar44 = NEON_scvtf(auVar27,8);
          dVar24 = sin(((auVar44._8_8_ + auVar36._8_8_) / dVar22) * auVar36._8_8_ *
                       3.141592653589793);
          dVar23 = sin(((auVar44._0_8_ + auVar36._0_8_) / dVar22) * auVar36._0_8_ *
                       3.141592653589793);
          dVar24 = sin((double)((float)dVar24 * (float)dVar24) * 1.570796326794897);
          dVar23 = sin((double)((float)dVar23 * (float)dVar23) * 1.570796326794897);
          iVar37 = iVar37 + 2;
          iVar38 = iVar38 + 2;
          uVar12 = uVar12 - 2;
          *puVar19 = CONCAT44((float)dVar24,(float)dVar23);
          puVar19 = puVar19 + 1;
        } while (uVar12 != 0);
        if (uVar20 == uVar18) goto LAB_00e50108;
      }
      do {
        dVar24 = sin((((double)(int)uVar20 + 0.5) / dVar22) * 0.5 * 3.141592653589793);
        dVar24 = sin((double)((float)dVar24 * (float)dVar24) * 1.570796326794897);
        *(float *)((long)puVar6 + uVar20 * 4) = (float)dVar24;
        uVar20 = uVar20 + 1;
      } while (uVar18 != uVar20);
    }
LAB_00e50108:
    uVar2 = ((int)param_3 >> 2 & 0xfffffffeU) + 7 & 0xfffffff8;
    *(uint *)(param_1 + 8) = iVar8 + uVar1 + uVar2;
    if (lVar21 == 0) {
      if (uVar2 != 0) {
        pvVar7 = malloc((long)(int)uVar2);
        goto LAB_00e50150;
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x90) + uVar2;
      if (iVar8 <= *(int *)(param_1 + 0x94)) {
        pvVar7 = (void *)(lVar21 + *(int *)(param_1 + 0x90));
        *(int *)(param_1 + 0x90) = iVar8;
LAB_00e50150:
        *(void **)(param_1 + uVar11 * 8 + 0x5c8) = pvVar7;
        if (pvVar7 != (void *)0x0) {
          if ((int)param_3 < 0) {
            return 1;
          }
          if (param_3 >> 0xe == 0) {
            if (param_3 < 0x10) {
              if (param_3 < 8) {
                return 1;
              }
              iVar8 = (int)(char)(&DAT_004c5180)[param_3];
              goto LAB_00e50228;
            }
            iVar8 = 5;
            if (0x1ff < param_3) {
              iVar8 = 10;
            }
          }
          else if (param_3 >> 0x18 == 0) {
            iVar8 = 0xf;
            if (0x7ffff < param_3) {
              iVar8 = 0x14;
            }
          }
          else {
            iVar8 = 0x19;
            if (param_3 >> 0x1d != 0) {
              iVar8 = 0x1e;
            }
          }
          iVar8 = iVar8 + (char)(&DAT_004c5180)[param_3 >> iVar8];
LAB_00e50228:
          uVar11 = (ulong)(param_3 >> 3);
          uVar1 = 0x24 - iVar8;
          if (param_3 < 0x80) {
            uVar18 = 0;
          }
          else {
            auVar35._4_4_ = uVar1;
            auVar35._0_4_ = uVar1;
            auVar35._8_4_ = uVar1;
            auVar35._12_4_ = uVar1;
            uVar18 = uVar11 & 0x1ffffff0;
            auVar36 = NEON_neg(auVar35,4);
            iVar38 = 2;
            iVar40 = 3;
            iVar8 = 0;
            iVar37 = 1;
            psVar9 = (short *)((long)pvVar7 + 0x10);
            uVar20 = uVar18;
            auVar30 = _DAT_004c3940;
            do {
              auVar43._0_4_ = iVar8 + 8;
              auVar43._4_4_ = iVar37 + 8;
              auVar43._8_4_ = iVar38 + 8;
              auVar43._12_4_ = iVar40 + 8;
              uVar20 = uVar20 - 0x10;
              auVar45._0_4_ = auVar30._0_4_ + 8;
              iVar39 = auVar30._4_4_;
              auVar45._4_4_ = iVar39 + 8;
              iVar31 = auVar30._8_4_;
              auVar45._8_4_ = iVar31 + 8;
              iVar33 = auVar30._12_4_;
              auVar45._12_4_ = iVar33 + 8;
              auVar4._4_4_ = iVar37;
              auVar4._0_4_ = iVar8;
              auVar4._8_4_ = iVar38;
              auVar4._12_4_ = iVar40;
              auVar47 = NEON_rev32(auVar4,1);
              auVar48 = NEON_rev32(auVar30,1);
              auVar44 = NEON_rev32(auVar43,1);
              auVar46 = NEON_rev32(auVar45,1);
              auVar47 = NEON_rbit(auVar47,1);
              auVar48 = NEON_rbit(auVar48,1);
              auVar44 = NEON_rbit(auVar44,1);
              auVar46 = NEON_rbit(auVar46,1);
              auVar47 = NEON_ushl(auVar47,auVar36,4);
              auVar48 = NEON_ushl(auVar48,auVar36,4);
              auVar44 = NEON_ushl(auVar44,auVar36,4);
              auVar46 = NEON_ushl(auVar46,auVar36,4);
              iVar8 = iVar8 + 0x10;
              iVar37 = iVar37 + 0x10;
              iVar38 = iVar38 + 0x10;
              iVar40 = iVar40 + 0x10;
              auVar30._0_4_ = auVar30._0_4_ + 0x10;
              auVar30._4_4_ = iVar39 + 0x10;
              auVar30._8_4_ = iVar31 + 0x10;
              auVar30._12_4_ = iVar33 + 0x10;
              *psVar9 = auVar48._0_2_ << 2;
              psVar9[1] = auVar48._4_2_ << 2;
              psVar9[2] = auVar48._8_2_ << 2;
              psVar9[3] = auVar48._12_2_ << 2;
              psVar9[-8] = auVar47._0_2_ << 2;
              psVar9[-7] = auVar47._4_2_ << 2;
              psVar9[-6] = auVar47._8_2_ << 2;
              psVar9[-5] = auVar47._12_2_ << 2;
              psVar9[8] = auVar46._0_2_ << 2;
              psVar9[9] = auVar46._4_2_ << 2;
              psVar9[10] = auVar46._8_2_ << 2;
              psVar9[0xb] = auVar46._12_2_ << 2;
              *psVar9 = auVar44._0_2_ << 2;
              psVar9[1] = auVar44._4_2_ << 2;
              psVar9[2] = auVar44._8_2_ << 2;
              psVar9[3] = auVar44._12_2_ << 2;
              psVar9 = psVar9 + 0x10;
            } while (uVar20 != 0);
            if (uVar18 == uVar11) {
              return 1;
            }
          }
          do {
            uVar2 = ((uint)uVar18 & 0xaaaaaaaa) >> 1 | ((uint)uVar18 & 0x55555555) << 1;
            uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
            *(short *)((long)pvVar7 + uVar18 * 2) =
                 (short)(((uVar2 >> 0x10 | uVar2 << 0x10) >> (ulong)(uVar1 & 0x1f)) << 2);
            uVar18 = uVar18 + 1;
          } while (uVar11 != uVar18);
          return 1;
        }
        goto LAB_00e50194;
      }
    }
    puVar6 = (undefined8 *)(param_1 + uVar11 * 8 + 0x5c8);
  }
  *puVar6 = 0;
LAB_00e50194:
  *(undefined4 *)(param_1 + 0x9c) = 3;
                    /* WARNING: Read-only address (ram,0x004c3250) is written */
                    /* WARNING: Read-only address (ram,0x004c3940) is written */
                    /* WARNING: Read-only address (ram,0x004c4840) is written */
  return 0;
}


