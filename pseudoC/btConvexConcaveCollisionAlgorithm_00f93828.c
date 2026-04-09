// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexConcaveCollisionAlgorithm
// Entry Point: 00f93828
// Size: 96 bytes
// Signature: undefined __thiscall ~btConvexConcaveCollisionAlgorithm(btConvexConcaveCollisionAlgorithm * this)


/* btConvexConcaveCollisionAlgorithm::~btConvexConcaveCollisionAlgorithm() */

void __thiscall
btConvexConcaveCollisionAlgorithm::~btConvexConcaveCollisionAlgorithm
          (btConvexConcaveCollisionAlgorithm *this)

{
  *(undefined ***)this = &PTR__btConvexConcaveCollisionAlgorithm_0101c0f0;
  *(undefined ***)(this + 0x18) = &PTR__btConvexTriangleCallback_0101c128;
  (**(code **)(**(long **)(this + 0x58) + 0x28))
            (*(long **)(this + 0x58),*(undefined8 *)(this + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00f93884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x58) + 0x20))
            (*(long **)(this + 0x58),*(undefined8 *)(this + 0x70));
  return;
}


