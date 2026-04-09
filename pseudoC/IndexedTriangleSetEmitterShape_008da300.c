// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndexedTriangleSetEmitterShape
// Entry Point: 008da300
// Size: 36 bytes
// Signature: undefined __thiscall ~IndexedTriangleSetEmitterShape(IndexedTriangleSetEmitterShape * this)


/* IndexedTriangleSetEmitterShape::~IndexedTriangleSetEmitterShape() */

void __thiscall
IndexedTriangleSetEmitterShape::~IndexedTriangleSetEmitterShape
          (IndexedTriangleSetEmitterShape *this)

{
  *(undefined ***)this = &PTR__IndexedTriangleSetEmitterShape_00fde388;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}


