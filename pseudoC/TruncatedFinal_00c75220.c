// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TruncatedFinal
// Entry Point: 00c75220
// Size: 8 bytes
// Signature: undefined __thiscall TruncatedFinal(AuthenticatedSymmetricCipherBase * this, uchar * param_1, ulong param_2)


/* non-virtual thunk to CryptoPP::AuthenticatedSymmetricCipherBase::TruncatedFinal(unsigned char*,
   unsigned long) */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::TruncatedFinal
          (AuthenticatedSymmetricCipherBase *this,uchar *param_1,ulong param_2)

{
  TruncatedFinal(this + -8,param_1,param_2);
  return;
}


