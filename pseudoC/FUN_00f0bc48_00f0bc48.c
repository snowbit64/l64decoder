// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0bc48
// Entry Point: 00f0bc48
// Size: 232 bytes
// Signature: undefined FUN_00f0bc48(void)


void FUN_00f0bc48(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_00f1043c(param_1,*(undefined8 *)(param_2 + 0x10),(long)*(int *)(param_2 + 0x60) << 2,
               *(undefined *)(param_2 + 2));
  FUN_00f1043c(param_1,*(undefined8 *)(param_2 + 0x18),(long)*(int *)(param_2 + 100) << 3,
               *(undefined *)(param_2 + 2));
  FUN_00f1043c(param_1,*(undefined8 *)(param_2 + 8),(long)*(int *)(param_2 + 0x70) << 4,
               *(undefined *)(param_2 + 2));
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_00f1043c(param_1,*(long *)(param_2 + 0x20),(long)*(int *)(param_2 + 0x74),
                 *(undefined *)(param_2 + 2));
  }
  FUN_00f1043c(param_1,*(undefined8 *)(param_2 + 0x30),(long)*(int *)(param_2 + 0x68) * 0x18,
               *(undefined *)(param_2 + 2));
  FUN_00f1043c(param_1,*(undefined8 *)(param_2 + 0x38),(long)*(int *)(param_2 + 0x6c) << 3,
               *(undefined *)(param_2 + 2));
  if (*(long *)(param_2 + 0x50) != 0) {
    FUN_00f1043c(param_1,*(long *)(param_2 + 0x50),(long)*(int *)(param_2 + 0x60),
                 *(undefined *)(param_2 + 2));
  }
  FUN_00f10568(param_1,param_2,0x88,*(undefined *)(param_2 + 2),param_3);
  return;
}


