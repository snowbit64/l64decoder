// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d73784
// Entry Point: 00d73784
// Size: 60 bytes
// Signature: undefined FUN_00d73784(void)


void FUN_00d73784(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x220);
  if (*(char *)(param_1 + 0x62) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x270) + 0x10))();
  }
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return;
}


