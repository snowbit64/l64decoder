// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsRandomAccess
// Entry Point: 00c7ddf4
// Size: 36 bytes
// Signature: undefined IsRandomAccess(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::IsRandomAccess() const */

void CryptoPP::
     AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
     ::IsRandomAccess(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x00c7de14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))();
  return;
}


