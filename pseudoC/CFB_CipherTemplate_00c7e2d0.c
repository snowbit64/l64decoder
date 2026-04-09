// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CFB_CipherTemplate
// Entry Point: 00c7e2d0
// Size: 80 bytes
// Signature: undefined CFB_CipherTemplate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::CFB_CipherTemplate() */

void CryptoPP::
     CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
     ::CFB_CipherTemplate(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[2] = 0;
  *in_x0 = &PTR__CFB_CipherTemplate_00ff0d50;
  in_x0[1] = &PTR__CFB_CipherTemplate_00ff0e28;
  return;
}


