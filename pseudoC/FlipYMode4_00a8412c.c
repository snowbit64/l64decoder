// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FlipYMode4
// Entry Point: 00a8412c
// Size: 472 bytes
// Signature: undefined __cdecl FlipYMode4(uchar * param_1)


/* BC7FlipUtil::FlipYMode4(unsigned char*) */

void BC7FlipUtil::FlipYMode4(uchar *param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x28);
  bVar4 = param_1[9];
  bVar5 = param_1[0xe];
  uVar14 = *(ulong *)(param_1 + 8);
  uVar13 = *(ulong *)param_1;
  if ((bVar4 & 4 | bVar5 & 0x40) == 0) {
    uVar12 = 0;
    uVar10 = uVar13 & 0x3ffffffffffff;
    uVar11 = 0;
  }
  else {
    bVar2 = bVar5 >> 6 & 1;
    bVar7 = bVar4 >> 2 & 1;
    bVar1 = bVar7;
    if ((char)*param_1 < '\0') {
      bVar1 = bVar2;
    }
    if (bVar1 == 1) {
      if ((char)*param_1 < '\0') {
        bVar2 = bVar7;
      }
      if (bVar2 == 1) {
        uVar10 = uVar13 >> 5 & 0x1f07c1f00 | uVar13 & 0xff | (uVar13 & 0x1f07c1f00) << 5 |
                 uVar13 >> 6 & 0xfc000000000 | (uVar13 >> 0x26 & 0x3f) << 0x2c;
      }
      else {
        uVar10 = uVar13 >> 5 & 0x1f07c1f00 | uVar13 & 0x3ffc0000000ff | (uVar13 & 0x1f07c1f00) << 5;
      }
    }
    else {
      uVar10 = uVar13 >> 6 & 0xfc000000000 | uVar13 & 0x3fffffffff | (uVar13 >> 0x26 & 0x3f) << 0x2c
      ;
    }
    bVar8 = (bVar4 & 4) == 0;
    uVar3 = 0x1ffff;
    if (bVar8) {
      uVar3 = 0;
    }
    uVar12 = 0xfffc000000000000;
    if (bVar8) {
      uVar12 = 0;
    }
    uVar11 = uVar3 | 0xfffffffffffe0000;
    if ((bVar5 & 0x40) == 0) {
      uVar11 = uVar3;
    }
  }
  *(ulong *)(param_1 + 8) =
       ((uVar14 & 0x60000) << 0x23 | (uVar14 >> 0x13) << 0x37 | (uVar14 >> 0x1c & 0xfff) << 0x28 |
        uVar14 >> 0xc & 0xfff0000000 | uVar14 >> 0x24 & 0xff80000 | uVar14 >> 0x23 & 0x60000 |
        (ulong)(uint)((int)uVar14 << 8) & 0x100 | uVar14 >> 8 & 1 | uVar13 >> 0x28 & 0x1f800 |
        uVar13 >> 0x29 & 0x200 | uVar13 >> 0x38 & 0xfe) ^ uVar11;
  *(ulong *)param_1 =
       ((uVar14 >> 1) << 0x39 | (uVar14 >> 0xb & 0x3f) << 0x33 | uVar10 | (uVar14 >> 9 & 1) << 0x32)
       ^ uVar12;
  if (*(long *)(lVar6 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


