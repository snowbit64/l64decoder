// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Myfm_Tesselate
// Entry Point: 00ec3ad0
// Size: 64 bytes
// Signature: undefined __thiscall ~Myfm_Tesselate(Myfm_Tesselate * this)


/* FLOAT_MATH::Myfm_Tesselate::~Myfm_Tesselate() */

void __thiscall FLOAT_MATH::Myfm_Tesselate::~Myfm_Tesselate(Myfm_Tesselate *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR_tesselate_01014670;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


