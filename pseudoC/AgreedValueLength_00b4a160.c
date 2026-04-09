// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AgreedValueLength
// Entry Point: 00b4a160
// Size: 40 bytes
// Signature: undefined AgreedValueLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::AgreedValueLength() const */

void CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::AgreedValueLength(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00b4a184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xc0))(plVar1,0);
  return;
}


