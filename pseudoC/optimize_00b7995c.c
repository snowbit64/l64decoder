// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimize
// Entry Point: 00b7995c
// Size: 24 bytes
// Signature: undefined optimize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSet::optimize() */

void IndexedTriangleSet::optimize(void)

{
  IndexedTriangleSet *in_x0;
  
  if (*(uint *)(in_x0 + 8) < 0x10001) {
    _optimize<unsigned_short>(in_x0,(ushort **)(in_x0 + 0x70));
    return;
  }
  _optimize<unsigned_int>(in_x0,(uint **)(in_x0 + 0x70));
  return;
}


