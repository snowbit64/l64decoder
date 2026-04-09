// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndexedTriangleSetGeometry
// Entry Point: 008e0bb0
// Size: 92 bytes
// Signature: undefined __thiscall ~IndexedTriangleSetGeometry(IndexedTriangleSetGeometry * this)


/* non-virtual thunk to IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry() */

void __thiscall
IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry(IndexedTriangleSetGeometry *this)

{
  *(undefined ***)(this + -0x58) = &PTR__IndexedTriangleSetGeometry_00fde4e8;
  *(undefined ***)(this + -0x48) = &PTR__IndexedTriangleSetGeometry_00fde550;
  *(undefined ***)this = &PTR__IndexedTriangleSetGeometry_00fde570;
                    /* try { // try from 008e0be8 to 008e0bef has its CatchHandler @ 008e0c0c */
  deactivate();
  Streamable::~Streamable((Streamable *)this);
  Geometry::~Geometry((Geometry *)(this + -0x58));
  return;
}


