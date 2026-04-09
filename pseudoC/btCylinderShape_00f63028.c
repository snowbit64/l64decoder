// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btCylinderShape
// Entry Point: 00f63028
// Size: 32 bytes
// Signature: undefined __thiscall ~btCylinderShape(btCylinderShape * this)


/* btCylinderShape::~btCylinderShape() */

void __thiscall btCylinderShape::~btCylinderShape(btCylinderShape *this)

{
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f63044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)();
  return;
}


