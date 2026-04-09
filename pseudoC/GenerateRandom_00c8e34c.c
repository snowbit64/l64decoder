// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00c8e34c
// Size: 540 bytes
// Signature: undefined __thiscall GenerateRandom(DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DSA2<CryptoPP::SHA1>> * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>,
   CryptoPP::DSA2<CryptoPP::SHA1> >::GenerateRandom(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DSA2<CryptoPP::SHA1>>
::GenerateRandom(DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>,CryptoPP::DSA2<CryptoPP::SHA1>>
                 *this,RandomNumberGenerator *param_1,NameValuePairs *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **local_378;
  undefined **ppuStack_370;
  undefined **local_368;
  long local_360;
  undefined8 local_358;
  undefined **local_350;
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer> aDStack_268 [136];
  undefined **local_1e0;
  undefined **local_1d8;
  undefined **local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined **local_88;
  ulong local_78;
  ulong local_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::GenerateRandom
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> *)this,param_1,param_2);
  uVar2 = FIPS_140_2_ComplianceEnabled();
  if ((uVar2 & 1) != 0) {
    PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>>
    ::PK_FinalTemplate((PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>>
                        *)&local_1e0,(CryptoMaterial *)(this + *(long *)(*(long *)this + -0x18)));
    local_378 = &PTR__PK_SignatureScheme_01003fa0;
                    /* try { // try from 00c8e3b4 to 00c8e3ff has its CatchHandler @ 00c8e580 */
    Algorithm::Algorithm((Algorithm *)&ppuStack_370,true);
    local_378 = &PTR__DL_ObjectImplBase_01000f78;
    ppuStack_370 = &PTR__DL_ObjectImplBase_01001060;
    local_368 = &PTR__DL_ObjectImplBase_010010b8;
    local_350 = &PTR__NameValuePairs_00fecdc8;
    DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_DSA>::DL_PublicKeyImpl();
    local_358 = 0xff2978;
    local_350 = (undefined **)0xff2a48;
    local_378 = &PTR__DL_ObjectImplBase_01004228;
    ppuStack_370 = &PTR__PK_FinalTemplate_01004310;
    local_360 = 0xff28c8;
    local_368 = &PTR__PK_FinalTemplate_01004368;
                    /* try { // try from 00c8e440 to 00c8e457 has its CatchHandler @ 00c8e570 */
    uVar3 = (*(code *)local_1d8[6])(&local_1d8);
    (**(code **)(local_360 + 0x60))(&local_360,uVar3);
                    /* try { // try from 00c8e458 to 00c8e46b has its CatchHandler @ 00c8e56c */
    SignaturePairwiseConsistencyTest_FIPS_140_Only
              ((PK_Signer *)&local_1e0,(PK_Verifier *)&local_378);
    local_378 = &PTR__DL_ObjectImplBase_01000f78;
    ppuStack_370 = &PTR__DL_ObjectImplBase_01001060;
    local_368 = &PTR__DL_ObjectImplBase_010010b8;
    local_360 = 0xff7808;
    local_358 = 0xff78a8;
    local_350 = (undefined **)0xff7978;
    DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::~DL_FixedBasePrecomputationImpl(aDStack_268);
    DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::~DL_KeyImpl
              ((DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID> *
               )&local_358);
    local_1e0 = &PTR__DL_ObjectImplBase_01001178;
    local_1d8 = &PTR__DL_ObjectImplBase_01001250;
    local_1d0 = &PTR__DL_ObjectImplBase_010012a8;
    uStack_1c8 = 0xff89b8;
    local_88 = &PTR__Integer_0100c890;
    local_1c0 = 0xff8a50;
    uStack_1b8 = 0xff8b30;
    if (local_70 <= local_78) {
      local_78 = local_70;
    }
    for (; local_78 != 0; local_78 = local_78 - 1) {
      *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
    }
                    /* try { // try from 00c8e520 to 00c8e523 has its CatchHandler @ 00c8e568 */
    UnalignedDeallocate(local_68);
    DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::
    ~DL_KeyImpl((DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>
                 *)&local_1c0);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


