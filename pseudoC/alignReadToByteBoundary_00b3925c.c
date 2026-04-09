// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: alignReadToByteBoundary
// Entry Point: 00b3925c
// Size: 28 bytes
// Signature: undefined alignReadToByteBoundary(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsBitStream::alignReadToByteBoundary() */

void GsBitStream::alignReadToByteBoundary(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0x14);
  if (iVar1 != 0) {
    *(uint *)(in_x0 + 0x14) = (-iVar1 & 7U) + iVar1;
  }
  return;
}


