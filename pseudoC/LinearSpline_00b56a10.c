// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LinearSpline
// Entry Point: 00b56a10
// Size: 36 bytes
// Signature: undefined __thiscall ~LinearSpline(LinearSpline * this)


/* LinearSpline::~LinearSpline() */

void __thiscall LinearSpline::~LinearSpline(LinearSpline *this)

{
  Spline::~Spline((Spline *)this);
  operator_delete(this);
  return;
}


