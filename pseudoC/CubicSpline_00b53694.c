// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CubicSpline
// Entry Point: 00b53694
// Size: 68 bytes
// Signature: undefined __thiscall CubicSpline(CubicSpline * this, FORM param_1)


/* CubicSpline::CubicSpline(Spline::FORM) */

void __thiscall CubicSpline::CubicSpline(CubicSpline *this,FORM param_1)

{
  Spline::Spline((Spline *)this,1,param_1,1,2);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__CubicSpline_00fea130;
  return;
}


