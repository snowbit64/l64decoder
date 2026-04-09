// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Restart
// Entry Point: 00d06944
// Size: 16 bytes
// Signature: undefined Restart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned long, CryptoPP::HashTransformation>::Restart() */

void CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::HashTransformation>::Restart(void)

{
  long *in_x0;
  
  in_x0[1] = 0;
  in_x0[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x00d06950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0xa0))();
  return;
}


