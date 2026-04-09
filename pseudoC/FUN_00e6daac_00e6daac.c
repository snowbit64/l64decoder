// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e6daac
// Entry Point: 00e6daac
// Size: 1576 bytes
// Signature: undefined FUN_00e6daac(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)


void FUN_00e6daac(long param_1,long param_2,void **param_3,long param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,uint param_8,int param_9,uint param_10,
                 undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  void *pvVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  int *piVar22;
  undefined (*pauVar23) [16];
  undefined8 *puVar24;
  ulong uVar25;
  void *pvVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  void *pvVar31;
  ulong uVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined4 auStack_100 [4];
  int aiStack_f0 [2];
  long local_e8;
  ulong local_e0;
  void *local_d8;
  ulong local_d0;
  long local_c8;
  void *pvStack_c0;
  undefined4 local_b4;
  ulong local_b0;
  long local_a8;
  undefined4 local_9c;
  long local_98;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  long local_70;
  long local_68;
  
  local_e8 = tpidr_el0;
  local_68 = *(long *)(local_e8 + 0x28);
  local_7c = param_13;
  local_9c = param_12;
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = *(uint *)(param_1 + 0x28) << (ulong)(param_10 & 0x1f);
  local_a8 = (long)*(int *)(param_1 + 8);
  uVar30 = (ulong)(int)uVar5;
  lVar28 = -((-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2) + 0xf &
            0xfffffffffffffff0);
  pvVar26 = (void *)((long)aiStack_f0 + lVar28);
  uVar6 = 1 << (ulong)(param_10 & 0x1f);
  uVar3 = uVar5;
  if (param_9 != 0) {
    param_10 = 0;
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  uVar32 = (ulong)uVar3;
  uVar2 = uVar6;
  if (param_9 == 0) {
    uVar2 = 1;
  }
  uVar27 = (ulong)uVar2;
  iVar7 = *(int *)(param_1 + 0x20) - param_10;
  aiStack_f0[1] = param_8;
  local_98 = param_4;
  local_8c = param_5;
  local_80 = iVar7;
  local_70 = param_1;
  if ((param_7 == 1) && (param_8 == 2)) {
    *(undefined4 *)((long)auStack_100 + lVar28) = param_12;
    denormalise_bands(param_1,param_2,pvVar26,param_4,param_5,param_6,uVar6,param_11);
    uVar5 = uVar4;
    if ((int)uVar4 < 0) {
      uVar5 = uVar4 + 1;
    }
    pvVar31 = (void *)((long)param_3[1] + (long)((int)uVar5 >> 1) * 4);
    memcpy(pvVar31,pvVar26,uVar30 << 2);
    uVar14 = local_7c;
    iVar7 = local_80;
    if (0 < (int)uVar2) {
      lVar28 = 0;
      local_78 = (void *)(local_70 + 0x48);
      uVar19 = uVar27;
      local_d0 = uVar32;
      local_b0 = uVar30;
      do {
        clt_mdct_backward_c(local_78,pvVar31,(long)*param_3 + lVar28,
                            *(undefined8 *)(local_70 + 0x40),uVar4,iVar7,uVar27,uVar14);
        pvVar17 = local_78;
        uVar30 = local_b0;
        lVar28 = lVar28 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2);
        pvVar31 = (void *)((long)pvVar31 + 4);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      if (0 < (int)uVar2) {
        lVar28 = 0;
        uVar19 = local_d0 & 0xffffffff;
        uVar32 = local_d0 >> 0x1f;
        do {
          clt_mdct_backward_c(pvVar17,pvVar26,(long)param_3[1] + lVar28,
                              *(undefined8 *)(local_70 + 0x40),uVar4,local_80,uVar2,local_7c);
          lVar28 = lVar28 + (-(uVar32 & 1) & 0xfffffffc00000000 | uVar19 << 2);
          pvVar26 = (void *)((long)pvVar26 + 4);
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    goto LAB_00e6df8c;
  }
  local_84 = param_11;
  local_88 = uVar6;
  if ((param_7 != 2) || (param_8 != 1)) {
    if ((int)uVar2 < 1) {
      if ((int)param_8 < 2) {
        param_8 = 1;
      }
      uVar32 = (ulong)param_8;
      local_78 = (void *)(local_a8 << 1);
      do {
        lVar29 = local_70;
        uVar14 = local_84;
        uVar3 = local_88;
        *(undefined4 *)((long)auStack_100 + lVar28) = param_12;
        denormalise_bands(lVar29,param_2,pvVar26,param_4,param_5,param_6,uVar3,uVar14);
        param_2 = param_2 + uVar30 * 2;
        uVar32 = uVar32 - 1;
        param_4 = param_4 + (long)local_78;
      } while (uVar32 != 0);
    }
    else {
      if ((int)param_8 < 2) {
        param_8 = 1;
      }
      local_d8 = (void *)(ulong)param_8;
      local_e0 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar32 << 2;
      local_78 = (void *)0x0;
      local_d0 = param_1 + 0x48U;
      local_c8 = param_2;
      pvStack_c0 = pvVar26;
      local_b4 = param_6;
      local_b0 = uVar30;
      do {
        lVar18 = local_70;
        uVar16 = local_84;
        uVar3 = local_88;
        uVar15 = local_8c;
        uVar14 = local_b4;
        pvVar26 = pvStack_c0;
        lVar29 = local_c8 + (long)local_78 * local_b0 * 2;
        lVar1 = local_98 + (long)local_78 * local_a8 * 2;
        *(undefined4 *)((long)auStack_100 + lVar28) = local_9c;
        denormalise_bands(lVar18,lVar29,pvVar26,lVar1,uVar15,uVar14,uVar3,uVar16);
        uVar14 = local_7c;
        uVar32 = local_e0;
        lVar29 = 0;
        uVar30 = uVar27;
        do {
          clt_mdct_backward_c(param_1 + 0x48U,pvVar26,(long)param_3[(long)local_78] + lVar29,
                              *(undefined8 *)(local_70 + 0x40),uVar4,iVar7,uVar2,uVar14);
          lVar29 = lVar29 + uVar32;
          pvVar26 = (void *)((long)pvVar26 + 4);
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
        local_78 = (void *)((long)local_78 + 1);
        uVar30 = local_b0;
      } while (local_78 != local_d8);
    }
    goto LAB_00e6df8c;
  }
  local_78 = *param_3;
  uVar3 = uVar4;
  if ((int)uVar4 < 0) {
    uVar3 = uVar4 + 1;
  }
  local_e0 = (ulong)uVar3;
  local_d8 = (void *)((long)local_78 + (long)((int)uVar3 >> 1) * 4);
  local_d0 = uVar32;
  local_b4 = param_6;
  *(undefined4 *)((long)auStack_100 + lVar28) = param_12;
  denormalise_bands(param_1,param_2,pvVar26,param_4,param_5,param_6,uVar6,param_11);
  uVar15 = local_84;
  uVar3 = local_88;
  uVar14 = local_b4;
  uVar32 = local_d0;
  pvVar31 = local_d8;
  lVar29 = local_a8 * 2;
  *(undefined4 *)((long)auStack_100 + lVar28) = param_12;
  denormalise_bands(param_1,param_2 + uVar30 * 2,pvVar31,param_4 + lVar29,param_5,uVar14,uVar3,
                    uVar15);
  if (0 < (int)uVar5) {
    lVar29 = (long)(local_e0 << 0x20) >> 0x21;
    uVar19 = (ulong)uVar5;
    if ((uVar5 < 8) ||
       ((pvVar26 < (void *)((long)local_78 + (lVar29 + uVar19) * 4) &&
        (pvVar31 < (void *)((long)pvVar26 + uVar19 * 4))))) {
      uVar21 = 0;
    }
    else {
      uVar21 = uVar19 & 0xfffffff8;
      pauVar23 = (undefined (*) [16])((long)&local_e0 + lVar28);
      puVar24 = (undefined8 *)((long)local_78 + lVar29 * 4 + 0x10);
      uVar25 = uVar21;
      do {
        puVar8 = puVar24 + -1;
        uVar9 = puVar24[-2];
        uVar13 = puVar24[1];
        uVar12 = *puVar24;
        puVar24 = puVar24 + 4;
        uVar25 = uVar25 - 8;
        auVar33 = pauVar23[-1];
        auVar34 = *pauVar23;
        *(ulong *)(pauVar23[-1] + 8) =
             CONCAT44((int)((long)*puVar8 >> 0x21) + (auVar33._12_4_ >> 1),
                      ((int)*puVar8 >> 1) + (auVar33._8_4_ >> 1));
        *(ulong *)pauVar23[-1] =
             CONCAT44((int)((long)uVar9 >> 0x21) + (auVar33._4_4_ >> 1),
                      ((int)uVar9 >> 1) + (auVar33._0_4_ >> 1));
        *(ulong *)(*pauVar23 + 8) =
             CONCAT44((int)((long)uVar13 >> 0x21) + (auVar34._12_4_ >> 1),
                      ((int)uVar13 >> 1) + (auVar34._8_4_ >> 1));
        *(ulong *)*pauVar23 =
             CONCAT44((int)((long)uVar12 >> 0x21) + (auVar34._4_4_ >> 1),
                      ((int)uVar12 >> 1) + (auVar34._0_4_ >> 1));
        pauVar23 = pauVar23 + 2;
      } while (uVar25 != 0);
      if (uVar21 == uVar19) goto LAB_00e6ddac;
    }
    lVar28 = uVar19 - uVar21;
    piVar20 = (int *)((long)local_78 + (uVar21 + lVar29) * 4);
    piVar22 = (int *)((long)pvVar26 + uVar21 * 4);
    do {
      lVar28 = lVar28 + -1;
      *piVar22 = (*piVar20 >> 1) + (*piVar22 >> 1);
      piVar20 = piVar20 + 1;
      piVar22 = piVar22 + 1;
    } while (lVar28 != 0);
  }
LAB_00e6ddac:
  if (0 < (int)uVar2) {
    lVar29 = 0;
    lVar28 = local_70 + 0x48;
    do {
      clt_mdct_backward_c(lVar28,pvVar26,(long)*param_3 + lVar29,*(undefined8 *)(local_70 + 0x40),
                          uVar4,local_80,uVar2,local_7c);
      lVar29 = lVar29 + (-((uVar32 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                        (uVar32 & 0xffffffff) << 2);
      pvVar26 = (void *)((long)pvVar26 + 4);
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
LAB_00e6df8c:
  if (0 < (int)(uint)uVar30) {
    uVar32 = 0;
    uVar3 = aiStack_f0[1];
    if (aiStack_f0[1] < 2) {
      uVar3 = 1;
    }
    uVar27 = uVar30 & 0xfffffff8;
    do {
      pvVar26 = param_3[uVar32];
      if ((uint)uVar30 < 8) {
        uVar19 = 0;
LAB_00e6e020:
        lVar28 = (uVar30 & 0xffffffff) - uVar19;
        piVar20 = (int *)((long)pvVar26 + uVar19 * 4);
        do {
          iVar7 = *piVar20;
          if (*piVar20 < -299999999) {
            iVar7 = -300000000;
          }
          if (299999999 < iVar7) {
            iVar7 = 300000000;
          }
          lVar28 = lVar28 + -1;
          *piVar20 = iVar7;
          piVar20 = piVar20 + 1;
        } while (lVar28 != 0);
      }
      else {
        pauVar23 = (undefined (*) [16])((long)pvVar26 + 0x10);
        uVar19 = uVar27;
        do {
          uVar19 = uVar19 - 8;
          auVar33._8_4_ = 0xee1e5d00;
          auVar33._0_8_ = 0xee1e5d00ee1e5d00;
          auVar33._12_4_ = 0xee1e5d00;
          auVar33 = NEON_smax(pauVar23[-1],auVar33,4);
          auVar34._8_4_ = 0xee1e5d00;
          auVar34._0_8_ = 0xee1e5d00ee1e5d00;
          auVar34._12_4_ = 0xee1e5d00;
          auVar34 = NEON_smax(*pauVar23,auVar34,4);
          auVar10._8_4_ = 300000000;
          auVar10._0_8_ = 0x11e1a30011e1a300;
          auVar10._12_4_ = 300000000;
          auVar33 = NEON_smin(auVar33,auVar10,4);
          auVar11._8_4_ = 300000000;
          auVar11._0_8_ = 0x11e1a30011e1a300;
          auVar11._12_4_ = 300000000;
          auVar34 = NEON_smin(auVar34,auVar11,4);
          *(long *)(pauVar23[-1] + 8) = auVar33._8_8_;
          *(long *)pauVar23[-1] = auVar33._0_8_;
          *(long *)(*pauVar23 + 8) = auVar34._8_8_;
          *(long *)*pauVar23 = auVar34._0_8_;
          pauVar23 = pauVar23 + 2;
        } while (uVar19 != 0);
        uVar19 = uVar27;
        if (uVar27 != (uVar30 & 0xffffffff)) goto LAB_00e6e020;
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar3);
  }
  if (*(long *)(local_e8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


