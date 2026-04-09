// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullStore
// Entry Point: 00cddfd8
// Size: 8 bytes
// Signature: undefined __thiscall ~NullStore(NullStore * this)


/* non-virtual thunk to CryptoPP::NullStore::~NullStore() */

void __thiscall CryptoPP::NullStore::~NullStore(NullStore *this)

{
  operator_delete(this + -8);
  return;
}


