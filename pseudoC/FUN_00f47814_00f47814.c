// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f47814
// Entry Point: 00f47814
// Size: 60 bytes
// Signature: undefined FUN_00f47814(void)


undefined8 FUN_00f47814(long param_1,long *param_2)

{
  if (*param_2 == *(long *)(param_1 + 8) || param_2[1] == *(long *)(param_1 + 8)) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
              (*(long **)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
  }
  return 0;
}


