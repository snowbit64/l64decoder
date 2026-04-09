// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isqrt32
// Entry Point: 00e765bc
// Size: 84 bytes
// Signature: undefined isqrt32(void)


void isqrt32(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = 0;
  uVar7 = 0x1f - (int)LZCOUNT(param_1) >> 1;
  uVar6 = 1 << (ulong)(uVar7 & 0x1f);
  do {
    uVar4 = uVar6 + iVar5 * 2 << (ulong)(uVar7 & 0x1f);
    uVar2 = 0;
    if (uVar4 <= param_1) {
      uVar2 = uVar6;
    }
    uVar3 = 0;
    if (uVar4 <= param_1) {
      uVar3 = uVar4;
    }
    iVar5 = uVar2 + iVar5;
    param_1 = param_1 - uVar3;
    uVar6 = uVar6 >> 1;
    bVar1 = 0 < (int)uVar7;
    uVar7 = uVar7 - 1;
  } while (bVar1);
  return;
}


