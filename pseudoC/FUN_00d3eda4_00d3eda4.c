// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3eda4
// Entry Point: 00d3eda4
// Size: 68 bytes
// Signature: undefined FUN_00d3eda4(void)


uint FUN_00d3eda4(undefined8 param_1,byte *param_2)

{
  return 1 << (ulong)(param_2[1] & 0x1f) &
         *(uint *)(&DAT_0054734c +
                  (((ulong)*param_2 & 3) << 1 |
                   (ulong)(byte)(&DAT_0054794c)[(ulong)(*param_2 >> 2) & 7] << 3 |
                  (ulong)(param_2[1] >> 5) & 1) * 4);
}


