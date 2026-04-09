// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AgreedValueLength
// Entry Point: 00cb1120
// Size: 40 bytes
// Signature: undefined AgreedValueLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer>::AgreedValueLength() const */

void CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer>::AgreedValueLength(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00cb1144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xc0))(plVar1,0);
  return;
}


