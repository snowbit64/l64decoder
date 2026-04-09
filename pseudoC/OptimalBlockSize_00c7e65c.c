// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimalBlockSize
// Entry Point: 00c7e65c
// Size: 36 bytes
// Signature: undefined __thiscall OptimalBlockSize(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this)


/* non-virtual thunk to
   CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::OptimalBlockSize() const */

void __thiscall
CryptoPP::
CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::OptimalBlockSize(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
                   *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x00c7e67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


