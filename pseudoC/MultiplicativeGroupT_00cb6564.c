// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MultiplicativeGroupT
// Entry Point: 00cb6564
// Size: 4 bytes
// Signature: undefined __thiscall ~MultiplicativeGroupT(MultiplicativeGroupT * this)


/* CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::MultiplicativeGroupT::~MultiplicativeGroupT()
    */

void __thiscall
CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::MultiplicativeGroupT::~MultiplicativeGroupT
          (MultiplicativeGroupT *this)

{
  operator_delete(this);
  return;
}


