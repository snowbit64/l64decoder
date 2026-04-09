// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_ilog
// Entry Point: 00e185ec
// Size: 36 bytes
// Signature: undefined ov_ilog(void)


ulong ov_ilog(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((int)param_1 != 0) {
    uVar2 = param_1 & 0xffffffff;
    param_1 = 0;
    do {
      uVar1 = (uint)uVar2;
      param_1 = (ulong)((int)param_1 + 1);
      uVar2 = uVar2 >> 1;
    } while (1 < uVar1);
  }
  return param_1;
}


