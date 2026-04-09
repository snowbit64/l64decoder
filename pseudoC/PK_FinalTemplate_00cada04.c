// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PK_FinalTemplate
// Entry Point: 00cada04
// Size: 364 bytes
// Signature: undefined __thiscall PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>> * this, CryptoMaterial * param_1)


/* CryptoPP::PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256, int>, CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,
   CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>, CryptoPP::DL_SignatureMessageEncodingMethod_DSA,
   CryptoPP::SHA256> > >::PK_FinalTemplate(CryptoPP::CryptoMaterial const&) */

void __thiscall
CryptoPP::
PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
::PK_FinalTemplate(PK_FinalTemplate<CryptoPP::DL_SignerImpl<CryptoPP::DL_SignatureSchemeOptions<CryptoPP::DL_SS<CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256,int>,CryptoPP::DL_Keys_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>,CryptoPP::DL_SignatureMessageEncodingMethod_DSA,CryptoPP::SHA256>>>
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
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01003278;
  *(undefined ***)(this + 8) = &PTR__DL_ObjectImplBase_01003350;
  *(undefined ***)(this + 0x28) = &PTR__NameValuePairs_00fecdc8;
  *(undefined ***)(this + 0x10) = &PTR__DL_ObjectImplBase_010033a8;
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::DL_PrivateKeyImpl();
  *(undefined8 *)(this + 0x20) = 0xff5588;
  *(undefined8 *)(this + 0x28) = 0xff5668;
  *(undefined ***)this = &PTR__DL_ObjectImplBase_01004b80;
  *(undefined ***)(this + 8) = &PTR__PK_FinalTemplate_01004c58;
  *(undefined ***)(this + 0x10) = &PTR__PK_FinalTemplate_01004cb0;
  *(undefined8 *)(this + 0x18) = 0xff54f0;
                    /* try { // try from 00cadacc to 00cadb3f has its CatchHandler @ 00cadb70 */
  bVar3 = NameValuePairs::
          GetThisObject<CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>>
                    ((NameValuePairs *)param_1,(DL_PrivateKeyImpl *)plVar1);
  if (!bVar3) {
    plVar4 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1);
    plVar4 = (long *)((long)plVar4 + *(long *)(*plVar4 + -0x70));
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    local_60 = 0;
    local_70 = plVar1;
    pCStack_68 = param_1;
    bVar3 = NameValuePairs::GetThisObject<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
                      ((NameValuePairs *)param_1,(DL_PrivateKey *)plVar1);
    if (bVar3) {
      local_60 = 1;
    }
    AssignFromHelperClass<CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>,CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>
    ::operator()((char *)&local_70,(_func_void_Integer_ptr *)"PrivateExponent");
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


