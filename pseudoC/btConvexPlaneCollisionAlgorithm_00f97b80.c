// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexPlaneCollisionAlgorithm
// Entry Point: 00f97b80
// Size: 80 bytes
// Signature: undefined __thiscall ~btConvexPlaneCollisionAlgorithm(btConvexPlaneCollisionAlgorithm * this)


/* btConvexPlaneCollisionAlgorithm::~btConvexPlaneCollisionAlgorithm() */

void __thiscall
btConvexPlaneCollisionAlgorithm::~btConvexPlaneCollisionAlgorithm
          (btConvexPlaneCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btConvexPlaneCollisionAlgorithm_0101c3b8;
  if ((this[0x10] != (btConvexPlaneCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  operator_delete(this);
  return;
}


