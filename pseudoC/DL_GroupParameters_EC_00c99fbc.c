// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c99fbc
// Size: 76 bytes
// Signature: undefined __cdecl DL_GroupParameters_EC(ECP * param_1, ECPPoint * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC(CryptoPP::ECP const&,
   CryptoPP::ECPPoint const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC
               (ECP *param_1,ECPPoint *param_2,Integer *param_3,Integer *param_4)

{
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::DL_GroupParametersImpl();
  FUN_00fa8620(*(undefined8 *)param_2);
  return;
}


