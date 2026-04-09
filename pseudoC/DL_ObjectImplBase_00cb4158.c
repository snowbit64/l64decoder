// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_ObjectImplBase
// Entry Point: 00cb4158
// Size: 112 bytes
// Signature: undefined __thiscall ~DL_ObjectImplBase(DL_ObjectImplBase<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>,CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>> * this)


/* non-virtual thunk to CryptoPP::DL_ObjectImplBase<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,
   CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>, CryptoPP::DL_Keys_DSA,
   CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA1>, CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>
   >::~DL_ObjectImplBase() */

void __thiscall
CryptoPP::
DL_ObjectImplBase<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>,CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>>
::~DL_ObjectImplBase
          (DL_ObjectImplBase<CryptoPP::DL_VerifierBase<CryptoPP::Integer>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>,CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>>
           *this)

{
  *(undefined ***)(this + -8) = &PTR__DL_ObjectImplBase_01000f78;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01001060;
  *(undefined ***)(this + 8) = &PTR__DL_ObjectImplBase_010010b8;
  *(undefined8 *)(this + 0x10) = 0xff7808;
  *(undefined8 *)(this + 0x20) = 0xff7978;
  *(undefined8 *)(this + 0x18) = 0xff78a8;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)(this + 0x108));
  DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *)
             (this + 0x18));
  return;
}


