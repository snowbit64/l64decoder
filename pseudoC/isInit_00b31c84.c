// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isInit
// Entry Point: 00b31c84
// Size: 16 bytes
// Signature: undefined isInit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoFileArchive::isInit() */

bool CryptoFileArchive::isInit(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 8) != 0;
}


