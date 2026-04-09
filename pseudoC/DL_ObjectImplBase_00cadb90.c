// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_ObjectImplBase
// Entry Point: 00cadb90
// Size: 52 bytes
// Signature: undefined __thiscall ~DL_ObjectImplBase(DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::EC2NPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>> * this)


/* CryptoPP::DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::EC2NPoint>,
   CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256>,
   CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,
   CryptoPP::ECDSA<CryptoPP::EC2N, CryptoPP::SHA256> > >::~DL_ObjectImplBase() */

void __thiscall
CryptoPP::
DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::EC2NPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>>
::~DL_ObjectImplBase
          (DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::EC2NPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>>
           *this)

{
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01003278;
  *(undefined ***)(this + 8) = &PTR__DL_ObjectImplBase_01003350;
  *(undefined ***)(this + 0x10) = &PTR__DL_ObjectImplBase_010033a8;
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)(this + 0x18));
  return;
}


