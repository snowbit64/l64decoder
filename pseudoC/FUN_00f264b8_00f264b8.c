// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f264b8
// Entry Point: 00f264b8
// Size: 644 bytes
// Signature: undefined FUN_00f264b8(void)


bool FUN_00f264b8(long param_1,double *param_2,double *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  
  switch(*(int *)((long)param_2 + 0xc)) {
  case 0:
    return true;
  case 1:
    return *(int *)param_2 == *(int *)param_3;
  default:
    goto switchD_00f264fc_caseD_2;
  case 3:
    return *param_2 == *param_3;
  case 4:
    if (*(float *)param_2 != *(float *)param_3) {
      return false;
    }
    if (*(float *)((long)param_2 + 4) != *(float *)((long)param_3 + 4)) {
      return false;
    }
    return *(float *)(param_2 + 1) == *(float *)(param_3 + 1);
  case 6:
    lVar5 = *(long *)((long)*param_2 + 0x10);
    if ((lVar5 == 0) || (*(char *)(lVar5 + 3) < '\0')) goto switchD_00f264fc_caseD_2;
    lVar3 = *(long *)((long)*param_3 + 0x10);
    puVar2 = (undefined8 *)FUN_00f197a4(lVar5,7,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb78));
    break;
  case 8:
    lVar5 = *(long *)((long)*param_2 + 8);
    if ((lVar5 == 0) || (*(char *)(lVar5 + 3) < '\0')) goto switchD_00f264fc_caseD_2;
    lVar3 = *(long *)((long)*param_3 + 8);
    puVar2 = (undefined8 *)FUN_00f197a4(lVar5,7,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb78));
  }
  if ((puVar2 != (undefined8 *)0x0) &&
     ((lVar5 == lVar3 ||
      ((((lVar3 != 0 && (-1 < *(char *)(lVar3 + 3))) &&
        (lVar5 = FUN_00f197a4(lVar3,7,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb78)),
        lVar5 != 0)) && (iVar1 = FUN_00f11034(puVar2,lVar5), iVar1 != 0)))))) {
    puVar4 = *(undefined8 **)(param_1 + 8);
    uVar6 = *puVar2;
    lVar3 = *(long *)(param_1 + 0x30);
    puVar4[1] = puVar2[1];
    *puVar4 = uVar6;
    lVar5 = *(long *)(param_1 + 8);
    dVar7 = *param_2;
    *(double *)(lVar5 + 0x18) = param_2[1];
    *(double *)(lVar5 + 0x10) = dVar7;
    lVar5 = *(long *)(param_1 + 8);
    dVar7 = *param_3;
    *(double *)(lVar5 + 0x28) = param_3[1];
    *(double *)(lVar5 + 0x20) = dVar7;
    lVar5 = *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x28) - lVar5 < 0x31) {
      FUN_00f0ab24(param_1,3);
      lVar5 = *(long *)(param_1 + 8);
    }
    *(long *)(param_1 + 8) = lVar5 + 0x30;
    FUN_00f0ac4c(param_1,lVar5,1);
    lVar5 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar5 + -0x10;
    uVar6 = *(undefined8 *)(lVar5 + -0x10);
    puVar4 = (undefined8 *)((long)puVar4 + (*(long *)(param_1 + 0x30) - lVar3));
    puVar4[1] = *(undefined8 *)(lVar5 + -8);
    *puVar4 = uVar6;
    iVar1 = (*(int **)(param_1 + 8))[3];
    if (iVar1 == 0) {
      return false;
    }
    if (iVar1 != 1) {
      return true;
    }
    return **(int **)(param_1 + 8) != 0;
  }
switchD_00f264fc_caseD_2:
  return *param_2 == *param_3;
}


