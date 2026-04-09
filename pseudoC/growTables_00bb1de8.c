// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: growTables
// Entry Point: 00bb1de8
// Size: 796 bytes
// Signature: undefined __cdecl growTables(TriHashKey * param_1)


/* btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,
   Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>::growTables(Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey
   const&) */

void btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
     ::growTables(TriHashKey *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar6 = *(uint *)(param_1 + 0x48);
  uVar7 = *(uint *)(param_1 + 4);
  if ((int)uVar6 <= (int)uVar7) {
    return;
  }
  lVar23 = (long)(int)uVar6;
  if (*(int *)(param_1 + 8) < (int)uVar6) {
    if (uVar6 == 0) {
      pvVar10 = (void *)0x0;
      uVar15 = uVar7;
    }
    else {
      pvVar10 = (void *)btAlignedAllocInternal(lVar23 << 2,0x10);
      uVar15 = *(uint *)(param_1 + 4);
    }
    pvVar11 = *(void **)(param_1 + 0x10);
    if ((int)uVar15 < 1) {
      if (pvVar11 != (void *)0x0) goto LAB_00bb1eec;
    }
    else {
      uVar12 = (ulong)uVar15;
      if ((uVar15 < 8) ||
         ((pvVar10 < (void *)((long)pvVar11 + uVar12 * 4) &&
          (pvVar11 < (void *)((long)pvVar10 + uVar12 * 4))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = uVar12 & 0xfffffff8;
        puVar19 = (undefined8 *)((long)pvVar10 + 0x10);
        puVar20 = (undefined8 *)((long)pvVar11 + 0x10);
        uVar22 = uVar16;
        do {
          puVar9 = puVar20 + -1;
          uVar24 = puVar20[-2];
          uVar26 = puVar20[1];
          uVar25 = *puVar20;
          puVar20 = puVar20 + 4;
          uVar22 = uVar22 - 8;
          puVar19[-1] = *puVar9;
          puVar19[-2] = uVar24;
          puVar19[1] = uVar26;
          *puVar19 = uVar25;
          puVar19 = puVar19 + 4;
        } while (uVar22 != 0);
        if (uVar16 == uVar12) goto LAB_00bb1eec;
      }
      lVar13 = uVar12 - uVar16;
      puVar17 = (undefined4 *)((long)pvVar11 + uVar16 * 4);
      puVar18 = (undefined4 *)((long)pvVar10 + uVar16 * 4);
      do {
        lVar13 = lVar13 + -1;
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      } while (lVar13 != 0);
LAB_00bb1eec:
      if (param_1[0x18] != (TriHashKey)0x0) {
        btAlignedFreeInternal(pvVar11);
      }
    }
    *(void **)(param_1 + 0x10) = pvVar10;
    *(uint *)(param_1 + 8) = uVar6;
    param_1[0x18] = (TriHashKey)0x1;
  }
  else {
    pvVar10 = *(void **)(param_1 + 0x10);
  }
  memset((void *)((long)pvVar10 + (long)(int)uVar7 * 4),0,(lVar23 - (int)uVar7) * 4);
  uVar15 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 4) = uVar6;
  if ((int)uVar6 <= (int)uVar15) goto LAB_00bb2028;
  lVar13 = (long)(int)uVar15;
  if (*(int *)(param_1 + 0x28) < (int)uVar6) {
    if (uVar6 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)btAlignedAllocInternal(lVar23 << 2,0x10);
      uVar15 = *(uint *)(param_1 + 0x24);
    }
    pvVar11 = *(void **)(param_1 + 0x30);
    if ((int)uVar15 < 1) {
      if (pvVar11 != (void *)0x0) goto LAB_00bb1ff8;
    }
    else {
      uVar12 = (ulong)uVar15;
      if ((uVar15 < 8) ||
         ((pvVar10 < (void *)((long)pvVar11 + uVar12 * 4) &&
          (pvVar11 < (void *)((long)pvVar10 + uVar12 * 4))))) {
        uVar16 = 0;
      }
      else {
        uVar16 = uVar12 & 0xfffffff8;
        puVar19 = (undefined8 *)((long)pvVar10 + 0x10);
        puVar20 = (undefined8 *)((long)pvVar11 + 0x10);
        uVar22 = uVar16;
        do {
          puVar9 = puVar20 + -1;
          uVar24 = puVar20[-2];
          uVar26 = puVar20[1];
          uVar25 = *puVar20;
          puVar20 = puVar20 + 4;
          uVar22 = uVar22 - 8;
          puVar19[-1] = *puVar9;
          puVar19[-2] = uVar24;
          puVar19[1] = uVar26;
          *puVar19 = uVar25;
          puVar19 = puVar19 + 4;
        } while (uVar22 != 0);
        if (uVar16 == uVar12) goto LAB_00bb1ff8;
      }
      lVar14 = uVar12 - uVar16;
      puVar17 = (undefined4 *)((long)pvVar11 + uVar16 * 4);
      puVar18 = (undefined4 *)((long)pvVar10 + uVar16 * 4);
      do {
        lVar14 = lVar14 + -1;
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      } while (lVar14 != 0);
LAB_00bb1ff8:
      if (param_1[0x38] != (TriHashKey)0x0) {
        btAlignedFreeInternal(pvVar11);
      }
    }
    *(void **)(param_1 + 0x30) = pvVar10;
    *(uint *)(param_1 + 0x28) = uVar6;
    param_1[0x38] = (TriHashKey)0x1;
  }
  else {
    pvVar10 = *(void **)(param_1 + 0x30);
  }
  memset((void *)((long)pvVar10 + lVar13 * 4),0,(lVar23 - lVar13) * 4);
LAB_00bb2028:
  *(uint *)(param_1 + 0x24) = uVar6;
  if (0 < (int)uVar6) {
    memset(*(void **)(param_1 + 0x10),0xff,(ulong)uVar6 << 2);
    memset(*(void **)(param_1 + 0x30),0xff,(ulong)uVar6 << 2);
  }
  if (0 < (int)uVar7) {
    uVar12 = 0;
    lVar23 = *(long *)(param_1 + 0x30);
    lVar13 = *(long *)(param_1 + 0x10);
    piVar21 = (int *)(*(long *)(param_1 + 0x70) + 0x18);
    do {
      piVar3 = piVar21 + -6;
      piVar4 = piVar21 + -4;
      piVar5 = piVar21 + -2;
      iVar8 = *piVar21;
      piVar1 = piVar21 + 2;
      piVar2 = piVar21 + 4;
      piVar21 = piVar21 + 0xc;
      iVar8 = *piVar4 + *piVar3 + *piVar5 + iVar8 + *piVar1 + *piVar2;
      uVar6 = iVar8 + (iVar8 * 0x8000 ^ 0xffffffffU);
      uVar6 = (uVar6 ^ (int)uVar6 >> 10) * 9;
      uVar6 = uVar6 ^ (int)uVar6 >> 6;
      uVar6 = uVar6 + (uVar6 << 0xb ^ 0xffffffff);
      uVar6 = (uVar6 ^ (int)uVar6 >> 0x10) & *(int *)(param_1 + 0x48) - 1U;
      uVar16 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
      *(undefined4 *)(lVar23 + uVar12 * 4) = *(undefined4 *)(lVar13 + uVar16);
      *(int *)(lVar13 + uVar16) = (int)uVar12;
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
  }
  return;
}


