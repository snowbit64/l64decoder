// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CFB_EncryptionTemplate
// Entry Point: 00cae9d4
// Size: 8 bytes
// Signature: undefined __thiscall ~CFB_EncryptionTemplate(CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>> * this)


/* non-virtual thunk to
   CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >::~CFB_EncryptionTemplate() */

void __thiscall
CryptoPP::
CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
::~CFB_EncryptionTemplate
          (CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
           *this)

{
  CFB_ModePolicy::~CFB_ModePolicy((CFB_ModePolicy *)(this + -8));
  return;
}


