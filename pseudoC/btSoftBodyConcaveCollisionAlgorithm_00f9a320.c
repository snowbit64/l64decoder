// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSoftBodyConcaveCollisionAlgorithm
// Entry Point: 00f9a320
// Size: 52 bytes
// Signature: undefined __thiscall ~btSoftBodyConcaveCollisionAlgorithm(btSoftBodyConcaveCollisionAlgorithm * this)


/* btSoftBodyConcaveCollisionAlgorithm::~btSoftBodyConcaveCollisionAlgorithm() */

void __thiscall
btSoftBodyConcaveCollisionAlgorithm::~btSoftBodyConcaveCollisionAlgorithm
          (btSoftBodyConcaveCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btSoftBodyConcaveCollisionAlgorithm_0101c4f8;
  btSoftBodyTriangleCallback::~btSoftBodyTriangleCallback
            ((btSoftBodyTriangleCallback *)(this + 0x18));
  operator_delete(this);
  return;
}


