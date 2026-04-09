// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndexedTriangleSetGeometry
// Entry Point: 008e0b38
// Size: 92 bytes
// Signature: undefined __thiscall ~IndexedTriangleSetGeometry(IndexedTriangleSetGeometry * this)


/* non-virtual thunk to IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry() */

void __thiscall
IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry(IndexedTriangleSetGeometry *this)

{
  *(undefined ***)(this + -0x10) = &PTR__IndexedTriangleSetGeometry_00fde4e8;
  *(undefined ***)this = &PTR__IndexedTriangleSetGeometry_00fde550;
  *(undefined ***)(this + 0x48) = &PTR__IndexedTriangleSetGeometry_00fde570;
                    /* try { // try from 008e0b70 to 008e0b77 has its CatchHandler @ 008e0b94 */
  deactivate();
  Streamable::~Streamable((Streamable *)(this + 0x48));
  Geometry::~Geometry((Geometry *)(this + -0x10));
  return;
}


