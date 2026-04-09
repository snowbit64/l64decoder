// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_ObjectImplBase
// Entry Point: 00cbd334
// Size: 52 bytes
// Signature: undefined __thiscall ~DL_ObjectImplBase(DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::ECPPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>>> * this)


/* non-virtual thunk to CryptoPP::DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::ECPPoint>,
   CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256>,
   CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,
   CryptoPP::ECDSA<CryptoPP::ECP, CryptoPP::SHA256> > >::~DL_ObjectImplBase() */

void __thiscall
CryptoPP::
DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::ECPPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>>>
::~DL_ObjectImplBase
          (DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::ECPPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>>>
           *this)

{
  *(undefined ***)(this + -0x10) = &PTR__DL_ObjectImplBase_01002e88;
  *(undefined ***)(this + -8) = &PTR__DL_ObjectImplBase_01002f60;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01002fb8;
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)(this + 8));
  return;
}


