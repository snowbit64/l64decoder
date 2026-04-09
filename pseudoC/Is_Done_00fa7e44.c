// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Is_Done
// Entry Point: 00fa7e44
// Size: 16 bytes
// Signature: undefined Is_Done(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileIterator::Is_Done() */

bool CProfileIterator::Is_Done(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 8) == 0;
}


