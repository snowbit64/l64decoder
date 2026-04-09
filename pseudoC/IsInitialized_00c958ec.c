// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsInitialized
// Entry Point: 00c958ec
// Size: 16 bytes
// Signature: undefined IsInitialized(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::IsInitialized() const */

bool CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::IsInitialized(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x90) != *(long *)(in_x0 + 0x98);
}


