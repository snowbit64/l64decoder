// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d68e90
// Entry Point: 00d68e90
// Size: 1244 bytes
// Signature: undefined FUN_00d68e90(void)


void FUN_00d68e90(long *param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  code **ppcVar6;
  long *plVar7;
  char **ppcVar8;
  undefined *puVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  
  puVar5 = (undefined8 *)param_1[5];
  puVar9 = (undefined *)*puVar5;
  *puVar5 = puVar9 + 1;
  *puVar9 = 0xff;
  lVar10 = puVar5[1];
  puVar5[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)puVar5[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  puVar9 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = param_2;
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  puVar9 = (undefined *)*plVar7;
  iVar12 = *(int *)((long)param_1 + 0x5c) * 3 + 8;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = (char)((uint)iVar12 >> 8);
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  puVar9 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = (char)iVar12;
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
    sVar3 = *(short *)((long)param_1 + 0x56);
  }
  else {
    sVar3 = *(short *)((long)param_1 + 0x56);
  }
  if ((sVar3 != 0) || (0xffff < *(uint *)(param_1 + 10))) {
    *(undefined8 *)(*param_1 + 0x28) = 0xffff0000002a;
    (**(code **)*param_1)(param_1);
  }
  plVar7 = (long *)param_1[5];
  uVar2 = *(undefined4 *)(param_1 + 0xb);
  puVar9 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = (char)uVar2;
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  uVar2 = *(undefined4 *)((long)param_1 + 0x54);
  puVar9 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = (char)((uint)uVar2 >> 8);
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  puVar9 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = (char)uVar2;
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  uVar2 = *(undefined4 *)(param_1 + 10);
  puVar9 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = (char)((uint)uVar2 >> 8);
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  puVar9 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = (char)uVar2;
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  plVar7 = (long *)param_1[5];
  uVar2 = *(undefined4 *)((long)param_1 + 0x5c);
  puVar9 = (undefined *)*plVar7;
  *plVar7 = (long)(puVar9 + 1);
  *puVar9 = (char)uVar2;
  lVar10 = plVar7[1];
  plVar7[1] = lVar10 + -1;
  if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x5c)) {
    iVar12 = 0;
    puVar13 = (undefined4 *)param_1[0xd];
    do {
      plVar7 = (long *)param_1[5];
      uVar2 = *puVar13;
      puVar9 = (undefined *)*plVar7;
      *plVar7 = (long)(puVar9 + 1);
      *puVar9 = (char)uVar2;
      lVar10 = plVar7[1];
      plVar7[1] = lVar10 + -1;
      if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x19;
        (**ppcVar6)(param_1);
      }
      ppcVar8 = (char **)param_1[5];
      iVar1 = puVar13[2];
      uVar2 = puVar13[3];
      pcVar11 = *ppcVar8;
      *ppcVar8 = pcVar11 + 1;
      *pcVar11 = (char)uVar2 + (char)(iVar1 << 4);
      pcVar11 = ppcVar8[1];
      ppcVar8[1] = pcVar11 + -1;
      if ((pcVar11 + -1 == (char *)0x0) && (cVar4 = (*(code *)ppcVar8[3])(param_1), cVar4 == '\0'))
      {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x19;
        (**ppcVar6)(param_1);
      }
      plVar7 = (long *)param_1[5];
      uVar2 = puVar13[4];
      puVar9 = (undefined *)*plVar7;
      *plVar7 = (long)(puVar9 + 1);
      *puVar9 = (char)uVar2;
      lVar10 = plVar7[1];
      plVar7[1] = lVar10 + -1;
      if ((lVar10 + -1 == 0) && (cVar4 = (*(code *)plVar7[3])(param_1), cVar4 == '\0')) {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x19;
        (**ppcVar6)(param_1);
      }
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 0x18;
    } while (iVar12 < *(int *)((long)param_1 + 0x5c));
  }
  return;
}


