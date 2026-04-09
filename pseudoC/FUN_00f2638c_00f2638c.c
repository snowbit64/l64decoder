// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2638c
// Entry Point: 00f2638c
// Size: 300 bytes
// Signature: undefined FUN_00f2638c(void)


ulong FUN_00f2638c(undefined8 param_1,double *param_2,double *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined auVar16 [16];
  
  iVar5 = *(int *)((long)param_2 + 0xc);
  if (iVar5 == *(int *)((long)param_3 + 0xc)) {
    if (iVar5 == 5) {
      dVar10 = *param_2;
      dVar11 = *param_3;
      if (dVar10 == dVar11) {
        return 1;
      }
      uVar3 = *(uint *)((long)dVar10 + 0x14);
      uVar4 = *(uint *)((long)dVar11 + 0x14);
      uVar1 = uVar3;
      if (uVar4 <= uVar3) {
        uVar1 = uVar4;
      }
      iVar5 = 1;
      if (uVar4 > uVar3) {
        iVar5 = -1;
      }
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = iVar5;
      }
      iVar5 = memcmp((void *)((long)dVar10 + 0x18),(void *)((long)dVar11 + 0x18),(ulong)uVar1);
      if (iVar5 != 0) {
        iVar2 = iVar5;
      }
      return (ulong)(iVar2 < 1);
    }
    if (iVar5 == 3) {
      return (ulong)(*param_2 <= *param_3);
    }
    uVar6 = FUN_00f26254(param_1,param_2,param_3,0x10);
    if ((int)uVar6 != -1) {
      return uVar6;
    }
    iVar5 = FUN_00f26254(param_1,param_3,param_2,0xf);
    if (iVar5 != -1) {
      return (ulong)(iVar5 == 0);
    }
  }
  auVar16 = FUN_00f09ce8(param_1,param_2,param_3,0x10);
  pdVar9 = auVar16._8_8_;
  lVar7 = auVar16._0_8_;
  switch(*(int *)((long)pdVar9 + 0xc)) {
  case 0:
    return 1;
  case 1:
    return (ulong)(*(int *)pdVar9 == *(int *)param_3);
  default:
    goto switchD_00f264fc_caseD_2;
  case 3:
    return (ulong)(*pdVar9 == *param_3);
  case 4:
    if (*(float *)pdVar9 != *(float *)param_3) {
      return 0;
    }
    if (*(float *)((long)pdVar9 + 4) != *(float *)((long)param_3 + 4)) {
      return 0;
    }
    return (ulong)(*(float *)(pdVar9 + 1) == *(float *)(param_3 + 1));
  case 6:
    lVar14 = *(long *)((long)*pdVar9 + 0x10);
    if ((lVar14 == 0) || (*(char *)(lVar14 + 3) < '\0')) goto switchD_00f264fc_caseD_2;
    lVar12 = *(long *)((long)*param_3 + 0x10);
    puVar8 = (undefined8 *)FUN_00f197a4(lVar14,7,*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0xb78));
    break;
  case 8:
    lVar14 = *(long *)((long)*pdVar9 + 8);
    if ((lVar14 == 0) || (*(char *)(lVar14 + 3) < '\0')) goto switchD_00f264fc_caseD_2;
    lVar12 = *(long *)((long)*param_3 + 8);
    puVar8 = (undefined8 *)FUN_00f197a4(lVar14,7,*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0xb78));
  }
  if ((puVar8 != (undefined8 *)0x0) &&
     ((lVar14 == lVar12 ||
      ((((lVar12 != 0 && (-1 < *(char *)(lVar12 + 3))) &&
        (lVar14 = FUN_00f197a4(lVar12,7,*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0xb78)),
        lVar14 != 0)) && (iVar5 = FUN_00f11034(puVar8,lVar14), iVar5 != 0)))))) {
    puVar13 = *(undefined8 **)(lVar7 + 8);
    uVar15 = *puVar8;
    lVar12 = *(long *)(lVar7 + 0x30);
    puVar13[1] = puVar8[1];
    *puVar13 = uVar15;
    lVar14 = *(long *)(lVar7 + 8);
    dVar10 = *pdVar9;
    *(double *)(lVar14 + 0x18) = pdVar9[1];
    *(double *)(lVar14 + 0x10) = dVar10;
    lVar14 = *(long *)(lVar7 + 8);
    dVar10 = *param_3;
    *(double *)(lVar14 + 0x28) = param_3[1];
    *(double *)(lVar14 + 0x20) = dVar10;
    lVar14 = *(long *)(lVar7 + 8);
    if (*(long *)(lVar7 + 0x28) - lVar14 < 0x31) {
      FUN_00f0ab24(lVar7,3);
      lVar14 = *(long *)(lVar7 + 8);
    }
    *(long *)(lVar7 + 8) = lVar14 + 0x30;
    FUN_00f0ac4c(lVar7,lVar14,1);
    lVar14 = *(long *)(lVar7 + 8);
    *(long *)(lVar7 + 8) = lVar14 + -0x10;
    uVar15 = *(undefined8 *)(lVar14 + -0x10);
    puVar13 = (undefined8 *)((long)puVar13 + (*(long *)(lVar7 + 0x30) - lVar12));
    puVar13[1] = *(undefined8 *)(lVar14 + -8);
    *puVar13 = uVar15;
    iVar5 = (*(int **)(lVar7 + 8))[3];
    if (iVar5 == 0) {
      return 0;
    }
    if (iVar5 != 1) {
      return 1;
    }
    return (ulong)(**(int **)(lVar7 + 8) != 0);
  }
switchD_00f264fc_caseD_2:
  return (ulong)(*pdVar9 == *param_3);
}


