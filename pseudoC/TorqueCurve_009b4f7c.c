// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TorqueCurve
// Entry Point: 009b4f7c
// Size: 60 bytes
// Signature: undefined __thiscall ~TorqueCurve(TorqueCurve * this)


/* Bt2RaycastVehicle::TorqueCurve::~TorqueCurve() */

void __thiscall Bt2RaycastVehicle::TorqueCurve::~TorqueCurve(TorqueCurve *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}


