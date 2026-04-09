// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewVerificationAccumulator
// Entry Point: 00cc97e8
// Size: 44 bytes
// Signature: undefined NewVerificationAccumulator(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> >::NewVerificationAccumulator() const */

void * CryptoPP::
       DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>
       ::NewVerificationAccumulator(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c8);
                    /* try { // try from 00cc9800 to 00cc9803 has its CatchHandler @ 00cc9814 */
  PK_MessageAccumulatorImpl<CryptoPP::SHA256>::PK_MessageAccumulatorImpl();
  return pvVar1;
}


