// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CFB_CipherTemplate
// Entry Point: 00cae9cc
// Size: 4 bytes
// Signature: undefined __thiscall ~CFB_CipherTemplate(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>> * this)


/* CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >::~CFB_CipherTemplate() */

void __thiscall
CryptoPP::
CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
::~CFB_CipherTemplate
          (CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
           *this)

{
  CFB_ModePolicy::~CFB_ModePolicy((CFB_ModePolicy *)this);
  return;
}


