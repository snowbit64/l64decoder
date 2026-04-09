// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsRandomAccess
// Entry Point: 00c7ff14
// Size: 36 bytes
// Signature: undefined IsRandomAccess(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::OFB_ModePolicy> >::IsRandomAccess() const */

void CryptoPP::
     AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>>
     ::IsRandomAccess(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0xd8))();
                    /* WARNING: Could not recover jumptable at 0x00c7ff34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))();
  return;
}


