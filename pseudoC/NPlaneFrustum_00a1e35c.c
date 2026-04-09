// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NPlaneFrustum
// Entry Point: 00a1e35c
// Size: 80 bytes
// Signature: undefined __thiscall ~NPlaneFrustum(NPlaneFrustum * this)


/* NPlaneFrustum::~NPlaneFrustum() */

void __thiscall NPlaneFrustum::~NPlaneFrustum(NPlaneFrustum *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__NPlaneFrustum_00fe30e8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


