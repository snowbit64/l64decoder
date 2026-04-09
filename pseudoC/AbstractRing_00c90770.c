// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AbstractRing
// Entry Point: 00c90770
// Size: 36 bytes
// Signature: undefined __cdecl AbstractRing(AbstractRing * param_1)


/* CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::AbstractRing(CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>
   const&) */

void CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::AbstractRing(AbstractRing *param_1)

{
  *(AbstractRing **)(param_1 + 0x10) = param_1;
  *(undefined ***)param_1 = &PTR__AbstractRing_00ff3150;
  *(undefined ***)(param_1 + 8) = &PTR__AbstractGroup_01002610;
  return;
}


