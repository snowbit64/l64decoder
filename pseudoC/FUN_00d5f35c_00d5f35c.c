// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5f35c
// Entry Point: 00d5f35c
// Size: 1468 bytes
// Signature: undefined FUN_00d5f35c(void)


void FUN_00d5f35c(long *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code **ppcVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  char **ppcVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  
  lVar13 = param_1[0x44];
  uVar4 = (ulong)((*(int *)(lVar13 + 0x20) + (int)*(long *)(lVar13 + 0x18)) - 1) & 0xffff0000;
  uVar7 = uVar4 | 0x8000;
  if (*(long *)(lVar13 + 0x18) <= (long)uVar4) {
    uVar7 = uVar4;
  }
  iVar3 = *(int *)(lVar13 + 0x3c);
  uVar7 = uVar7 << ((ulong)*(uint *)(lVar13 + 0x38) & 0x3f);
  *(ulong *)(lVar13 + 0x18) = uVar7;
  if ((uVar7 & 0xf8000000) == 0) {
    if (iVar3 == 0) {
      *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + 1;
    }
    else if (-1 < iVar3) {
      if (*(long *)(lVar13 + 0x30) != 0) {
        do {
          puVar5 = (undefined8 *)param_1[5];
          puVar8 = (undefined *)*puVar5;
          *puVar5 = puVar8 + 1;
          *puVar8 = 0;
          lVar9 = puVar5[1];
          puVar5[1] = lVar9 + -1;
          if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
            ppcVar6 = (code **)*param_1;
            *(undefined4 *)(ppcVar6 + 5) = 0x19;
            (**ppcVar6)(param_1);
          }
          lVar9 = *(long *)(lVar13 + 0x30) + -1;
          *(long *)(lVar13 + 0x30) = lVar9;
        } while (lVar9 != 0);
        iVar3 = *(int *)(lVar13 + 0x3c);
      }
      plVar11 = (long *)param_1[5];
      puVar8 = (undefined *)*plVar11;
      *plVar11 = (long)(puVar8 + 1);
      *puVar8 = (char)iVar3;
      lVar9 = plVar11[1];
      plVar11[1] = lVar9 + -1;
      if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)plVar11[3])(param_1), cVar2 == '\0')) {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x19;
        (**ppcVar6)(param_1);
      }
    }
    if (*(long *)(lVar13 + 0x28) != 0) {
      lVar9 = *(long *)(lVar13 + 0x30);
      while (lVar9 != 0) {
        puVar5 = (undefined8 *)param_1[5];
        puVar8 = (undefined *)*puVar5;
        *puVar5 = puVar8 + 1;
        *puVar8 = 0;
        lVar9 = puVar5[1];
        puVar5[1] = lVar9 + -1;
        if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
          ppcVar6 = (code **)*param_1;
          *(undefined4 *)(ppcVar6 + 5) = 0x19;
          (**ppcVar6)(param_1);
        }
        lVar9 = *(long *)(lVar13 + 0x30) + -1;
        *(long *)(lVar13 + 0x30) = lVar9;
      }
      do {
        puVar5 = (undefined8 *)param_1[5];
        puVar8 = (undefined *)*puVar5;
        *puVar5 = puVar8 + 1;
        *puVar8 = 0xff;
        lVar9 = puVar5[1];
        puVar5[1] = lVar9 + -1;
        if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
          ppcVar6 = (code **)*param_1;
          *(undefined4 *)(ppcVar6 + 5) = 0x19;
          (**ppcVar6)(param_1);
        }
        puVar5 = (undefined8 *)param_1[5];
        puVar8 = (undefined *)*puVar5;
        *puVar5 = puVar8 + 1;
        *puVar8 = 0;
        lVar9 = puVar5[1];
        puVar5[1] = lVar9 + -1;
        if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
          ppcVar6 = (code **)*param_1;
          *(undefined4 *)(ppcVar6 + 5) = 0x19;
          (**ppcVar6)(param_1);
        }
        lVar9 = *(long *)(lVar13 + 0x28) + -1;
        *(long *)(lVar13 + 0x28) = lVar9;
      } while (lVar9 != 0);
    }
  }
  else {
    if (-1 < iVar3) {
      if (*(long *)(lVar13 + 0x30) != 0) {
        do {
          puVar5 = (undefined8 *)param_1[5];
          puVar8 = (undefined *)*puVar5;
          *puVar5 = puVar8 + 1;
          *puVar8 = 0;
          lVar9 = puVar5[1];
          puVar5[1] = lVar9 + -1;
          if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
            ppcVar6 = (code **)*param_1;
            *(undefined4 *)(ppcVar6 + 5) = 0x19;
            (**ppcVar6)(param_1);
          }
          lVar9 = *(long *)(lVar13 + 0x30) + -1;
          *(long *)(lVar13 + 0x30) = lVar9;
        } while (lVar9 != 0);
        iVar3 = *(int *)(lVar13 + 0x3c);
      }
      ppcVar10 = (char **)param_1[5];
      pcVar12 = *ppcVar10;
      *ppcVar10 = pcVar12 + 1;
      *pcVar12 = (char)iVar3 + '\x01';
      pcVar12 = ppcVar10[1];
      ppcVar10[1] = pcVar12 + -1;
      if ((pcVar12 + -1 == (char *)0x0) && (cVar2 = (*(code *)ppcVar10[3])(param_1), cVar2 == '\0'))
      {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x19;
        (**ppcVar6)(param_1);
      }
      if (*(int *)(lVar13 + 0x3c) == 0xfe) {
        puVar5 = (undefined8 *)param_1[5];
        puVar8 = (undefined *)*puVar5;
        *puVar5 = puVar8 + 1;
        *puVar8 = 0;
        lVar9 = puVar5[1];
        puVar5[1] = lVar9 + -1;
        if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
          ppcVar6 = (code **)*param_1;
          *(undefined4 *)(ppcVar6 + 5) = 0x19;
          (**ppcVar6)(param_1);
        }
      }
    }
    lVar9 = *(long *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = 0;
    *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + lVar9;
  }
  uVar7 = *(ulong *)(lVar13 + 0x18);
  if ((uVar7 & 0x7fff800) == 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x30) != 0) {
    do {
      puVar5 = (undefined8 *)param_1[5];
      puVar8 = (undefined *)*puVar5;
      *puVar5 = puVar8 + 1;
      *puVar8 = 0;
      lVar9 = puVar5[1];
      puVar5[1] = lVar9 + -1;
      if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x19;
        (**ppcVar6)(param_1);
      }
      lVar9 = *(long *)(lVar13 + 0x30) + -1;
      *(long *)(lVar13 + 0x30) = lVar9;
    } while (lVar9 != 0);
    uVar7 = *(ulong *)(lVar13 + 0x18);
  }
  plVar11 = (long *)param_1[5];
  puVar8 = (undefined *)*plVar11;
  *plVar11 = (long)(puVar8 + 1);
  *puVar8 = (char)(uVar7 >> 0x13);
  lVar9 = plVar11[1];
  plVar11[1] = lVar9 + -1;
  if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)plVar11[3])(param_1), cVar2 == '\0')) {
    ppcVar6 = (code **)*param_1;
    *(undefined4 *)(ppcVar6 + 5) = 0x19;
    (**ppcVar6)(param_1);
  }
  if ((~*(uint *)(lVar13 + 0x18) & 0x7f80000) == 0) {
    puVar5 = (undefined8 *)param_1[5];
    puVar8 = (undefined *)*puVar5;
    *puVar5 = puVar8 + 1;
    *puVar8 = 0;
    lVar9 = puVar5[1];
    puVar5[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
      uVar7 = *(ulong *)(lVar13 + 0x18);
      goto joined_r0x00d5f904;
    }
  }
  uVar7 = *(ulong *)(lVar13 + 0x18);
joined_r0x00d5f904:
  if ((uVar7 & 0x7f800) != 0) {
    plVar11 = (long *)param_1[5];
    puVar8 = (undefined *)*plVar11;
    *plVar11 = (long)(puVar8 + 1);
    *puVar8 = (char)(uVar7 >> 0xb);
    lVar9 = plVar11[1];
    plVar11[1] = lVar9 + -1;
    if ((lVar9 + -1 == 0) && (cVar2 = (*(code *)plVar11[3])(param_1), cVar2 == '\0')) {
      ppcVar6 = (code **)*param_1;
      *(undefined4 *)(ppcVar6 + 5) = 0x19;
      (**ppcVar6)(param_1);
      uVar1 = *(uint *)(lVar13 + 0x18);
    }
    else {
      uVar1 = *(uint *)(lVar13 + 0x18);
    }
    if ((~uVar1 & 0x7f800) == 0) {
      puVar5 = (undefined8 *)param_1[5];
      puVar8 = (undefined *)*puVar5;
      *puVar5 = puVar8 + 1;
      *puVar8 = 0;
      lVar13 = puVar5[1];
      puVar5[1] = lVar13 + -1;
      if ((lVar13 + -1 == 0) && (cVar2 = (*(code *)puVar5[3])(param_1), cVar2 == '\0')) {
        ppcVar6 = (code **)*param_1;
        *(undefined4 *)(ppcVar6 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00d5f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**ppcVar6)(param_1);
        return;
      }
    }
  }
  return;
}


