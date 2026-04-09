// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NativeFileLoader
// Entry Point: 00b34e98
// Size: 116 bytes
// Signature: undefined __thiscall ~NativeFileLoader(NativeFileLoader * this)


/* NativeFileLoader::~NativeFileLoader() */

void __thiscall NativeFileLoader::~NativeFileLoader(NativeFileLoader *this)

{
  NativeFileLoader NVar1;
  
  *(undefined ***)this = &PTR__NativeFileLoader_00fe98d0;
  if (((byte)this[0x40] & 1) == 0) {
    NVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    NVar1 = this[0x28];
  }
  if (((byte)NVar1 & 1) == 0) {
    NVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    NVar1 = this[0x10];
  }
  if (((byte)NVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}


