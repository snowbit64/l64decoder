// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d68ac8
// Entry Point: 00d68ac8
// Size: 968 bytes
// Signature: undefined FUN_00d68ac8(void)


int FUN_00d68ac8(long *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  int *piVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  long *plVar9;
  char **ppcVar10;
  undefined *puVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  
  lVar16 = param_1[(long)param_2 + 0xe];
  if (lVar16 == 0) {
    lVar12 = *param_1;
    *(int *)(lVar12 + 0x2c) = param_2;
    ppcVar8 = (code **)*param_1;
    *(undefined4 *)(lVar12 + 0x28) = 0x36;
    (**ppcVar8)(param_1);
    uVar3 = *(uint *)(param_1 + 0x3b);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3b);
  }
  if ((int)uVar3 < 0) {
    iVar15 = 0;
    cVar5 = *(char *)(lVar16 + 0x80);
  }
  else {
    iVar15 = 0;
    lVar12 = (ulong)uVar3 + 1;
    piVar6 = (int *)param_1[0x3a];
    do {
      if (0xff < *(ushort *)(lVar16 + (long)*piVar6 * 2)) {
        iVar15 = 1;
      }
      lVar12 = lVar12 + -1;
      piVar6 = piVar6 + 1;
    } while (lVar12 != 0);
    cVar5 = *(char *)(lVar16 + 0x80);
  }
  if (cVar5 == '\0') {
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0xff;
    lVar12 = puVar7[1];
    puVar7[1] = lVar12 + -1;
    if ((lVar12 + -1 == 0) && (cVar5 = (*(code *)puVar7[3])(param_1), cVar5 == '\0')) {
      ppcVar8 = (code **)*param_1;
      *(undefined4 *)(ppcVar8 + 5) = 0x19;
      (**ppcVar8)(param_1);
    }
    puVar7 = (undefined8 *)param_1[5];
    puVar11 = (undefined *)*puVar7;
    *puVar7 = puVar11 + 1;
    *puVar11 = 0xdb;
    lVar12 = puVar7[1];
    puVar7[1] = lVar12 + -1;
    if ((lVar12 + -1 == 0) && (cVar5 = (*(code *)puVar7[3])(param_1), cVar5 == '\0')) {
      ppcVar8 = (code **)*param_1;
      *(undefined4 *)(ppcVar8 + 5) = 0x19;
      (**ppcVar8)(param_1);
    }
    plVar9 = (long *)param_1[5];
    puVar11 = (undefined *)*plVar9;
    sVar2 = (short)*(undefined4 *)(param_1 + 0x3b) + 4;
    if (iVar15 != 0) {
      sVar2 = (short)*(undefined4 *)(param_1 + 0x3b) * 2 + 5;
    }
    *plVar9 = (long)(puVar11 + 1);
    *puVar11 = (char)((ushort)sVar2 >> 8);
    lVar12 = plVar9[1];
    plVar9[1] = lVar12 + -1;
    if ((lVar12 + -1 == 0) && (cVar5 = (*(code *)plVar9[3])(param_1), cVar5 == '\0')) {
      ppcVar8 = (code **)*param_1;
      *(undefined4 *)(ppcVar8 + 5) = 0x19;
      (**ppcVar8)(param_1);
    }
    plVar9 = (long *)param_1[5];
    puVar11 = (undefined *)*plVar9;
    *plVar9 = (long)(puVar11 + 1);
    *puVar11 = (char)sVar2;
    lVar12 = plVar9[1];
    plVar9[1] = lVar12 + -1;
    if ((lVar12 + -1 == 0) && (cVar5 = (*(code *)plVar9[3])(param_1), cVar5 == '\0')) {
      ppcVar8 = (code **)*param_1;
      *(undefined4 *)(ppcVar8 + 5) = 0x19;
      (**ppcVar8)(param_1);
    }
    ppcVar10 = (char **)param_1[5];
    pcVar13 = *ppcVar10;
    *ppcVar10 = pcVar13 + 1;
    *pcVar13 = (char)param_2 + (char)(iVar15 << 4);
    pcVar13 = ppcVar10[1];
    ppcVar10[1] = pcVar13 + -1;
    if ((pcVar13 + -1 == (char *)0x0) && (cVar5 = (*(code *)ppcVar10[3])(param_1), cVar5 == '\0')) {
      ppcVar8 = (code **)*param_1;
      *(undefined4 *)(ppcVar8 + 5) = 0x19;
      (**ppcVar8)(param_1);
    }
    if (-1 < *(int *)(param_1 + 0x3b)) {
      lVar12 = 0;
      if (iVar15 == 0) {
        do {
          plVar9 = (long *)param_1[5];
          puVar11 = (undefined *)*plVar9;
          uVar4 = *(undefined2 *)(lVar16 + (long)*(int *)(param_1[0x3a] + lVar12 * 4) * 2);
          *plVar9 = (long)(puVar11 + 1);
          *puVar11 = (char)uVar4;
          lVar14 = plVar9[1];
          plVar9[1] = lVar14 + -1;
          if ((lVar14 + -1 == 0) && (cVar5 = (*(code *)plVar9[3])(param_1), cVar5 == '\0')) {
            ppcVar8 = (code **)*param_1;
            *(undefined4 *)(ppcVar8 + 5) = 0x19;
            (**ppcVar8)(param_1);
          }
          bVar1 = lVar12 < *(int *)(param_1 + 0x3b);
          lVar12 = lVar12 + 1;
        } while (bVar1);
      }
      else {
        do {
          plVar9 = (long *)param_1[5];
          uVar4 = *(undefined2 *)(lVar16 + (long)*(int *)(param_1[0x3a] + lVar12 * 4) * 2);
          puVar11 = (undefined *)*plVar9;
          *plVar9 = (long)(puVar11 + 1);
          *puVar11 = (char)((ushort)uVar4 >> 8);
          lVar14 = plVar9[1];
          plVar9[1] = lVar14 + -1;
          if ((lVar14 + -1 == 0) && (cVar5 = (*(code *)plVar9[3])(param_1), cVar5 == '\0')) {
            ppcVar8 = (code **)*param_1;
            *(undefined4 *)(ppcVar8 + 5) = 0x19;
            (**ppcVar8)(param_1);
          }
          plVar9 = (long *)param_1[5];
          puVar11 = (undefined *)*plVar9;
          *plVar9 = (long)(puVar11 + 1);
          *puVar11 = (char)uVar4;
          lVar14 = plVar9[1];
          plVar9[1] = lVar14 + -1;
          if ((lVar14 + -1 == 0) && (cVar5 = (*(code *)plVar9[3])(param_1), cVar5 == '\0')) {
            ppcVar8 = (code **)*param_1;
            *(undefined4 *)(ppcVar8 + 5) = 0x19;
            (**ppcVar8)(param_1);
          }
          bVar1 = lVar12 < *(int *)(param_1 + 0x3b);
          lVar12 = lVar12 + 1;
        } while (bVar1);
      }
    }
    *(undefined *)(lVar16 + 0x80) = 1;
    return iVar15;
  }
  return iVar15;
}


