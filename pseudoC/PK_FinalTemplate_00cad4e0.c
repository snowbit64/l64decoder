// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PK_FinalTemplate
// Entry Point: 00cad4e0
// Size: 364 bytes
// Signature: undefined __thiscall PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>> * this, CryptoMaterial * param_1)


/* CryptoPP::PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> > >::PK_FinalTemplate(CryptoPP::CryptoMaterial const&) */

void __thiscall
CryptoPP::
PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
::PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::ECP>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
                   *this,CryptoMaterial *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *local_70;
  CryptoMaterial *pCStack_68;
  undefined local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined ***)this = &PTR__PK_SignatureScheme_01003fa0;
  Algorithm::Algorithm((Algorithm *)(this + 8),true);
  plVar1 = (long *)(this + 0x18);
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01002e88;
  *(undefined ***)(this + 8) = &PTR__DL_ObjectImplBase_01002f60;
  *(undefined ***)(this + 0x28) = &PTR__NameValuePairs_00fecdc8;
  *(undefined ***)(this + 0x10) = &PTR__DL_ObjectImplBase_01002fb8;
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::DL_PrivateKeyImpl();
  *(undefined8 *)(this + 0x20) = 0xff52c8;
  *(undefined8 *)(this + 0x28) = 0xff53a8;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01004618;
  *(undefined ***)(this + 8) = &PTR__PK_FinalTemplate_010046f0;
  *(undefined ***)(this + 0x10) = &PTR__PK_FinalTemplate_01004748;
  *(undefined8 *)(this + 0x18) = 0xff5230;
                    /* try { // try from 00cad5a8 to 00cad61b has its CatchHandler @ 00cad64c */
  bVar3 = NameValuePairs::
          GetThisObject<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>>
                    ((NameValuePairs *)param_1,(DL_PrivateKeyImpl *)plVar1);
  if (!bVar3) {
    plVar4 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1);
    plVar4 = (long *)((long)plVar4 + *(long *)(*plVar4 + -0x70));
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    local_60 = 0;
    local_70 = plVar1;
    pCStack_68 = param_1;
    bVar3 = NameValuePairs::GetThisObject<CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>>
                      ((NameValuePairs *)param_1,(DL_PrivateKey *)plVar1);
    if (bVar3) {
      local_60 = 1;
    }
    AssignFromHelperClass<CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>,CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>>
    ::operator()((char *)&local_70,(_func_void_Integer_ptr *)"PrivateExponent");
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


