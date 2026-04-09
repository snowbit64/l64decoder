// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_psy_init
// Entry Point: 00e0c9e8
// Size: 1988 bytes
// Signature: undefined _vp_psy_init(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _vp_psy_init(undefined8 *param_1,long param_2,int *param_3,uint param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  void **ppvVar6;
  void *pvVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  undefined4 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined auVar27 [16];
  float fVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  double dVar31;
  double dVar32;
  
  uVar20 = (ulong)param_4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar1 = *param_3;
  *(int *)(param_1 + 9) = iVar1;
  dVar23 = log((double)((float)iVar1 * 8.0));
  dVar31 = (double)param_4;
  lVar11 = (long)((double)(long)(dVar23 / 0.6931471805599453) + -1.0);
  param_1[8] = lVar11;
  dVar23 = log(((double)((float)param_5 * 0.25) * 0.5) / dVar31);
  uVar24 = NEON_fmadd(dVar23,0x3ff7154760000000,0xc017dcf680000000);
  dVar32 = (double)(1 << (ulong)((int)lVar11 + 1U & 0x1f));
  dVar23 = (double)NEON_fnmsub(uVar24,dVar32,(double)iVar1);
  param_1[7] = (long)dVar23;
  dVar25 = log(((double)(((float)param_4 + 0.25) * (float)param_5) * 0.5) / dVar31);
  uVar24 = NEON_fmadd(dVar25,0x3ff7154760000000,0xc017dcf680000000);
  uVar2 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2;
  dVar25 = (double)NEON_fmadd(uVar24,dVar32,0x3fe0000000000000);
  *(int *)((long)param_1 + 0x4c) = ((int)(long)dVar25 - (int)(long)dVar23) + 1;
  pvVar3 = malloc(uVar2);
  uVar17 = -(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3;
  param_1[4] = pvVar3;
  plVar4 = (long *)malloc(uVar17);
  param_1[5] = plVar4;
  pvVar5 = malloc(uVar17);
  uVar22 = 0;
  param_1[1] = param_2;
  *(uint *)param_1 = param_4;
  param_1[10] = param_5;
  param_1[6] = pvVar5;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  if ((long)param_5 < 26000) {
LAB_00e0cba4:
    *(undefined4 *)(param_1 + 0xb) = uVar22;
  }
  else {
    if (param_5 >> 4 < 0x947) {
      uVar22 = 0x3f70a3d7;
      goto LAB_00e0cba4;
    }
    if (46000 < param_5) {
      uVar22 = 0x3fa33333;
      goto LAB_00e0cba4;
    }
  }
  dVar23 = (double)param_5;
  lVar11 = 0;
  uVar17 = (ulong)(int)param_4;
  lVar10 = 0;
  do {
    lVar19 = lVar10 + 1;
    dVar25 = (double)NEON_fmadd((double)lVar19,0x3fc0000000000000,0xc000000000000000);
    dVar25 = exp((dVar25 + 5.965784072875977) * 0.6931470036506653);
    lVar8 = (long)(int)(double)(long)(((dVar25 + dVar25) * dVar31) / dVar23);
    if ((lVar11 < lVar8) && (lVar11 < (long)uVar17)) {
      fVar21 = (float)(&DAT_0054c064)[lVar10];
      lVar10 = lVar8 - lVar11;
      fVar28 = (float)(&DAT_0054c064)[lVar19] - fVar21;
      do {
        *(float *)((long)pvVar3 + lVar11 * 4) = fVar21 + 100.0;
        lVar11 = lVar11 + 1;
        if (lVar8 <= lVar11) break;
        fVar21 = fVar28 / (float)lVar10 + fVar21;
      } while (lVar11 < (long)uVar17);
    }
    lVar10 = lVar19;
  } while (lVar19 != 0x57);
  if (lVar11 < (long)uVar17) {
    puVar9 = (undefined4 *)((long)pvVar3 + lVar11 * 4);
    lVar11 = uVar17 - lVar11;
    uVar22 = puVar9[-1];
    do {
      lVar11 = lVar11 + -1;
      *puVar9 = uVar22;
      puVar9 = puVar9 + 1;
    } while (lVar11 != 0);
  }
  if (0 < (int)param_4) {
    uVar18 = 0;
    lVar10 = (long)*(int *)(param_2 + 0x78);
    lVar11 = 0;
    if ((long)(int)(param_4 << 1) != 0) {
      lVar11 = (long)param_5 / (long)(int)(param_4 << 1);
    }
    lVar19 = -lVar10;
    lVar12 = 1;
    lVar8 = -99;
    do {
      lVar15 = lVar11 * uVar18;
      dVar25 = atan((double)((float)lVar15 * 0.00074));
      dVar26 = atan((double)((float)(lVar15 * lVar15) * 1.85e-08));
      dVar25 = (double)NEON_fmadd(dVar25,0x402a333340000000,dVar26 * 2.240000009536743);
      fVar21 = (float)(dVar25 + (double)((float)lVar15 * 0.0001));
      lVar15 = lVar8;
      if (lVar8 + lVar10 < (long)uVar18) {
        lVar16 = lVar11 * lVar8;
        fVar28 = *(float *)(param_2 + 0x70);
        do {
          dVar25 = atan((double)((float)lVar16 * 0.00074));
          dVar26 = atan((double)((float)(lVar16 * lVar16) * 1.85e-08));
          dVar25 = (double)NEON_fmadd(dVar25,0x402a333340000000,dVar26 * 2.240000009536743);
          lVar15 = lVar8;
          if ((double)(fVar21 - fVar28) <= dVar25 + (double)((float)lVar16 * 0.0001)) break;
          lVar8 = lVar8 + 1;
          lVar16 = lVar16 + lVar11;
          lVar15 = lVar19;
        } while (lVar10 + lVar8 < (long)uVar18);
      }
      lVar8 = lVar12;
      if (lVar12 <= (long)uVar17) {
        lVar16 = lVar11 * lVar12;
        iVar1 = *(int *)(param_2 + 0x7c);
        do {
          if ((long)(uVar18 + (long)iVar1) <= lVar12) {
            dVar25 = atan((double)((float)lVar16 * 0.00074));
            dVar26 = atan((double)((float)(lVar16 * lVar16) * 1.85e-08));
            dVar25 = (double)NEON_fmadd(dVar25,0x402a333340000000,dVar26 * 2.240000009536743);
            lVar8 = lVar12;
            if ((double)(*(float *)(param_2 + 0x74) + fVar21) <=
                dVar25 + (double)((float)lVar16 * 0.0001)) break;
          }
          lVar12 = lVar12 + 1;
          lVar16 = lVar16 + lVar11;
          lVar8 = uVar17 + 1;
        } while (uVar17 + 1 != lVar12);
      }
      lVar19 = lVar19 + 1;
      *(long *)((long)pvVar5 + uVar18 * 8) = lVar8 + lVar15 * 0x10000 + -0x10001;
      uVar18 = uVar18 + 1;
      lVar12 = lVar8;
      lVar8 = lVar15;
    } while (uVar18 != uVar17);
    if (0 < (int)param_4) {
      if (param_4 == 1) {
        uVar18 = 0;
      }
      else {
        auVar29 = NEON_fmov(0x3fe0000000000000,8);
        uVar18 = uVar17 & 0xfffffffffffffffe;
        uVar24 = NEON_fmov(0x3e800000,4);
        uVar13 = uVar18;
        plVar14 = plVar4;
        auVar30 = _DAT_004c34b0;
        do {
          auVar27 = NEON_scvtf(auVar30,8);
          lVar11 = auVar30._8_8_;
          dVar25 = log(((double)((float)auVar27._8_8_ + (float)((ulong)uVar24 >> 0x20)) *
                        auVar29._8_8_ * dVar23) / dVar31);
          dVar26 = log(((double)((float)auVar27._0_8_ + (float)uVar24) * auVar29._0_8_ * dVar23) /
                       dVar31);
          uVar13 = uVar13 - 2;
          auVar30._0_8_ = auVar30._0_8_ + 2;
          auVar30._8_8_ = lVar11 + 2;
          plVar14[1] = (long)(auVar29._8_8_ +
                             dVar32 * (dVar25 * 1.442695021629333 + -5.965784072875977));
          *plVar14 = (long)(auVar29._0_8_ +
                           dVar32 * (dVar26 * 1.442695021629333 + -5.965784072875977));
          plVar14 = plVar14 + 2;
        } while (uVar13 != 0);
        if (uVar18 == uVar17) goto LAB_00e0d020;
      }
      do {
        dVar25 = log(((double)((float)uVar18 + 0.25) * 0.5 * dVar23) / dVar31);
        uVar24 = NEON_fmadd(dVar25,0x3ff7154760000000,0xc017dcf680000000);
        dVar25 = (double)NEON_fmadd(uVar24,dVar32,0x3fe0000000000000);
        plVar4[uVar18] = (long)dVar25;
        uVar18 = uVar18 + 1;
      } while (uVar17 != uVar18);
    }
  }
LAB_00e0d020:
  uVar24 = FUN_00e0d1ac((float)((dVar23 * 0.5) / dVar31),*(undefined4 *)(param_2 + 0x18),
                        *(undefined4 *)(param_2 + 0x1c),param_2 + 0x24,uVar20);
  param_1[2] = uVar24;
  ppvVar6 = (void **)malloc(0x18);
  param_1[3] = ppvVar6;
  pvVar3 = malloc(uVar2);
  *ppvVar6 = pvVar3;
  pvVar5 = malloc(uVar2);
  ppvVar6[1] = pvVar5;
  pvVar7 = malloc(uVar2);
  ppvVar6[2] = pvVar7;
  if (0 < (int)param_4) {
    uVar2 = 0;
    lVar11 = param_1[1];
    do {
      dVar25 = log((((double)uVar2 + 0.5) * dVar23) / (dVar31 + dVar31));
      dVar25 = (double)NEON_fmadd(dVar25,0x3ff7154760000000,0xc017dcf680000000);
      fVar21 = (float)(dVar25 + dVar25);
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar21 = (float)NEON_fmin(fVar21,0x41800000);
      uVar20 = -(ulong)((uint)(int)fVar21 >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(int)fVar21 << 2;
      lVar10 = uVar20 + 4;
      fVar21 = fVar21 - (float)(int)fVar21;
      lVar19 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      dVar32 = 1.0 - (double)fVar21;
      dVar25 = (double)NEON_fmadd((double)*(float *)(lVar11 + 0x84 + uVar20),dVar32,
                                  (double)(fVar21 * *(float *)(lVar11 + 0x84 + lVar10)));
      *(float *)((long)pvVar3 + lVar19) = (float)dVar25;
      dVar25 = (double)NEON_fmadd((double)*(float *)(lVar11 + 200 + uVar20),dVar32,
                                  (double)(fVar21 * *(float *)(lVar11 + 200 + lVar10)));
      *(float *)((long)pvVar5 + lVar19) = (float)dVar25;
      dVar25 = (double)NEON_fmadd((double)*(float *)(lVar11 + 0x10c + uVar20),dVar32,
                                  (double)(fVar21 * *(float *)(lVar11 + 0x10c + lVar10)));
      *(float *)((long)pvVar7 + lVar19) = (float)dVar25;
    } while (uVar17 != uVar2);
  }
  return;
}


