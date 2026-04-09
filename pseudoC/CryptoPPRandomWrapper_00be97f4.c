// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CryptoPPRandomWrapper
// Entry Point: 00be97f4
// Size: 4 bytes
// Signature: undefined __thiscall ~CryptoPPRandomWrapper(CryptoPPRandomWrapper * this)


/* KeyAgreementCommon::CryptoPPRandomWrapper::~CryptoPPRandomWrapper() */

void __thiscall
KeyAgreementCommon::CryptoPPRandomWrapper::~CryptoPPRandomWrapper(CryptoPPRandomWrapper *this)

{
  operator_delete(this);
  return;
}


