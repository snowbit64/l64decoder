// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBitCountHi
// Entry Point: 00d08270
// Size: 12 bytes
// Signature: undefined GetBitCountHi(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::HashTransformation>::GetBitCountHi() const */

ulong CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::GetBitCountHi(void)

{
  long in_x0;
  
  return *(ulong *)(in_x0 + 8) >> 0x1d & 0xffffffff;
}


