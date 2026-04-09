// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f197a4
// Entry Point: 00f197a4
// Size: 84 bytes
// Signature: undefined FUN_00f197a4(void)


long FUN_00f197a4(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00f17180(param_1,param_3);
  if (*(int *)(lVar1 + 0xc) != 0) {
    return lVar1;
  }
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | (byte)(1 << (ulong)(param_2 & 0x1f));
  return 0;
}


