// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSpline
// Entry Point: 008c74a4
// Size: 60 bytes
// Signature: undefined __thiscall setSpline(SplineGeometry * this, Spline * param_1)


/* SplineGeometry::setSpline(Spline*) */

void __thiscall SplineGeometry::setSpline(SplineGeometry *this,Spline *param_1)

{
  if (*(long **)(this + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd8) + 8))();
  }
  *(Spline **)(this + 0xd8) = param_1;
  init();
  return;
}


