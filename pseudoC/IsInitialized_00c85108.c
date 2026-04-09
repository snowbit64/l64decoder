// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsInitialized
// Entry Point: 00c85108
// Size: 16 bytes
// Signature: undefined IsInitialized(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::IsInitialized() const */

bool CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::IsInitialized(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x70) != *(long *)(in_x0 + 0x78);
}


