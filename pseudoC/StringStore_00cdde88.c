// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StringStore
// Entry Point: 00cdde88
// Size: 8 bytes
// Signature: undefined __thiscall ~StringStore(StringStore * this)


/* non-virtual thunk to CryptoPP::StringStore::~StringStore() */

void __thiscall CryptoPP::StringStore::~StringStore(StringStore *this)

{
  operator_delete(this + -8);
  return;
}


