// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accumulate
// Entry Point: 00c93e40
// Size: 80 bytes
// Signature: undefined __cdecl Accumulate(EC2NPoint * param_1, EC2NPoint * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::Accumulate(CryptoPP::EC2NPoint&,
   CryptoPP::EC2NPoint const&) const */

EC2NPoint *
CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::Accumulate(EC2NPoint *param_1,EC2NPoint *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x20))();
  PolynomialMod2::operator=((PolynomialMod2 *)(param_2 + 8),(PolynomialMod2 *)(lVar1 + 8));
  PolynomialMod2::operator=((PolynomialMod2 *)(param_2 + 0x28),(PolynomialMod2 *)(lVar1 + 0x28));
  param_2[0x48] = *(EC2NPoint *)(lVar1 + 0x48);
  return param_2;
}


