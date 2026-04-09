// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmProvider
// Entry Point: 00c7f308
// Size: 52 bytes
// Signature: undefined __thiscall AlgorithmProvider(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>> * this)


/* non-virtual thunk to
   CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >::AlgorithmProvider() const */

void __thiscall
CryptoPP::
CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
::AlgorithmProvider(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
                    *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -0x38) + 0xe0))();
                    /* WARNING: Could not recover jumptable at 0x00c7f338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))();
  return;
}


