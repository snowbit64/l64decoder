// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CubicSpline
// Entry Point: 00b536d8
// Size: 60 bytes
// Signature: undefined __thiscall ~CubicSpline(CubicSpline * this)


/* CubicSpline::~CubicSpline() */

void __thiscall CubicSpline::~CubicSpline(CubicSpline *this)

{
  *(undefined ***)this = &PTR__CubicSpline_00fea130;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  Spline::~Spline((Spline *)this);
  return;
}


