// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSphereShape
// Entry Point: 00f69ce0
// Size: 32 bytes
// Signature: undefined __thiscall ~btSphereShape(btSphereShape * this)


/* btSphereShape::~btSphereShape() */

void __thiscall btSphereShape::~btSphereShape(btSphereShape *this)

{
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f69cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)();
  return;
}


