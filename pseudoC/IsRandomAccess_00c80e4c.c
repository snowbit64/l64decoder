// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsRandomAccess
// Entry Point: 00c80e4c
// Size: 36 bytes
// Signature: undefined __thiscall IsRandomAccess(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>> * this)


/* non-virtual thunk to
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >::IsRandomAccess() const */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
::IsRandomAccess(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
                 *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0xf8))();
                    /* WARNING: Could not recover jumptable at 0x00c80e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))();
  return;
}


