// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_KeyAgreementAlgorithm_DH
// Entry Point: 00b4aec4
// Size: 4 bytes
// Signature: undefined __thiscall ~DL_KeyAgreementAlgorithm_DH(DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>> * this)


/* CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2> >::~DL_KeyAgreementAlgorithm_DH()
    */

void __thiscall
CryptoPP::
DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
::~DL_KeyAgreementAlgorithm_DH
          (DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
           *this)

{
  operator_delete(this);
  return;
}


