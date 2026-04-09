// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexConvexAlgorithm
// Entry Point: 00f4fe64
// Size: 80 bytes
// Signature: undefined __thiscall ~btConvexConvexAlgorithm(btConvexConvexAlgorithm * this)


/* btConvexConvexAlgorithm::~btConvexConvexAlgorithm() */

void __thiscall btConvexConvexAlgorithm::~btConvexConvexAlgorithm(btConvexConvexAlgorithm *this)

{
  *(undefined ***)this = &PTR__btConvexConvexAlgorithm_01019a70;
  if ((this[0x20] != (btConvexConvexAlgorithm)0x0) && (*(long *)(this + 0x28) != 0)) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  operator_delete(this);
  return;
}


