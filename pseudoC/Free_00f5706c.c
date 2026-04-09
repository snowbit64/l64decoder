// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Free
// Entry Point: 00f5706c
// Size: 92 bytes
// Signature: undefined Free(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btUnionFind::Free() */

void btUnionFind::Free(void)

{
  long in_x0;
  
  if ((*(long *)(in_x0 + 0x10) != 0) && (*(char *)(in_x0 + 0x18) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(in_x0 + 0x10) = 0;
  *(undefined4 *)(in_x0 + 4) = 0;
  *(undefined4 *)(in_x0 + 8) = 0;
  *(undefined *)(in_x0 + 0x18) = 1;
  return;
}


