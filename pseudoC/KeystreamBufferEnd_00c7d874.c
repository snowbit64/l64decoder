// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: KeystreamBufferEnd
// Entry Point: 00c7d874
// Size: 12 bytes
// Signature: undefined KeystreamBufferEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::KeystreamBufferEnd() */

long CryptoPP::
     AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
     ::KeystreamBufferEnd(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x30) + *(long *)(in_x0 + 0x28);
}


