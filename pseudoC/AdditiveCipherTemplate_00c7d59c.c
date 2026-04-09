// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AdditiveCipherTemplate
// Entry Point: 00c7d59c
// Size: 128 bytes
// Signature: undefined AdditiveCipherTemplate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::AdditiveCipherTemplate() */

void CryptoPP::
     AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
     ::AdditiveCipherTemplate(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  *in_x0 = &PTR__AbstractPolicyHolder_00ff5820;
  in_x0[1] = &PTR__AbstractPolicyHolder_00ff58c0;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 2),true);
  in_x0[4] = 0xffffffffffffffff;
  in_x0[5] = 0;
  in_x0[6] = 0;
  in_x0[7] = 0;
  *in_x0 = &PTR__AdditiveCipherTemplate_00ff0b58;
  in_x0[1] = &PTR__AdditiveCipherTemplate_00ff0c40;
  in_x0[2] = &PTR__AdditiveCipherTemplate_00ff0cd8;
  return;
}


