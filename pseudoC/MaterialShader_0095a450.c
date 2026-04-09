// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MaterialShader
// Entry Point: 0095a450
// Size: 144 bytes
// Signature: undefined __thiscall ~MaterialShader(MaterialShader * this)


/* MaterialShader::~MaterialShader() */

void __thiscall MaterialShader::~MaterialShader(MaterialShader *this)

{
  *(undefined ***)this = &PTR__MaterialShader_00fe0470;
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  *(undefined8 *)(this + 0x88) = 0;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x70));
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  if (*(void **)(this + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa0));
  }
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


