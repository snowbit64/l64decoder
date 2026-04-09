// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AdhocShader
// Entry Point: 006d154c
// Size: 196 bytes
// Signature: undefined __thiscall ~AdhocShader(AdhocShader * this)


/* AdhocShader::~AdhocShader() */

void __thiscall AdhocShader::~AdhocShader(AdhocShader *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0xe8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xd0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xb8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0xa0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x70);
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
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


