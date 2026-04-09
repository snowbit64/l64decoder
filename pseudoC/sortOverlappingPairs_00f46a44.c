// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortOverlappingPairs
// Entry Point: 00f46a44
// Size: 712 bytes
// Signature: undefined __thiscall sortOverlappingPairs(btHashedOverlappingPairCache * this, btDispatcher * param_1)


/* btHashedOverlappingPairCache::sortOverlappingPairs(btDispatcher*) */

void __thiscall
btHashedOverlappingPairCache::sortOverlappingPairs
          (btHashedOverlappingPairCache *this,btDispatcher *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  btBroadphasePairSortPredicate abStack_90 [8];
  btAlignedObjectArray<btBroadphasePair> abStack_88 [4];
  uint local_84;
  uint local_80;
  long local_78;
  char local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_70 = '\x01';
  local_78 = 0;
  local_84 = 0;
  local_80 = 0;
  if (*(int *)(this + 0xc) < 1) {
    uVar10 = 0;
  }
  else {
    uVar11 = 0;
    lVar12 = 0;
    uVar10 = local_84;
    do {
      local_84 = uVar10;
      uVar5 = local_80;
      local_70 = '\x01';
      lVar9 = *(long *)(this + 0x18);
      uVar10 = (uint)uVar11;
      lVar6 = local_78;
      if ((uint)uVar11 == local_80) {
        uVar3 = local_80 << 1;
        if (local_80 == 0) {
          uVar3 = 1;
        }
        uVar10 = local_80;
        if ((int)local_80 < (int)uVar3) {
          if (uVar3 == 0) {
            lVar6 = 0;
            uVar10 = local_84;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar6 = (*(code *)PTR_FUN_01048e38)
                              (-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5,0x10
                              );
            uVar10 = local_84;
          }
          if (0 < (int)uVar5) {
            lVar7 = 0;
            do {
              puVar8 = (undefined8 *)(lVar6 + lVar7);
              puVar1 = (undefined8 *)(local_78 + lVar7);
              lVar7 = lVar7 + 0x20;
              uVar13 = *puVar1;
              puVar8[1] = puVar1[1];
              *puVar8 = uVar13;
              puVar8[2] = puVar1[2];
              puVar8[3] = puVar1[3];
            } while ((ulong)uVar5 * 0x20 - lVar7 != 0);
          }
          local_84 = uVar10;
          uVar5 = uVar3;
          if ((local_78 != 0) && (local_70 != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
            uVar10 = local_84;
          }
        }
      }
      local_78 = lVar6;
      local_80 = uVar5;
      local_70 = '\x01';
      puVar8 = (undefined8 *)(lVar9 + lVar12 * 0x20);
      lVar12 = lVar12 + 1;
      puVar1 = (undefined8 *)(local_78 + (long)(int)uVar10 * 0x20);
      uVar13 = *puVar8;
      puVar1[1] = puVar8[1];
      *puVar1 = uVar13;
      puVar1[2] = puVar8[2];
      puVar1[3] = puVar8[3];
      uVar10 = local_84 + 1;
      uVar11 = (ulong)uVar10;
    } while (lVar12 < *(int *)(this + 0xc));
    bVar2 = -1 < (int)local_84;
    local_84 = uVar10;
    if (bVar2) {
      puVar8 = (undefined8 *)(local_78 + 8);
      do {
        (**(code **)(*(long *)this + 0x18))(this,puVar8[-1],*puVar8,param_1);
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 4;
      } while (uVar11 != 0);
    }
  }
  if (0 < *(int *)(this + 0x54)) {
    lVar12 = 0;
    lVar6 = *(long *)(this + 0x60);
    do {
      *(undefined4 *)(lVar6 + lVar12 * 4) = 0xffffffff;
      lVar12 = lVar12 + 1;
      uVar10 = local_84;
    } while (lVar12 < *(int *)(this + 0x54));
  }
  if (uVar10 - 1 != 0 && 0 < (int)uVar10) {
    btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>
              (abStack_88,abStack_90,0,uVar10 - 1);
    uVar10 = local_84;
  }
  if (0 < (int)uVar10) {
    lVar6 = 0;
    lVar12 = 0;
    do {
      (**(code **)(*(long *)this + 0x10))
                (this,*(undefined8 *)(local_78 + lVar6),((undefined8 *)(local_78 + lVar6))[1]);
      lVar12 = lVar12 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar12 < (int)local_84);
  }
  if ((local_78 != 0) && (local_70 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


