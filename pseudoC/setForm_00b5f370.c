// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setForm
// Entry Point: 00b5f370
// Size: 16 bytes
// Signature: undefined __thiscall setForm(Spline * this, FORM param_1)


/* Spline::setForm(Spline::FORM) */

void __thiscall Spline::setForm(Spline *this,FORM param_1)

{
  *(FORM *)(this + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00b5f37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x40))();
  return;
}


