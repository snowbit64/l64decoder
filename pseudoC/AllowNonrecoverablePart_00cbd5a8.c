// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AllowNonrecoverablePart
// Entry Point: 00cbd5a8
// Size: 28 bytes
// Signature: undefined AllowNonrecoverablePart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SignatureSchemeBase<CryptoPP::PK_Verifier,
   CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint> >::AllowNonrecoverablePart() const */

void CryptoPP::
     DL_SignatureSchemeBase<CryptoPP::PK_Verifier,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>::
     AllowNonrecoverablePart(void)

{
  long *in_x0;
  
  (**(code **)(*in_x0 + 0xa0))();
  PK_SignatureMessageEncodingMethod::AllowNonrecoverablePart();
  return;
}


