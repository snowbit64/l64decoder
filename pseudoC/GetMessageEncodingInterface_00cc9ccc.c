// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMessageEncodingInterface
// Entry Point: 00cc9ccc
// Size: 72 bytes
// Signature: undefined GetMessageEncodingInterface(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_ObjectImpl<CryptoPP::DL_SignerBase<CryptoPP::EC2NPoint>,
   CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256>,
   CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,
   CryptoPP::ECDSA<CryptoPP::EC2N, CryptoPP::SHA256> > >::GetMessageEncodingInterface() const */

void CryptoPP::
     DL_ObjectImpl<CryptoPP::DL_SignerBase<CryptoPP::EC2NPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>>
     ::GetMessageEncodingInterface(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  Singleton<CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::NewObject<CryptoPP::DL_SignatureMessageEncodingMethod_DSA>,0>
  ::Ref();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


