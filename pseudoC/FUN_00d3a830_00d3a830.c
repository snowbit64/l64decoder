// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3a830
// Entry Point: 00d3a830
// Size: 100 bytes
// Signature: undefined FUN_00d3a830(void)


uint FUN_00d3a830(long param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x1d0))(*(undefined8 *)(param_1 + 0x1d8));
  if ((uVar1 & 0xffff0000) == 0) {
    return *(uint *)(&DAT_0054734c +
                    (((ulong)(uVar1 >> 5) & 7) << 2 | (ulong)(byte)(&DAT_0054784c)[uVar1 >> 8] << 5)
                    ) & 1 << (ulong)(uVar1 & 0x1f);
  }
  return 0;
}


