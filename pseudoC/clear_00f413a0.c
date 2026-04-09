// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00f413a0
// Size: 160 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDbvt::clear() */

void btDbvt::clear(void)

{
  long *in_x0;
  
  if (*in_x0 != 0) {
    FUN_00f41318();
  }
  if (in_x0[1] != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  in_x0[1] = 0;
  *(undefined4 *)(in_x0 + 2) = 0xffffffff;
  if ((in_x0[6] != 0) && (*(char *)(in_x0 + 7) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  in_x0[6] = 0;
  *(undefined4 *)((long)in_x0 + 0x24) = 0;
  *(undefined4 *)(in_x0 + 5) = 0;
  *(undefined4 *)(in_x0 + 3) = 0;
  *(undefined *)(in_x0 + 7) = 1;
  return;
}


