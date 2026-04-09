// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isInit
// Entry Point: 00b371cc
// Size: 20 bytes
// Signature: undefined isInit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ZIPFileArchive::isInit() */

bool ZIPFileArchive::isInit(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x80b0) != 0;
}


