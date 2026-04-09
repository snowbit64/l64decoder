// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverablePartFirst
// Entry Point: 00d1d6d4
// Size: 36 bytes
// Signature: undefined RecoverablePartFirst(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TF_SignatureSchemeBase<CryptoPP::PK_Signer,
   CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,
   CryptoPP::PK_SignatureMessageEncodingMethod> >::RecoverablePartFirst() const */

void CryptoPP::
     TF_SignatureSchemeBase<CryptoPP::PK_Signer,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,CryptoPP::PK_SignatureMessageEncodingMethod>>
     ::RecoverablePartFirst(void)

{
  long in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(in_x0 + 0x10) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00d1d6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return;
}


