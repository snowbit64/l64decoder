// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00cad7d8
// Size: 468 bytes
// Signature: undefined __thiscall GenerateRandom(DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>> * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,
   CryptoPP::ECDSA<CryptoPP::EC2N, CryptoPP::SHA256>
   >::GenerateRandom(CryptoPP::RandomNumberGenerator&, CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>
::GenerateRandom(DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>
                 *this,RandomNumberGenerator *param_1,NameValuePairs *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **local_5a8;
  undefined **ppuStack_5a0;
  undefined **local_598;
  long local_590;
  undefined8 local_588;
  undefined **local_580;
  DL_GroupParameters_EC<CryptoPP::EC2N> aDStack_578 [496];
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> aDStack_388 [168];
  undefined **local_2e0;
  undefined **local_2d8;
  undefined **local_2d0;
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> aDStack_2c8 [640];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::GenerateRandom
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)this,param_1,
             param_2);
  uVar2 = FIPS_140_2_ComplianceEnabled();
  if ((uVar2 & 1) != 0) {
    PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
    ::PK_FinalTemplate((PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
                        *)&local_2e0,(CryptoMaterial *)(this + *(long *)(*(long *)this + -0x18)));
    local_5a8 = &PTR__PK_SignatureScheme_01003fa0;
                    /* try { // try from 00cad83c to 00cad887 has its CatchHandler @ 00cad9c0 */
    Algorithm::Algorithm((Algorithm *)&ppuStack_5a0,true);
    local_5a8 = &PTR__DL_ObjectImplBase_01003078;
    ppuStack_5a0 = &PTR__DL_ObjectImplBase_01003160;
    local_598 = &PTR__DL_ObjectImplBase_010031b8;
    local_580 = &PTR__NameValuePairs_00fecdc8;
    DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::DL_PublicKeyImpl();
    local_588 = 0xff3ba0;
    local_580 = (undefined **)0xff3c70;
    local_5a8 = &PTR__DL_ObjectImplBase_01004dd0;
    ppuStack_5a0 = &PTR__PK_FinalTemplate_01004eb8;
    local_590 = 0xff3af0;
    local_598 = &PTR__PK_FinalTemplate_01004f10;
                    /* try { // try from 00cad8c8 to 00cad8df has its CatchHandler @ 00cad9b0 */
    uVar3 = (*(code *)local_2d8[6])(&local_2d8);
    (**(code **)(local_590 + 0x60))(&local_590,uVar3);
                    /* try { // try from 00cad8e0 to 00cad8f3 has its CatchHandler @ 00cad9ac */
    SignaturePairwiseConsistencyTest_FIPS_140_Only
              ((PK_Signer *)&local_2e0,(PK_Verifier *)&local_5a8);
    local_5a8 = &PTR__DL_ObjectImplBase_01003078;
    ppuStack_5a0 = &PTR__DL_ObjectImplBase_01003160;
    local_598 = &PTR__DL_ObjectImplBase_010031b8;
    local_590 = 0xffb498;
    local_588 = 0xffb538;
    local_580 = (undefined **)0xffb608;
    DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
              (aDStack_388);
    local_588 = 0xffb680;
    local_580 = (undefined **)0xffb750;
    DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC(aDStack_578);
    local_2e0 = &PTR__DL_ObjectImplBase_01003278;
    local_2d8 = &PTR__DL_ObjectImplBase_01003350;
    local_2d0 = &PTR__DL_ObjectImplBase_010033a8;
    DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
              (aDStack_2c8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


