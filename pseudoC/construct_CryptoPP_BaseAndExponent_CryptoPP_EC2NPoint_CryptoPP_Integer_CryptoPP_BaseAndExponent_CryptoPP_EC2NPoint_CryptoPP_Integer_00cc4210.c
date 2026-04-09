// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
// Entry Point: 00cc4210
// Size: 104 bytes
// Signature: void __thiscall construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>(allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>> * this, BaseAndExponent * param_1, BaseAndExponent * param_2)


/* void std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>
   >::construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>
   >(CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>*,
   CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>&&) */

void __thiscall
std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>::
construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
          (allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>> *this,
          BaseAndExponent *param_1,BaseAndExponent *param_2)

{
  *(undefined ***)param_1 = &PTR__EC2NPoint_010026a8;
  CryptoPP::PolynomialMod2::PolynomialMod2
            ((PolynomialMod2 *)(param_1 + 8),(PolynomialMod2 *)(param_2 + 8));
                    /* try { // try from 00cc424c to 00cc4253 has its CatchHandler @ 00cc42f0 */
  CryptoPP::PolynomialMod2::PolynomialMod2
            ((PolynomialMod2 *)(param_1 + 0x28),(PolynomialMod2 *)(param_2 + 0x28));
  param_1[0x48] = param_2[0x48];
                    /* try { // try from 00cc4264 to 00cc4267 has its CatchHandler @ 00cc4278 */
  CryptoPP::Integer::Integer((Integer *)(param_1 + 0x50),(Integer *)(param_2 + 0x50));
  return;
}


