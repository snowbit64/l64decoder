// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f46d10
// Entry Point: 00f46d10
// Size: 60 bytes
// Signature: undefined FUN_00f46d10(void)


undefined8 FUN_00f46d10(long param_1,long *param_2)

{
  if (*param_2 == *(long *)(param_1 + 8) || param_2[1] == *(long *)(param_1 + 8)) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
              (*(long **)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
  }
  return 0;
}


