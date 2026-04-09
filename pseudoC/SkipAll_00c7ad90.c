// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SkipAll
// Entry Point: 00c7ad90
// Size: 128 bytes
// Signature: undefined SkipAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BufferedTransformation::SkipAll() */

void CryptoPP::BufferedTransformation::SkipAll(void)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  long *plVar3;
  
  lVar2 = (**(code **)(*in_x0 + 0x160))();
  if (lVar2 != 0) {
    plVar3 = (long *)(**(code **)(*in_x0 + 0x160))();
                    /* WARNING: Could not recover jumptable at 0x00c7add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xf8))();
    return;
  }
  do {
    iVar1 = (**(code **)(*in_x0 + 0xf0))();
  } while (iVar1 != 0);
  do {
    lVar2 = (**(code **)(*in_x0 + 200))();
  } while (lVar2 != 0);
  return;
}


