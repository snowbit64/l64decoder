// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmProvider
// Entry Point: 00c81044
// Size: 52 bytes
// Signature: undefined __thiscall AlgorithmProvider(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>> * this)


/* non-virtual thunk to
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >::AlgorithmProvider() const */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
::AlgorithmProvider(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
                    *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -0x38) + 0xf8))();
                    /* WARNING: Could not recover jumptable at 0x00c81074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))();
  return;
}


