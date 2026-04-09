// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMaxWaitObjectCount
// Entry Point: 00c79d14
// Size: 48 bytes
// Signature: undefined GetMaxWaitObjectCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BufferedTransformation::GetMaxWaitObjectCount() const */

void CryptoPP::BufferedTransformation::GetMaxWaitObjectCount(void)

{
  long *in_x0;
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x168))();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c79d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))();
    return;
  }
  return;
}


