// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_ObjectImplBase
// Entry Point: 00cb50d4
// Size: 164 bytes
// Signature: undefined __thiscall ~DL_ObjectImplBase(DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::Integer>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DSA2<CryptoPP::SHA1>>> * this)


/* non-virtual thunk to CryptoPP::DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::Integer>,
   CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>, CryptoPP::DL_Keys_DSA,
   CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA1>,
   CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>,
   CryptoPP::DSA2<CryptoPP::SHA1> > >::~DL_ObjectImplBase() */

void __thiscall
CryptoPP::
DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::Integer>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DSA2<CryptoPP::SHA1>>>
::~DL_ObjectImplBase
          (DL_ObjectImplBase<CryptoPP::DL_SignerBase<CryptoPP::Integer>,CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>,CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DSA2<CryptoPP::SHA1>>>
           *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)(this + -8) = &PTR__DL_ObjectImplBase_01001178;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01001250;
  *(undefined ***)(this + 8) = &PTR__DL_ObjectImplBase_010012a8;
  *(undefined8 *)(this + 0x10) = 0xff89b8;
  *(undefined ***)(this + 0x150) = &PTR__Integer_0100c890;
  *(undefined8 *)(this + 0x20) = 0xff8b30;
  pvVar2 = *(void **)(this + 0x170);
  *(undefined8 *)(this + 0x18) = 0xff8a50;
  uVar1 = *(ulong *)(this + 0x160);
  if (*(ulong *)(this + 0x168) <= *(ulong *)(this + 0x160)) {
    uVar1 = *(ulong *)(this + 0x168);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb5158 to 00cb515b has its CatchHandler @ 00cb5178 */
  UnalignedDeallocate(pvVar2);
  DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
            ((DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *
             )(this + 0x18));
  return;
}


