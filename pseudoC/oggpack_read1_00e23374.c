// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_read1
// Entry Point: 00e23374
// Size: 108 bytes
// Signature: undefined oggpack_read1(void)


ulong oggpack_read1(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*param_1 < param_1[4]) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar2 = (ulong)(*(byte *)param_1[3] >> ((ulong)uVar1 & 0x3f)) & 1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (6 < (int)uVar1) {
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[3] = (long)((byte *)param_1[3] + 1);
      *param_1 = *param_1 + 1;
      return uVar2;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
    param_1[3] = 0;
    *param_1 = param_1[4];
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return uVar2;
}


