// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetNextMessage
// Entry Point: 00c7aabc
// Size: 80 bytes
// Signature: undefined GetNextMessage(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BufferedTransformation::GetNextMessage() */

void CryptoPP::BufferedTransformation::GetNextMessage(void)

{
  long *in_x0;
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(*in_x0 + 0x160))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(*in_x0 + 0x160))();
                    /* WARNING: Could not recover jumptable at 0x00c7aafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xe8))();
    return;
  }
  return;
}


