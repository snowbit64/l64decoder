// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetKeyAgreementAlgorithm
// Entry Point: 00c8f390
// Size: 72 bytes
// Signature: undefined GetKeyAgreementAlgorithm(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 0> >::GetKeyAgreementAlgorithm()
   const */

void CryptoPP::
     DH_Domain<CryptoPP::DL_GroupParameters_GFP_DefaultSafePrime,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
     ::GetKeyAgreementAlgorithm(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  Singleton<CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::Integer,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>,CryptoPP::NewObject<CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::Integer,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>>,0>
  ::Ref();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


