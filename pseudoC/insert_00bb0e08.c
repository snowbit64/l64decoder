// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00bb0e08
// Size: 740 bytes
// Signature: undefined __thiscall insert(btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue> * this, TriHashKey * param_1, TriHashValue * param_2)


/* btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,
   Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>::insert(Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey
   const&, Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue const&) */

void __thiscall
btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
::insert(btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
         *this,TriHashKey *param_1,TriHashValue *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  iVar5 = *(int *)param_1;
  iVar6 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x18);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar10 = *(int *)(param_1 + 0x28);
  iVar11 = *(int *)(this + 0x48);
  iVar13 = findIndex(this,param_1);
  if (iVar13 == -1) {
    iVar10 = iVar6 + iVar5 + iVar7 + iVar8 + iVar9 + iVar10;
    uVar3 = *(uint *)(this + 0x44);
    uVar4 = *(uint *)(this + 0x48);
    uVar1 = iVar10 + (iVar10 * 0x8000 ^ 0xffffffffU);
    uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
    uVar1 = uVar1 ^ (int)uVar1 >> 6;
    uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
    uVar15 = uVar3;
    if (uVar3 == uVar4) {
      uVar12 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar12 = 1;
      }
      if ((int)uVar3 < (int)uVar12) {
        if (uVar12 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = btAlignedAllocInternal
                             (-(ulong)(uVar12 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar12 << 4,
                              0x10);
          uVar15 = *(uint *)(this + 0x44);
        }
        if (0 < (int)uVar15) {
          lVar18 = 0;
          do {
            uVar19 = *(undefined8 *)(*(long *)(this + 0x50) + lVar18);
            ((undefined8 *)(lVar14 + lVar18))[1] =
                 ((undefined8 *)(*(long *)(this + 0x50) + lVar18))[1];
            *(undefined8 *)(lVar14 + lVar18) = uVar19;
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar15 * 0x10 - lVar18 != 0);
        }
        if ((*(void **)(this + 0x50) != (void *)0x0) &&
           (this[0x58] !=
            (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
             )0x0)) {
          btAlignedFreeInternal(*(void **)(this + 0x50));
        }
        uVar15 = *(uint *)(this + 0x44);
        *(long *)(this + 0x50) = lVar14;
        *(uint *)(this + 0x48) = uVar12;
        this[0x58] = (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                      )0x1;
      }
    }
    uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & iVar11 - 1U;
    uVar19 = *(undefined8 *)param_2;
    puVar16 = (undefined8 *)(*(long *)(this + 0x50) + (long)(int)uVar15 * 0x10);
    puVar16[1] = *(undefined8 *)(param_2 + 8);
    *puVar16 = uVar19;
    uVar15 = *(uint *)(this + 100);
    *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
    if (uVar15 == *(uint *)(this + 0x68)) {
      iVar10 = uVar15 << 1;
      if (uVar15 == 0) {
        iVar10 = 1;
      }
      if ((int)uVar15 < iVar10) {
        if (iVar10 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = btAlignedAllocInternal((long)iVar10 * 0x30,0x10);
          uVar15 = *(uint *)(this + 100);
        }
        if (0 < (int)uVar15) {
          lVar18 = 0;
          do {
            puVar16 = (undefined8 *)(lVar14 + lVar18);
            puVar2 = (undefined8 *)(*(long *)(this + 0x70) + lVar18);
            lVar18 = lVar18 + 0x30;
            uVar21 = puVar2[2];
            uVar20 = puVar2[5];
            uVar19 = puVar2[4];
            uVar23 = puVar2[1];
            uVar22 = *puVar2;
            puVar16[3] = puVar2[3];
            puVar16[2] = uVar21;
            puVar16[5] = uVar20;
            puVar16[4] = uVar19;
            puVar16[1] = uVar23;
            *puVar16 = uVar22;
          } while ((ulong)uVar15 * 0x30 - lVar18 != 0);
        }
        if ((*(void **)(this + 0x70) != (void *)0x0) &&
           (this[0x78] !=
            (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
             )0x0)) {
          btAlignedFreeInternal(*(void **)(this + 0x70));
        }
        uVar15 = *(uint *)(this + 100);
        *(long *)(this + 0x70) = lVar14;
        *(int *)(this + 0x68) = iVar10;
        this[0x78] = (btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                      )0x1;
      }
    }
    uVar21 = *(undefined8 *)(param_1 + 0x10);
    uVar20 = *(undefined8 *)(param_1 + 0x28);
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    puVar16 = (undefined8 *)(*(long *)(this + 0x70) + (long)(int)uVar15 * 0x30);
    uVar23 = *(undefined8 *)(param_1 + 8);
    uVar22 = *(undefined8 *)param_1;
    puVar16[3] = *(undefined8 *)(param_1 + 0x18);
    puVar16[2] = uVar21;
    puVar16[5] = uVar20;
    puVar16[4] = uVar19;
    puVar16[1] = uVar23;
    *puVar16 = uVar22;
    *(int *)(this + 100) = *(int *)(this + 100) + 1;
    if ((int)uVar4 < *(int *)(this + 0x48)) {
      growTables((TriHashKey *)this);
      iVar10 = *(int *)(param_1 + 8) + *(int *)param_1 + *(int *)(param_1 + 0x10) +
               *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x28);
      uVar1 = iVar10 + (iVar10 * 0x8000 ^ 0xffffffffU);
      uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
      uVar1 = uVar1 ^ (int)uVar1 >> 6;
      uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
      uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & *(int *)(this + 0x48) - 1U;
    }
    uVar17 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    lVar14 = *(long *)(this + 0x10);
    *(undefined4 *)(*(long *)(this + 0x30) + (long)(int)uVar3 * 4) =
         *(undefined4 *)(lVar14 + uVar17);
    *(uint *)(lVar14 + uVar17) = uVar3;
  }
  else {
    uVar19 = *(undefined8 *)param_2;
    puVar16 = (undefined8 *)(*(long *)(this + 0x50) + (long)iVar13 * 0x10);
    puVar16[1] = *(undefined8 *)(param_2 + 8);
    *puVar16 = uVar19;
  }
  return;
}


