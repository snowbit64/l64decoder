// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBitCountLo
// Entry Point: 00d06d30
// Size: 12 bytes
// Signature: undefined GetBitCountLo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned long, CryptoPP::HashTransformation>::GetBitCountLo() const */

long CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::HashTransformation>::GetBitCountLo(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 8) << 3;
}


