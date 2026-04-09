// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullStore
// Entry Point: 00cddfc4
// Size: 4 bytes
// Signature: undefined __thiscall ~NullStore(NullStore * this)


/* CryptoPP::NullStore::~NullStore() */

void __thiscall CryptoPP::NullStore::~NullStore(NullStore *this)

{
  operator_delete(this);
  return;
}


