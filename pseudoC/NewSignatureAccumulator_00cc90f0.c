// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewSignatureAccumulator
// Entry Point: 00cc90f0
// Size: 44 bytes
// Signature: undefined __cdecl NewSignatureAccumulator(RandomNumberGenerator * param_1)


/* CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> >::NewSignatureAccumulator(CryptoPP::RandomNumberGenerator&) const */

void * CryptoPP::
       DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>
       ::NewSignatureAccumulator(RandomNumberGenerator *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c8);
                    /* try { // try from 00cc9108 to 00cc910b has its CatchHandler @ 00cc911c */
  PK_MessageAccumulatorImpl<CryptoPP::SHA256>::PK_MessageAccumulatorImpl();
  return pvVar1;
}


