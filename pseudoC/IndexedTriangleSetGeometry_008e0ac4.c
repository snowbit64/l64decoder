// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndexedTriangleSetGeometry
// Entry Point: 008e0ac4
// Size: 88 bytes
// Signature: undefined __thiscall ~IndexedTriangleSetGeometry(IndexedTriangleSetGeometry * this)


/* IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry() */

void __thiscall
IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry(IndexedTriangleSetGeometry *this)

{
  *(undefined ***)this = &PTR__IndexedTriangleSetGeometry_00fde4e8;
  *(undefined ***)(this + 0x10) = &PTR__IndexedTriangleSetGeometry_00fde550;
  *(undefined ***)(this + 0x58) = &PTR__IndexedTriangleSetGeometry_00fde570;
                    /* try { // try from 008e0afc to 008e0aff has its CatchHandler @ 008e0b1c */
  deactivate();
  Streamable::~Streamable((Streamable *)(this + 0x58));
  Geometry::~Geometry((Geometry *)this);
  return;
}


