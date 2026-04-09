// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsInitialized
// Entry Point: 00c976c0
// Size: 16 bytes
// Signature: undefined IsInitialized(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::IsInitialized() const */

bool CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::IsInitialized(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0xb0) != *(long *)(in_x0 + 0xb8);
}


