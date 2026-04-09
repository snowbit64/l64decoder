// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btCapsuleShape
// Entry Point: 00f5e49c
// Size: 32 bytes
// Signature: undefined __thiscall ~btCapsuleShape(btCapsuleShape * this)


/* btCapsuleShape::~btCapsuleShape() */

void __thiscall btCapsuleShape::~btCapsuleShape(btCapsuleShape *this)

{
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f5e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)();
  return;
}


