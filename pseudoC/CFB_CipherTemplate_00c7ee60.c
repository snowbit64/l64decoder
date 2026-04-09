// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CFB_CipherTemplate
// Entry Point: 00c7ee60
// Size: 112 bytes
// Signature: undefined CFB_CipherTemplate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >::CFB_CipherTemplate() */

void CryptoPP::
     CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
     ::CFB_CipherTemplate(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[2] = 0;
  in_x0[0xb] = 0;
  *(undefined4 *)(in_x0 + 0xc) = 0;
  in_x0[4] = 0xffffffffffffffff;
  in_x0[5] = 0;
  in_x0[9] = 0xffffffffffffffff;
  in_x0[10] = 0;
  in_x0[0xd] = 0;
  *in_x0 = &PTR__CFB_CipherTemplate_00ff0f50;
  in_x0[1] = &PTR__CFB_CipherTemplate_00ff1078;
  in_x0[6] = 0;
  in_x0[7] = &PTR__CFB_CipherTemplate_00ff1110;
  return;
}


