// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Exponentiate
// Entry Point: 00c90878
// Size: 88 bytes
// Signature: undefined __cdecl Exponentiate(PolynomialMod2 * param_1, Integer * param_2)


/* CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::Exponentiate(CryptoPP::PolynomialMod2 const&,
   CryptoPP::Integer const&) const */

void CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::Exponentiate
               (PolynomialMod2 *param_1,Integer *param_2)

{
  PolynomialMod2 *in_x8;
  
  PolynomialMod2::PolynomialMod2(in_x8);
                    /* try { // try from 00c908a8 to 00c908bf has its CatchHandler @ 00c908d0 */
  (**(code **)(*(long *)param_1 + 0xb0))(param_1);
  return;
}


