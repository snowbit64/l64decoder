// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSphereSphereCollisionAlgorithm
// Entry Point: 00f942b4
// Size: 52 bytes
// Signature: undefined __thiscall ~btSphereSphereCollisionAlgorithm(btSphereSphereCollisionAlgorithm * this)


/* btSphereSphereCollisionAlgorithm::~btSphereSphereCollisionAlgorithm() */

void __thiscall
btSphereSphereCollisionAlgorithm::~btSphereSphereCollisionAlgorithm
          (btSphereSphereCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btSphereSphereCollisionAlgorithm_0101c220;
  if ((this[0x10] != (btSphereSphereCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00f942e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 0x20))();
    return;
  }
  return;
}


