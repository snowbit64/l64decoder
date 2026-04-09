// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f11ef4
// Entry Point: 00f11ef4
// Size: 140 bytes
// Signature: undefined FUN_00f11ef4(void)


void FUN_00f11ef4(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x18) + 0x1050);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0,param_2);
  }
  FUN_00f1043c(param_1,*(undefined8 *)(param_2 + 0x40),(long)*(int *)(param_2 + 0x4c) * 0x28,
               *(undefined *)(param_2 + 2));
  FUN_00f1043c(param_1,*(undefined8 *)(param_2 + 0x30),(long)*(int *)(param_2 + 0x48) << 4,
               *(undefined *)(param_2 + 2));
  FUN_00f10568(param_1,param_2,0x80,*(undefined *)(param_2 + 2),param_3);
  return;
}


