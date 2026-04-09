// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6936c
// Entry Point: 00d6936c
// Size: 924 bytes
// Signature: undefined FUN_00d6936c(void)


void FUN_00d6936c(long *param_1,int param_2,char param_3)

{
  int iVar1;
  ulong uVar2;
  undefined uVar3;
  char cVar4;
  undefined8 *puVar5;
  code **ppcVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  
  lVar11 = (long)param_2 + 0x14;
  if (param_3 != '\0') {
    lVar11 = (long)param_2 + 0x18;
  }
  if (param_3 != '\0') {
    param_2 = param_2 + 0x10;
  }
  lVar11 = param_1[lVar11];
  if (lVar11 == 0) {
    lVar9 = *param_1;
    *(int *)(lVar9 + 0x2c) = param_2;
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x34;
    (**ppcVar6)(param_1);
    cVar4 = cRam0000000000000111;
  }
  else {
    cVar4 = *(char *)(lVar11 + 0x111);
  }
  if (cVar4 != '\0') {
    return;
  }
  puVar5 = (undefined8 *)param_1[5];
  puVar8 = (undefined *)*puVar5;
  *puVar5 = puVar8 + 1;
  *puVar8 = 0xff;
  lVar9 = puVar5[1];
  puVar5[1] = lVar9 + -1;
  if ((lVar9 + -1 == 0) && (cVar4 = (*(code *)puVar5[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  puVar5 = (undefined8 *)param_1[5];
  puVar8 = (undefined *)*puVar5;
  *puVar5 = puVar8 + 1;
  *puVar8 = 0xc4;
  lVar9 = puVar5[1];
  puVar5[1] = lVar9 + -1;
  if ((lVar9 + -1 == 0) && (cVar4 = (*(code *)puVar5[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  puVar8 = (undefined *)*plVar7;
  uVar2 = (ulong)*(byte *)(lVar11 + 1) + (ulong)*(byte *)(lVar11 + 2) + (ulong)*(byte *)(lVar11 + 3)
          + (ulong)*(byte *)(lVar11 + 4) + (ulong)*(byte *)(lVar11 + 5) +
          (ulong)*(byte *)(lVar11 + 6) + (ulong)*(byte *)(lVar11 + 7) + (ulong)*(byte *)(lVar11 + 8)
          + (ulong)*(byte *)(lVar11 + 9) + (ulong)*(byte *)(lVar11 + 10) +
          (ulong)*(byte *)(lVar11 + 0xb) + (ulong)*(byte *)(lVar11 + 0xc) +
          (ulong)*(byte *)(lVar11 + 0xd) + (ulong)*(byte *)(lVar11 + 0xe) +
          (ulong)*(byte *)(lVar11 + 0xf) + (ulong)*(byte *)(lVar11 + 0x10);
  iVar13 = (int)uVar2;
  iVar1 = iVar13 + 0x13;
  *plVar7 = (long)(puVar8 + 1);
  *puVar8 = (char)((uint)iVar1 >> 8);
  lVar9 = plVar7[1];
  plVar7[1] = lVar9 + -1;
  if ((lVar9 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  puVar8 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar8 + 1);
  *puVar8 = (char)iVar1;
  lVar9 = plVar7[1];
  plVar7[1] = lVar9 + -1;
  if ((lVar9 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  puVar8 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar8 + 1);
  *puVar8 = (char)param_2;
  lVar9 = plVar7[1];
  plVar7[1] = lVar9 + -1;
  if ((lVar9 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  lVar9 = 0;
  do {
    plVar7 = (long *)param_1[5];
    uVar3 = *(undefined *)(lVar11 + 1 + lVar9);
    puVar8 = (undefined *)*plVar7;
    *plVar7 = (long)(puVar8 + 1);
    *puVar8 = uVar3;
    lVar10 = plVar7[1];
    plVar7[1] = lVar10 + -1;
    if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x10);
  if (iVar13 != 0) {
    uVar12 = 0;
    do {
      plVar7 = (long *)param_1[5];
      uVar3 = *(undefined *)(lVar11 + 0x11 + uVar12);
      puVar8 = (undefined *)*plVar7;
      *plVar7 = (long)(puVar8 + 1);
      *puVar8 = uVar3;
      lVar9 = plVar7[1];
      plVar7[1] = lVar9 + -1;
      if ((lVar9 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x19;
        (**ppcVar6)(param_1);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar2);
  }
  *(undefined *)(lVar11 + 0x111) = 1;
  return;
}


