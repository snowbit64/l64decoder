// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_FinalTemplate
// Entry Point: 00cbb9c8
// Size: 124 bytes
// Signature: undefined __thiscall ~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>> * this)


/* non-virtual thunk to
   CryptoPP::PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> > >::~PK_FinalTemplate() */

void __thiscall
CryptoPP::
PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
::~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
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


