// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: performDeferredRemoval
// Entry Point: 00f44aec
// Size: 728 bytes
// Signature: undefined __thiscall performDeferredRemoval(btDbvtBroadphase * this, btDispatcher * param_1)


/* btDbvtBroadphase::performDeferredRemoval(btDispatcher*) */

void __thiscall
btDbvtBroadphase::performDeferredRemoval(btDbvtBroadphase *this,btDispatcher *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  btAlignedObjectArray<btBroadphasePair> *this_00;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  btBroadphasePairSortPredicate abStack_78 [8];
  btBroadphasePairSortPredicate abStack_70 [8];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  (**(code **)(*(long *)this + 0x70))();
  uVar8 = (**(code **)(**(long **)(this + 0xe0) + 0x70))();
  if ((uVar8 & 1) != 0) {
    this_00 = (btAlignedObjectArray<btBroadphasePair> *)
              (**(code **)(**(long **)(this + 0xe0) + 0x38))();
    uVar14 = *(uint *)(this_00 + 4);
    if (uVar14 - 1 != 0 && 0 < (int)uVar14) {
      btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>
                (this_00,abStack_70,0,uVar14 - 1);
      uVar14 = *(uint *)(this_00 + 4);
    }
    uVar8 = (ulong)uVar14;
    if (0 < (int)uVar14) {
      lVar16 = 0;
      lVar17 = 0;
      iVar15 = 0;
      lVar11 = 0;
      lVar18 = 0;
      do {
        plVar1 = (long *)(*(long *)(this_00 + 0x10) + lVar16);
        lVar4 = *plVar1;
        lVar5 = plVar1[1];
        if (lVar4 == lVar18 && lVar5 == lVar11) {
LAB_00f44c1c:
          (**(code **)(**(long **)(this + 0xe0) + 0x40))(*(long **)(this + 0xe0),plVar1,param_1);
          *plVar1 = 0;
          plVar1[1] = 0;
          iVar15 = iVar15 + 1;
          uVar8 = (ulong)*(uint *)(this_00 + 4);
        }
        else {
          pfVar9 = *(float **)(lVar4 + 0x40);
          pfVar10 = *(float **)(lVar5 + 0x40);
          if (((((pfVar10[4] < *pfVar9) || (pfVar9[4] < *pfVar10)) || (pfVar10[5] < pfVar9[1])) ||
              ((pfVar9[5] < pfVar10[1] || (pfVar10[6] < pfVar9[2])))) || (pfVar9[6] < pfVar10[2]))
          goto LAB_00f44c1c;
        }
        lVar17 = lVar17 + 1;
        lVar16 = lVar16 + 0x20;
        iVar12 = (int)uVar8;
        lVar11 = lVar5;
        lVar18 = lVar4;
      } while (lVar17 < iVar12);
      if (1 < iVar12) {
        btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>
                  (this_00,abStack_78,0,iVar12 + -1);
        uVar8 = (ulong)*(uint *)(this_00 + 4);
      }
      uVar13 = (uint)uVar8;
      uVar14 = uVar13 - iVar15;
      if (iVar15 < 0) {
        if (*(int *)(this_00 + 8) < (int)uVar14) {
          if (uVar14 == 0) {
            lVar17 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar17 = (*(code *)PTR_FUN_01048e38)
                               (-(ulong)(uVar14 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar14 << 5,
                                0x10);
            uVar13 = *(uint *)(this_00 + 4);
          }
          if (0 < (int)uVar13) {
            lVar16 = 0;
            do {
              puVar3 = (undefined8 *)(lVar17 + lVar16);
              puVar2 = (undefined8 *)(*(long *)(this_00 + 0x10) + lVar16);
              lVar16 = lVar16 + 0x20;
              uVar19 = *puVar2;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar19;
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
            } while ((ulong)uVar13 * 0x20 - lVar16 != 0);
          }
          if ((*(long *)(this_00 + 0x10) != 0) &&
             (this_00[0x18] != (btAlignedObjectArray<btBroadphasePair>)0x0)) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          *(long *)(this_00 + 0x10) = lVar17;
          *(uint *)(this_00 + 8) = uVar14;
          this_00[0x18] = (btAlignedObjectArray<btBroadphasePair>)0x1;
        }
        lVar17 = (long)iVar15;
        uVar8 = -(uVar8 >> 0x1f) & 0xffffffe000000000 | uVar8 << 5;
        do {
          bVar7 = lVar17 != -1;
          lVar17 = lVar17 + 1;
          puVar3 = (undefined8 *)(*(long *)(this_00 + 0x10) + uVar8);
          uVar8 = uVar8 + 0x20;
          puVar3[1] = 0;
          *puVar3 = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
        } while (bVar7);
      }
    }
    *(uint *)(this_00 + 4) = uVar14;
  }
  (**(code **)(*(long *)this + 0x78))(this);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


