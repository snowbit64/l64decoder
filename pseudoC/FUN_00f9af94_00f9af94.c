// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f9af94
// Entry Point: 00f9af94
// Size: 92 bytes
// Signature: undefined FUN_00f9af94(void)


ulong FUN_00f9af94(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (*(code *)PTR_FUN_01048e48)(param_1 + (param_2 + -1) + 8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = lVar1 + param_2 + 7U & -(long)param_2;
    *(long *)(uVar2 - 8) = lVar1;
  }
  return uVar2;
}


