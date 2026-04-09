// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addNode
// Entry Point: 00af894c
// Size: 500 bytes
// Signature: undefined __thiscall addNode(NavigationMesh * this, uint param_1, ushort * param_2, ushort * param_3, float param_4)


/* NavigationMesh::addNode(unsigned int, unsigned short*, unsigned short*, float) */

void __thiscall
NavigationMesh::addNode
          (NavigationMesh *this,uint param_1,ushort *param_2,ushort *param_3,float param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (*(uint *)(this + 0x10) <= *(uint *)(this + 0x1c)) {
    return;
  }
  if (*(uint *)(this + 0x14) < *(uint *)(this + 0x20) + param_1) {
    return;
  }
  lVar7 = (ulong)*(uint *)(this + 0x20) * 2;
  NavigationMeshNode::init
            ((NavigationMeshNode *)(*(long *)(this + 0x30) + (ulong)*(uint *)(this + 0x1c) * 0x18),
             param_1,(ushort *)(*(long *)(this + 0x38) + lVar7),
             (ushort *)(*(long *)(this + 0x40) + lVar7),param_4);
  if (param_1 == 0) goto LAB_00af8b24;
  lVar7 = *(long *)(this + 0x38);
  lVar5 = *(long *)(this + 0x40);
  uVar8 = (ulong)param_1;
  uVar13 = *(uint *)(this + 0x20);
  uVar11 = (ulong)uVar13;
  if (((param_1 < 0x10) || (CARRY4(uVar13,(uint)(uVar8 - 1)))) || (uVar8 - 1 >> 0x20 != 0)) {
LAB_00af8ae8:
    uVar10 = 0;
LAB_00af8aec:
    lVar9 = uVar8 - uVar10;
    puVar12 = param_2 + uVar10;
    puVar15 = param_3 + uVar10;
    do {
      uVar8 = (ulong)uVar13;
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + -1;
      *(ushort *)(lVar7 + uVar8 * 2) = *puVar12;
      *(ushort *)(lVar5 + uVar8 * 2) = *puVar15;
      puVar12 = puVar12 + 1;
      puVar15 = puVar15 + 1;
    } while (lVar9 != 0);
  }
  else {
    lVar9 = (uVar11 + uVar8) * 2;
    puVar12 = (ushort *)(lVar7 + lVar9);
    puVar15 = (ushort *)(lVar7 + uVar11 * 2);
    puVar1 = (ushort *)(lVar5 + lVar9);
    puVar2 = (ushort *)(lVar5 + uVar11 * 2);
    if (((param_2 < puVar12 && puVar15 < param_2 + uVar8) ||
        (param_2 < puVar1 && puVar2 < param_2 + uVar8)) ||
       ((param_3 < puVar12 && puVar15 < param_3 + uVar8 ||
        ((param_3 < puVar1 && puVar2 < param_3 + uVar8 || (puVar15 < puVar1 && puVar2 < puVar12)))))
       ) goto LAB_00af8ae8;
    uVar10 = uVar8 & 0xfffffff0;
    puVar14 = (undefined8 *)(param_2 + 8);
    uVar13 = uVar13 + (int)uVar10;
    puVar16 = (undefined8 *)(param_3 + 8);
    uVar17 = uVar10;
    do {
      puVar6 = puVar14 + -1;
      uVar18 = puVar14[-2];
      uVar21 = puVar14[1];
      uVar20 = *puVar14;
      puVar14 = puVar14 + 4;
      uVar17 = uVar17 - 0x10;
      puVar3 = (undefined8 *)(lVar7 + uVar11 * 2);
      puVar4 = (undefined8 *)(lVar5 + uVar11 * 2);
      uVar11 = (ulong)((int)uVar11 + 0x10);
      puVar3[1] = *puVar6;
      *puVar3 = uVar18;
      uVar19 = puVar16[-1];
      uVar18 = puVar16[-2];
      puVar3[3] = uVar21;
      puVar3[2] = uVar20;
      uVar21 = puVar16[1];
      uVar20 = *puVar16;
      puVar4[1] = uVar19;
      *puVar4 = uVar18;
      puVar4[3] = uVar21;
      puVar4[2] = uVar20;
      puVar16 = puVar16 + 4;
    } while (uVar17 != 0);
    if (uVar10 != uVar8) goto LAB_00af8aec;
  }
  *(uint *)(this + 0x20) = uVar13;
LAB_00af8b24:
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  return;
}


