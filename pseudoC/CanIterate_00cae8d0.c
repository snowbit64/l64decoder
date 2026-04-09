// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CanIterate
// Entry Point: 00cae8d0
// Size: 20 bytes
// Signature: undefined CanIterate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::CFB_ModePolicy::CanIterate() const */

bool CryptoPP::CFB_ModePolicy::CanIterate(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x60) == *(int *)(in_x0 + 0x28);
}


