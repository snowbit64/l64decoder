// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplyElements
// Entry Point: 00ca38f4
// Size: 104 bytes
// Signature: undefined __cdecl MultiplyElements(EC2NPoint * param_1, EC2NPoint * param_2)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::MultiplyElements(CryptoPP::EC2NPoint const&,
   CryptoPP::EC2NPoint const&) const */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::MultiplyElements
               (EC2NPoint *param_1,EC2NPoint *param_2)

{
  long lVar1;
  undefined8 *in_x8;
  
  lVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x20))();
  *in_x8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1),(PolynomialMod2 *)(lVar1 + 8));
                    /* try { // try from 00ca393c to 00ca3943 has its CatchHandler @ 00ca395c */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5),(PolynomialMod2 *)(lVar1 + 0x28));
  *(undefined *)(in_x8 + 9) = *(undefined *)(lVar1 + 0x48);
  return;
}


