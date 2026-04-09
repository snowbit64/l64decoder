// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btScaledBvhTriangleMeshShape
// Entry Point: 00f696e4
// Size: 32 bytes
// Signature: undefined __thiscall ~btScaledBvhTriangleMeshShape(btScaledBvhTriangleMeshShape * this)


/* btScaledBvhTriangleMeshShape::~btScaledBvhTriangleMeshShape() */

void __thiscall
btScaledBvhTriangleMeshShape::~btScaledBvhTriangleMeshShape(btScaledBvhTriangleMeshShape *this)

{
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f69700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)();
  return;
}


