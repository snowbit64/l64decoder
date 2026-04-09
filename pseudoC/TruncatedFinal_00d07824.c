// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TruncatedFinal
// Entry Point: 00d07824
// Size: 8 bytes
// Signature: undefined __thiscall TruncatedFinal(IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode> * this, uchar * param_1, ulong param_2)


/* non-virtual thunk to CryptoPP::IteratedHashBase<unsigned long,
   CryptoPP::MessageAuthenticationCode>::TruncatedFinal(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode>::TruncatedFinal
          (IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode> *this,uchar *param_1,
          ulong param_2)

{
  TruncatedFinal(this + -8,param_1,param_2);
  return;
}


