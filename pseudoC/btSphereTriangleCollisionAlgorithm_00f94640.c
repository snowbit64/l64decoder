// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSphereTriangleCollisionAlgorithm
// Entry Point: 00f94640
// Size: 80 bytes
// Signature: undefined __thiscall ~btSphereTriangleCollisionAlgorithm(btSphereTriangleCollisionAlgorithm * this)


/* btSphereTriangleCollisionAlgorithm::~btSphereTriangleCollisionAlgorithm() */

void __thiscall
btSphereTriangleCollisionAlgorithm::~btSphereTriangleCollisionAlgorithm
          (btSphereTriangleCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btSphereTriangleCollisionAlgorithm_0101c270;
  if ((this[0x10] != (btSphereTriangleCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  operator_delete(this);
  return;
}


