// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScalarMultiply
// Entry Point: 00c8f658
// Size: 88 bytes
// Signature: undefined __cdecl ScalarMultiply(PolynomialMod2 * param_1, Integer * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::ScalarMultiply(CryptoPP::PolynomialMod2
   const&, CryptoPP::Integer const&) const */

void CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::ScalarMultiply
               (PolynomialMod2 *param_1,Integer *param_2)

{
  PolynomialMod2 *in_x8;
  
  PolynomialMod2::PolynomialMod2(in_x8);
                    /* try { // try from 00c8f688 to 00c8f69f has its CatchHandler @ 00c8f6b0 */
  (**(code **)(*(long *)param_1 + 0x68))(param_1);
  return;
}


