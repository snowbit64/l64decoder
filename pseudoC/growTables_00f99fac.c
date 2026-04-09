// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: growTables
// Entry Point: 00f99fac
// Size: 864 bytes
// Signature: undefined __cdecl growTables(btHashKey * param_1)


/* btHashMap<btHashKey<btTriIndex>, btTriIndex>::growTables(btHashKey<btTriIndex> const&) */

void btHashMap<btHashKey<btTriIndex>,btTriIndex>::growTables(btHashKey *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
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
      uVar5 = 0;
      uVar10 = uVar2;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar5 = (*(code *)PTR_FUN_01048e38)(lVar17 << 2,0x10);
      uVar10 = *(uint *)(param_1 + 4);
    }
    uVar6 = *(ulong *)(param_1 + 0x10);
    if ((int)uVar10 < 1) {
      if (uVar6 != 0) goto LAB_00f9a0cc;
    }
    else {
      uVar7 = (ulong)uVar10;
      if ((uVar10 < 8) || ((uVar5 < uVar6 + uVar7 * 4 && (uVar6 < uVar5 + uVar7 * 4)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar7 & 0xfffffff8;
        puVar14 = (undefined8 *)(uVar6 + 0x10);
        puVar15 = (undefined8 *)(uVar5 + 0x10);
        uVar16 = uVar11;
        do {
          puVar4 = puVar14 + -1;
          uVar18 = puVar14[-2];
          uVar20 = puVar14[1];
          uVar19 = *puVar14;
          uVar16 = uVar16 - 8;
          puVar14 = puVar14 + 4;
          puVar15[-1] = *puVar4;
          puVar15[-2] = uVar18;
          puVar15[1] = uVar20;
          *puVar15 = uVar19;
          puVar15 = puVar15 + 4;
        } while (uVar16 != 0);
        if (uVar11 == uVar7) goto LAB_00f9a0cc;
      }
      lVar8 = uVar7 - uVar11;
      puVar12 = (undefined4 *)(uVar6 + uVar11 * 4);
      puVar13 = (undefined4 *)(uVar5 + uVar11 * 4);
      do {
        lVar8 = lVar8 + -1;
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar8 != 0);
LAB_00f9a0cc:
      if (param_1[0x18] != (btHashKey)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    *(ulong *)(param_1 + 0x10) = uVar5;
    *(uint *)(param_1 + 8) = uVar1;
    param_1[0x18] = (btHashKey)0x1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x10);
  }
  memset((void *)(uVar5 + (long)(int)uVar2 * 4),0,(lVar17 - (int)uVar2) * 4);
  uVar10 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 4) = uVar1;
  if ((int)uVar1 <= (int)uVar10) goto LAB_00f9a25c;
  lVar8 = (long)(int)uVar10;
  if (*(int *)(param_1 + 0x28) < (int)uVar1) {
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar5 = (*(code *)PTR_FUN_01048e38)(lVar17 << 2,0x10);
      uVar10 = *(uint *)(param_1 + 0x24);
    }
    uVar6 = *(ulong *)(param_1 + 0x30);
    if ((int)uVar10 < 1) {
      if (uVar6 != 0) goto LAB_00f9a210;
    }
    else {
      uVar7 = (ulong)uVar10;
      if ((uVar10 < 8) || ((uVar5 < uVar6 + uVar7 * 4 && (uVar6 < uVar5 + uVar7 * 4)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar7 & 0xfffffff8;
        puVar14 = (undefined8 *)(uVar6 + 0x10);
        puVar15 = (undefined8 *)(uVar5 + 0x10);
        uVar16 = uVar11;
        do {
          puVar4 = puVar14 + -1;
          uVar18 = puVar14[-2];
          uVar20 = puVar14[1];
          uVar19 = *puVar14;
          uVar16 = uVar16 - 8;
          puVar14 = puVar14 + 4;
          puVar15[-1] = *puVar4;
          puVar15[-2] = uVar18;
          puVar15[1] = uVar20;
          *puVar15 = uVar19;
          puVar15 = puVar15 + 4;
        } while (uVar16 != 0);
        if (uVar11 == uVar7) goto LAB_00f9a210;
      }
      lVar9 = uVar7 - uVar11;
      puVar12 = (undefined4 *)(uVar6 + uVar11 * 4);
      puVar13 = (undefined4 *)(uVar5 + uVar11 * 4);
      do {
        lVar9 = lVar9 + -1;
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar9 != 0);
LAB_00f9a210:
      if (param_1[0x38] != (btHashKey)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    *(ulong *)(param_1 + 0x30) = uVar5;
    *(uint *)(param_1 + 0x28) = uVar1;
    param_1[0x38] = (btHashKey)0x1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x30);
  }
  memset((void *)(uVar5 + lVar8 * 4),0,(lVar17 - lVar8) * 4);
LAB_00f9a25c:
  *(uint *)(param_1 + 0x24) = uVar1;
  if (0 < (int)uVar1) {
    memset(*(void **)(param_1 + 0x10),0xff,(ulong)uVar1 << 2);
    memset(*(void **)(param_1 + 0x30),0xff,(ulong)uVar1 << 2);
  }
  if (0 < (int)uVar2) {
    uVar5 = 0;
    lVar17 = *(long *)(param_1 + 0x30);
    lVar8 = *(long *)(param_1 + 0x70);
    lVar9 = *(long *)(param_1 + 0x10);
    do {
      iVar3 = *(int *)(lVar8 + uVar5 * 4);
      uVar1 = iVar3 + (iVar3 << 0xf ^ 0xffffffffU);
      uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
      uVar1 = uVar1 ^ (int)uVar1 >> 6;
      uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
      uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & *(int *)(param_1 + 0x48) - 1U;
      uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      *(undefined4 *)(lVar17 + uVar5 * 4) = *(undefined4 *)(lVar9 + uVar6);
      *(int *)(lVar9 + uVar6) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}


