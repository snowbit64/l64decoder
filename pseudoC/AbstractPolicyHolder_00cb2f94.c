// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AbstractPolicyHolder
// Entry Point: 00cb2f94
// Size: 4 bytes
// Signature: undefined __thiscall ~AbstractPolicyHolder(AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy> * this)


/* non-virtual thunk to CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::OFB_ModePolicy>::~AbstractPolicyHolder() */

void __thiscall
CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>::
~AbstractPolicyHolder
          (AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>
           *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xcb2f98);
  (*pcVar1)();
}


