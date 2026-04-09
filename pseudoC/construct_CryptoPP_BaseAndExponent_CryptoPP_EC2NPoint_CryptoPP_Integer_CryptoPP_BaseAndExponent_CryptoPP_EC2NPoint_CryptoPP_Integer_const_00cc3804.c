// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>const&>
// Entry Point: 00cc3804
// Size: 104 bytes
// Signature: void __thiscall construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>const&>(allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>> * this, BaseAndExponent * param_1, BaseAndExponent * param_2)


/* void std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>
   >::construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>
   const&>(CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*,
   CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer> const&) */

void __thiscall
std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>::
construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>const&>
          (allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>> *this,
          BaseAndExponent *param_1,BaseAndExponent *param_2)

{
  *(undefined ***)param_1 = &PTR__EC2NPoint_010026a8;
  CryptoPP::PolynomialMod2::PolynomialMod2
            ((PolynomialMod2 *)(param_1 + 8),(PolynomialMod2 *)(param_2 + 8));
                    /* try { // try from 00cc3840 to 00cc3847 has its CatchHandler @ 00cc38e4 */
  CryptoPP::PolynomialMod2::PolynomialMod2
            ((PolynomialMod2 *)(param_1 + 0x28),(PolynomialMod2 *)(param_2 + 0x28));
  param_1[0x48] = param_2[0x48];
                    /* try { // try from 00cc3858 to 00cc385b has its CatchHandler @ 00cc386c */
  CryptoPP::Integer::Integer((Integer *)(param_1 + 0x50),(Integer *)(param_2 + 0x50));
  return;
}


