// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df89b0
// Entry Point: 00df89b0
// Size: 76 bytes
// Signature: undefined FUN_00df89b0(void)


void FUN_00df89b0(long param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)*(int *)(param_2 + 0x28) * (long)param_4 + (long)(param_3 >> 1);
  lVar2 = lVar1 + *(int *)(param_2 + 0x28);
  *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x30) + lVar1;
  *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x58) + lVar1;
  *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30) + lVar2;
  *(long *)(param_1 + 0x50) = *(long *)(param_2 + 0x58) + lVar2;
  return;
}


