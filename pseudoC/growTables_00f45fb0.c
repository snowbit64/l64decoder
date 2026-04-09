// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: growTables
// Entry Point: 00f45fb0
// Size: 880 bytes
// Signature: undefined growTables(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btHashedOverlappingPairCache::growTables() */

void btHashedOverlappingPairCache::growTables(void)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long in_x0;
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
  long *plVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar2 = *(uint *)(in_x0 + 0x10);
  uVar3 = *(uint *)(in_x0 + 0x34);
  if ((int)uVar2 <= (int)uVar3) {
    return;
  }
  lVar18 = (long)(int)uVar2;
  if (*(int *)(in_x0 + 0x38) < (int)uVar2) {
    if (uVar2 == 0) {
      uVar5 = 0;
      uVar10 = uVar3;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar5 = (*(code *)PTR_FUN_01048e38)(lVar18 << 2,0x10);
      uVar10 = *(uint *)(in_x0 + 0x34);
    }
    uVar6 = *(ulong *)(in_x0 + 0x40);
    if ((int)uVar10 < 1) {
      if (uVar6 != 0) goto LAB_00f460d0;
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
        uVar17 = uVar11;
        do {
          puVar4 = puVar14 + -1;
          uVar19 = puVar14[-2];
          uVar21 = puVar14[1];
          uVar20 = *puVar14;
          uVar17 = uVar17 - 8;
          puVar14 = puVar14 + 4;
          puVar15[-1] = *puVar4;
          puVar15[-2] = uVar19;
          puVar15[1] = uVar21;
          *puVar15 = uVar20;
          puVar15 = puVar15 + 4;
        } while (uVar17 != 0);
        if (uVar11 == uVar7) goto LAB_00f460d0;
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
LAB_00f460d0:
      if (*(char *)(in_x0 + 0x48) != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    *(ulong *)(in_x0 + 0x40) = uVar5;
    *(uint *)(in_x0 + 0x38) = uVar2;
    *(undefined *)(in_x0 + 0x48) = 1;
  }
  else {
    uVar5 = *(ulong *)(in_x0 + 0x40);
  }
  memset((void *)(uVar5 + (long)(int)uVar3 * 4),0,(lVar18 - (int)uVar3) * 4);
  uVar10 = *(uint *)(in_x0 + 0x54);
  *(uint *)(in_x0 + 0x34) = uVar2;
  if ((int)uVar2 <= (int)uVar10) goto LAB_00f46260;
  lVar8 = (long)(int)uVar10;
  if (*(int *)(in_x0 + 0x58) < (int)uVar2) {
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      uVar5 = (*(code *)PTR_FUN_01048e38)(lVar18 << 2,0x10);
      uVar10 = *(uint *)(in_x0 + 0x54);
    }
    uVar6 = *(ulong *)(in_x0 + 0x60);
    if ((int)uVar10 < 1) {
      if (uVar6 != 0) goto LAB_00f46214;
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
        uVar17 = uVar11;
        do {
          puVar4 = puVar14 + -1;
          uVar19 = puVar14[-2];
          uVar21 = puVar14[1];
          uVar20 = *puVar14;
          uVar17 = uVar17 - 8;
          puVar14 = puVar14 + 4;
          puVar15[-1] = *puVar4;
          puVar15[-2] = uVar19;
          puVar15[1] = uVar21;
          *puVar15 = uVar20;
          puVar15 = puVar15 + 4;
        } while (uVar17 != 0);
        if (uVar11 == uVar7) goto LAB_00f46214;
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
LAB_00f46214:
      if (*(char *)(in_x0 + 0x68) != '\0') {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    *(ulong *)(in_x0 + 0x60) = uVar5;
    *(uint *)(in_x0 + 0x58) = uVar2;
    *(undefined *)(in_x0 + 0x68) = 1;
  }
  else {
    uVar5 = *(ulong *)(in_x0 + 0x60);
  }
  memset((void *)(uVar5 + lVar8 * 4),0,(lVar18 - lVar8) * 4);
LAB_00f46260:
  *(uint *)(in_x0 + 0x54) = uVar2;
  if (0 < (int)uVar2) {
    memset(*(void **)(in_x0 + 0x40),0xff,(ulong)uVar2 << 2);
    memset(*(void **)(in_x0 + 0x60),0xff,(ulong)uVar2 << 2);
  }
  if (0 < (int)uVar3) {
    uVar5 = 0;
    lVar18 = *(long *)(in_x0 + 0x60);
    lVar8 = *(long *)(in_x0 + 0x40);
    plVar16 = (long *)(*(long *)(in_x0 + 0x18) + 8);
    do {
      plVar1 = plVar16 + -1;
      lVar9 = *plVar16;
      plVar16 = plVar16 + 4;
      uVar2 = *(uint *)(*plVar1 + 0x18) | *(int *)(lVar9 + 0x18) << 0x10;
      uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
      uVar2 = (uVar2 ^ (int)uVar2 >> 10) * 9;
      uVar2 = uVar2 ^ (int)uVar2 >> 6;
      uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
      uVar2 = (uVar2 ^ (int)uVar2 >> 0x10) & *(int *)(in_x0 + 0x10) - 1U;
      uVar6 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      *(undefined4 *)(lVar18 + uVar5 * 4) = *(undefined4 *)(lVar8 + uVar6);
      *(int *)(lVar8 + uVar6) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}


