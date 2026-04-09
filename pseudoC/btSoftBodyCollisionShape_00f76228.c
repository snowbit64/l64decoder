// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSoftBodyCollisionShape
// Entry Point: 00f76228
// Size: 32 bytes
// Signature: undefined __thiscall ~btSoftBodyCollisionShape(btSoftBodyCollisionShape * this)


/* btSoftBodyCollisionShape::~btSoftBodyCollisionShape() */

void __thiscall btSoftBodyCollisionShape::~btSoftBodyCollisionShape(btSoftBodyCollisionShape *this)

{
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f76244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)();
  return;
}


