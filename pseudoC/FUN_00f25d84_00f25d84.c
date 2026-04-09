// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f25d84
// Entry Point: 00f25d84
// Size: 388 bytes
// Signature: undefined FUN_00f25d84(void)


void FUN_00f25d84(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long *unaff_x23;
  long lVar10;
  long lVar11;
  long unaff_x24;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined auVar15 [16];
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  long lStack_58;
  
  iVar13 = *(int *)((long)param_2 + 0xc);
  uVar12 = 100;
  plVar9 = param_4;
  do {
    if (iVar13 == 6) {
      unaff_x24 = *param_2;
      unaff_x23 = (long *)FUN_00f171e0(unaff_x24,param_3);
      if (unaff_x23 != (long *)&DAT_0056fdf8) {
        *(int *)(param_1 + 0x54) =
             (int)((ulong)((long)unaff_x23 - *(long *)(unaff_x24 + 0x20)) >> 5);
      }
      if (((*(int *)((long)unaff_x23 + 0xc) != 0) ||
          (lVar2 = *(long *)(unaff_x24 + 0x10), lVar2 == 0)) ||
         (((*(byte *)(lVar2 + 3) & 1) != 0 ||
          (plVar3 = (long *)FUN_00f197a4(lVar2,0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb40))
          , plVar3 == (long *)0x0)))) goto LAB_00f25ed8;
      iVar13 = *(int *)((long)plVar3 + 0xc);
    }
    else {
      plVar3 = (long *)FUN_00f197f8(param_1,param_2,0);
      iVar13 = *(int *)((long)plVar3 + 0xc);
      if (iVar13 == 0) {
        puVar7 = param_3;
        auVar15 = FUN_00f09d58(param_1,param_2);
        lVar10 = auVar15._0_8_;
        puStack_a0 = &stack0xffffffffffffffb0;
        pcStack_98 = FUN_00f25f08;
        puStack_90 = &DAT_0056fdf8;
        uStack_88 = uVar12;
        lStack_80 = unaff_x24;
        plStack_78 = unaff_x23;
        plStack_70 = param_2;
        puStack_68 = param_3;
        plStack_60 = param_4;
        lStack_58 = param_1;
        lVar2 = tpidr_el0;
        iVar13 = 100;
        lStack_a8 = *(long *)(lVar2 + 0x28);
        plVar3 = auVar15._8_8_;
        break;
      }
    }
    if (iVar13 == 7) {
      plVar9 = *(long **)(param_1 + 8);
      lVar2 = *plVar3;
      lVar10 = *(long *)(param_1 + 0x30);
      plVar9[1] = plVar3[1];
      *plVar9 = lVar2;
      lVar2 = *(long *)(param_1 + 8);
      lVar11 = *param_2;
      *(long *)(lVar2 + 0x18) = param_2[1];
      *(long *)(lVar2 + 0x10) = lVar11;
      lVar2 = *(long *)(param_1 + 8);
      uVar14 = *param_3;
      *(undefined8 *)(lVar2 + 0x28) = param_3[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar14;
      lVar2 = *(long *)(param_1 + 8);
      if (*(long *)(param_1 + 0x28) - lVar2 < 0x31) {
        FUN_00f0ab24(param_1,3);
        lVar2 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 8) = lVar2 + 0x30;
      FUN_00f0ac4c(param_1,lVar2,1);
      unaff_x23 = (long *)(*(long *)(param_1 + 8) + -0x10);
      param_4 = (long *)((long)param_4 + (*(long *)(param_1 + 0x30) - lVar10));
      *(long **)(param_1 + 8) = unaff_x23;
LAB_00f25ed8:
      lVar2 = *unaff_x23;
      param_4[1] = unaff_x23[1];
      *param_4 = lVar2;
      return;
    }
    uVar1 = (int)uVar12 - 1;
    uVar12 = (ulong)uVar1;
    param_2 = plVar3;
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00f09b70(param_1,"\'__index\' chain too long; possible loop");
    }
  } while( true );
LAB_00f25f44:
  if (*(int *)((long)plVar3 + 0xc) == 6) {
    lVar11 = *plVar3;
    plVar4 = (long *)FUN_00f171e0(lVar11,puVar7);
    if ((((*(int *)((long)plVar4 + 0xc) != 0) || (lVar5 = *(long *)(lVar11 + 0x10), lVar5 == 0)) ||
        ((*(byte *)(lVar5 + 3) >> 1 & 1) != 0)) ||
       (plVar6 = (long *)FUN_00f197a4(lVar5,1,*(undefined8 *)(*(long *)(lVar10 + 0x18) + 0xb48)),
       plVar6 == (long *)0x0)) {
      if (*(char *)(lVar11 + 4) != '\0') goto LAB_00f260fc;
      *(undefined *)(lVar11 + 3) = 0;
      if (plVar4 == (long *)&DAT_0056fdf8) {
        plVar4 = (long *)FUN_00f175ec(lVar10,lVar11,puVar7);
      }
      *(int *)(lVar10 + 0x54) = (int)((ulong)((long)plVar4 - *(long *)(lVar11 + 0x20)) >> 5);
      lVar5 = *plVar9;
      plVar4[1] = plVar9[1];
      *plVar4 = lVar5;
      if ((4 < *(int *)((long)plVar9 + 0xc)) && ((*(byte *)(lVar11 + 1) >> 2 & 1) != 0)) {
        if ((*(byte *)(*plVar9 + 1) & 3) != 0) {
          FUN_00f0c9ec(lVar10,lVar11);
        }
      }
      goto LAB_00f260c0;
    }
    iVar8 = *(int *)((long)plVar6 + 0xc);
  }
  else {
    plVar6 = (long *)FUN_00f197f8(lVar10,plVar3,1);
    iVar8 = *(int *)((long)plVar6 + 0xc);
    if (iVar8 == 0) {
      FUN_00f09d58(lVar10,plVar3,puVar7);
LAB_00f260fc:
                    /* WARNING: Subroutine does not return */
      FUN_00f09e04(lVar10);
    }
  }
  if (iVar8 == 7) {
    plVar4 = *(long **)(lVar10 + 8);
    lVar11 = *plVar6;
    plVar4[1] = plVar6[1];
    *plVar4 = lVar11;
    lVar11 = *(long *)(lVar10 + 8);
    lVar5 = *plVar3;
    *(long *)(lVar11 + 0x18) = plVar3[1];
    *(long *)(lVar11 + 0x10) = lVar5;
    lVar11 = *(long *)(lVar10 + 8);
    uVar14 = *puVar7;
    *(undefined8 *)(lVar11 + 0x28) = puVar7[1];
    *(undefined8 *)(lVar11 + 0x20) = uVar14;
    lVar11 = *(long *)(lVar10 + 8);
    lVar5 = *plVar9;
    *(long *)(lVar11 + 0x38) = plVar9[1];
    *(long *)(lVar11 + 0x30) = lVar5;
    lVar11 = *(long *)(lVar10 + 8);
    if (*(long *)(lVar10 + 0x28) - lVar11 < 0x41) {
      FUN_00f0ab24(lVar10,4);
      lVar11 = *(long *)(lVar10 + 8);
    }
    *(long *)(lVar10 + 8) = lVar11 + 0x40;
    FUN_00f0ac4c(lVar10,lVar11,0);
LAB_00f260c0:
    if (*(long *)(lVar2 + 0x28) == lStack_a8) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar13 = iVar13 + -1;
  lStack_b8 = plVar6[1];
  lStack_c0 = *plVar6;
  plVar3 = &lStack_c0;
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00f09b70(lVar10,"\'__newindex\' chain too long; possible loop");
  }
  goto LAB_00f25f44;
}


