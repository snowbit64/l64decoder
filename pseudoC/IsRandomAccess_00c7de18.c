// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsRandomAccess
// Entry Point: 00c7de18
// Size: 36 bytes
// Signature: undefined __thiscall IsRandomAccess(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this)


/* non-virtual thunk to
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::IsRandomAccess() const */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::IsRandomAccess(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
                 *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x00c7de38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))();
  return;
}


