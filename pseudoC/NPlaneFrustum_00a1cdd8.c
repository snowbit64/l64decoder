// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NPlaneFrustum
// Entry Point: 00a1cdd8
// Size: 132 bytes
// Signature: undefined __thiscall NPlaneFrustum(NPlaneFrustum * this, uint param_1)


/* NPlaneFrustum::NPlaneFrustum(unsigned int) */

void __thiscall NPlaneFrustum::NPlaneFrustum(NPlaneFrustum *this,uint param_1)

{
  void *pvVar1;
  long lVar2;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(uint *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__NPlaneFrustum_00fe30e8;
  pvVar1 = operator_new__((ulong)param_1 * 0x10);
  if (param_1 != 0) {
    lVar2 = 0;
    do {
                    /* try { // try from 00a1ce34 to 00a1ce37 has its CatchHandler @ 00a1ce5c */
      Plane::Plane((Plane *)((long)pvVar1 + lVar2));
      lVar2 = lVar2 + 0x10;
    } while ((ulong)param_1 * 0x10 - lVar2 != 0);
  }
  *(void **)(this + 8) = pvVar1;
  return;
}


