// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_look
// Entry Point: 00e22e90
// Size: 240 bytes
// Signature: undefined oggpackB_look(void)


ulong oggpackB_look(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (0x20 < param_2) {
    return 0xffffffffffffffff;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = uVar2 + param_2;
  if (param_1[4] + -4 <= *param_1) {
    if (param_1[4] - (long)((int)(uVar1 + 7) >> 3) < *param_1) {
      return 0xffffffffffffffff;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  pbVar4 = (byte *)param_1[3];
  uVar3 = (uint)*pbVar4 << (ulong)(uVar2 + 0x18 & 0x1f);
  if ((((8 < (int)uVar1) &&
       (uVar3 = (uint)pbVar4[1] << (ulong)(uVar2 + 0x10 & 0x1f) | uVar3, 0x10 < uVar1)) &&
      (uVar3 = (uint)pbVar4[2] << (ulong)(uVar2 + 8 & 0x1f) | uVar3, 0x18 < uVar1)) &&
     ((uVar3 = (uint)pbVar4[3] << (ulong)(uVar2 & 0x1f) | uVar3, uVar2 != 0 && (0x20 < uVar1)))) {
    uVar3 = pbVar4[4] >> (ulong)(8 - uVar2 & 0x1f) | uVar3;
  }
  return (ulong)((uVar3 >> ((ulong)(uint)((int)(0x20 - param_2) >> 1) & 0x3f)) >>
                ((ulong)(0x21 - param_2 >> 1) & 0x3f));
}


