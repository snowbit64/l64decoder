// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_PLC_Reset
// Entry Point: 00e62188
// Size: 40 bytes
// Signature: undefined silk_PLC_Reset(void)


void silk_PLC_Reset(long param_1)

{
  *(undefined8 *)(param_1 + 0x10ac) = 0x1000000010000;
  *(int *)(param_1 + 0x1064) = *(int *)(param_1 + 0x918) << 7;
  *(undefined8 *)(param_1 + 0x10b8) = 0x1400000002;
  return;
}


