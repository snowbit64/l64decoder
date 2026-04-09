// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewVerificationAccumulator
// Entry Point: 00cca0a8
// Size: 44 bytes
// Signature: undefined NewVerificationAccumulator(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> >::NewVerificationAccumulator() const */

void * CryptoPP::
       DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>
       ::NewVerificationAccumulator(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c8);
                    /* try { // try from 00cca0c0 to 00cca0c3 has its CatchHandler @ 00cca0d4 */
  PK_MessageAccumulatorImpl<CryptoPP::SHA256>::PK_MessageAccumulatorImpl();
  return pvVar1;
}


