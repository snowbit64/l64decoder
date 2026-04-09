// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f17e28
// Entry Point: 00f17e28
// Size: 832 bytes
// Signature: undefined FUN_00f17e28(void)


void FUN_00f17e28(undefined8 param_1,long param_2,double *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  int iVar25;
  double dVar24;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_68;
  
  lVar3 = tpidr_el0;
  lVar10 = 0;
  iVar20 = 0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar23 = 1;
  iVar21 = *(int *)(param_2 + 8);
  iVar9 = 1;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  do {
    iVar14 = iVar9;
    if ((iVar21 < iVar9) && (iVar14 = iVar21, iVar21 < iVar23)) break;
    if (iVar14 < iVar23) {
      iVar25 = 0;
    }
    else {
      lVar19 = (long)iVar23;
      uVar16 = (ulong)iVar14;
      uVar22 = (uVar16 - lVar19) + 1;
      if (uVar22 < 9) {
        iVar25 = 0;
      }
      else {
        uVar2 = 8;
        if ((uVar22 & 7) != 0) {
          uVar2 = uVar22 & 7;
        }
        lVar15 = lVar19 * 0x10;
        lVar18 = uVar2 + lVar19;
        lVar19 = (uVar22 - uVar2) + lVar19;
        iVar23 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar27 = 0;
        lVar18 = ~uVar16 + lVar18;
        iVar28 = 0;
        iVar29 = 0;
        iVar30 = 0;
        iVar31 = 0;
        puVar6 = (undefined4 *)(*(long *)(param_2 + 0x18) + lVar15 + 0x3c);
        do {
          lVar18 = lVar18 + 8;
          auVar32._0_4_ = puVar6[-0x10];
          auVar32._4_4_ = puVar6[-0xc];
          auVar32._8_4_ = puVar6[-8];
          auVar32._12_4_ = puVar6[-4];
          auVar32 = NEON_cmtst(auVar32,auVar32,4);
          auVar33._4_4_ = puVar6[4];
          auVar33._0_4_ = *puVar6;
          auVar33._8_4_ = puVar6[8];
          auVar33._12_4_ = puVar6[0xc];
          auVar4._4_4_ = puVar6[4];
          auVar4._0_4_ = *puVar6;
          auVar4._8_4_ = puVar6[8];
          auVar4._12_4_ = puVar6[0xc];
          auVar33 = NEON_cmtst(auVar33,auVar4,4);
          iVar23 = iVar23 - auVar32._0_4_;
          iVar25 = iVar25 - auVar32._4_4_;
          iVar26 = iVar26 - auVar32._8_4_;
          iVar27 = iVar27 - auVar32._12_4_;
          iVar28 = iVar28 - auVar33._0_4_;
          iVar29 = iVar29 - auVar33._4_4_;
          iVar30 = iVar30 - auVar33._8_4_;
          iVar31 = iVar31 - auVar33._12_4_;
          puVar6 = puVar6 + 0x20;
        } while (lVar18 != 0);
        iVar25 = iVar28 + iVar23 + iVar29 + iVar25 + iVar30 + iVar26 + iVar31 + iVar27;
      }
      lVar15 = (uVar16 - lVar19) + 1;
      piVar17 = (int *)(*(long *)(param_2 + 0x18) + lVar19 * 0x10 + -4);
      do {
        if (*piVar17 != 0) {
          iVar25 = iVar25 + 1;
        }
        lVar15 = lVar15 + -1;
        piVar17 = piVar17 + 4;
      } while (lVar15 != 0);
      iVar23 = iVar14 + 1;
    }
    lVar19 = lVar10 * 4;
    iVar20 = iVar25 + iVar20;
    lVar10 = lVar10 + 1;
    iVar9 = iVar9 << 1;
    *(int *)((long)&local_e0 + lVar19) = *(int *)((long)&local_e0 + lVar19) + iVar25;
  } while (lVar10 != 0x1b);
  iVar23 = 0;
  iVar21 = 0;
  uVar8 = ~(-1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f));
  uVar22 = -(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5;
  lVar10 = (long)(int)uVar8 + 1;
  do {
    lVar19 = *(long *)(param_2 + 0x20) + uVar22;
    if (*(int *)(lVar19 + 0xc) != 0) {
      if ((*(uint *)(lVar19 + 0x1c) & 0xf) == 3) {
        dVar24 = *(double *)(*(long *)(param_2 + 0x20) + uVar22 + 0x10);
        iVar9 = (int)dVar24;
        uVar8 = iVar9 - 1;
        if (dVar24 != (double)iVar9) {
          uVar8 = 0xfffffffe;
        }
        bVar1 = uVar8 >> 0x1a == 0;
        if (bVar1) {
          iVar9 = FUN_00f10ffc();
          *(int *)((long)&local_e0 + (long)iVar9 * 4 + 4) =
               *(int *)((long)&local_e0 + (long)iVar9 * 4 + 4) + 1;
        }
        iVar21 = (uint)bVar1 + iVar21;
      }
      iVar23 = iVar23 + 1;
    }
    uVar22 = uVar22 - 0x20;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar21 = iVar21 + iVar20;
  if (*(int *)((long)param_3 + 0xc) == 3) {
    iVar9 = (int)*param_3;
    uVar8 = iVar9 - 1;
    if (*param_3 != (double)iVar9) {
      uVar8 = 0xfffffffe;
    }
    bVar1 = uVar8 >> 0x1a == 0;
    if (bVar1) {
      iVar9 = FUN_00f10ffc();
      *(int *)((long)&local_e0 + (long)iVar9 * 4 + 4) =
           *(int *)((long)&local_e0 + (long)iVar9 * 4 + 4) + 1;
    }
    iVar21 = (uint)bVar1 + iVar21;
  }
  if (iVar21 < 1) {
    iVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar13 = 0;
    iVar9 = 0;
    puVar11 = &local_e0;
    iVar14 = 0;
    uVar12 = 1;
    uVar7 = 0;
    do {
      iVar27 = *(int *)puVar11;
      iVar25 = iVar27 + iVar14;
      iVar26 = iVar25;
      if (iVar27 < 1) {
        iVar26 = iVar14;
      }
      uVar8 = uVar12;
      if (iVar27 < 1 || iVar25 <= (int)uVar13) {
        uVar8 = uVar7;
        iVar25 = iVar9;
      }
      iVar9 = iVar25;
      if (iVar26 == iVar21) break;
      uVar13 = uVar12 & 0x7fffffff;
      puVar11 = (undefined8 *)((long)puVar11 + 4);
      iVar14 = iVar26;
      uVar12 = uVar12 << 1;
      uVar7 = uVar8;
    } while ((int)uVar13 < iVar21);
  }
  uVar5 = FUN_00f16984(param_2,uVar8,param_3);
  FUN_00f16b10(param_1,param_2,uVar5,((iVar20 + iVar23) - iVar9) + 1);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


