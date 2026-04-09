// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newEdgePair
// Entry Point: 00f9fc4c
// Size: 704 bytes
// Signature: undefined __thiscall newEdgePair(btConvexHullInternal * this, Vertex * param_1, Vertex * param_2)


/* btConvexHullInternal::newEdgePair(btConvexHullInternal::Vertex*, btConvexHullInternal::Vertex*)
    */

undefined8 * __thiscall
btConvexHullInternal::newEdgePair(btConvexHullInternal *this,Vertex *param_1,Vertex *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  puVar17 = *(undefined8 **)(this + 0x50);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(this + 0x48);
    if (puVar17 == (undefined8 *)0x0) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar17 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x18,0x10);
      iVar14 = *(int *)(this + 0x58);
      *(int *)(puVar17 + 1) = iVar14;
      puVar9 = PTR_FUN_01048e38;
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar17[2] = 0;
      uVar10 = (*(code *)puVar9)((long)iVar14 * 0x30,0x10);
      uVar12 = *(undefined8 *)(this + 0x40);
      *(undefined8 **)(this + 0x40) = puVar17;
      *puVar17 = uVar10;
      puVar17[2] = uVar12;
    }
    else {
      *(undefined8 *)(this + 0x48) = puVar17[2];
    }
    uVar5 = *(uint *)(puVar17 + 1);
    puVar17 = (undefined8 *)*puVar17;
    if (0 < (int)uVar5) {
      if (uVar5 - 1 == 0) {
        uVar13 = 0;
        puVar11 = puVar17;
      }
      else {
        uVar2 = (ulong)(uVar5 - 1) + 1;
        uVar15 = 0;
        uVar13 = uVar2 & 0x1fffffffe;
        puVar11 = puVar17 + 6;
        do {
          iVar14 = (int)uVar15;
          uVar15 = uVar15 + 2;
          puVar16 = puVar11 + 6;
          puVar3 = puVar11;
          if ((int)uVar5 <= iVar14 + 1) {
            puVar3 = (undefined8 *)0x0;
          }
          if ((int)uVar5 <= (int)uVar15) {
            puVar16 = (undefined8 *)0x0;
          }
          puVar11[-6] = puVar3;
          *puVar11 = puVar16;
          puVar11 = puVar11 + 0xc;
        } while (uVar13 != uVar15);
        if (uVar2 == uVar13) goto LAB_00f9fd80;
        puVar11 = puVar17 + uVar13 * 6;
      }
      do {
        uVar1 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar1;
        puVar16 = puVar11 + 6;
        if ((int)uVar5 <= (int)uVar1) {
          puVar16 = (undefined8 *)0x0;
        }
        *puVar11 = puVar16;
        puVar11 = puVar11 + 6;
      } while (uVar5 != uVar1);
    }
  }
LAB_00f9fd80:
  *(undefined8 *)(this + 0x50) = *puVar17;
  puVar17[3] = 0;
  puVar17[2] = 0;
  puVar17[5] = 0;
  puVar17[4] = 0;
  puVar17[1] = 0;
  *puVar17 = 0;
  puVar11 = *(undefined8 **)(this + 0x50);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(this + 0x48);
    if (puVar11 == (undefined8 *)0x0) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar11 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x18,0x10);
      iVar14 = *(int *)(this + 0x58);
      *(int *)(puVar11 + 1) = iVar14;
      puVar9 = PTR_FUN_01048e38;
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar11[2] = 0;
      uVar10 = (*(code *)puVar9)((long)iVar14 * 0x30,0x10);
      uVar12 = *(undefined8 *)(this + 0x40);
      *(undefined8 **)(this + 0x40) = puVar11;
      *puVar11 = uVar10;
      puVar11[2] = uVar12;
    }
    else {
      *(undefined8 *)(this + 0x48) = puVar11[2];
    }
    uVar5 = *(uint *)(puVar11 + 1);
    puVar11 = (undefined8 *)*puVar11;
    if (0 < (int)uVar5) {
      if (uVar5 - 1 == 0) {
        uVar13 = 0;
        puVar16 = puVar11;
      }
      else {
        uVar2 = (ulong)(uVar5 - 1) + 1;
        uVar15 = 0;
        uVar13 = uVar2 & 0x1fffffffe;
        puVar16 = puVar11 + 6;
        do {
          iVar14 = (int)uVar15;
          uVar15 = uVar15 + 2;
          puVar3 = puVar16 + 6;
          puVar4 = puVar16;
          if ((int)uVar5 <= iVar14 + 1) {
            puVar4 = (undefined8 *)0x0;
          }
          if ((int)uVar5 <= (int)uVar15) {
            puVar3 = (undefined8 *)0x0;
          }
          puVar16[-6] = puVar4;
          *puVar16 = puVar3;
          puVar16 = puVar16 + 0xc;
        } while (uVar13 != uVar15);
        if (uVar2 == uVar13) goto LAB_00f9fea8;
        puVar16 = puVar11 + uVar13 * 6;
      }
      do {
        uVar1 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar1;
        puVar3 = puVar16 + 6;
        if ((int)uVar5 <= (int)uVar1) {
          puVar3 = (undefined8 *)0x0;
        }
        *puVar16 = puVar3;
        puVar16 = puVar16 + 6;
      } while (uVar5 != uVar1);
    }
  }
LAB_00f9fea8:
  *(undefined8 *)(this + 0x50) = *puVar11;
  puVar11[3] = 0;
  puVar11[2] = 0;
  puVar11[5] = 0;
  puVar11[4] = 0;
  puVar11[1] = 0;
  *puVar11 = 0;
  uVar6 = *(undefined4 *)(this + 0xa0);
  puVar17[2] = puVar11;
  puVar17[3] = param_2;
  iVar7 = *(int *)(this + 0xb0);
  puVar11[2] = puVar17;
  puVar11[3] = param_1;
  iVar8 = *(int *)(this + 0xb4);
  puVar17[4] = 0;
  *(undefined4 *)(puVar17 + 5) = uVar6;
  *(undefined4 *)(puVar11 + 5) = uVar6;
  iVar14 = iVar7 + 1;
  puVar11[4] = 0;
  *(int *)(this + 0xb0) = iVar14;
  if (iVar8 <= iVar7) {
    *(int *)(this + 0xb4) = iVar14;
  }
  return puVar17;
}


