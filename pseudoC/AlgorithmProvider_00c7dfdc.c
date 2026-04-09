// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmProvider
// Entry Point: 00c7dfdc
// Size: 52 bytes
// Signature: undefined __thiscall AlgorithmProvider(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this)


/* non-virtual thunk to
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::AlgorithmProvider() const */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::AlgorithmProvider(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
                    *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x00c7e00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))();
  return;
}


