// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_FinalTemplate
// Entry Point: 00cc9bf4
// Size: 80 bytes
// Signature: undefined __thiscall ~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>> * this)


/* CryptoPP::PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> > >::~PK_FinalTemplate() */

void __thiscall
CryptoPP::
PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
::~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
                    *this)

{
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01003278;
  *(undefined ***)(this + 8) = &PTR__DL_ObjectImplBase_01003350;
  *(undefined ***)(this + 0x10) = &PTR__DL_ObjectImplBase_010033a8;
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)(this + 0x18));
  operator_delete(this);
  return;
}


