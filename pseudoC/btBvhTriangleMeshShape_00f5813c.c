// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btBvhTriangleMeshShape
// Entry Point: 00f5813c
// Size: 116 bytes
// Signature: undefined __thiscall ~btBvhTriangleMeshShape(btBvhTriangleMeshShape * this)


/* btBvhTriangleMeshShape::~btBvhTriangleMeshShape() */

void __thiscall btBvhTriangleMeshShape::~btBvhTriangleMeshShape(btBvhTriangleMeshShape *this)

{
  *(undefined ***)this = &PTR__btBvhTriangleMeshShape_01019ef0;
  if (this[0x59] != (btBvhTriangleMeshShape)0x0) {
    (**(code **)**(undefined8 **)(this + 0x48))();
    if (*(long *)(this + 0x48) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f581a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_FUN_01048e40)();
      return;
    }
  }
  return;
}


