// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2WheelShape
// Entry Point: 009b9eac
// Size: 40 bytes
// Signature: undefined __thiscall ~Bt2WheelShape(Bt2WheelShape * this)


/* Bt2WheelShape::~Bt2WheelShape() */

void __thiscall Bt2WheelShape::~Bt2WheelShape(Bt2WheelShape *this)

{
  btConvexShape::~btConvexShape((btConvexShape *)this);
                    /* try { // try from 009b9ec0 to 009b9ec7 has its CatchHandler @ 009b9ed4 */
  btAlignedFreeInternal(this);
  return;
}


