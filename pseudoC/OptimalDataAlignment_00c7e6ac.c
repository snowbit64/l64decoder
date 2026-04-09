// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimalDataAlignment
// Entry Point: 00c7e6ac
// Size: 36 bytes
// Signature: undefined __thiscall OptimalDataAlignment(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this)


/* non-virtual thunk to
   CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::OptimalDataAlignment() const */

void __thiscall
CryptoPP::
CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::OptimalDataAlignment
          (CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
           *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x00c7e6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}


