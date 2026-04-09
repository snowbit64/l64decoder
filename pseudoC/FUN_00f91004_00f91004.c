// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f91004
// Entry Point: 00f91004
// Size: 172 bytes
// Signature: undefined FUN_00f91004(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined param_9, undefined param_10, undefined8 param_11, undefined1 param_12, undefined8 param_13, undefined1 param_14, undefined8 param_15, undefined8 param_16, undefined8 param_17, undefined8 param_18, undefined8 param_19, undefined8 param_20)


void FUN_00f91004(int *param_1)

{
  code *in_x10;
  long unaff_x20;
  long unaff_x29;
  long param_11;
  char param_12;
  long param_13;
  char param_14;
  
  *param_1 = *param_1 + 1;
  (*in_x10)();
  if ((param_13 != 0) && (param_14 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if ((unaff_x20 != 0) && (param_12 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(param_11 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


