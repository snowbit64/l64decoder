// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertIn
// Entry Point: 00c97384
// Size: 92 bytes
// Signature: undefined __cdecl ConvertIn(EC2NPoint * param_1)


/* CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>::ConvertIn(CryptoPP::EC2NPoint const&)
   const */

void CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>::ConvertIn(EC2NPoint *param_1)

{
  long in_x1;
  undefined8 *in_x8;
  
  *in_x8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1),(PolynomialMod2 *)(in_x1 + 8));
                    /* try { // try from 00c973c0 to 00c973c7 has its CatchHandler @ 00c973e0 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5),(PolynomialMod2 *)(in_x1 + 0x28));
  *(undefined *)(in_x8 + 9) = *(undefined *)(in_x1 + 0x48);
  return;
}


