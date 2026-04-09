// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: KeystreamBufferEnd
// Entry Point: 00c808a8
// Size: 12 bytes
// Signature: undefined KeystreamBufferEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >::KeystreamBufferEnd() */

long CryptoPP::
     AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
     ::KeystreamBufferEnd(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x80) + *(long *)(in_x0 + 0x78);
}


