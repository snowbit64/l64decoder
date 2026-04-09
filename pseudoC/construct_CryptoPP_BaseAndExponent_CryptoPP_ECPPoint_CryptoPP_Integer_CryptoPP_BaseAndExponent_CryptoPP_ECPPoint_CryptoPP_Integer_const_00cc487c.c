// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>const&>
// Entry Point: 00cc487c
// Size: 104 bytes
// Signature: void __thiscall construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>const&>(allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> * this, BaseAndExponent * param_1, BaseAndExponent * param_2)


/* void std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>
   >::construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>,
   CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>
   const&>(CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*,
   CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> const&) */

void __thiscall
std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>const&>
          (allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *this,
          BaseAndExponent *param_1,BaseAndExponent *param_2)

{
  *(undefined ***)param_1 = &PTR__ECPPoint_00fe9fd8;
  CryptoPP::Integer::Integer((Integer *)(param_1 + 8),(Integer *)(param_2 + 8));
                    /* try { // try from 00cc48b8 to 00cc48bf has its CatchHandler @ 00cc4974 */
  CryptoPP::Integer::Integer((Integer *)(param_1 + 0x38),(Integer *)(param_2 + 0x38));
  param_1[0x68] = param_2[0x68];
                    /* try { // try from 00cc48d0 to 00cc48d3 has its CatchHandler @ 00cc48e4 */
  CryptoPP::Integer::Integer((Integer *)(param_1 + 0x70),(Integer *)(param_2 + 0x70));
  return;
}


