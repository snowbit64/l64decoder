// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FieldElementLength
// Entry Point: 00ca3db8
// Size: 20 bytes
// Signature: undefined FieldElementLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::FieldElementLength() const */

ulong CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::FieldElementLength(void)

{
  long in_x0;
  
  return (ulong)*(uint *)(*(long *)(in_x0 + 0x28) + 0x90) + 7 >> 3;
}


