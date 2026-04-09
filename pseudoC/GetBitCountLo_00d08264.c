// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBitCountLo
// Entry Point: 00d08264
// Size: 12 bytes
// Signature: undefined GetBitCountLo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::IteratedHashBase<unsigned int, CryptoPP::HashTransformation>::GetBitCountLo() const */

int CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::GetBitCountLo(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 8) << 3;
}


