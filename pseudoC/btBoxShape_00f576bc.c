// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btBoxShape
// Entry Point: 00f576bc
// Size: 132 bytes
// Signature: undefined __thiscall ~btBoxShape(btBoxShape * this)


/* btBoxShape::~btBoxShape() */

void __thiscall btBoxShape::~btBoxShape(btBoxShape *this)

{
  *(undefined ***)this = &PTR__btPolyhedralConvexShape_0101ade0;
  if (*(undefined8 **)(this + 0x48) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x48))();
    if (*(long *)(this + 0x48) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f5773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(this);
  return;
}


