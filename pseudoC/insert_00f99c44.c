// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00f99c44
// Size: 872 bytes
// Signature: undefined __thiscall insert(btHashMap<btHashKey<btTriIndex>,btTriIndex> * this, btHashKey * param_1, btTriIndex * param_2)


/* btHashMap<btHashKey<btTriIndex>, btTriIndex>::insert(btHashKey<btTriIndex> const&, btTriIndex
   const&) */

void __thiscall
btHashMap<btHashKey<btTriIndex>,btTriIndex>::insert
          (btHashMap<btHashKey<btTriIndex>,btTriIndex> *this,btHashKey *param_1,btTriIndex *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  iVar2 = *(int *)param_1;
  uVar3 = *(uint *)(this + 0x48);
  uVar1 = iVar2 + (iVar2 << 0xf ^ 0xffffffffU);
  uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ (int)uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & uVar3 - 1;
  if ((uVar1 < *(uint *)(this + 4)) &&
     (iVar13 = *(int *)(*(long *)(this + 0x10) + (long)(int)uVar1 * 4), iVar13 != -1)) {
    do {
      if (iVar2 == *(int *)(*(long *)(this + 0x70) + (long)iVar13 * 4)) {
        uVar20 = *(undefined8 *)param_2;
        puVar17 = (undefined8 *)(*(long *)(this + 0x50) + (long)iVar13 * 0x10);
        puVar17[1] = *(undefined8 *)(param_2 + 8);
        *puVar17 = uVar20;
        return;
      }
      iVar13 = *(int *)(*(long *)(this + 0x30) + (long)iVar13 * 4);
    } while (iVar13 != -1);
  }
  uVar4 = *(uint *)(this + 0x44);
  uVar10 = uVar4;
  if (uVar4 == uVar3) {
    uVar5 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar5 = 1;
    }
    uVar10 = uVar3;
    if ((int)uVar3 < (int)uVar5) {
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar7 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4,0x10);
        uVar10 = *(uint *)(this + 0x44);
      }
      if (0 < (int)uVar10) {
        lVar11 = 0;
        do {
          uVar20 = *(undefined8 *)(*(long *)(this + 0x50) + lVar11);
          ((undefined8 *)(lVar7 + lVar11))[1] = ((undefined8 *)(*(long *)(this + 0x50) + lVar11))[1]
          ;
          *(undefined8 *)(lVar7 + lVar11) = uVar20;
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar10 * 0x10 - lVar11 != 0);
      }
      if ((*(long *)(this + 0x50) != 0) &&
         (this[0x58] != (btHashMap<btHashKey<btTriIndex>,btTriIndex>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x50) = lVar7;
      *(uint *)(this + 0x48) = uVar5;
      this[0x58] = (btHashMap<btHashKey<btTriIndex>,btTriIndex>)0x1;
      uVar10 = *(uint *)(this + 0x44);
    }
  }
  uVar20 = *(undefined8 *)param_2;
  puVar17 = (undefined8 *)(*(long *)(this + 0x50) + (long)(int)uVar10 * 0x10);
  puVar17[1] = *(undefined8 *)(param_2 + 8);
  *puVar17 = uVar20;
  uVar10 = *(uint *)(this + 100);
  *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
  if (uVar10 != *(uint *)(this + 0x68)) goto LAB_00f99f14;
  uVar5 = uVar10 << 1;
  if (uVar10 == 0) {
    uVar5 = 1;
  }
  if ((int)uVar5 <= (int)uVar10) goto LAB_00f99f14;
  if (uVar5 == 0) {
    uVar8 = 0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    uVar8 = (*(code *)PTR_FUN_01048e38)
                      (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2,0x10);
    uVar10 = *(uint *)(this + 100);
  }
  uVar9 = *(ulong *)(this + 0x70);
  if ((int)uVar10 < 1) {
    if (uVar9 != 0) goto LAB_00f99ed8;
  }
  else {
    uVar12 = (ulong)uVar10;
    if ((uVar10 < 8) || ((uVar8 < uVar9 + uVar12 * 4 && (uVar9 < uVar8 + uVar12 * 4)))) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar12 & 0xfffffff8;
      puVar17 = (undefined8 *)(uVar8 + 0x10);
      puVar18 = (undefined8 *)(uVar9 + 0x10);
      uVar19 = uVar14;
      do {
        puVar6 = puVar18 + -1;
        uVar20 = puVar18[-2];
        uVar22 = puVar18[1];
        uVar21 = *puVar18;
        uVar19 = uVar19 - 8;
        puVar18 = puVar18 + 4;
        puVar17[-1] = *puVar6;
        puVar17[-2] = uVar20;
        puVar17[1] = uVar22;
        *puVar17 = uVar21;
        puVar17 = puVar17 + 4;
      } while (uVar19 != 0);
      if (uVar14 == uVar12) goto LAB_00f99ed8;
    }
    lVar7 = uVar12 - uVar14;
    puVar15 = (undefined4 *)(uVar8 + uVar14 * 4);
    puVar16 = (undefined4 *)(uVar9 + uVar14 * 4);
    do {
      lVar7 = lVar7 + -1;
      *puVar15 = *puVar16;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    } while (lVar7 != 0);
LAB_00f99ed8:
    if (this[0x78] != (btHashMap<btHashKey<btTriIndex>,btTriIndex>)0x0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  uVar10 = *(uint *)(this + 100);
  *(ulong *)(this + 0x70) = uVar8;
  *(uint *)(this + 0x68) = uVar5;
  this[0x78] = (btHashMap<btHashKey<btTriIndex>,btTriIndex>)0x1;
LAB_00f99f14:
  *(undefined4 *)(*(long *)(this + 0x70) + (long)(int)uVar10 * 4) = *(undefined4 *)param_1;
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  if ((int)uVar3 < *(int *)(this + 0x48)) {
    growTables((btHashKey *)this);
    uVar1 = *(int *)param_1 + (*(int *)param_1 << 0xf ^ 0xffffffffU);
    uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
    uVar1 = uVar1 ^ (int)uVar1 >> 6;
    uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
    uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & *(int *)(this + 0x48) - 1U;
  }
  uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  lVar7 = *(long *)(this + 0x10);
  *(undefined4 *)(*(long *)(this + 0x30) + (long)(int)uVar4 * 4) = *(undefined4 *)(lVar7 + uVar8);
  *(uint *)(lVar7 + uVar8) = uVar4;
  return;
}


