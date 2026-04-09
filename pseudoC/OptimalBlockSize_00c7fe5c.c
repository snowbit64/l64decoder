// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimalBlockSize
// Entry Point: 00c7fe5c
// Size: 36 bytes
// Signature: undefined OptimalBlockSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::OFB_ModePolicy> >::OptimalBlockSize() const */

void CryptoPP::
     AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>>
     ::OptimalBlockSize(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0xd8))();
                    /* WARNING: Could not recover jumptable at 0x00c7fe7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return;
}


