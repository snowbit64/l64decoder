// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPoint
// Entry Point: 00f6151c
// Size: 316 bytes
// Signature: undefined __thiscall addPoint(btConvexHullShape * this, btVector3 * param_1, bool param_2)


/* btConvexHullShape::addPoint(btVector3 const&, bool) */

void __thiscall btConvexHullShape::addPoint(btConvexHullShape *this,btVector3 *param_1,bool param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar4 = *(uint *)(this + 0x7c);
  if (uVar4 == *(uint *)(this + 0x80)) {
    uVar1 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar4 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar3 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar3 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4,0x10);
        uVar4 = *(uint *)(this + 0x7c);
      }
      if (0 < (int)uVar4) {
        lVar5 = 0;
        do {
          uVar6 = *(undefined8 *)(*(long *)(this + 0x88) + lVar5);
          ((undefined8 *)(lVar3 + lVar5))[1] = ((undefined8 *)(*(long *)(this + 0x88) + lVar5))[1];
          *(undefined8 *)(lVar3 + lVar5) = uVar6;
          lVar5 = lVar5 + 0x10;
        } while ((ulong)uVar4 * 0x10 - lVar5 != 0);
      }
      if ((*(long *)(this + 0x88) != 0) && (this[0x90] != (btConvexHullShape)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar4 = *(uint *)(this + 0x7c);
      *(long *)(this + 0x88) = lVar3;
      *(uint *)(this + 0x80) = uVar1;
      this[0x90] = (btConvexHullShape)0x1;
    }
  }
  uVar6 = *(undefined8 *)param_1;
  puVar2 = (undefined8 *)(*(long *)(this + 0x88) + (long)(int)uVar4 * 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *puVar2 = uVar6;
  *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 1;
  if (param_2) {
    btPolyhedralConvexAabbCachingShape::recalcLocalAabb();
    return;
  }
  return;
}


