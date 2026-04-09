// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MultiplicativeGroupT
// Entry Point: 00cb3050
// Size: 4 bytes
// Signature: undefined __thiscall ~MultiplicativeGroupT(MultiplicativeGroupT * this)


/* CryptoPP::AbstractRing<CryptoPP::Integer>::MultiplicativeGroupT::~MultiplicativeGroupT() */

void __thiscall
CryptoPP::AbstractRing<CryptoPP::Integer>::MultiplicativeGroupT::~MultiplicativeGroupT
          (MultiplicativeGroupT *this)

{
  operator_delete(this);
  return;
}


