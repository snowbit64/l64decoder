// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f02da8
// Entry Point: 00f02da8
// Size: 28 bytes
// Signature: undefined FUN_00f02da8(void)


void FUN_00f02da8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
  return;
}


