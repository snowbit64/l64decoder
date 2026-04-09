// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getExtraStructBufferRows
// Entry Point: 00a52e34
// Size: 28 bytes
// Signature: undefined getExtraStructBufferRows(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsShape::getExtraStructBufferRows() const */

int GsShape::getExtraStructBufferRows(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x1f8) != 0) {
    return *(int *)(*(long *)(in_x0 + 0x1f8) + 0x20) << 2;
  }
  return 0;
}


