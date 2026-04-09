// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AbstractPolicyHolder
// Entry Point: 00be8a14
// Size: 4 bytes
// Signature: undefined __thiscall ~AbstractPolicyHolder(AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy> * this)


/* non-virtual thunk to CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy>::~AbstractPolicyHolder() */

void __thiscall
CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>::
~AbstractPolicyHolder
          (AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>
           *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe8a18);
  (*pcVar1)();
}


