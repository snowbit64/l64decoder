// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DH_Domain
// Entry Point: 00c8ebfc
// Size: 116 bytes
// Signature: undefined __cdecl DH_Domain(DL_GroupParameters_GFP_DefaultSafePrime * param_1)


/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 0>
   >::DH_Domain(CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime const&) */

void CryptoPP::
     DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
     ::DH_Domain(DL_GroupParameters_GFP_DefaultSafePrime *param_1)

{
  Algorithm::Algorithm((Algorithm *)param_1,true);
  *(undefined ***)param_1 = &PTR__DH_Domain_00ff30b0;
  *(undefined ***)(param_1 + 0x10) = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
  ::DL_GroupParametersImpl((DL_GroupParametersImpl *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0x1001370;
  *(undefined8 *)(param_1 + 0x10) = 0x10014c8;
  return;
}


