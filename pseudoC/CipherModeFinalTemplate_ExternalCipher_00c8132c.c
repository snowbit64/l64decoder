// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00c8132c
// Size: 160 bytes
// Signature: undefined CipherModeFinalTemplate_ExternalCipher(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >, CryptoPP::AdditiveCipherAbstractPolicy>
   >::CipherModeFinalTemplate_ExternalCipher() */

void CryptoPP::
     CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>,CryptoPP::AdditiveCipherAbstractPolicy>>
     ::CipherModeFinalTemplate_ExternalCipher(void)

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
                    /* try { // try from 00c8138c to 00c81393 has its CatchHandler @ 00c813cc */
  Algorithm::Algorithm((Algorithm *)(in_x0 + 0xc),true);
  in_x0[0xe] = 0xffffffffffffffff;
  in_x0[0xf] = 0;
  in_x0[0x10] = 0;
  in_x0[0x11] = 0;
  *in_x0 = &PTR__AdditiveCipherTemplate_00ff1718;
  in_x0[1] = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff1870;
  in_x0[7] = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff1908;
  in_x0[0xc] = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff1988;
  return;
}


