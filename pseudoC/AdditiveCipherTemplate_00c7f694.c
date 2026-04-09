// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AdditiveCipherTemplate
// Entry Point: 00c7f694
// Size: 148 bytes
// Signature: undefined AdditiveCipherTemplate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::OFB_ModePolicy> >::AdditiveCipherTemplate() */

void CryptoPP::
     AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>>
     ::AdditiveCipherTemplate(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[4] = 0xffffffffffffffff;
  in_x0[5] = 0;
  *in_x0 = &PTR__ModePolicyCommonTemplate_010007c8;
  in_x0[1] = &PTR__AbstractPolicyHolder_010008c0;
  in_x0[2] = 0;
  in_x0[6] = 0;
  in_x0[7] = &PTR__AbstractPolicyHolder_01000958;
                    /* try { // try from 00c7f6ec to 00c7f6f3 has its CatchHandler @ 00c7f728 */
  Algorithm::Algorithm((Algorithm *)(in_x0 + 8),true);
  in_x0[10] = 0xffffffffffffffff;
  in_x0[0xb] = 0;
  in_x0[0xc] = 0;
  in_x0[0xd] = 0;
  *in_x0 = &PTR__AdditiveCipherTemplate_00ff1178;
  in_x0[1] = &PTR__AdditiveCipherTemplate_00ff12a8;
  in_x0[7] = &PTR__AdditiveCipherTemplate_00ff1340;
  in_x0[8] = &PTR__AdditiveCipherTemplate_00ff13c0;
  return;
}


