// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetSignatureAlgorithm
// Entry Point: 00cc1c64
// Size: 72 bytes
// Signature: undefined GetSignatureAlgorithm(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_ObjectImpl<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,
   CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>, CryptoPP::DL_Keys_DSA,
   CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA1>, CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>
   >::GetSignatureAlgorithm() const */

void CryptoPP::
     DL_ObjectImpl<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>,CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>>
     ::GetSignatureAlgorithm(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  Singleton<CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::NewObject<CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>>,0>
  ::Ref();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


