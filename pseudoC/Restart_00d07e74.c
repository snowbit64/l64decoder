// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Restart
// Entry Point: 00d07e74
// Size: 16 bytes
// Signature: undefined Restart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::HashTransformation>::Restart() */

void CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Restart(void)

{
  long *in_x0;
  
  in_x0[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00d07e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0xa0))();
  return;
}


