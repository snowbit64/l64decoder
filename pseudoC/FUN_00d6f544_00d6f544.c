// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6f544
// Entry Point: 00d6f544
// Size: 88 bytes
// Signature: undefined FUN_00d6f544(void)


void FUN_00d6f544(long *param_1)

{
  code **ppcVar1;
  long lVar2;
  
  ppcVar1 = (code **)param_1[0x48];
  *(undefined2 *)(ppcVar1 + 4) = 0;
  lVar2 = *param_1;
  *ppcVar1 = FUN_00d6ef30;
  *(undefined4 *)(ppcVar1 + 5) = 1;
  (**(code **)(lVar2 + 0x20))();
  (**(code **)param_1[0x49])(param_1);
  param_1[0x16] = 0;
  return;
}


