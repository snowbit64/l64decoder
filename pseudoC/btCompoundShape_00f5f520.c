// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btCompoundShape
// Entry Point: 00f5f520
// Size: 176 bytes
// Signature: undefined __thiscall ~btCompoundShape(btCompoundShape * this)


/* btCompoundShape::~btCompoundShape() */

void __thiscall btCompoundShape::~btCompoundShape(btCompoundShape *this)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  *(undefined ***)this = &PTR__btCompoundShape_0101a408;
  if (*(btDbvt **)(this + 0x60) != (btDbvt *)0x0) {
    btDbvt::~btDbvt(*(btDbvt **)(this + 0x60));
    if (*(long *)(this + 0x60) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  if ((*(long *)(this + 0x30) != 0) && (this[0x38] != (btCompoundShape)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(this + 0x30) = 0;
  UNRECOVERED_JUMPTABLE = PTR_FUN_01048e40;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x38] = (btCompoundShape)0x1;
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f5f5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(this);
  return;
}


