// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PedestrianSpline
// Entry Point: 0089332c
// Size: 84 bytes
// Signature: undefined __thiscall ~PedestrianSpline(PedestrianSpline * this)


/* PedestrianSpline::~PedestrianSpline() */

void __thiscall PedestrianSpline::~PedestrianSpline(PedestrianSpline *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


