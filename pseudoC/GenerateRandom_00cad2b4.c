// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00cad2b4
// Size: 468 bytes
// Signature: undefined __thiscall GenerateRandom(DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>> * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,
   CryptoPP::ECDSA<CryptoPP::ECP, CryptoPP::SHA256>
   >::GenerateRandom(CryptoPP::RandomNumberGenerator&, CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>>
::GenerateRandom(DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>>
                 *this,RandomNumberGenerator *param_1,NameValuePairs *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **local_4d8;
  undefined **ppuStack_4d0;
  undefined **local_4c8;
  long local_4c0;
  undefined8 local_4b8;
  undefined **local_4b0;
  DL_GroupParameters_EC<CryptoPP::ECP> aDStack_4a8 [376];
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> aDStack_330 [200];
  undefined **local_268;
  undefined **local_260;
  undefined **local_258;
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> aDStack_250 [520];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::GenerateRandom
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)this,param_1,
             param_2);
  uVar2 = FIPS_140_2_ComplianceEnabled();
  if ((uVar2 & 1) != 0) {
    PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
    ::PK_FinalTemplate((PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
                        *)&local_268,(CryptoMaterial *)(this + *(long *)(*(long *)this + -0x18)));
    local_4d8 = &PTR__PK_SignatureScheme_01003fa0;
                    /* try { // try from 00cad318 to 00cad363 has its CatchHandler @ 00cad49c */
    Algorithm::Algorithm((Algorithm *)&ppuStack_4d0,true);
    local_4d8 = &PTR__DL_ObjectImplBase_01002c88;
    ppuStack_4d0 = &PTR__DL_ObjectImplBase_01002d70;
    local_4c8 = &PTR__DL_ObjectImplBase_01002dc8;
    local_4b0 = &PTR__NameValuePairs_00fecdc8;
    DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::DL_PublicKeyImpl();
    local_4b8 = 0xff3910;
    local_4b0 = (undefined **)0xff39e0;
    local_4d8 = &PTR__DL_ObjectImplBase_01004968;
    ppuStack_4d0 = &PTR__PK_FinalTemplate_01004a50;
    local_4c0 = 0xff3860;
    local_4c8 = &PTR__PK_FinalTemplate_01004aa8;
                    /* try { // try from 00cad3a4 to 00cad3bb has its CatchHandler @ 00cad48c */
    uVar3 = (*(code *)local_260[6])(&local_260);
    (**(code **)(local_4c0 + 0x60))(&local_4c0,uVar3);
                    /* try { // try from 00cad3bc to 00cad3cf has its CatchHandler @ 00cad488 */
    SignaturePairwiseConsistencyTest_FIPS_140_Only
              ((PK_Signer *)&local_268,(PK_Verifier *)&local_4d8);
    local_4d8 = &PTR__DL_ObjectImplBase_01002c88;
    ppuStack_4d0 = &PTR__DL_ObjectImplBase_01002d70;
    local_4c8 = &PTR__DL_ObjectImplBase_01002dc8;
    local_4c0 = 0xffae18;
    local_4b8 = 0xffaeb8;
    local_4b0 = (undefined **)0xffaf88;
    DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::~DL_FixedBasePrecomputationImpl(aDStack_330)
    ;
    local_4b8 = 0xffb000;
    local_4b0 = (undefined **)0xffb0d0;
    DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC(aDStack_4a8);
    local_268 = &PTR__DL_ObjectImplBase_01002e88;
    local_260 = &PTR__DL_ObjectImplBase_01002f60;
    local_258 = &PTR__DL_ObjectImplBase_01002fb8;
    DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::~DL_PrivateKeyImpl
              (aDStack_250);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


