// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df8938
// Entry Point: 00df8938
// Size: 48 bytes
// Signature: undefined FUN_00df8938(void)


void FUN_00df8938(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(param_2 + 0x28) * ((param_4 << 0x20) >> 0x21) + (long)(param_3 >> 1);
  *(long *)(param_1 + 0x20) = lVar1 + *(long *)(param_2 + 0x30);
  *(long *)(param_1 + 0x40) = lVar1 + *(long *)(param_2 + 0x58);
  return;
}


