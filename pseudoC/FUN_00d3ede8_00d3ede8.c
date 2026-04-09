// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3ede8
// Entry Point: 00d3ede8
// Size: 84 bytes
// Signature: undefined FUN_00d3ede8(void)


uint FUN_00d3ede8(undefined8 param_1,byte *param_2)

{
  return 1 << (ulong)(param_2[2] & 0x1f) &
         *(uint *)(&DAT_0054734c +
                  (((ulong)param_2[1] & 3) << 1 |
                   (ulong)(byte)(&DAT_0054794c)
                                [((ulong)*param_2 & 0xf) << 4 | (ulong)(param_2[1] >> 2) & 0xf] << 3
                  | (ulong)(param_2[2] >> 5) & 1) * 4);
}


