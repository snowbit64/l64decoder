// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsProbabilistic
// Entry Point: 00d1d668
// Size: 80 bytes
// Signature: undefined IsProbabilistic(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TF_SignatureSchemeBase<CryptoPP::PK_Signer,
   CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,
   CryptoPP::PK_SignatureMessageEncodingMethod> >::IsProbabilistic() const */

undefined8
CryptoPP::
TF_SignatureSchemeBase<CryptoPP::PK_Signer,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,CryptoPP::PK_SignatureMessageEncodingMethod>>
::IsProbabilistic(void)

{
  long in_x0;
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)(in_x0 + 0x10);
  plVar1 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3);
  uVar2 = (**(code **)(*plVar1 + 0x18))();
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return 1;
}


