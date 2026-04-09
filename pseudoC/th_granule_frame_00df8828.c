// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_granule_frame
// Entry Point: 00df8828
// Size: 144 bytes
// Signature: undefined th_granule_frame(void)


long th_granule_frame(byte *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((long)param_2 < 0) {
    return -1;
  }
  uVar2 = param_2 >> ((ulong)*(uint *)(param_1 + 0x3c) & 0x3f);
  lVar1 = uVar2 << ((ulong)*(uint *)(param_1 + 0x3c) & 0x3f);
  if (3 < *param_1) {
    return ((uVar2 + param_2) - lVar1) + -1;
  }
  if (*param_1 == 3) {
    if (2 < param_1[1]) {
      return ((uVar2 + param_2) - lVar1) + -1;
    }
    if (param_1[1] == 2) {
      return ((uVar2 + param_2) - lVar1) - (ulong)(param_1[2] != 0);
    }
  }
  return (uVar2 + param_2) - lVar1;
}


