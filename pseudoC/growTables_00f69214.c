// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: growTables
// Entry Point: 00f69214
// Size: 836 bytes
// Signature: undefined __cdecl growTables(btInternalVertexPair * param_1)


/* btHashMap<btInternalVertexPair, btInternalEdge>::growTables(btInternalVertexPair const&) */

void btHashMap<btInternalVertexPair,btInternalEdge>::growTables(btInternalVertexPair *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 4);
  if ((int)uVar1 <= (int)uVar2) {
    return;
  }
  lVar17 = (long)(int)uVar1;
  if (*(int *)(param_1 + 8) < (int)uVar1) {
    if (uVar1 == 0) {
      uVar4 = 0;
      uVar9 = uVar2;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar4 = (*(code *)PTR_FUN_01048e38)(lVar17 << 2,0x10);
      uVar9 = *(uint *)(param_1 + 4);
    }
    uVar5 = *(ulong *)(param_1 + 0x10);
    if ((int)uVar9 < 1) {
      if (uVar5 != 0) goto LAB_00f69334;
    }
    else {
      uVar6 = (ulong)uVar9;
      if ((uVar9 < 8) || ((uVar4 < uVar5 + uVar6 * 4 && (uVar5 < uVar4 + uVar6 * 4)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar6 & 0xfffffff8;
        puVar13 = (undefined8 *)(uVar5 + 0x10);
        puVar14 = (undefined8 *)(uVar4 + 0x10);
        uVar16 = uVar10;
        do {
          puVar3 = puVar13 + -1;
          uVar18 = puVar13[-2];
          uVar20 = puVar13[1];
          uVar19 = *puVar13;
          uVar16 = uVar16 - 8;
          puVar13 = puVar13 + 4;
          puVar14[-1] = *puVar3;
          puVar14[-2] = uVar18;
          puVar14[1] = uVar20;
          *puVar14 = uVar19;
          puVar14 = puVar14 + 4;
        } while (uVar16 != 0);
        if (uVar10 == uVar6) goto LAB_00f69334;
      }
      lVar7 = uVar6 - uVar10;
      puVar11 = (undefined4 *)(uVar5 + uVar10 * 4);
      puVar12 = (undefined4 *)(uVar4 + uVar10 * 4);
      do {
        lVar7 = lVar7 + -1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar7 != 0);
LAB_00f69334:
      if (param_1[0x18] != (btInternalVertexPair)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(uint *)(param_1 + 8) = uVar1;
    param_1[0x18] = (btInternalVertexPair)0x1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x10);
  }
  memset((void *)(uVar4 + (long)(int)uVar2 * 4),0,(lVar17 - (int)uVar2) * 4);
  uVar9 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 4) = uVar1;
  if ((int)uVar1 <= (int)uVar9) goto LAB_00f694c4;
  lVar7 = (long)(int)uVar9;
  if (*(int *)(param_1 + 0x28) < (int)uVar1) {
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar4 = (*(code *)PTR_FUN_01048e38)(lVar17 << 2,0x10);
      uVar9 = *(uint *)(param_1 + 0x24);
    }
    uVar5 = *(ulong *)(param_1 + 0x30);
    if ((int)uVar9 < 1) {
      if (uVar5 != 0) goto LAB_00f69478;
    }
    else {
      uVar6 = (ulong)uVar9;
      if ((uVar9 < 8) || ((uVar4 < uVar5 + uVar6 * 4 && (uVar5 < uVar4 + uVar6 * 4)))) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar6 & 0xfffffff8;
        puVar13 = (undefined8 *)(uVar5 + 0x10);
        puVar14 = (undefined8 *)(uVar4 + 0x10);
        uVar16 = uVar10;
        do {
          puVar3 = puVar13 + -1;
          uVar18 = puVar13[-2];
          uVar20 = puVar13[1];
          uVar19 = *puVar13;
          uVar16 = uVar16 - 8;
          puVar13 = puVar13 + 4;
          puVar14[-1] = *puVar3;
          puVar14[-2] = uVar18;
          puVar14[1] = uVar20;
          *puVar14 = uVar19;
          puVar14 = puVar14 + 4;
        } while (uVar16 != 0);
        if (uVar10 == uVar6) goto LAB_00f69478;
      }
      lVar8 = uVar6 - uVar10;
      puVar11 = (undefined4 *)(uVar5 + uVar10 * 4);
      puVar12 = (undefined4 *)(uVar4 + uVar10 * 4);
      do {
        lVar8 = lVar8 + -1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar8 != 0);
LAB_00f69478:
      if (param_1[0x38] != (btInternalVertexPair)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    *(ulong *)(param_1 + 0x30) = uVar4;
    *(uint *)(param_1 + 0x28) = uVar1;
    param_1[0x38] = (btInternalVertexPair)0x1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x30);
  }
  memset((void *)(uVar4 + lVar7 * 4),0,(lVar17 - lVar7) * 4);
LAB_00f694c4:
  *(uint *)(param_1 + 0x24) = uVar1;
  if (0 < (int)uVar1) {
    memset(*(void **)(param_1 + 0x10),0xff,(ulong)uVar1 << 2);
    memset(*(void **)(param_1 + 0x30),0xff,(ulong)uVar1 << 2);
  }
  if (0 < (int)uVar2) {
    uVar4 = 0;
    lVar17 = *(long *)(param_1 + 0x30);
    lVar7 = *(long *)(param_1 + 0x10);
    puVar15 = (ushort *)(*(long *)(param_1 + 0x70) + 2);
    do {
      uVar1 = (int)(short)puVar15[-1] + (uint)*puVar15 * 0x10000 & *(int *)(param_1 + 0x48) - 1U;
      uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      *(undefined4 *)(lVar17 + uVar4 * 4) = *(undefined4 *)(lVar7 + uVar5);
      *(int *)(lVar7 + uVar5) = (int)uVar4;
      uVar4 = uVar4 + 1;
      puVar15 = puVar15 + 2;
    } while (uVar2 != uVar4);
  }
  return;
}


