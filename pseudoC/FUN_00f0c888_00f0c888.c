// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0c888
// Entry Point: 00f0c888
// Size: 52 bytes
// Signature: undefined FUN_00f0c888(void)


void FUN_00f0c888(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(byte *)(lVar1 + 0x21) - 1 < 3) {
    FUN_00f0c8bc(lVar1,param_3);
    return;
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xf8 | *(byte *)(lVar1 + 0x20) & 3;
  return;
}


