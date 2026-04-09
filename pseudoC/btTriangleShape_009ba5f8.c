// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btTriangleShape
// Entry Point: 009ba5f8
// Size: 40 bytes
// Signature: undefined __thiscall ~btTriangleShape(btTriangleShape * this)


/* btTriangleShape::~btTriangleShape() */

void __thiscall btTriangleShape::~btTriangleShape(btTriangleShape *this)

{
  btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)this);
                    /* try { // try from 009ba60c to 009ba613 has its CatchHandler @ 009ba620 */
  btAlignedFreeInternal(this);
  return;
}


