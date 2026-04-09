// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00caf738
// Size: 40 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_ExternalCipher(CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption> * this)


/* non-virtual thunk to
   CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption>::~CipherModeFinalTemplate_ExternalCipher()
    */

void __thiscall
CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption>::
~CipherModeFinalTemplate_ExternalCipher
          (CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption> *this)

{
  CBC_Decryption::~CBC_Decryption((CBC_Decryption *)(this + -8));
  operator_delete((CBC_Decryption *)(this + -8));
  return;
}


