// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_FinalTemplate
// Entry Point: 00cc11b8
// Size: 176 bytes
// Signature: undefined __thiscall ~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>> * this)


/* non-virtual thunk to
   CryptoPP::PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,
   CryptoPP::DL_Keys_DSA, CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,
   CryptoPP::DL_SignatureMessageEncodingMethod_DSA, CryptoPP::SHA1> > >::~PK_FinalTemplate() */

void __thiscall
CryptoPP::
PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>>
::~PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>>
                    *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)(this + -8) = &PTR__DL_ObjectImplBase_01001250;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_010012a8;
  *(undefined8 *)(this + 8) = 0xff89b8;
  *(undefined8 *)(this + 0x18) = 0xff8b30;
  *(undefined ***)(this + 0x148) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x168);
  *(undefined ***)(this + -0x10) = &PTR__DL_ObjectImplBase_01001178;
  uVar1 = *(ulong *)(this + 0x158);
  if (*(ulong *)(this + 0x160) <= *(ulong *)(this + 0x158)) {
    uVar1 = *(ulong *)(this + 0x160);
  }
  *(undefined8 *)(this + 0x10) = 0xff8a50;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc1240 to 00cc1243 has its CatchHandler @ 00cc1268 */
  UnalignedDeallocate(pvVar2);
  DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *
             )(this + 0x10));
  operator_delete(this + -0x10);
  return;
}


