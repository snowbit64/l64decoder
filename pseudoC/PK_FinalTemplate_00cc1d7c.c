// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_FinalTemplate
// Entry Point: 00cc1d7c
// Size: 124 bytes
// Signature: undefined __thiscall ~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>> * this)


/* non-virtual thunk to
   CryptoPP::PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,
   CryptoPP::DL_Keys_DSA, CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,
   CryptoPP::DL_SignatureMessageEncodingMethod_DSA, CryptoPP::SHA1> > >::~PK_FinalTemplate() */

void __thiscall
CryptoPP::
PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>>
::~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_VerifierImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>>
                    *this)

{
  *(undefined ***)(this + -8) = &PTR__DL_ObjectImplBase_01001060;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_010010b8;
  *(undefined8 *)(this + 8) = 0xff7808;
  *(undefined ***)(this + -0x10) = &PTR__DL_ObjectImplBase_01000f78;
  *(undefined8 *)(this + 0x18) = 0xff7978;
  *(undefined8 *)(this + 0x10) = 0xff78a8;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x100));
  DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *)
             (this + 0x10));
  operator_delete(this + -0x10);
  return;
}


