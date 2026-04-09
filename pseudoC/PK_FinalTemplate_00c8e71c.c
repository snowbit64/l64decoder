// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PK_FinalTemplate
// Entry Point: 00c8e71c
// Size: 412 bytes
// Signature: undefined __thiscall PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>> * this, CryptoMaterial * param_1)


/* CryptoPP::PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,
   CryptoPP::DL_Keys_DSA, CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,
   CryptoPP::DL_SignatureMessageEncodingMethod_DSA, CryptoPP::SHA1> >
   >::PK_FinalTemplate(CryptoPP::CryptoMaterial const&) */

void __thiscall
CryptoPP::
PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>>
::PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DSA2<CryptoPP::SHA1>,CryptoPP::DL_Keys_DSA,CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA1>>>
                   *this,CryptoMaterial *param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *local_60;
  CryptoMaterial *pCStack_58;
  undefined local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__PK_SignatureScheme_01003fa0;
  Algorithm::Algorithm((Algorithm *)(this + 8),true);
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01001178;
  *(undefined ***)(this + 8) = &PTR__DL_ObjectImplBase_01001250;
  *(undefined ***)(this + 0x28) = &PTR__NameValuePairs_00fecdc8;
  *(undefined ***)(this + 0x10) = &PTR__DL_ObjectImplBase_010012a8;
  *(undefined ***)(this + 0x18) = &PTR__DL_Key_01004000;
  DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>::DL_KeyImpl()
  ;
  *(undefined8 *)(this + 0x18) = 0xff89b8;
  *(undefined8 *)(this + 0x20) = 0xff8a50;
  *(undefined8 *)(this + 0x28) = 0xff8b30;
                    /* try { // try from 00c8e7d8 to 00c8e7db has its CatchHandler @ 00c8e8b8 */
  Integer::Integer((Integer *)(this + 0x158));
  plVar4 = (long *)(this + 0x18);
  *plVar4 = 0xff2df8;
  *(undefined8 *)(this + 0x20) = 0xff2e90;
  *(undefined8 *)(this + 0x28) = 0xff2f70;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01003df8;
  *(undefined ***)(this + 8) = &PTR__PK_FinalTemplate_01003ed0;
  *(undefined ***)(this + 0x10) = &PTR__PK_FinalTemplate_01003f28;
                    /* try { // try from 00c8e818 to 00c8e88b has its CatchHandler @ 00c8e8d0 */
  bVar2 = NameValuePairs::
          GetThisObject<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>>
                    ((NameValuePairs *)param_1,(DL_PrivateKeyImpl *)plVar4);
  if (!bVar2) {
    plVar3 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4);
    plVar3 = (long *)((long)plVar3 + *(long *)(*plVar3 + -0x70));
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
    local_50 = 0;
    local_60 = plVar4;
    pCStack_58 = param_1;
    bVar2 = NameValuePairs::GetThisObject<CryptoPP::DL_PrivateKey<CryptoPP::Integer>>
                      ((NameValuePairs *)param_1,(DL_PrivateKey *)plVar4);
    if (bVar2) {
      local_50 = 1;
    }
    AssignFromHelperClass<CryptoPP::DL_PrivateKey<CryptoPP::Integer>,CryptoPP::DL_PrivateKey<CryptoPP::Integer>>
    ::operator()((char *)&local_60,(_func_void_Integer_ptr *)"PrivateExponent");
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


