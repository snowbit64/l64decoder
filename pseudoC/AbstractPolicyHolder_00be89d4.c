// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AbstractPolicyHolder
// Entry Point: 00be89d4
// Size: 8 bytes
// Signature: undefined __thiscall ~AbstractPolicyHolder(AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy> * this)


/* non-virtual thunk to CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy>::~AbstractPolicyHolder() */

void __thiscall
CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>::
~AbstractPolicyHolder
          (AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>
           *this)

{
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)(this + -8));
  return;
}


