// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewSignatureAccumulator
// Entry Point: 00cc9c44
// Size: 44 bytes
// Signature: undefined __cdecl NewSignatureAccumulator(RandomNumberGenerator * param_1)


/* CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> >::NewSignatureAccumulator(CryptoPP::RandomNumberGenerator&) const */

void * CryptoPP::
       DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>
       ::NewSignatureAccumulator(RandomNumberGenerator *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c8);
                    /* try { // try from 00cc9c5c to 00cc9c5f has its CatchHandler @ 00cc9c70 */
  PK_MessageAccumulatorImpl<CryptoPP::SHA256>::PK_MessageAccumulatorImpl();
  return pvVar1;
}


