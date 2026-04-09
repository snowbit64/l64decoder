// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PedestrianVisuals
// Entry Point: 0089940c
// Size: 40 bytes
// Signature: undefined __thiscall ~PedestrianVisuals(PedestrianVisuals * this)


/* PedestrianVisuals::~PedestrianVisuals() */

void __thiscall PedestrianVisuals::~PedestrianVisuals(PedestrianVisuals *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x80);
  *(undefined ***)this = &PTR__PedestrianVisuals_00fdd2b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


