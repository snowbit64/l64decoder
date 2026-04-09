// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00f78364
// Size: 884 bytes
// Signature: undefined __thiscall insert(btHashMap<btHashPtr,int> * this, btHashPtr * param_1, int * param_2)


/* btHashMap<btHashPtr, int>::insert(btHashPtr const&, int const&) */

void __thiscall
btHashMap<btHashPtr,int>::insert(btHashMap<btHashPtr,int> *this,btHashPtr *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar2 = *(uint *)(this + 0x48);
  uVar1 = *(int *)(param_1 + 4) + *(int *)param_1 +
          ((*(int *)(param_1 + 4) + *(int *)param_1) * 0x8000 ^ 0xffffffffU);
  uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ (int)uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & uVar2 - 1;
  if ((uVar1 < *(uint *)(this + 4)) &&
     (iVar8 = *(int *)(*(long *)(this + 0x10) + (long)(int)uVar1 * 4), iVar8 != -1)) {
    do {
      if (*(long *)param_1 == *(long *)(*(long *)(this + 0x70) + (long)iVar8 * 8)) {
        *(int *)(*(long *)(this + 0x50) + (long)iVar8 * 4) = *param_2;
        return;
      }
      iVar8 = *(int *)(*(long *)(this + 0x30) + (long)iVar8 * 4);
    } while (iVar8 != -1);
  }
  uVar3 = *(uint *)(this + 0x44);
  uVar11 = uVar3;
  if (uVar3 != uVar2) goto LAB_00f78550;
  uVar4 = uVar2 << 1;
  if (uVar2 == 0) {
    uVar4 = 1;
  }
  uVar11 = uVar2;
  if ((int)uVar4 <= (int)uVar2) goto LAB_00f78550;
  if (uVar4 == 0) {
    uVar6 = 0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    uVar6 = (*(code *)PTR_FUN_01048e38)
                      (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2,0x10);
    uVar11 = *(uint *)(this + 0x44);
  }
  uVar7 = *(ulong *)(this + 0x50);
  if ((int)uVar11 < 1) {
    if (uVar7 != 0) goto LAB_00f78514;
  }
  else {
    uVar9 = (ulong)uVar11;
    if ((uVar11 < 8) || ((uVar6 < uVar7 + uVar9 * 4 && (uVar7 < uVar6 + uVar9 * 4)))) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar9 & 0xfffffff8;
      puVar16 = (undefined8 *)(uVar7 + 0x10);
      puVar17 = (undefined8 *)(uVar6 + 0x10);
      uVar18 = uVar12;
      do {
        puVar5 = puVar16 + -1;
        uVar19 = puVar16[-2];
        uVar21 = puVar16[1];
        uVar20 = *puVar16;
        uVar18 = uVar18 - 8;
        puVar16 = puVar16 + 4;
        puVar17[-1] = *puVar5;
        puVar17[-2] = uVar19;
        puVar17[1] = uVar21;
        *puVar17 = uVar20;
        puVar17 = puVar17 + 4;
      } while (uVar18 != 0);
      if (uVar12 == uVar9) goto LAB_00f78514;
    }
    lVar10 = uVar9 - uVar12;
    puVar13 = (undefined4 *)(uVar7 + uVar12 * 4);
    puVar15 = (undefined4 *)(uVar6 + uVar12 * 4);
    do {
      lVar10 = lVar10 + -1;
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    } while (lVar10 != 0);
LAB_00f78514:
    if (this[0x58] != (btHashMap<btHashPtr,int>)0x0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  *(ulong *)(this + 0x50) = uVar6;
  *(uint *)(this + 0x48) = uVar4;
  this[0x58] = (btHashMap<btHashPtr,int>)0x1;
  uVar11 = *(uint *)(this + 0x44);
LAB_00f78550:
  *(int *)(*(long *)(this + 0x50) + (long)(int)uVar11 * 4) = *param_2;
  uVar11 = *(uint *)(this + 100);
  *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
  if (uVar11 == *(uint *)(this + 0x68)) {
    uVar4 = uVar11 << 1;
    if (uVar11 == 0) {
      uVar4 = 1;
    }
    if ((int)uVar11 < (int)uVar4) {
      if (uVar4 == 0) {
        lVar10 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar10 = (*(code *)PTR_FUN_01048e38)
                           (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3,0x10);
        uVar11 = *(uint *)(this + 100);
      }
      if (0 < (int)uVar11) {
        lVar14 = 0;
        do {
          *(undefined8 *)(lVar10 + lVar14) = *(undefined8 *)(*(long *)(this + 0x70) + lVar14);
          lVar14 = lVar14 + 8;
        } while ((ulong)uVar11 * 8 - lVar14 != 0);
      }
      if ((*(long *)(this + 0x70) != 0) && (this[0x78] != (btHashMap<btHashPtr,int>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar11 = *(uint *)(this + 100);
      *(long *)(this + 0x70) = lVar10;
      *(uint *)(this + 0x68) = uVar4;
      this[0x78] = (btHashMap<btHashPtr,int>)0x1;
    }
  }
  *(undefined8 *)(*(long *)(this + 0x70) + (long)(int)uVar11 * 8) = *(undefined8 *)param_1;
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  if ((int)uVar2 < *(int *)(this + 0x48)) {
    growTables((btHashPtr *)this);
    uVar1 = *(int *)(param_1 + 4) + *(int *)param_1 +
            ((*(int *)(param_1 + 4) + *(int *)param_1) * 0x8000 ^ 0xffffffffU);
    uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
    uVar1 = uVar1 ^ (int)uVar1 >> 6;
    uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
    uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & *(int *)(this + 0x48) - 1U;
  }
  uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  lVar10 = *(long *)(this + 0x10);
  *(undefined4 *)(*(long *)(this + 0x30) + (long)(int)uVar3 * 4) = *(undefined4 *)(lVar10 + uVar6);
  *(uint *)(lVar10 + uVar6) = uVar3;
  return;
}


