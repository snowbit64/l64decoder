// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00c81ab4
// Size: 100 bytes
// Signature: undefined CipherModeFinalTemplate_ExternalCipher(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_Encryption>::CipherModeFinalTemplate_ExternalCipher()
    */

void CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_Encryption>::
     CipherModeFinalTemplate_ExternalCipher(void)

{
  undefined8 *in_x0;
  
  *in_x0 = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(in_x0 + 1),true);
  in_x0[2] = 0;
  in_x0[6] = 0;
  in_x0[9] = 0;
  in_x0[10] = 0;
  in_x0[4] = 0xffffffffffffffff;
  in_x0[5] = 0;
  in_x0[8] = 0xffffffffffffffff;
  *in_x0 = &PTR__BlockOrientedCipherModeBase_00ff1b80;
  in_x0[1] = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff1c68;
  return;
}


