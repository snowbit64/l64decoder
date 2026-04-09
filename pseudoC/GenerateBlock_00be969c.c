// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00be969c
// Size: 8 bytes
// Signature: undefined __thiscall GenerateBlock(CryptoPPRandomWrapper * this, uchar * param_1, ulong param_2)


/* KeyAgreementCommon::CryptoPPRandomWrapper::GenerateBlock(unsigned char*, unsigned long) */

void __thiscall
KeyAgreementCommon::CryptoPPRandomWrapper::GenerateBlock
          (CryptoPPRandomWrapper *this,uchar *param_1,ulong param_2)

{
  SecureRandomGenerator::generate(*(SecureRandomGenerator **)(this + 8),param_1,(uint)param_2);
  return;
}


