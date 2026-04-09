// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f16738
// Entry Point: 00f16738
// Size: 476 bytes
// Signature: undefined FUN_00f16738(void)


undefined8 FUN_00f16738(undefined8 param_1,long param_2,double *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  
  if (*(int *)((long)param_3 + 0xc) == 3) {
    iVar2 = (int)*param_3;
    uVar3 = (ulong)(iVar2 - 1);
    if ((0 < iVar2 && *param_3 == (double)iVar2) && (iVar5 = *(int *)(param_2 + 8), iVar2 <= iVar5))
    goto LAB_00f16820;
  }
  else if (*(int *)((long)param_3 + 0xc) == 0) {
    iVar5 = *(int *)(param_2 + 8);
    uVar3 = 0xffffffff;
    goto LAB_00f16820;
  }
  lVar8 = FUN_00f173fc(param_2,param_3);
  pdVar4 = (double *)(lVar8 + 0x10);
  iVar2 = FUN_00f110d8(pdVar4,param_3);
  while (iVar2 == 0) {
    uVar6 = *(uint *)(lVar8 + 0x1c);
    if ((((uVar6 & 0xf) == 0xc) && (4 < *(int *)((long)param_3 + 0xc))) && (*pdVar4 == *param_3))
    break;
    if (uVar6 < 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_00f09b70(param_1,"invalid key to \'next\'");
    }
    lVar8 = lVar8 + ((long)((ulong)uVar6 << 0x20) >> 0x24) * 0x20;
    pdVar4 = (double *)(lVar8 + 0x10);
    iVar2 = FUN_00f110d8(pdVar4,param_3);
  }
  iVar5 = *(int *)(param_2 + 8);
  uVar3 = (ulong)(uint)(iVar5 + (int)((ulong)(lVar8 - *(long *)(param_2 + 0x20)) >> 5));
LAB_00f16820:
  uVar7 = -(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4;
  lVar8 = (long)(int)uVar3 + 1;
  do {
    if (iVar5 <= lVar8) {
      uVar6 = (int)lVar8 - iVar5;
      iVar2 = 1 << (ulong)(*(byte *)(param_2 + 6) & 0x1f);
      if (iVar2 <= (int)uVar6) {
        return 0;
      }
      uVar3 = -(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5;
      lVar8 = (long)iVar2 - (long)(int)uVar6;
      while (lVar1 = *(long *)(param_2 + 0x20) + uVar3, *(int *)(lVar1 + 0xc) == 0) {
        uVar3 = uVar3 + 0x20;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
          return 0;
        }
      }
      *param_3 = *(double *)(lVar1 + 0x10);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar1 + 0x18);
      uVar6 = *(uint *)(lVar1 + 0x1c) & 0xf;
      pdVar4 = (double *)(*(long *)(param_2 + 0x20) + uVar3);
      goto LAB_00f168e0;
    }
    lVar8 = lVar8 + 1;
    lVar1 = *(long *)(param_2 + 0x18) + uVar7;
    uVar7 = uVar7 + 0x10;
  } while (*(int *)(lVar1 + 0x1c) == 0);
  uVar6 = 3;
  *param_3 = (double)(int)lVar8;
  pdVar4 = (double *)(*(long *)(param_2 + 0x18) + uVar7);
LAB_00f168e0:
  *(uint *)((long)param_3 + 0xc) = uVar6;
  dVar9 = *pdVar4;
  param_3[3] = pdVar4[1];
  param_3[2] = dVar9;
  return 1;
}


