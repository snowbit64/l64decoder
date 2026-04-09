// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverablePartFirst
// Entry Point: 00cbe390
// Size: 36 bytes
// Signature: undefined RecoverablePartFirst(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SignatureSchemeBase<CryptoPP::PK_Signer,
   CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint> >::RecoverablePartFirst() const */

void CryptoPP::
     DL_SignatureSchemeBase<CryptoPP::PK_Signer,CryptoPP::DL_PrivateKey<CryptoPP::EC2NPoint>>::
     RecoverablePartFirst(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00cbe3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return;
}


