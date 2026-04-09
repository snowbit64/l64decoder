// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btPolyhedralConvexShape
// Entry Point: 00f64adc
// Size: 112 bytes
// Signature: undefined __thiscall ~btPolyhedralConvexShape(btPolyhedralConvexShape * this)


/* btPolyhedralConvexShape::~btPolyhedralConvexShape() */

void __thiscall btPolyhedralConvexShape::~btPolyhedralConvexShape(btPolyhedralConvexShape *this)

{
  *(undefined ***)this = &PTR__btPolyhedralConvexShape_0101ade0;
  if (*(undefined8 **)(this + 0x48) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x48))();
    if (*(long *)(this + 0x48) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f64b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_FUN_01048e40)();
      return;
    }
  }
  return;
}


