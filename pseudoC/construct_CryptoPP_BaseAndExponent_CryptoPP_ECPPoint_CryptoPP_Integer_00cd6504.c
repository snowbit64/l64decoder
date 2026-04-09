// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
// Entry Point: 00cd6504
// Size: 88 bytes
// Signature: void __thiscall construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>(allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> * this, BaseAndExponent * param_1)


/* void std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>
   >::construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,
   CryptoPP::Integer>>(CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>*) */

void __thiscall
std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
          (allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *this,
          BaseAndExponent *param_1)

{
  *(undefined ***)param_1 = &PTR__ECPPoint_00fe9fd8;
  CryptoPP::Integer::Integer((Integer *)(param_1 + 8));
                    /* try { // try from 00cd6534 to 00cd653b has its CatchHandler @ 00cd65ec */
  CryptoPP::Integer::Integer((Integer *)(param_1 + 0x38));
  param_1[0x68] = (BaseAndExponent)0x1;
                    /* try { // try from 00cd6548 to 00cd654b has its CatchHandler @ 00cd655c */
  CryptoPP::Integer::Integer((Integer *)(param_1 + 0x70));
  return;
}


