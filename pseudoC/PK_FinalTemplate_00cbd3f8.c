// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_FinalTemplate
// Entry Point: 00cbd3f8
// Size: 120 bytes
// Signature: undefined __thiscall ~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>> * this)


/* non-virtual thunk to
   CryptoPP::PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> > >::~PK_FinalTemplate() */

void __thiscall
CryptoPP::
PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
::~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
                    *this)

{
  *(undefined ***)(this + -0x10) = &PTR__DL_ObjectImplBase_01003078;
  *(undefined ***)(this + -8) = &PTR__DL_ObjectImplBase_01003160;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_010031b8;
  *(undefined8 *)(this + 8) = 0xffb498;
  *(undefined8 *)(this + 0x10) = 0xffb538;
  *(undefined8 *)(this + 0x18) = 0xffb608;
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(this + 0x210));
  *(undefined8 *)(this + 0x10) = 0xffb680;
  *(undefined8 *)(this + 0x18) = 0xffb750;
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x20));
  return;
}


