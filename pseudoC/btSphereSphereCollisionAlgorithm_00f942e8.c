// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSphereSphereCollisionAlgorithm
// Entry Point: 00f942e8
// Size: 80 bytes
// Signature: undefined __thiscall ~btSphereSphereCollisionAlgorithm(btSphereSphereCollisionAlgorithm * this)


/* btSphereSphereCollisionAlgorithm::~btSphereSphereCollisionAlgorithm() */

void __thiscall
btSphereSphereCollisionAlgorithm::~btSphereSphereCollisionAlgorithm
          (btSphereSphereCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btSphereSphereCollisionAlgorithm_0101c220;
  if ((this[0x10] != (btSphereSphereCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  operator_delete(this);
  return;
}


