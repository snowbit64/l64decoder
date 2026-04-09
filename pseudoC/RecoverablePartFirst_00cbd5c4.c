// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverablePartFirst
// Entry Point: 00cbd5c4
// Size: 36 bytes
// Signature: undefined RecoverablePartFirst(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SignatureSchemeBase<CryptoPP::PK_Verifier,
   CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint> >::RecoverablePartFirst() const */

void CryptoPP::
     DL_SignatureSchemeBase<CryptoPP::PK_Verifier,CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint>>::
     RecoverablePartFirst(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0xa0))();
                    /* WARNING: Could not recover jumptable at 0x00cbd5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return;
}


