// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FilterInstance
// Entry Point: 00e44b6c
// Size: 72 bytes
// Signature: undefined __thiscall ~FilterInstance(FilterInstance * this)


/* SoLoud::FilterInstance::~FilterInstance() */

void __thiscall SoLoud::FilterInstance::~FilterInstance(FilterInstance *this)

{
  *(undefined ***)this = &PTR_initParams_01013f10;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}


