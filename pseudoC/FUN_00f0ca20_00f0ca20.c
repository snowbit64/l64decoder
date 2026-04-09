// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ca20
// Entry Point: 00f0ca20
// Size: 32 bytes
// Signature: undefined FUN_00f0ca20(void)


void FUN_00f0ca20(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfb;
  *param_3 = *(undefined8 *)(lVar1 + 0x30);
  *(long *)(lVar1 + 0x30) = param_2;
  return;
}


