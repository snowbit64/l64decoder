// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extrude
// Entry Point: 00f9c4b0
// Size: 1128 bytes
// Signature: undefined __thiscall extrude(HullLibrary * this, btHullTriangle * param_1, int param_2)


/* HullLibrary::extrude(btHullTriangle*, int) */

void __thiscall HullLibrary::extrude(HullLibrary *this,btHullTriangle *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  btHullTriangle *pbVar11;
  btHullTriangle *pbVar12;
  btHullTriangle *pbVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  
  iVar3 = *(int *)param_1;
  iVar5 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 8);
  iVar8 = *(int *)(this + 4);
  pbVar11 = (btHullTriangle *)allocateTriangle(this,param_2,iVar5,iVar7);
  iVar1 = iVar8 + 1;
  iVar2 = iVar8 + 2;
  *(undefined4 *)(pbVar11 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(pbVar11 + 0x10) = iVar1;
  *(int *)(pbVar11 + 0x14) = iVar2;
  piVar14 = *(int **)(*(long *)(this + 0x10) + (long)*(int *)(param_1 + 0xc) * 8);
  iVar4 = *piVar14;
  iVar6 = piVar14[1];
  if (((iVar4 == iVar5) && (iVar6 == iVar7)) || ((iVar4 == iVar7 && (iVar6 == iVar5)))) {
    lVar15 = 2;
LAB_00f9c548:
    piVar16 = piVar14 + lVar15 + 3;
  }
  else {
    iVar10 = piVar14[2];
    if (((iVar6 == iVar5) && (iVar10 == iVar7)) || ((iVar6 == iVar7 && (iVar10 == iVar5)))) {
      lVar15 = 0;
      goto LAB_00f9c548;
    }
    if (((iVar10 == iVar5) && (iVar4 == iVar7)) ||
       ((piVar16 = &DAT_01048e5c, iVar10 == iVar7 && (iVar4 == iVar5)))) {
      lVar15 = 1;
      goto LAB_00f9c548;
    }
  }
  *piVar16 = iVar8;
  pbVar12 = (btHullTriangle *)allocateTriangle(this,param_2,iVar7,iVar3);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  *(int *)(pbVar12 + 0x14) = iVar8;
  *(undefined4 *)(pbVar12 + 0xc) = uVar9;
  *(int *)(pbVar12 + 0x10) = iVar2;
  piVar14 = *(int **)(*(long *)(this + 0x10) + (long)*(int *)(param_1 + 0x10) * 8);
  iVar4 = *piVar14;
  iVar6 = piVar14[1];
  if (((iVar4 == iVar7) && (iVar6 == iVar3)) || ((iVar4 == iVar3 && (iVar6 == iVar7)))) {
    lVar15 = 2;
LAB_00f9c5b0:
    piVar16 = piVar14 + lVar15 + 3;
  }
  else {
    iVar10 = piVar14[2];
    if (((iVar6 == iVar7) && (iVar10 == iVar3)) || ((iVar6 == iVar3 && (iVar10 == iVar7)))) {
      lVar15 = 0;
      goto LAB_00f9c5b0;
    }
    if (((iVar10 == iVar7) && (iVar4 == iVar3)) ||
       ((piVar16 = &DAT_01048e5c, iVar10 == iVar3 && (iVar4 == iVar7)))) {
      lVar15 = 1;
      goto LAB_00f9c5b0;
    }
  }
  *piVar16 = iVar1;
  pbVar13 = (btHullTriangle *)allocateTriangle(this,param_2,iVar3,iVar5);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  *(int *)(pbVar13 + 0x14) = iVar1;
  *(undefined4 *)(pbVar13 + 0xc) = uVar9;
  *(int *)(pbVar13 + 0x10) = iVar8;
  lVar15 = *(long *)(this + 0x10);
  piVar14 = *(int **)(lVar15 + (long)*(int *)(param_1 + 0x14) * 8);
  iVar1 = *piVar14;
  iVar4 = piVar14[1];
  if (((iVar1 == iVar3) && (iVar4 == iVar5)) || ((iVar1 == iVar5 && (iVar4 == iVar3)))) {
    lVar17 = 2;
  }
  else {
    iVar6 = piVar14[2];
    if (((iVar4 == iVar3) && (iVar6 == iVar5)) || ((iVar4 == iVar5 && (iVar6 == iVar3)))) {
      lVar17 = 0;
    }
    else {
      if (((iVar6 != iVar3) || (iVar1 != iVar5)) &&
         ((piVar16 = &DAT_01048e5c, iVar6 != iVar5 || (iVar1 != iVar3)))) goto LAB_00f9c61c;
      lVar17 = 1;
    }
  }
  piVar16 = piVar14 + lVar17 + 3;
LAB_00f9c61c:
  *piVar16 = iVar2;
  piVar14 = *(int **)(lVar15 + (long)*(int *)(pbVar11 + 0xc) * 8);
  if (((*piVar14 == param_2) || (piVar14[1] == param_2)) || (piVar14[2] == param_2)) {
    b2bfix(this,pbVar11,(btHullTriangle *)piVar14);
    *(undefined8 *)(*(long *)(this + 0x10) + (long)*(int *)(pbVar11 + 0x18) * 8) = 0;
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(pbVar11);
    *(undefined8 *)(*(long *)(this + 0x10) + (long)piVar14[6] * 8) = 0;
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(piVar14);
    lVar15 = *(long *)(this + 0x10);
  }
  piVar14 = *(int **)(lVar15 + (long)*(int *)(pbVar12 + 0xc) * 8);
  if (((*piVar14 == param_2) || (piVar14[1] == param_2)) || (piVar14[2] == param_2)) {
    b2bfix(this,pbVar12,(btHullTriangle *)piVar14);
    *(undefined8 *)(*(long *)(this + 0x10) + (long)*(int *)(pbVar12 + 0x18) * 8) = 0;
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(pbVar12);
    *(undefined8 *)(*(long *)(this + 0x10) + (long)piVar14[6] * 8) = 0;
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(piVar14);
    lVar15 = *(long *)(this + 0x10);
  }
  piVar14 = *(int **)(lVar15 + (long)*(int *)(pbVar13 + 0xc) * 8);
  if (((*piVar14 == param_2) || (piVar14[1] == param_2)) || (piVar14[2] == param_2)) {
    b2bfix(this,pbVar13,(btHullTriangle *)piVar14);
    *(undefined8 *)(*(long *)(this + 0x10) + (long)*(int *)(pbVar13 + 0x18) * 8) = 0;
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(pbVar13);
    *(undefined8 *)(*(long *)(this + 0x10) + (long)piVar14[6] * 8) = 0;
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(piVar14);
    lVar15 = *(long *)(this + 0x10);
  }
  *(undefined8 *)(lVar15 + (long)*(int *)(param_1 + 0x18) * 8) = 0;
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f9c800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(param_1);
  return;
}


