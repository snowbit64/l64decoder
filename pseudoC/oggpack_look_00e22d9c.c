// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_look
// Entry Point: 00e22d9c
// Size: 244 bytes
// Signature: undefined oggpack_look(void)


ulong oggpack_look(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
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
  uVar3 = (ulong)(*pbVar4 >> ((ulong)uVar2 & 0x3f));
  if ((((8 < (int)uVar1) &&
       (uVar3 = (long)(int)((uint)pbVar4[1] << (ulong)(8 - uVar2 & 0x1f)) | uVar3, 0x10 < uVar1)) &&
      (uVar3 = uVar3 | (long)(int)((uint)pbVar4[2] << (ulong)(0x10 - uVar2 & 0x1f)), 0x18 < uVar1))
     && ((uVar3 = uVar3 | (long)(int)((uint)pbVar4[3] << (ulong)(0x18 - uVar2 & 0x1f)), uVar2 != 0
         && (0x20 < uVar1)))) {
    uVar3 = uVar3 | (long)(int)((uint)pbVar4[4] << (ulong)(-uVar2 & 0x1f));
  }
  return uVar3 & *(ulong *)(&DAT_0055a320 + (ulong)param_2 * 8);
}


