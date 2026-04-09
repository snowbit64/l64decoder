// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CombineMessageAndShiftRegister
// Entry Point: 00c7e848
// Size: 72 bytes
// Signature: undefined __thiscall CombineMessageAndShiftRegister(CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this, uchar * param_1, uchar * param_2, uchar * param_3, ulong param_4)


/* CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::CombineMessageAndShiftRegister(unsigned char*, unsigned char*,
   unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::
CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::CombineMessageAndShiftRegister
          (CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
           *this,uchar *param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  xorbuf(param_2,param_3,param_4);
  memcpy(param_1,param_2,param_4);
  return;
}


