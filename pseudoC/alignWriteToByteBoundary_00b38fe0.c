// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: alignWriteToByteBoundary
// Entry Point: 00b38fe0
// Size: 28 bytes
// Signature: undefined alignWriteToByteBoundary(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsBitStream::alignWriteToByteBoundary() */

void GsBitStream::alignWriteToByteBoundary(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0x18);
  if (iVar1 != 0) {
    *(uint *)(in_x0 + 0x18) = (-iVar1 & 7U) + iVar1;
  }
  return;
}


