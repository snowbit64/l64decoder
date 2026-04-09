// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_find_pred_coefs_FIX
// Entry Point: 00e8f5a4
// Size: 1256 bytes
// Signature: undefined silk_find_pred_coefs_FIX(void)


void silk_find_pred_coefs_FIX
               (long param_1,int *param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined auVar14 [16];
  int iVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  undefined (*pauVar23) [16];
  uint *puVar24;
  uint *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  int iVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined4 auStack_c0 [4];
  undefined auStack_b0 [8];
  undefined local_a8 [16];
  undefined local_98 [16];
  uint auStack_88 [4];
  uint local_78 [4];
  long local_68;
  
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  uVar18 = *(uint *)(param_1 + 0x11e4);
  uVar19 = (ulong)uVar18;
  if ((int)uVar18 < 1) {
    iVar28 = 0x1ffffff;
  }
  else {
    if (uVar18 < 8) {
      uVar21 = 0;
      iVar28 = 0x1ffffff;
    }
    else {
      uVar21 = uVar19 & 0xfffffff8;
      pauVar23 = (undefined (*) [16])(param_2 + 4);
      auVar29._8_4_ = 0x1ffffff;
      auVar29._0_8_ = 0x1ffffff01ffffff;
      auVar29._12_4_ = 0x1ffffff;
      auVar30._8_4_ = 0x1ffffff;
      auVar30._0_8_ = 0x1ffffff01ffffff;
      auVar30._12_4_ = 0x1ffffff;
      uVar16 = uVar21;
      do {
        pauVar1 = pauVar23 + -1;
        auVar14 = *pauVar23;
        pauVar23 = pauVar23 + 2;
        uVar16 = uVar16 - 8;
        auVar29 = NEON_smin(auVar29,*pauVar1,4);
        auVar30 = NEON_smin(auVar30,auVar14,4);
      } while (uVar16 != 0);
      auVar29 = NEON_smin(auVar29,auVar30,4);
      iVar28 = NEON_sminv(auVar29,4);
      if (uVar21 == uVar19) goto LAB_00e8f664;
    }
    lVar22 = uVar19 - uVar21;
    piVar17 = param_2 + uVar21;
    do {
      if (*piVar17 <= iVar28) {
        iVar28 = *piVar17;
      }
      lVar22 = lVar22 + -1;
      piVar17 = piVar17 + 1;
    } while (lVar22 != 0);
  }
LAB_00e8f664:
  iVar15 = -iVar28;
  if (-1 < iVar28) {
    iVar15 = iVar28;
  }
  if (0 < (int)uVar18) {
    iVar28 = iVar28 << (ulong)((int)LZCOUNT(iVar15) - 1U & 0x1f);
    uVar16 = uVar19;
    piVar17 = param_2;
    puVar24 = auStack_88;
    puVar25 = local_78;
    do {
      iVar20 = *piVar17;
      iVar5 = -iVar20;
      if (-1 < iVar20) {
        iVar5 = iVar20;
      }
      iVar11 = (int)LZCOUNT(iVar15) - (int)LZCOUNT(iVar5);
      uVar12 = -iVar11 - 0xf;
      iVar20 = iVar20 << (ulong)((int)LZCOUNT(iVar5) - 1U & 0x1f);
      iVar5 = iVar20 >> 0x10;
      uVar9 = 0x7fffffff >> (ulong)(uVar12 & 0x1f);
      sVar10 = 0;
      if (iVar5 != 0) {
        sVar10 = (short)(0x1fffffff / iVar5);
      }
      lVar22 = (long)sVar10 * (long)iVar28;
      uVar2 = (int)((ulong)((long)sVar10 *
                           (long)(int)(iVar28 - ((uint)((ulong)((lVar22 >> 0x10) * (long)iVar20) >>
                                                       0x1d) & 0xfffffff8))) >> 0x10) +
              (int)((ulong)lVar22 >> 0x10);
      uVar3 = -0x80000000 >> (uVar12 & 0x1f);
      uVar4 = (int)uVar2 >> (iVar11 + 0xfU & 0x1f);
      if (0x2d < iVar11 + 0x1dU) {
        uVar4 = 0;
      }
      if ((int)uVar3 <= (int)uVar2) {
        uVar3 = uVar2;
      }
      if ((int)uVar2 <= (int)uVar9) {
        uVar9 = uVar3;
      }
      if (iVar11 == -0x10 || iVar11 + 0x10 < 0 != SCARRY4(iVar11,0x10)) {
        uVar4 = uVar9 << (ulong)(uVar12 & 0x1f);
      }
      if ((int)uVar4 < 0x65) {
        uVar4 = 100;
      }
      uVar16 = uVar16 - 1;
      uVar9 = 0;
      if (uVar4 != 0) {
        uVar9 = 0x10000 / uVar4;
      }
      *puVar25 = uVar4;
      *puVar24 = uVar9;
      piVar17 = piVar17 + 1;
      puVar24 = puVar24 + 1;
      puVar25 = puVar25 + 1;
    } while (uVar16 != 0);
  }
  iVar28 = *(int *)(param_1 + 0x1220);
  puVar26 = auStack_b0 +
            -(((long)*(int *)(param_1 + 0x11e8) + (long)(int)(iVar28 * uVar18)) * 2 + 0xfU &
             0xfffffffffffffff0);
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    lVar22 = (long)puVar26 - ((long)(int)uVar18 * 0x14 + 0xfU & 0xfffffffffffffff0);
    puVar27 = (undefined *)
              (lVar22 - ((-(ulong)(uVar18 * 0x19 >> 0x1f) & 0xfffffffc00000000 |
                         (ulong)(uVar18 * 0x19) << 2) + 0xf & 0xfffffffffffffff0));
    silk_find_LTP_FIX(puVar27,lVar22,param_3,param_2 + 0x1f,*(undefined4 *)(param_1 + 0x11ec),uVar19
                      ,*(undefined4 *)(param_1 + 0x13f4));
    uVar6 = *(undefined4 *)(param_1 + 0x11ec);
    uVar7 = *(undefined4 *)(param_1 + 0x11e4);
    *(undefined4 *)(puVar27 + -8) = *(undefined4 *)(param_1 + 0x13f4);
    *(undefined4 *)(puVar27 + -0x10) = uVar7;
    silk_quant_LTP_gains
              (param_2 + 0x14,param_1 + 0x1294,param_1 + 0x12b0,param_1 + 0x1230,param_2 + 99,
               puVar27,lVar22,uVar6);
    silk_LTP_scale_ctrl_FIX(param_1,param_2,param_5);
    silk_LTP_analysis_filter_FIX
              (puVar26,param_4 + (long)*(int *)(param_1 + 0x1220) * -2,param_2 + 0x14,param_2 + 0x1f
               ,local_78,*(undefined4 *)(param_1 + 0x11ec),*(undefined4 *)(param_1 + 0x11e4));
    iVar28 = *(int *)(param_1 + 0x1238);
  }
  else {
    if (0 < (int)uVar18) {
      lVar22 = 0;
      uVar19 = (ulong)*(uint *)(param_1 + 0x11ec);
      param_4 = param_4 + (long)iVar28 * -2;
      puVar27 = puVar26;
      do {
        silk_scale_copy_vector16(puVar27,param_4,local_78[lVar22],iVar28 + (int)uVar19);
        uVar19 = (ulong)*(int *)(param_1 + 0x11ec);
        lVar22 = lVar22 + 1;
        iVar28 = *(int *)(param_1 + 0x1220);
        uVar18 = *(uint *)(param_1 + 0x11e4);
        param_4 = param_4 + uVar19 * 2;
        puVar27 = puVar27 + (long)(iVar28 + *(int *)(param_1 + 0x11ec)) * 2;
      } while (lVar22 < (int)uVar18);
    }
    memset(param_2 + 0x14,0,
           -(ulong)(uVar18 * 5 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar18 * 5) << 1);
    param_2[99] = 0;
    *(undefined4 *)(param_1 + 0x1230) = 0;
    iVar28 = *(int *)(param_1 + 0x1238);
    puVar27 = puVar26;
  }
  if (iVar28 == 0) {
    iVar15 = silk_log2lin((int)((ulong)((long)param_2[99] * 0x5555) >> 0x10) + 0x800);
    iVar28 = -iVar15;
    if (-1 < iVar15) {
      iVar28 = iVar15;
    }
    iVar20 = (int)(((long)*(short *)(param_2 + 0x61) * 3 & 0xffffffffffffU) * 10000 + 0x27100000 >>
                  0x10);
    iVar5 = -iVar20;
    if (-1 < iVar20) {
      iVar5 = iVar20;
    }
    iVar20 = iVar20 << (ulong)((int)LZCOUNT(iVar5) - 1U & 0x1f);
    iVar11 = iVar20 >> 0x10;
    sVar10 = 0;
    if (iVar11 != 0) {
      sVar10 = (short)(0x1fffffff / iVar11);
    }
    iVar5 = (int)LZCOUNT(iVar28) - (int)LZCOUNT(iVar5);
    iVar15 = iVar15 << (ulong)((int)LZCOUNT(iVar28) - 1U & 0x1f);
    lVar22 = (long)sVar10 * (long)iVar15;
    uVar18 = (int)((ulong)((long)sVar10 *
                          (long)(int)(iVar15 - ((uint)((ulong)((lVar22 >> 0x10) * (long)iVar20) >>
                                                      0x1d) & 0xfffffff8))) >> 0x10) +
             (int)((ulong)lVar22 >> 0x10);
    if (iVar5 == -0x10 || iVar5 + 0x10 < 0 != SCARRY4(iVar5,0x10)) {
      uVar2 = -iVar5 - 0xf;
      uVar9 = -0x80000000 >> (uVar2 & 0x1f);
      uVar12 = 0x7fffffff >> (ulong)(uVar2 & 0x1f);
      if ((int)uVar9 <= (int)uVar18) {
        uVar9 = uVar18;
      }
      if ((int)uVar18 <= (int)uVar12) {
        uVar12 = uVar9;
      }
      iVar28 = uVar12 << (ulong)(uVar2 & 0x1f);
    }
    else {
      iVar28 = (int)uVar18 >> (iVar5 + 0xfU & 0x1f);
      if (0x2d < iVar5 + 0x1dU) {
        iVar28 = 0;
      }
    }
  }
  else {
    iVar28 = 0xa3d70a;
  }
  silk_find_LPC_FIX(param_1,local_a8,puVar26,iVar28);
  silk_process_NLSFs(param_1,param_2 + 4,local_a8,(undefined8 *)(param_1 + 0x1194));
  uVar6 = *(undefined4 *)(param_1 + 0x11ec);
  uVar7 = *(undefined4 *)(param_1 + 0x11e4);
  uVar8 = *(undefined4 *)(param_1 + 0x1220);
  *(undefined4 *)(puVar27 + -0x10) = *(undefined4 *)(param_1 + 0x13f4);
  silk_residual_energy_FIX
            (param_2 + 100,param_2 + 0x68,puVar26,param_2 + 4,auStack_88,uVar6,uVar7,uVar8);
  *(long *)(param_1 + 0x119c) = local_a8._8_8_;
  *(undefined8 *)(param_1 + 0x1194) = local_a8._0_8_;
  *(long *)(param_1 + 0x11ac) = local_98._8_8_;
  *(long *)(param_1 + 0x11a4) = local_98._0_8_;
  if (*(long *)(lVar13 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


