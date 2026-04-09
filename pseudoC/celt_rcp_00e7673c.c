// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_rcp
// Entry Point: 00e7673c
// Size: 148 bytes
// Signature: undefined celt_rcp(void)


int celt_rcp(int param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar7 = (uint)LZCOUNT(param_1);
  sVar2 = (short)(param_1 >> (0x10 - uVar7 & 0x1f));
  if (0xf < uVar7) {
    sVar2 = (short)(param_1 << (ulong)(uVar7 - 0x10 & 0x1f));
  }
  uVar3 = (int)sVar2 ^ 0xffff8000;
  iVar4 = uVar3 * -0x7878 + 0x78780000;
  iVar1 = iVar4 >> 0x10;
  uVar5 = iVar1 - ((uint)((short)(((ushort)((uint)iVar4 >> 0x10) ^ 0x8000) +
                                 (short)(iVar1 * uVar3 >> 0xf)) * iVar1) >> 0xf);
  uVar6 = (ushort)uVar5;
  iVar4 = (int)(short)(uVar6 - (short)((-(uVar5 >> 0xf & 1) & 0xfffe0000 | (uVar5 & 0xffff) << 1) *
                                       (int)(short)((uVar6 ^ 0x8000) +
                                                   (short)((int)(short)uVar6 * uVar3 >> 0xf)) +
                                       0x10000 >> 0x10));
  iVar1 = iVar4 << (ulong)(uVar7 - 0xf & 0x1f);
  if (uVar7 < 0xf) {
    iVar1 = iVar4 >> (0xf - uVar7 & 0x1f);
  }
  return iVar1;
}


