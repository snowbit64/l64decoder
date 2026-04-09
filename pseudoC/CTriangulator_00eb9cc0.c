// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CTriangulator
// Entry Point: 00eb9cc0
// Size: 100 bytes
// Signature: undefined __thiscall ~CTriangulator(CTriangulator * this)


/* FLOAT_MATH::CTriangulator::~CTriangulator() */

void __thiscall FLOAT_MATH::CTriangulator::~CTriangulator(CTriangulator *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x70);
  *(undefined ***)this = &PTR__CTriangulator_01014538;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


