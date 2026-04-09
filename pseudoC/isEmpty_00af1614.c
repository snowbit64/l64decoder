// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isEmpty
// Entry Point: 00af1614
// Size: 44 bytes
// Signature: undefined isEmpty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SubAllocator::isEmpty() const */

bool SubAllocator::isEmpty(void)

{
  int *in_x0;
  
  if (*(long *)(in_x0 + 4) - (long)*(int **)(in_x0 + 2) == 8) {
    return **(int **)(in_x0 + 2) == *in_x0;
  }
  return false;
}


