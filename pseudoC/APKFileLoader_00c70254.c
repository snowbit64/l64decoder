// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~APKFileLoader
// Entry Point: 00c70254
// Size: 88 bytes
// Signature: undefined __thiscall ~APKFileLoader(APKFileLoader * this)


/* APKFileLoader::~APKFileLoader() */

void __thiscall APKFileLoader::~APKFileLoader(APKFileLoader *this)

{
  *(undefined ***)this = &PTR__APKFileLoader_00feea00;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}


