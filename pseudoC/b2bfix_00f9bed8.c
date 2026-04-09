// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: b2bfix
// Entry Point: 00f9bed8
// Size: 952 bytes
// Signature: undefined __thiscall b2bfix(HullLibrary * this, btHullTriangle * param_1, btHullTriangle * param_2)


/* HullLibrary::b2bfix(btHullTriangle*, btHullTriangle*) */

void __thiscall
HullLibrary::b2bfix(HullLibrary *this,btHullTriangle *param_1,btHullTriangle *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  
  lVar10 = *(long *)(this + 0x10);
  uVar9 = 0;
  do {
    uVar1 = uVar9 + 1;
    iVar5 = *(int *)(param_1 + ((ulong)(uVar1 + ((uVar1 & 0xff) / 3) * -3) & 0xff) * 4);
    iVar6 = *(int *)(param_1 + ((ulong)(uVar9 + 2 + ((uVar9 + 2 & 0xff) / 3) * -3) & 0xff) * 4);
    iVar2 = *(int *)param_2;
    iVar3 = *(int *)(param_2 + 4);
    if ((iVar2 == iVar6 && iVar3 == iVar5) || (iVar2 == iVar5 && iVar3 == iVar6)) {
      lVar11 = 2;
LAB_00f9bf80:
      piVar7 = (int *)(param_2 + lVar11 * 4 + 0xc);
    }
    else {
      iVar4 = *(int *)(param_2 + 8);
      if ((iVar3 == iVar6 && iVar4 == iVar5) || ((iVar3 == iVar5 && (iVar4 == iVar6)))) {
        lVar11 = 0;
        goto LAB_00f9bf80;
      }
      if (((iVar4 == iVar6) && (iVar2 == iVar5)) ||
         ((piVar7 = &DAT_01048e5c, iVar4 == iVar5 && (iVar2 == iVar6)))) {
        lVar11 = 1;
        goto LAB_00f9bf80;
      }
    }
    iVar2 = *(int *)param_1;
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar2 == iVar5 && iVar3 == iVar6) || ((iVar2 == iVar6 && (iVar3 == iVar5)))) {
      lVar11 = 2;
LAB_00f9bfac:
      piVar12 = (int *)(param_1 + lVar11 * 4 + 0xc);
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      if (((iVar3 == iVar5) && (iVar4 == iVar6)) || ((iVar3 == iVar6 && (iVar4 == iVar5)))) {
        lVar11 = 0;
        goto LAB_00f9bfac;
      }
      if (((iVar4 == iVar5) && (iVar2 == iVar6)) ||
         ((piVar12 = &DAT_01048e5c, iVar4 == iVar6 && (iVar2 == iVar5)))) {
        lVar11 = 1;
        goto LAB_00f9bfac;
      }
    }
    piVar12 = *(int **)(lVar10 + (long)*piVar12 * 8);
    iVar2 = *piVar12;
    iVar3 = piVar12[1];
    if (((iVar2 == iVar6) && (iVar3 == iVar5)) || ((iVar2 == iVar5 && (iVar3 == iVar6)))) {
      lVar11 = 2;
LAB_00f9bfe0:
      piVar8 = piVar12 + lVar11 + 3;
    }
    else {
      iVar4 = piVar12[2];
      if (((iVar3 == iVar6) && (iVar4 == iVar5)) || ((iVar3 == iVar5 && (iVar4 == iVar6)))) {
        lVar11 = 0;
        goto LAB_00f9bfe0;
      }
      if (((iVar4 == iVar6) && (iVar2 == iVar5)) ||
         ((piVar8 = &DAT_01048e5c, iVar4 == iVar5 && (iVar2 == iVar6)))) {
        lVar11 = 1;
        goto LAB_00f9bfe0;
      }
    }
    *piVar8 = *piVar7;
    iVar2 = *(int *)param_1;
    iVar3 = *(int *)(param_1 + 4);
    if (((iVar2 == iVar5) && (iVar3 == iVar6)) || ((iVar2 == iVar6 && (iVar3 == iVar5)))) {
      lVar11 = 2;
LAB_00f9c014:
      piVar7 = (int *)(param_1 + lVar11 * 4 + 0xc);
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      if (((iVar3 == iVar5) && (iVar4 == iVar6)) || ((iVar3 == iVar6 && (iVar4 == iVar5)))) {
        lVar11 = 0;
        goto LAB_00f9c014;
      }
      if (((iVar4 == iVar5) && (iVar2 == iVar6)) ||
         ((piVar7 = &DAT_01048e5c, iVar4 == iVar6 && (iVar2 == iVar5)))) {
        lVar11 = 1;
        goto LAB_00f9c014;
      }
    }
    iVar2 = *(int *)param_2;
    iVar3 = *(int *)(param_2 + 4);
    if (((iVar2 == iVar6) && (iVar3 == iVar5)) || ((iVar2 == iVar5 && (iVar3 == iVar6)))) {
      lVar11 = 2;
LAB_00f9c044:
      piVar12 = (int *)(param_2 + lVar11 * 4 + 0xc);
    }
    else {
      iVar4 = *(int *)(param_2 + 8);
      if (((iVar3 == iVar6) && (iVar4 == iVar5)) || ((iVar3 == iVar5 && (iVar4 == iVar6)))) {
        lVar11 = 0;
        goto LAB_00f9c044;
      }
      if (((iVar4 == iVar6) && (iVar2 == iVar5)) ||
         ((piVar12 = &DAT_01048e5c, iVar4 == iVar5 && (iVar2 == iVar6)))) {
        lVar11 = 1;
        goto LAB_00f9c044;
      }
    }
    piVar12 = *(int **)(lVar10 + (long)*piVar12 * 8);
    iVar2 = *piVar12;
    iVar3 = piVar12[1];
    if (((iVar2 == iVar5) && (iVar3 == iVar6)) || ((iVar2 == iVar6 && (iVar3 == iVar5)))) {
      lVar11 = 2;
LAB_00f9c078:
      piVar8 = piVar12 + lVar11 + 3;
    }
    else {
      iVar4 = piVar12[2];
      if (((iVar3 == iVar5) && (iVar4 == iVar6)) || ((iVar3 == iVar6 && (iVar4 == iVar5)))) {
        lVar11 = 0;
        goto LAB_00f9c078;
      }
      if (((iVar4 == iVar5) && (iVar2 == iVar6)) ||
         ((piVar8 = &DAT_01048e5c, iVar4 == iVar6 && (iVar2 == iVar5)))) {
        lVar11 = 1;
        goto LAB_00f9c078;
      }
    }
    *piVar8 = *piVar7;
    uVar9 = uVar1;
    if (uVar1 == 3) {
      return;
    }
  } while( true );
}


