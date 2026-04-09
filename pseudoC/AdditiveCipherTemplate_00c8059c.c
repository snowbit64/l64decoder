// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AdditiveCipherTemplate
// Entry Point: 00c8059c
// Size: 160 bytes
// Signature: undefined AdditiveCipherTemplate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >::AdditiveCipherTemplate() */

void CryptoPP::
     AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
     ::AdditiveCipherTemplate(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[2] = 0;
  in_x0[10] = 0;
  in_x0[0xb] = 0;
  in_x0[4] = 0xffffffffffffffff;
  in_x0[5] = 0;
  in_x0[9] = 0xffffffffffffffff;
  *in_x0 = &PTR__CTR_ModePolicy_00fec7b8;
  in_x0[1] = &PTR__AbstractPolicyHolder_00fec8d0;
  in_x0[6] = 0;
  in_x0[7] = &PTR__AbstractPolicyHolder_00fec968;
                    /* try { // try from 00c805fc to 00c80603 has its CatchHandler @ 00c8063c */
  Algorithm::Algorithm((Algorithm *)(in_x0 + 0xc),true);
  in_x0[0xe] = 0xffffffffffffffff;
  in_x0[0xf] = 0;
  in_x0[0x10] = 0;
  in_x0[0x11] = 0;
  *in_x0 = &PTR__AdditiveCipherTemplate_00ff1438;
  in_x0[1] = &PTR__AdditiveCipherTemplate_00ff1588;
  in_x0[7] = &PTR__AdditiveCipherTemplate_00ff1620;
  in_x0[0xc] = &PTR__AdditiveCipherTemplate_00ff16a0;
  return;
}


