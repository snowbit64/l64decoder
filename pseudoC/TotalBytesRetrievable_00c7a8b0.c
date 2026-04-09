// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TotalBytesRetrievable
// Entry Point: 00c7a8b0
// Size: 108 bytes
// Signature: undefined TotalBytesRetrievable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BufferedTransformation::TotalBytesRetrievable() const */

void CryptoPP::BufferedTransformation::TotalBytesRetrievable(void)

{
  long *in_x0;
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(*in_x0 + 0x168))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(*in_x0 + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x00c7a8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xd0))(plVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c7a918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0x98))();
  return;
}


