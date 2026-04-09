// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertToLong
// Entry Point: 00cf53bc
// Size: 24 bytes
// Signature: undefined ConvertToLong(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Integer::ConvertToLong() const */

long CryptoPP::Integer::ConvertToLong(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = -**(long **)(in_x0 + 0x20);
  if (*(int *)(in_x0 + 0x28) == 0) {
    lVar1 = **(long **)(in_x0 + 0x20);
  }
  return lVar1;
}


