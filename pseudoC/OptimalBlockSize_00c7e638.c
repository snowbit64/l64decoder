// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimalBlockSize
// Entry Point: 00c7e638
// Size: 36 bytes
// Signature: undefined OptimalBlockSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::OptimalBlockSize() const */

void CryptoPP::
     CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::SymmetricCipher>>
     ::OptimalBlockSize(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x00c7e658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


