// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_sqrt
// Entry Point: 00e76838
// Size: 168 bytes
// Signature: undefined celt_sqrt(void)


ulong celt_sqrt(ulong param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (iVar5 != 0) {
    if (0x3fffffff < iVar5) {
      return 0x7fff;
    }
    uVar2 = (uint)LZCOUNT(iVar5) ^ 0x1f;
    uVar4 = uVar2 >> 1;
    sVar1 = (short)(iVar5 >> ((uVar2 & 0xfffffffe) - 0xe & 0x1f));
    if (uVar2 < 0x10) {
      sVar1 = (short)(iVar5 << (ulong)(uVar4 * -2 + 0xe & 0x1f));
    }
    uVar3 = (int)sVar1 ^ 0xffff8000;
    iVar5 = (int)(uVar3 * 2 *
                  ((((int)(uVar3 * 2 * ((uVar3 * -0x298 >> 0xf) + 0x6a3 & 0xffff) + -0xbc30000) >>
                    0x10) * uVar3 >> 0xf) + 0x2d29 & 0xffff) + 0x5a870000) >> 0x10;
    uVar3 = iVar5 >> (0xe - uVar4 & 0x1f);
    if (0x1b < uVar2) {
      uVar3 = iVar5 << (ulong)(uVar4 - 0xe & 0x1f);
    }
    param_1 = (ulong)uVar3;
  }
  return param_1;
}


