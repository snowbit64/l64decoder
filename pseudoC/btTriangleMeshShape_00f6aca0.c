// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btTriangleMeshShape
// Entry Point: 00f6aca0
// Size: 32 bytes
// Signature: undefined __thiscall ~btTriangleMeshShape(btTriangleMeshShape * this)


/* btTriangleMeshShape::~btTriangleMeshShape() */

void __thiscall btTriangleMeshShape::~btTriangleMeshShape(btTriangleMeshShape *this)

{
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f6acbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)();
  return;
}


