// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: frac_div32
// Entry Point: 00e76610
// Size: 300 bytes
// Signature: undefined frac_div32(void)


int frac_div32(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  
  iVar8 = (int)LZCOUNT(param_2);
  uVar4 = 2 - iVar8;
  uVar9 = iVar8 - 2;
  bVar7 = (LZCOUNT(param_2) & 0x3eU) != 0;
  iVar8 = param_2 >> (uVar4 & 0x1f);
  if (bVar7) {
    iVar8 = param_2 << (ulong)(uVar9 & 0x1f);
  }
  iVar11 = iVar8 + 0x8000 >> 0x10;
  iVar2 = param_1 >> (uVar4 & 0x1f);
  if (bVar7) {
    iVar2 = param_1 << (ulong)(uVar9 & 0x1f);
  }
  uVar9 = (uint)LZCOUNT(iVar11);
  sVar1 = (short)(iVar11 >> (0x10 - uVar9 & 0x1f));
  if (0xf < uVar9) {
    sVar1 = (short)(iVar11 << (ulong)(uVar9 - 0x10 & 0x1f));
  }
  uVar4 = (int)sVar1 ^ 0xffff8000;
  iVar3 = uVar4 * -0x7878 + 0x78780000;
  iVar11 = iVar3 >> 0x10;
  uVar5 = iVar11 - ((uint)((short)(((ushort)((uint)iVar3 >> 0x10) ^ 0x8000) +
                                  (short)(iVar11 * uVar4 >> 0xf)) * iVar11) >> 0xf);
  uVar6 = (ushort)uVar5;
  iVar3 = (int)(short)(uVar6 - (short)((int)(short)((uVar6 ^ 0x8000) +
                                                   (short)((int)(short)uVar6 * uVar4 >> 0xf)) *
                                       (-(uVar5 >> 0xf & 1) & 0xfffe0000 | (uVar5 & 0xffff) << 1) +
                                       0x10000 >> 0x10));
  iVar11 = iVar3 << (ulong)(uVar9 - 0xf & 0x1f);
  if (uVar9 < 0xf) {
    iVar11 = iVar3 >> (0xf - uVar9 & 0x1f);
  }
  lVar10 = (long)(short)(iVar11 + 4U >> 3);
  iVar11 = (int)((ulong)(lVar10 * iVar2) >> 0xf);
  iVar11 = ((uint)((ulong)(lVar10 * ((iVar2 + 2 >> 2) -
                                    (int)((ulong)((long)iVar11 * (long)iVar8) >> 0x1f))) >> 0xd) &
           0xfffffffc) + iVar11;
  iVar8 = -0x7fffffff;
  if (-0x20000000 < iVar11) {
    iVar8 = iVar11 * 4;
  }
  iVar2 = 0x7fffffff;
  if (iVar11 < 0x20000000) {
    iVar2 = iVar8;
  }
  return iVar2;
}


