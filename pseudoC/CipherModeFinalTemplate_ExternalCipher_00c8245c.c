// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00c8245c
// Size: 108 bytes
// Signature: undefined CipherModeFinalTemplate_ExternalCipher(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption>::CipherModeFinalTemplate_ExternalCipher()
    */

void CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption>::
     CipherModeFinalTemplate_ExternalCipher(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[2] = 0;
  in_x0[5] = 0;
  in_x0[6] = 0;
  in_x0[4] = 0xffffffffffffffff;
  in_x0[10] = 0;
  in_x0[8] = 0xffffffffffffffff;
  in_x0[9] = 0;
  in_x0[0xd] = 0;
  in_x0[0xe] = 0;
  in_x0[0xc] = 0xffffffffffffffff;
  *in_x0 = &PTR__CBC_Decryption_00ff2008;
  in_x0[1] = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff20f8;
  return;
}


