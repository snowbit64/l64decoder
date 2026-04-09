// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumKeys
// Entry Point: 00749c08
// Size: 16 bytes
// Signature: undefined getNumKeys(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* KeyframedTransformation::getNumKeys() const */

ulong KeyframedTransformation::getNumKeys(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0x10) - *(long *)(in_x0 + 8)) >> 3;
}


