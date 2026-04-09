// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Restart
// Entry Point: 00d0740c
// Size: 16 bytes
// Signature: undefined Restart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned long, CryptoPP::MessageAuthenticationCode>::Restart() */

void CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode>::Restart(void)

{
  long *in_x0;
  
  in_x0[2] = 0;
  in_x0[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00d07418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0xb8))();
  return;
}


