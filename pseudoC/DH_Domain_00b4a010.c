// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DH_Domain
// Entry Point: 00b4a010
// Size: 60 bytes
// Signature: undefined __thiscall ~DH_Domain(DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>> * this)


/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2> >::~DH_Domain() */

void __thiscall
CryptoPP::
DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
::~DH_Domain(DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
             *this)

{
  *(undefined ***)this = &PTR__DH_Domain_00fe9f08;
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 8));
  operator_delete(this);
  return;
}


