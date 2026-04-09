// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndexedTriangleSetGeometry
// Entry Point: 008e0c28
// Size: 96 bytes
// Signature: undefined __thiscall ~IndexedTriangleSetGeometry(IndexedTriangleSetGeometry * this)


/* IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry() */

void __thiscall
IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry(IndexedTriangleSetGeometry *this)

{
  *(undefined ***)this = &PTR__IndexedTriangleSetGeometry_00fde4e8;
  *(undefined ***)(this + 0x10) = &PTR__IndexedTriangleSetGeometry_00fde550;
  *(undefined ***)(this + 0x58) = &PTR__IndexedTriangleSetGeometry_00fde570;
                    /* try { // try from 008e0c60 to 008e0c63 has its CatchHandler @ 008e0c88 */
  deactivate();
  Streamable::~Streamable((Streamable *)(this + 0x58));
  Geometry::~Geometry((Geometry *)this);
  operator_delete(this);
  return;
}


