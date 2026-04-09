// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btBoxBoxCollisionAlgorithm
// Entry Point: 00f95360
// Size: 80 bytes
// Signature: undefined __thiscall ~btBoxBoxCollisionAlgorithm(btBoxBoxCollisionAlgorithm * this)


/* btBoxBoxCollisionAlgorithm::~btBoxBoxCollisionAlgorithm() */

void __thiscall
btBoxBoxCollisionAlgorithm::~btBoxBoxCollisionAlgorithm(btBoxBoxCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btBoxBoxCollisionAlgorithm_0101c300;
  if ((this[0x10] != (btBoxBoxCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  operator_delete(this);
  return;
}


