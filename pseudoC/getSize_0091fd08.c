// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSize
// Entry Point: 0091fd08
// Size: 48 bytes
// Signature: undefined getSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BufferedFileWriter::getSize() */

long BufferedFileWriter::getSize(void)

{
  long *in_x0;
  long lVar1;
  
  lVar1 = (**(code **)(*in_x0 + 0x40))();
  return lVar1 + (ulong)*(uint *)(in_x0 + 3);
}


