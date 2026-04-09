// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBitCountLo
// Entry Point: 00d08d5c
// Size: 12 bytes
// Signature: undefined GetBitCountLo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::MessageAuthenticationCode>::GetBitCountLo()
   const */

int CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode>::GetBitCountLo
              (void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x10) << 3;
}


