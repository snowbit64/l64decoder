// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df43f8
// Entry Point: 00df43f8
// Size: 152 bytes
// Signature: undefined FUN_00df43f8(void)


long FUN_00df43f8(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = *param_1;
  uVar2 = 1 << (ulong)(bVar1 & 0x1f);
  lVar4 = 8;
  if (bVar1 != 0) {
    lVar4 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3) + 8;
  }
  uVar6 = (uint)bVar1;
  if ((uVar6 != 0) && (uVar6 != 0x1f)) {
    iVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + (long)iVar7 * 8 + 8);
      lVar3 = FUN_00df43f8(lVar5);
      lVar4 = lVar3 + lVar4;
      iVar7 = (1 << (ulong)(uVar6 - *(byte *)(lVar5 + 2) & 0x1f)) + iVar7;
    } while (iVar7 < (int)uVar2);
  }
  return lVar4;
}


