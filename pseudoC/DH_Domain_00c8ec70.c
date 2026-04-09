// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DH_Domain
// Entry Point: 00c8ec70
// Size: 136 bytes
// Signature: undefined __thiscall DH_Domain(DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>> * this, BufferedTransformation * param_1)


/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 0>
   >::DH_Domain(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::
DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
::DH_Domain(DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
            *this,BufferedTransformation *param_1)

{
  Algorithm::Algorithm((Algorithm *)this,true);
  *(undefined ***)this = &PTR__DH_Domain_00ff30b0;
  *(undefined ***)(this + 0x10) = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
  ::DL_GroupParametersImpl();
  *(undefined8 *)(this + 8) = 0x1001370;
  *(undefined8 *)(this + 0x10) = 0x10014c8;
                    /* try { // try from 00c8ecdc to 00c8ece7 has its CatchHandler @ 00c8ecf8 */
  DL_GroupParameters_IntegerBased::BERDecode((DL_GroupParameters_IntegerBased *)(this + 8),param_1);
  return;
}


