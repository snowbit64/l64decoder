// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df8968
// Entry Point: 00df8968
// Size: 72 bytes
// Signature: undefined FUN_00df8968(void)


void FUN_00df8968(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(param_2 + 0x28) * ((param_4 << 0x20) >> 0x21) + (long)param_3;
  *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x30) + lVar1;
  *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x58) + lVar1;
  *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x30) + lVar1 + 1;
  *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x58) + lVar1 + 1;
  return;
}


