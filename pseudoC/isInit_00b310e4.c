// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isInit
// Entry Point: 00b310e4
// Size: 16 bytes
// Signature: undefined isInit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CompressedFileArchive::isInit() */

bool CompressedFileArchive::isInit(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x80) != 0;
}


