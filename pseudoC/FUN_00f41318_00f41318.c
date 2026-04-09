// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f41318
// Entry Point: 00f41318
// Size: 136 bytes
// Signature: undefined FUN_00f41318(void)


void FUN_00f41318(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x30) != 0) {
    FUN_00f41318(param_1,*(undefined8 *)(param_2 + 0x28));
    FUN_00f41318(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  if (*param_1 == param_2) {
    *param_1 = 0;
    lVar1 = param_1[1];
  }
  else {
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  param_1[1] = param_2;
  return;
}


