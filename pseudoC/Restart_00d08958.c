// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Restart
// Entry Point: 00d08958
// Size: 16 bytes
// Signature: undefined Restart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::MessageAuthenticationCode>::Restart() */

void CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode>::Restart(void)

{
  long *in_x0;
  
  in_x0[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x00d08964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0xb8))();
  return;
}


