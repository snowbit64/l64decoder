// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ExponentiateElement
// Entry Point: 00cb21b0
// Size: 136 bytes
// Signature: undefined __cdecl ExponentiateElement(EC2NPoint * param_1, Integer * param_2)


/* CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::ExponentiateElement(CryptoPP::EC2NPoint
   const&, CryptoPP::Integer const&) const */

void CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::ExponentiateElement
               (EC2NPoint *param_1,Integer *param_2)

{
  undefined8 *in_x8;
  long lVar1;
  
  *in_x8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1));
                    /* try { // try from 00cb21f4 to 00cb21fb has its CatchHandler @ 00cb224c */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5));
  lVar1 = *(long *)param_1;
  *(undefined *)(in_x8 + 9) = 1;
                    /* try { // try from 00cb220c to 00cb2223 has its CatchHandler @ 00cb2238 */
  (**(code **)(lVar1 + 0x100))(param_1);
  return;
}


