// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e50304
// Entry Point: 00e50304
// Size: 24 bytes
// Signature: undefined FUN_00e50304(void)


uint FUN_00e50304(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


