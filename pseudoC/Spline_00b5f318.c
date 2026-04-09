// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Spline
// Entry Point: 00b5f318
// Size: 76 bytes
// Signature: undefined __thiscall ~Spline(Spline * this)


/* Spline::~Spline() */

void __thiscall Spline::~Spline(Spline *this)

{
  *(undefined ***)this = &PTR__Spline_00fea278;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
    return;
  }
  return;
}


