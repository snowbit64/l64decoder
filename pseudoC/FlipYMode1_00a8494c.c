// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FlipYMode1
// Entry Point: 00a8494c
// Size: 888 bytes
// Signature: undefined __cdecl FlipYMode1(uchar * param_1)


/* BC7FlipUtil::FlipYMode1(unsigned char*) */

uint BC7FlipUtil::FlipYMode1(uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_30;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  uVar9 = *(ulong *)(param_1 + 8);
  uVar15 = *(ulong *)param_1;
  uVar10 = uVar15 >> 2 & 0x3f;
  uVar1 = *(uint *)(s_flipYDataMode1 + uVar10 * 0x10);
  if ((uVar1 >> 6 & 1) != 0) {
    uVar4 = uVar1 >> 0x14 & 3;
    uVar2 = uVar1 >> 0x16 & 3;
    if (uVar4 == 2) {
      uVar14 = uVar9 >> 1 & 0x3fffff80000 | uVar9 & 0xfffff80000000000;
    }
    else if (uVar4 == 1) {
      uVar14 = uVar9 >> 1 & 0xffff80000 | uVar9 & 0xffffffe000000000;
    }
    else if (uVar4 == 0) {
      uVar14 = uVar9 >> 1 & 0xf80000 | uVar9 & 0xfffffffffe000000;
    }
    else {
      uVar14 = uVar9 >> 1 & 0x7ffffffffff80000;
    }
    uVar6 = (uVar14 & 0xfff0000000) << 0xc;
    uVar12 = (ulong)(((uint)uVar14 | (uint)(uVar9 >> 2) & 0x30000) >> 0x10) << 0x34;
    uVar13 = uVar6 | uVar12;
    uVar7 = uVar13 | uVar14 >> 0xc & 0xfff0000000;
    uVar5 = uVar7 | uVar14 >> 0x24 & 0xfff0000;
    uVar4 = (uint)(uVar14 >> 0x24);
    if (uVar2 == 2) {
      uVar14 = uVar6 & 0xfffff80000000000 | uVar12 |
               (ulong)(uVar4 << 2) & 0xc0000 | (uVar5 >> 0x13 & 0x7fffff) << 0x14;
    }
    else if (uVar2 == 1) {
      uVar14 = uVar13 | uVar14 >> 0xc & 0xe000000000 |
               (ulong)(uVar4 << 2) & 0xc0000 | (uVar5 >> 0x13 & 0x1ffff) << 0x14;
    }
    else if (uVar2 == 0) {
      uVar14 = (ulong)(uVar4 << 2) & 0xc0000 | (ulong)(uVar4 << 1) & 0x1f00000 |
               uVar7 | uVar14 >> 0x24 & 0xe000000;
    }
    else {
      uVar14 = (ulong)(uVar4 << 2) & 0xc0000 | (uVar5 >> 0x13) << 0x14;
    }
    uVar13 = 1L << ((ulong)(uVar1 >> 8) & 0x3f);
    uVar12 = 1L << ((ulong)(uVar1 >> 0xe) & 0x3f);
    if ((uVar1 >> 7 & 1) != 0) {
      uVar5 = uVar15 >> 0x34;
      uVar15 = uVar15 >> 0xc & 0xfff000fff00 | uVar15 & 0xff | (uVar15 & 0xfff000fff00) << 0xc |
               (uVar9 >> 4) << 0x38;
      uVar9 = uVar9 & 0xfffffffffffc0000 | uVar5 & 0xfffffffffffffff0 | uVar9 >> 0xc & 0xf |
              (ulong)(uint)((int)uVar9 << 0xc) & 0xf000 | uVar9 >> 1 & 0x10000 |
              (ulong)(uint)((int)uVar9 << 1) & 0x20000;
    }
    if ((uVar9 & (uVar13 | uVar12)) == 0) {
      local_30 = uVar15 & 0xffffffffffffff00 | uVar15 & 3 | ((ulong)uVar1 & 0x3f) << 2;
      uVar14 = uVar9 & 0x3ffff | uVar14;
    }
    else {
      iVar11 = (int)((ulong)uVar1 & 0x3f);
      if ((uVar9 & uVar13) == 0) {
        local_30 = uVar15 & 0xff000fff000fff03 | (ulong)(uint)(iVar11 << 2) |
                   uVar15 >> 6 & 0x3f00003f00000 | (uVar15 & 0x3f00003f00000) << 6;
        uVar14 = (uVar9 >> 6 & 0x3f0 | uVar9 & 0x3000f | (ulong)(uint)((int)uVar9 << 6) & 0xfc00 |
                 *(ulong *)(s_flipYDataMode1 + uVar10 * 0x10 + 8) ^ uVar14) ^ 0xfffffffffffc0000;
      }
      else if ((uVar9 & uVar12) == 0) {
        local_30 = (ulong)(uint)(iVar11 << 2) | (uVar9 & 0xf) << 0x3a | uVar15 & 0xfff000fff00003 |
                   uVar15 >> 6 & 0x300003f00003f00 | (uVar15 & 0x300003f00003f00) << 6;
        uVar14 = *(ulong *)(s_flipYDataMode1 + uVar10 * 0x10 + 8) ^ uVar14 | uVar9 & 0x3fff0 |
                 uVar15 >> 0x3a & 0xf;
      }
      else {
        local_30 = (ulong)(uint)(iVar11 << 2) | (uVar9 & 0xf) << 0x3a | uVar15 & 3 |
                   uVar15 >> 6 & 0x303f03f03f03f00 | (uVar15 & 0x303f03f03f03f00) << 6;
        uVar14 = (uVar9 & 0x30000 | uVar14 | uVar9 >> 6 & 0x3f0 |
                  (ulong)(uint)((int)uVar9 << 6) & 0xfc00 | uVar15 >> 0x3a & 0xf) ^
                 0xfffffffffffc0000;
      }
    }
    *(ulong *)(param_1 + 8) = uVar14;
    *(ulong *)param_1 = local_30;
  }
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1 >> 6 & 1;
}


