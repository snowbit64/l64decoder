// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2673c
// Entry Point: 00f2673c
// Size: 844 bytes
// Signature: undefined FUN_00f2673c(void)


void FUN_00f2673c(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong __n;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long local_280;
  undefined auStack_270 [512];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  do {
    lVar12 = *(long *)(param_1 + 0x10);
    plVar1 = (long *)(lVar12 + (long)param_3 * 0x10);
    plVar9 = plVar1 + -2;
    if (*(int *)((long)plVar1 + -4) == 5 || *(int *)((long)plVar1 + -4) == 3) {
      if (*(int *)((long)plVar1 + 0xc) != 5) {
        if (*(int *)((long)plVar1 + 0xc) != 3) goto LAB_00f268d0;
        lVar4 = FUN_00f10a70(*plVar1,auStack_270);
        lVar4 = FUN_00f128c0(param_1,auStack_270,lVar4 - (long)auStack_270);
        *(undefined4 *)((long)plVar1 + 0xc) = 5;
        *plVar1 = lVar4;
      }
      uVar10 = (ulong)*(uint *)(*plVar1 + 0x14);
      if (*(uint *)(*plVar1 + 0x14) == 0) {
        if (*(int *)((long)plVar1 + -4) != 3) {
          iVar13 = 2;
          goto LAB_00f267b8;
        }
        lVar12 = FUN_00f10a70(*plVar9,auStack_270);
        lVar12 = FUN_00f128c0(param_1,auStack_270,lVar12 - (long)auStack_270);
        iVar13 = 2;
      }
      else {
        if ((int)param_2 < 2) {
          uVar14 = 1;
          if (0x1ff < uVar10) goto LAB_00f26990;
LAB_00f268c4:
          local_280 = 0;
          puVar11 = auStack_270;
        }
        else {
          uVar14 = 1;
          plVar9 = (long *)(lVar12 + (long)param_3 * 0x10);
          do {
            plVar8 = plVar9 + -2;
            if (*(int *)((long)plVar9 + -4) != 5) {
              if (*(int *)((long)plVar9 + -4) != 3) goto LAB_00f268bc;
              lVar4 = FUN_00f10a70(*plVar8,auStack_270);
              lVar4 = FUN_00f128c0(param_1,auStack_270,lVar4 - (long)auStack_270);
              *(undefined4 *)((long)plVar9 + -4) = 5;
              *plVar8 = lVar4;
            }
            if (0x40000000 - uVar10 < (ulong)*(uint *)(*plVar8 + 0x14)) {
                    /* WARNING: Subroutine does not return */
              FUN_00f09b70(param_1,"string length overflow");
            }
            uVar10 = uVar10 + *(uint *)(*plVar8 + 0x14);
            uVar14 = uVar14 + 1;
            plVar9 = plVar8;
          } while ((param_2 & 0xffffffff) != uVar14);
          uVar14 = param_2 & 0xffffffff;
LAB_00f268bc:
          if (uVar10 < 0x200) goto LAB_00f268c4;
LAB_00f26990:
          local_280 = FUN_00f125f4(param_1,uVar10);
          puVar11 = (undefined *)(local_280 + 0x18);
        }
        uVar10 = 0;
        iVar13 = (int)uVar14;
        iVar7 = iVar13 + 1;
        plVar9 = (long *)(lVar12 + ((long)param_3 - (uVar14 & 0xffffffff)) * 0x10);
        do {
          plVar9 = plVar9 + 2;
          __n = (ulong)*(uint *)(*plVar9 + 0x14);
          memcpy(puVar11 + uVar10,(void *)(*plVar9 + 0x18),__n);
          uVar10 = uVar10 + __n;
          iVar7 = iVar7 + -1;
        } while (1 < iVar7);
        plVar9 = plVar1 + (uVar14 & 0xffffffff) * -2 + 2;
        if (uVar10 < 0x200) {
          lVar12 = FUN_00f128c0(param_1,puVar11,uVar10);
        }
        else {
          lVar12 = FUN_00f1266c(param_1,local_280);
        }
      }
      *plVar9 = lVar12;
      *(undefined4 *)((long)plVar9 + 0xc) = 5;
    }
    else {
LAB_00f268d0:
      puVar5 = (undefined8 *)FUN_00f197f8(param_1,plVar9,0x11);
      if ((*(int *)((long)puVar5 + 0xc) == 0) &&
         (puVar5 = (undefined8 *)FUN_00f197f8(param_1,plVar1,0x11),
         *(int *)((long)puVar5 + 0xc) == 0)) {
        FUN_00f09c30(param_1,plVar9,plVar1);
        goto LAB_00f26a84;
      }
      puVar6 = *(undefined8 **)(param_1 + 8);
      uVar15 = *puVar5;
      lVar4 = *(long *)(param_1 + 0x30);
      puVar6[1] = puVar5[1];
      *puVar6 = uVar15;
      lVar12 = *(long *)(param_1 + 8);
      lVar16 = *plVar9;
      *(long *)(lVar12 + 0x18) = plVar1[-1];
      *(long *)(lVar12 + 0x10) = lVar16;
      lVar12 = *(long *)(param_1 + 8);
      lVar16 = *plVar1;
      *(long *)(lVar12 + 0x28) = plVar1[1];
      *(long *)(lVar12 + 0x20) = lVar16;
      lVar12 = *(long *)(param_1 + 8);
      if (*(long *)(param_1 + 0x28) - lVar12 < 0x31) {
        FUN_00f0ab24(param_1,3);
        lVar12 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 8) = lVar12 + 0x30;
      FUN_00f0ac4c(param_1,lVar12,1);
      lVar12 = *(long *)(param_1 + 8);
      iVar13 = 2;
      *(long *)(param_1 + 8) = lVar12 + -0x10;
      uVar15 = *(undefined8 *)(lVar12 + -0x10);
      puVar5 = (undefined8 *)((long)plVar9 + (*(long *)(param_1 + 0x30) - lVar4));
      puVar5[1] = *(undefined8 *)(lVar12 + -8);
      *puVar5 = uVar15;
    }
LAB_00f267b8:
    uVar2 = (int)param_2 - (iVar13 + -1);
    param_2 = (ulong)uVar2;
    param_3 = param_3 - (iVar13 + -1);
    if ((int)uVar2 < 2) {
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
LAB_00f26a84:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


