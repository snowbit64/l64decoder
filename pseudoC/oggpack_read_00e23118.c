// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpack_read
// Entry Point: 00e23118
// Size: 304 bytes
// Signature: undefined oggpack_read(void)


ulong oggpack_read(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  if (0x20 < param_2) {
    lVar4 = param_1[4];
LAB_00e23124:
    param_1[3] = 0;
    *param_1 = lVar4;
    *(undefined4 *)(param_1 + 1) = 1;
    return 0xffffffffffffffff;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = param_1[4];
  lVar3 = *param_1;
  uVar1 = uVar2 + param_2;
  if (lVar4 + -4 <= lVar3) {
    if (lVar4 - ((int)(uVar1 + 7) >> 3) < lVar3) goto LAB_00e23124;
    if (uVar1 == 0) {
      return 0;
    }
  }
  pbVar7 = (byte *)param_1[3];
  uVar5 = *(ulong *)(&DAT_0055a320 + (ulong)param_2 * 8);
  uVar6 = (ulong)(*pbVar7 >> ((ulong)uVar2 & 0x3f));
  if ((((8 < (int)uVar1) &&
       (uVar6 = (long)(int)((uint)pbVar7[1] << (ulong)(8 - uVar2 & 0x1f)) | uVar6, 0x10 < uVar1)) &&
      (uVar6 = uVar6 | (long)(int)((uint)pbVar7[2] << (ulong)(0x10 - uVar2 & 0x1f)), 0x18 < uVar1))
     && ((uVar6 = uVar6 | (long)(int)((uint)pbVar7[3] << (ulong)(0x18 - uVar2 & 0x1f)), uVar2 != 0
         && (0x20 < uVar1)))) {
    uVar6 = uVar6 | (long)(int)((uint)pbVar7[4] << (ulong)(-uVar2 & 0x1f));
  }
  uVar2 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  lVar4 = (long)((ulong)uVar2 << 0x20) >> 0x23;
  param_1[3] = (long)(pbVar7 + lVar4);
  *param_1 = lVar3 + lVar4;
  *(uint *)(param_1 + 1) = uVar1 & 7;
  return uVar6 & uVar5;
}


