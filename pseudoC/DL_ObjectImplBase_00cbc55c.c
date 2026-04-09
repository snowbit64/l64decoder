// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_ObjectImplBase
// Entry Point: 00cbc55c
// Size: 124 bytes
// Signature: undefined __thiscall ~DL_ObjectImplBase(DL_ObjectImplBase<CryptoPP::DL_VerifierBase<CryptoPP::ECPPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>> * this)


/* non-virtual thunk to CryptoPP::DL_ObjectImplBase<CryptoPP::DL_VerifierBase<CryptoPP::ECPPoint>,
   CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256>, CryptoPP::DL_PublicKey_EC<CryptoPP::ECP> >::~DL_ObjectImplBase() */

void __thiscall
CryptoPP::
DL_ObjectImplBase<CryptoPP::DL_VerifierBase<CryptoPP::ECPPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>>
::~DL_ObjectImplBase
          (DL_ObjectImplBase<CryptoPP::DL_VerifierBase<CryptoPP::ECPPoint>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>,CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>>
           *this)

{
  *(undefined ***)(this + -8) = &PTR__DL_ObjectImplBase_01002c88;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01002d70;
  *(undefined ***)(this + 8) = &PTR__DL_ObjectImplBase_01002dc8;
  *(undefined8 *)(this + 0x10) = 0xffae18;
  *(undefined8 *)(this + 0x18) = 0xffaeb8;
  *(undefined8 *)(this + 0x20) = 0xffaf88;
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(this + 0x1a0));
  *(undefined8 *)(this + 0x18) = 0xffb000;
  *(undefined8 *)(this + 0x20) = 0xffb0d0;
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x28));
  return;
}


