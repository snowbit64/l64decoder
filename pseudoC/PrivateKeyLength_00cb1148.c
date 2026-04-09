// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PrivateKeyLength
// Entry Point: 00cb1148
// Size: 40 bytes
// Signature: undefined PrivateKeyLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer>::PrivateKeyLength() const */

void CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer>::PrivateKeyLength(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x88))();
  (**(code **)(*plVar1 + 0xa0))();
  Integer::ByteCount();
  return;
}


