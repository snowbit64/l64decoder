// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StringStore
// Entry Point: 00cdde80
// Size: 4 bytes
// Signature: undefined __thiscall ~StringStore(StringStore * this)


/* CryptoPP::StringStore::~StringStore() */

void __thiscall CryptoPP::StringStore::~StringStore(StringStore *this)

{
  operator_delete(this);
  return;
}


