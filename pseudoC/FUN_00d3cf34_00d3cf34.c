// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3cf34
// Entry Point: 00d3cf34
// Size: 60 bytes
// Signature: undefined FUN_00d3cf34(void)


byte * FUN_00d3cf34(long param_1,byte *param_2)

{
  uint uVar1;
  
  while (uVar1 = (uint)*(byte *)(param_1 + 0x88 + (ulong)*param_2),
        uVar1 < 0x16 && (1 << (ulong)(uVar1 & 0x1f) & 0x200600U) != 0) {
    param_2 = param_2 + 1;
  }
  return param_2;
}


