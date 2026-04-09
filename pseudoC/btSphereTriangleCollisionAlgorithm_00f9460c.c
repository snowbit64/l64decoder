// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSphereTriangleCollisionAlgorithm
// Entry Point: 00f9460c
// Size: 52 bytes
// Signature: undefined __thiscall ~btSphereTriangleCollisionAlgorithm(btSphereTriangleCollisionAlgorithm * this)


/* btSphereTriangleCollisionAlgorithm::~btSphereTriangleCollisionAlgorithm() */

void __thiscall
btSphereTriangleCollisionAlgorithm::~btSphereTriangleCollisionAlgorithm
          (btSphereTriangleCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btSphereTriangleCollisionAlgorithm_0101c270;
  if ((this[0x10] != (btSphereTriangleCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00f94638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 0x20))();
    return;
  }
  return;
}


