// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBitCountHi
// Entry Point: 00d07818
// Size: 12 bytes
// Signature: undefined GetBitCountHi(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned long, CryptoPP::MessageAuthenticationCode>::GetBitCountHi()
   const */

ulong CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode>::GetBitCountHi
                (void)

{
  long in_x0;
  
  return *(ulong *)(in_x0 + 0x10) >> 0x3d | *(long *)(in_x0 + 0x18) << 3;
}


