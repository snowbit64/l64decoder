// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConvexHullShape
// Entry Point: 00f60c3c
// Size: 192 bytes
// Signature: undefined __thiscall ~btConvexHullShape(btConvexHullShape * this)


/* btConvexHullShape::~btConvexHullShape() */

void __thiscall btConvexHullShape::~btConvexHullShape(btConvexHullShape *this)

{
  *(undefined ***)this = &PTR__btConvexHullShape_0101a558;
  if ((*(long *)(this + 0x88) != 0) && (this[0x90] != (btConvexHullShape)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  this[0x90] = (btConvexHullShape)0x1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined ***)this = &PTR__btPolyhedralConvexShape_0101ade0;
  if (*(undefined8 **)(this + 0x48) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x48))();
    if (*(long *)(this + 0x48) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f60cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_FUN_01048e40)();
      return;
    }
  }
  return;
}


