// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 00f60dc4
// Size: 12 bytes
// Signature: undefined __thiscall setLocalScaling(btConvexHullShape * this, btVector3 * param_1)


/* btConvexHullShape::setLocalScaling(btVector3 const&) */

void __thiscall btConvexHullShape::setLocalScaling(btConvexHullShape *this,btVector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1c) = uVar1;
  btPolyhedralConvexAabbCachingShape::recalcLocalAabb();
  return;
}


