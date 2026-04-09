// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AllowNonrecoverablePart
// Entry Point: 00d1d6b8
// Size: 28 bytes
// Signature: undefined AllowNonrecoverablePart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TF_SignatureSchemeBase<CryptoPP::PK_Signer,
   CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,
   CryptoPP::PK_SignatureMessageEncodingMethod> >::AllowNonrecoverablePart() const */

void CryptoPP::
     TF_SignatureSchemeBase<CryptoPP::PK_Signer,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,CryptoPP::PK_SignatureMessageEncodingMethod>>
     ::AllowNonrecoverablePart(void)

{
  long in_x0;
  
  (**(code **)(*(long *)(in_x0 + 0x10) + 0x20))();
  PK_SignatureMessageEncodingMethod::AllowNonrecoverablePart();
  return;
}


