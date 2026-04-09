// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HashFilter
// Entry Point: 00cdd388
// Size: 40 bytes
// Signature: undefined __thiscall ~HashFilter(HashFilter * this)


/* non-virtual thunk to CryptoPP::HashFilter::~HashFilter() */

void __thiscall CryptoPP::HashFilter::~HashFilter(HashFilter *this)

{
  ~HashFilter(this + -8);
  operator_delete(this + -8);
  return;
}


