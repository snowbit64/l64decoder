// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChildShapeByIndex
// Entry Point: 00f5ff3c
// Size: 396 bytes
// Signature: undefined __thiscall removeChildShapeByIndex(btCompoundShape * this, int param_1)


/* btCompoundShape::removeChildShapeByIndex(int) */

void __thiscall btCompoundShape::removeChildShapeByIndex(btCompoundShape *this,int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(this + 0x60);
  *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(*(long *)(this + 0x30) + (long)param_1 * 0x58 + 0x50);
    FUN_00f424e4(lVar6,uVar7);
    if (*(long *)(lVar6 + 8) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(lVar6 + 8) = uVar7;
    *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + -1;
  }
  puVar4 = (undefined8 *)(*(long *)(this + 0x30) + (long)param_1 * 0x58);
  lVar6 = (long)*(int *)(this + 0x24) * 0x58 + -0x58;
  puVar1 = (undefined8 *)(*(long *)(this + 0x30) + lVar6);
  uVar10 = puVar4[1];
  uVar9 = *puVar4;
  uVar12 = puVar4[3];
  uVar11 = puVar4[2];
  uVar7 = *puVar1;
  uVar14 = puVar4[5];
  uVar13 = puVar4[4];
  uVar16 = puVar4[7];
  uVar15 = puVar4[6];
  puVar4[1] = puVar1[1];
  *puVar4 = uVar7;
  uVar7 = puVar1[2];
  uVar18 = puVar4[9];
  uVar17 = puVar4[8];
  puVar4[3] = puVar1[3];
  puVar4[2] = uVar7;
  uVar7 = puVar1[4];
  puVar4[5] = puVar1[5];
  puVar4[4] = uVar7;
  uVar7 = puVar1[6];
  puVar4[7] = puVar1[7];
  puVar4[6] = uVar7;
  uVar8 = puVar1[8];
  uVar7 = puVar1[10];
  uVar5 = puVar4[10];
  puVar4[9] = puVar1[9];
  puVar4[8] = uVar8;
  puVar4[10] = uVar7;
  puVar1 = (undefined8 *)(*(long *)(this + 0x30) + lVar6);
  puVar1[5] = uVar14;
  puVar1[4] = uVar13;
  puVar1[7] = uVar16;
  puVar1[6] = uVar15;
  puVar1[1] = uVar10;
  *puVar1 = uVar9;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  puVar1[10] = uVar5;
  puVar1[9] = uVar18;
  puVar1[8] = uVar17;
  if (*(long *)(this + 0x60) != 0) {
    *(int *)(*(long *)(*(long *)(this + 0x30) + (long)param_1 * 0x58 + 0x50) + 0x28) = param_1;
  }
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


