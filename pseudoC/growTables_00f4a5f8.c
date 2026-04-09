// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: growTables
// Entry Point: 00f4a5f8
// Size: 872 bytes
// Signature: undefined __cdecl growTables(btHashPtr * param_1)


/* btHashMap<btHashPtr, btCollisionShape*>::growTables(btHashPtr const&) */

void btHashMap<btHashPtr,btCollisionShape*>::growTables(btHashPtr *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar3 = *(uint *)(param_1 + 0x48);
  uVar4 = *(uint *)(param_1 + 4);
  if ((int)uVar3 <= (int)uVar4) {
    return;
  }
  lVar19 = (long)(int)uVar3;
  if (*(int *)(param_1 + 8) < (int)uVar3) {
    if (uVar3 == 0) {
      uVar6 = 0;
      uVar11 = uVar4;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar6 = (*(code *)PTR_FUN_01048e38)(lVar19 << 2,0x10);
      uVar11 = *(uint *)(param_1 + 4);
    }
    uVar7 = *(ulong *)(param_1 + 0x10);
    if ((int)uVar11 < 1) {
      if (uVar7 != 0) goto LAB_00f4a718;
    }
    else {
      uVar8 = (ulong)uVar11;
      if ((uVar11 < 8) || ((uVar6 < uVar7 + uVar8 * 4 && (uVar7 < uVar6 + uVar8 * 4)))) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar8 & 0xfffffff8;
        puVar15 = (undefined8 *)(uVar7 + 0x10);
        puVar16 = (undefined8 *)(uVar6 + 0x10);
        uVar18 = uVar12;
        do {
          puVar5 = puVar15 + -1;
          uVar20 = puVar15[-2];
          uVar22 = puVar15[1];
          uVar21 = *puVar15;
          uVar18 = uVar18 - 8;
          puVar15 = puVar15 + 4;
          puVar16[-1] = *puVar5;
          puVar16[-2] = uVar20;
          puVar16[1] = uVar22;
          *puVar16 = uVar21;
          puVar16 = puVar16 + 4;
        } while (uVar18 != 0);
        if (uVar12 == uVar8) goto LAB_00f4a718;
      }
      lVar9 = uVar8 - uVar12;
      puVar13 = (undefined4 *)(uVar7 + uVar12 * 4);
      puVar14 = (undefined4 *)(uVar6 + uVar12 * 4);
      do {
        lVar9 = lVar9 + -1;
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (lVar9 != 0);
LAB_00f4a718:
      if (param_1[0x18] != (btHashPtr)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    *(ulong *)(param_1 + 0x10) = uVar6;
    *(uint *)(param_1 + 8) = uVar3;
    param_1[0x18] = (btHashPtr)0x1;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x10);
  }
  memset((void *)(uVar6 + (long)(int)uVar4 * 4),0,(lVar19 - (int)uVar4) * 4);
  uVar11 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 4) = uVar3;
  if ((int)uVar3 <= (int)uVar11) goto LAB_00f4a8a8;
  lVar9 = (long)(int)uVar11;
  if (*(int *)(param_1 + 0x28) < (int)uVar3) {
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar6 = (*(code *)PTR_FUN_01048e38)(lVar19 << 2,0x10);
      uVar11 = *(uint *)(param_1 + 0x24);
    }
    uVar7 = *(ulong *)(param_1 + 0x30);
    if ((int)uVar11 < 1) {
      if (uVar7 != 0) goto LAB_00f4a85c;
    }
    else {
      uVar8 = (ulong)uVar11;
      if ((uVar11 < 8) || ((uVar6 < uVar7 + uVar8 * 4 && (uVar7 < uVar6 + uVar8 * 4)))) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar8 & 0xfffffff8;
        puVar15 = (undefined8 *)(uVar7 + 0x10);
        puVar16 = (undefined8 *)(uVar6 + 0x10);
        uVar18 = uVar12;
        do {
          puVar5 = puVar15 + -1;
          uVar20 = puVar15[-2];
          uVar22 = puVar15[1];
          uVar21 = *puVar15;
          uVar18 = uVar18 - 8;
          puVar15 = puVar15 + 4;
          puVar16[-1] = *puVar5;
          puVar16[-2] = uVar20;
          puVar16[1] = uVar22;
          *puVar16 = uVar21;
          puVar16 = puVar16 + 4;
        } while (uVar18 != 0);
        if (uVar12 == uVar8) goto LAB_00f4a85c;
      }
      lVar10 = uVar8 - uVar12;
      puVar13 = (undefined4 *)(uVar7 + uVar12 * 4);
      puVar14 = (undefined4 *)(uVar6 + uVar12 * 4);
      do {
        lVar10 = lVar10 + -1;
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (lVar10 != 0);
LAB_00f4a85c:
      if (param_1[0x38] != (btHashPtr)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    *(ulong *)(param_1 + 0x30) = uVar6;
    *(uint *)(param_1 + 0x28) = uVar3;
    param_1[0x38] = (btHashPtr)0x1;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x30);
  }
  memset((void *)(uVar6 + lVar9 * 4),0,(lVar19 - lVar9) * 4);
LAB_00f4a8a8:
  *(uint *)(param_1 + 0x24) = uVar3;
  if (0 < (int)uVar3) {
    memset(*(void **)(param_1 + 0x10),0xff,(ulong)uVar3 << 2);
    memset(*(void **)(param_1 + 0x30),0xff,(ulong)uVar3 << 2);
  }
  if (0 < (int)uVar4) {
    uVar6 = 0;
    lVar19 = *(long *)(param_1 + 0x30);
    lVar9 = *(long *)(param_1 + 0x10);
    piVar17 = (int *)(*(long *)(param_1 + 0x70) + 4);
    do {
      piVar1 = piVar17 + -1;
      iVar2 = *piVar17;
      piVar17 = piVar17 + 2;
      uVar3 = iVar2 + *piVar1 + ((iVar2 + *piVar1) * 0x8000 ^ 0xffffffffU);
      uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
      uVar3 = uVar3 ^ (int)uVar3 >> 6;
      uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
      uVar3 = (uVar3 ^ (int)uVar3 >> 0x10) & *(int *)(param_1 + 0x48) - 1U;
      uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      *(undefined4 *)(lVar19 + uVar6 * 4) = *(undefined4 *)(lVar9 + uVar7);
      *(int *)(lVar9 + uVar7) = (int)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}


