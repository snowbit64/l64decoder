// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 00f99338
// Size: 248 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btHashMap<btHashKey<btTriIndex>, btTriIndex>::clear() */

void btHashMap<btHashKey<btTriIndex>,btTriIndex>::clear(void)

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
  if ((*(long *)(in_x0 + 0x30) != 0) && (*(char *)(in_x0 + 0x38) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined *)(in_x0 + 0x38) = 1;
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined4 *)(in_x0 + 0x24) = 0;
  *(undefined4 *)(in_x0 + 0x28) = 0;
  if ((*(long *)(in_x0 + 0x50) != 0) && (*(char *)(in_x0 + 0x58) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(in_x0 + 0x50) = 0;
  *(undefined4 *)(in_x0 + 0x44) = 0;
  *(undefined4 *)(in_x0 + 0x48) = 0;
  *(undefined *)(in_x0 + 0x58) = 1;
  if ((*(long *)(in_x0 + 0x70) != 0) && (*(char *)(in_x0 + 0x78) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined *)(in_x0 + 0x78) = 1;
  *(undefined8 *)(in_x0 + 0x70) = 0;
  *(undefined4 *)(in_x0 + 100) = 0;
  *(undefined4 *)(in_x0 + 0x68) = 0;
  return;
}


