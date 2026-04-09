// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CFB_DecryptionTemplate
// Entry Point: 00cae9fc
// Size: 8 bytes
// Signature: undefined __thiscall ~CFB_DecryptionTemplate(CFB_DecryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>> * this)


/* non-virtual thunk to
   CryptoPP::CFB_DecryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >::~CFB_DecryptionTemplate() */

void __thiscall
CryptoPP::
CFB_DecryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
::~CFB_DecryptionTemplate
          (CFB_DecryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
           *this)

{
  CFB_ModePolicy::~CFB_ModePolicy((CFB_ModePolicy *)(this + -0x38));
  return;
}


