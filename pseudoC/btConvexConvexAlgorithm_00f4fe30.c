// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexConvexAlgorithm
// Entry Point: 00f4fe30
// Size: 52 bytes
// Signature: undefined __thiscall ~btConvexConvexAlgorithm(btConvexConvexAlgorithm * this)


/* btConvexConvexAlgorithm::~btConvexConvexAlgorithm() */

void __thiscall btConvexConvexAlgorithm::~btConvexConvexAlgorithm(btConvexConvexAlgorithm *this)

{
  *(undefined ***)this = &PTR__btConvexConvexAlgorithm_01019a70;
  if ((this[0x20] != (btConvexConvexAlgorithm)0x0) && (*(long *)(this + 0x28) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00f4fe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 0x20))();
    return;
  }
  return;
}


