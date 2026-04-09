// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AllowNonrecoverablePart
// Entry Point: 00cbc9b8
// Size: 28 bytes
// Signature: undefined AllowNonrecoverablePart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SignatureSchemeBase<CryptoPP::PK_Signer, CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>
   >::AllowNonrecoverablePart() const */

void CryptoPP::
     DL_SignatureSchemeBase<CryptoPP::PK_Signer,CryptoPP::DL_PrivateKey<CryptoPP::ECPPoint>>::
     AllowNonrecoverablePart(void)

{
  long *in_x0;
  
  (**(code **)(*in_x0 + 0x90))();
  PK_SignatureMessageEncodingMethod::AllowNonrecoverablePart();
  return;
}


