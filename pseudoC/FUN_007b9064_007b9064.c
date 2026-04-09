// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b9064
// Entry Point: 007b9064
// Size: 56 bytes
// Signature: undefined FUN_007b9064(void)


void FUN_007b9064(NavigationPath *param_1,float *param_2)

{
  byte bVar1;
  
  bVar1 = NavigationPath::getHasValidSlope(param_1,*param_2,param_2[4]);
  param_2[0x42] = 4.203895e-45;
  *(byte *)(param_2 + 0x40) = bVar1 & 1;
  return;
}


