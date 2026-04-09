// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btBoxBoxCollisionAlgorithm
// Entry Point: 00f9532c
// Size: 52 bytes
// Signature: undefined __thiscall ~btBoxBoxCollisionAlgorithm(btBoxBoxCollisionAlgorithm * this)


/* btBoxBoxCollisionAlgorithm::~btBoxBoxCollisionAlgorithm() */

void __thiscall
btBoxBoxCollisionAlgorithm::~btBoxBoxCollisionAlgorithm(btBoxBoxCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btBoxBoxCollisionAlgorithm_0101c300;
  if ((this[0x10] != (btBoxBoxCollisionAlgorithm)0x0) && (*(long *)(this + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00f95358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 0x20))();
    return;
  }
  return;
}


