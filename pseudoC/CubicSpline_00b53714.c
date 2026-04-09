// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CubicSpline
// Entry Point: 00b53714
// Size: 68 bytes
// Signature: undefined __thiscall ~CubicSpline(CubicSpline * this)


/* CubicSpline::~CubicSpline() */

void __thiscall CubicSpline::~CubicSpline(CubicSpline *this)

{
  *(undefined ***)this = &PTR__CubicSpline_00fea130;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  Spline::~Spline((Spline *)this);
  operator_delete(this);
  return;
}


