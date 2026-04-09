// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DH_Domain
// Entry Point: 00c8eb90
// Size: 108 bytes
// Signature: undefined DH_Domain(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 0> >::DH_Domain() */

void CryptoPP::
     DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
     ::DH_Domain(void)

{
  undefined8 *in_x0;
  
  Algorithm::Algorithm((Algorithm *)in_x0,true);
  *in_x0 = &PTR__DH_Domain_00ff30b0;
  in_x0[2] = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
  ::DL_GroupParametersImpl();
  in_x0[1] = 0x1001370;
  in_x0[2] = 0x10014c8;
  return;
}


