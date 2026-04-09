// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 00f4a2e0
// Size: 792 bytes
// Signature: undefined __thiscall insert(btHashMap<btHashPtr,btCollisionShape*> * this, btHashPtr * param_1, btCollisionShape * * param_2)


/* btHashMap<btHashPtr, btCollisionShape*>::insert(btHashPtr const&, btCollisionShape* const&) */

void __thiscall
btHashMap<btHashPtr,btCollisionShape*>::insert
          (btHashMap<btHashPtr,btCollisionShape*> *this,btHashPtr *param_1,
          btCollisionShape **param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar3 = *(uint *)(this + 0x48);
  uVar1 = *(int *)(param_1 + 4) + *(int *)param_1 +
          ((*(int *)(param_1 + 4) + *(int *)param_1) * 0x8000 ^ 0xffffffffU);
  uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
  uVar1 = uVar1 ^ (int)uVar1 >> 6;
  uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
  uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & uVar3 - 1;
  if ((uVar1 < *(uint *)(this + 4)) &&
     (iVar6 = *(int *)(*(long *)(this + 0x10) + (long)(int)uVar1 * 4), iVar6 != -1)) {
    do {
      if (*(long *)param_1 == *(long *)(*(long *)(this + 0x70) + (long)iVar6 * 8)) {
        *(btCollisionShape **)(*(long *)(this + 0x50) + (long)iVar6 * 8) = *param_2;
        return;
      }
      iVar6 = *(int *)(*(long *)(this + 0x30) + (long)iVar6 * 4);
    } while (iVar6 != -1);
  }
  uVar4 = *(uint *)(this + 0x44);
  uVar7 = uVar4;
  if (uVar4 == uVar3) {
    uVar10 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar10 = 1;
    }
    uVar7 = uVar3;
    if ((int)uVar3 < (int)uVar10) {
      if (uVar10 == 0) {
        lVar5 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar5 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3,0x10);
        uVar7 = *(uint *)(this + 0x44);
      }
      if (0 < (int)uVar7) {
        lVar8 = 0;
        do {
          *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(*(long *)(this + 0x50) + lVar8);
          lVar8 = lVar8 + 8;
        } while ((ulong)uVar7 * 8 - lVar8 != 0);
      }
      if ((*(long *)(this + 0x50) != 0) &&
         (this[0x58] != (btHashMap<btHashPtr,btCollisionShape*>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar7 = *(uint *)(this + 0x44);
      }
      *(long *)(this + 0x50) = lVar5;
      *(uint *)(this + 0x48) = uVar10;
      this[0x58] = (btHashMap<btHashPtr,btCollisionShape*>)0x1;
    }
  }
  uVar10 = *(uint *)(this + 100);
  uVar2 = *(uint *)(this + 0x68);
  *(btCollisionShape **)(*(long *)(this + 0x50) + (long)(int)uVar7 * 8) = *param_2;
  *(uint *)(this + 0x44) = uVar7 + 1;
  if (uVar10 == uVar2) {
    uVar7 = uVar10 << 1;
    if (uVar10 == 0) {
      uVar7 = 1;
    }
    if ((int)uVar10 < (int)uVar7) {
      if (uVar7 == 0) {
        lVar5 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar5 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3,0x10);
        uVar10 = *(uint *)(this + 100);
      }
      if (0 < (int)uVar10) {
        lVar8 = 0;
        do {
          *(undefined8 *)(lVar5 + lVar8) = *(undefined8 *)(*(long *)(this + 0x70) + lVar8);
          lVar8 = lVar8 + 8;
        } while ((ulong)uVar10 * 8 - lVar8 != 0);
      }
      if ((*(long *)(this + 0x70) != 0) &&
         (this[0x78] != (btHashMap<btHashPtr,btCollisionShape*>)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar10 = *(uint *)(this + 100);
      *(long *)(this + 0x70) = lVar5;
      *(uint *)(this + 0x68) = uVar7;
      this[0x78] = (btHashMap<btHashPtr,btCollisionShape*>)0x1;
    }
  }
  *(undefined8 *)(*(long *)(this + 0x70) + (long)(int)uVar10 * 8) = *(undefined8 *)param_1;
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  if ((int)uVar3 < *(int *)(this + 0x48)) {
    growTables((btHashPtr *)this);
    uVar1 = *(int *)(param_1 + 4) + *(int *)param_1 +
            ((*(int *)(param_1 + 4) + *(int *)param_1) * 0x8000 ^ 0xffffffffU);
    uVar1 = (uVar1 ^ (int)uVar1 >> 10) * 9;
    uVar1 = uVar1 ^ (int)uVar1 >> 6;
    uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
    uVar1 = (uVar1 ^ (int)uVar1 >> 0x10) & *(int *)(this + 0x48) - 1U;
  }
  uVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  lVar5 = *(long *)(this + 0x10);
  *(undefined4 *)(*(long *)(this + 0x30) + (long)(int)uVar4 * 4) = *(undefined4 *)(lVar5 + uVar9);
  *(uint *)(lVar5 + uVar9) = uVar4;
  return;
}


