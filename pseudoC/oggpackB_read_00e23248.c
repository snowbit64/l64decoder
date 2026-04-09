// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oggpackB_read
// Entry Point: 00e23248
// Size: 300 bytes
// Signature: undefined oggpackB_read(void)


ulong oggpackB_read(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  
  if (0x20 < param_2) {
    lVar4 = param_1[4];
LAB_00e23254:
    param_1[3] = 0;
    *param_1 = lVar4;
    *(undefined4 *)(param_1 + 1) = 1;
    return 0xffffffffffffffff;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  lVar4 = param_1[4];
  uVar1 = uVar2 + param_2;
  if (lVar4 <= lVar3 + 4) {
    if (lVar4 - ((int)(uVar1 + 7) >> 3) < lVar3) goto LAB_00e23254;
    if (uVar1 == 0) {
      return 0;
    }
  }
  pbVar5 = (byte *)param_1[3];
  uVar6 = (uint)*pbVar5 << (ulong)(uVar2 + 0x18 & 0x1f);
  if ((((8 < (int)uVar1) &&
       (uVar6 = (uint)pbVar5[1] << (ulong)(uVar2 + 0x10 & 0x1f) | uVar6, 0x10 < uVar1)) &&
      (uVar6 = (uint)pbVar5[2] << (ulong)(uVar2 + 8 & 0x1f) | uVar6, 0x18 < uVar1)) &&
     ((uVar6 = (uint)pbVar5[3] << (ulong)(uVar2 & 0x1f) | uVar6, uVar2 != 0 && (0x20 < uVar1)))) {
    uVar6 = pbVar5[4] >> (ulong)(8 - uVar2 & 0x1f) | uVar6;
  }
  uVar2 = uVar1 + 7;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  lVar4 = (long)((ulong)uVar2 << 0x20) >> 0x23;
  param_1[3] = (long)(pbVar5 + lVar4);
  *param_1 = lVar3 + lVar4;
  *(uint *)(param_1 + 1) = uVar1 & 7;
  return (ulong)((uVar6 >> ((long)(int)(0x20 - param_2) >> 1 & 0x3fU)) >>
                ((long)(int)(0x20 - param_2) + 1 >> 1 & 0x3fU));
}


