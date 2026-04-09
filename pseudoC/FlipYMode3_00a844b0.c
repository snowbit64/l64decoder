// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FlipYMode3
// Entry Point: 00a844b0
// Size: 912 bytes
// Signature: undefined __cdecl FlipYMode3(uchar * param_1)


/* BC7FlipUtil::FlipYMode3(unsigned char*) */

uint BC7FlipUtil::FlipYMode3(uchar *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong local_30;
  
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x28);
  uVar12 = *(ulong *)(param_1 + 8);
  uVar13 = *(ulong *)param_1;
  uVar14 = uVar13 >> 4 & 0x3f;
  uVar2 = *(uint *)(s_flipYDataMode37 + uVar14 * 8);
  if ((uVar2 >> 6 & 1) != 0) {
    uVar17 = uVar2 >> 0x14 & 3;
    uVar6 = uVar2 >> 0x16 & 3;
    uVar3 = (uint)(uVar12 >> 0x20);
    if (uVar17 == 2) {
      uVar17 = uVar3 & 0xfffc0000 | uVar3 >> 1 & 0x1fffc;
    }
    else if (uVar17 == 1) {
      uVar17 = uVar3 & 0xffffc000 | uVar3 >> 1 & 0x1ffc;
    }
    else if (uVar17 == 0) {
      uVar17 = uVar3 & 0xffffffc0 | uVar3 >> 1 & 0x1c;
    }
    else {
      uVar17 = uVar3 >> 1 & 0x7ffffffc;
    }
    uVar4 = (uVar17 & 0xff00ff00) >> 8;
    uVar3 = uVar4 | (uVar3 >> 2 & 1 | uVar17 & 0xff00ff) << 8;
    uVar5 = uVar3 >> 0x10;
    uVar3 = uVar3 << 0x10;
    if (uVar6 == 2) {
      uVar17 = uVar3 & 0xfffc0000 | ((uVar5 | uVar3) >> 2 & 0x7fff) << 3;
    }
    else if (uVar6 == 1) {
      uVar17 = ((uVar17 & 0xc00000) << 8) >> 0x10 | uVar3 | ((uVar5 & 0x1ffc) >> 2) << 3;
    }
    else if (uVar6 == 0) {
      uVar17 = uVar5 & 0xffffffc0 | uVar3 | ((uVar4 & 0x1c0000) >> 0x12) << 3;
    }
    else {
      uVar17 = ((uVar5 | uVar3) & 0x7ffffffc) << 1;
    }
    uVar16 = 1L << ((ulong)(uVar2 >> 8) & 0x3f);
    uVar8 = 1L << ((ulong)(uVar2 >> 0xe) & 0x3f);
    if ((uVar2 >> 7 & 1) != 0) {
      uVar9 = (uVar13 & 0x3ffc000fffc00) << 0xe;
      uVar1 = uVar13 >> 0x32;
      uVar13 = uVar9 & 0xfff0000000000000 |
               uVar13 >> 0xe & 0x3ffc000fffc00 | uVar13 & 0x3ff | uVar9 & 0x3ffffffffffff |
               (uVar12 & 3) << 0x32;
      uVar12 = uVar12 & 0xfffffffc00000000 |
               uVar1 & 3 | uVar12 >> 0xe & 0xfffc | (ulong)(uint)((int)uVar12 << 0xe) & 0x3fff0000 |
               uVar12 >> 2 & 0xc0000000 | (uVar12 >> 0x1e & 3) << 0x20;
    }
    uVar17 = uVar17 | ((uVar4 & 0x10000) >> 0x10) << 2;
    if ((uVar12 & (uVar16 | uVar8)) == 0) {
      local_30 = uVar13 & 0xfffffffffffffc00 | uVar13 & 0xf | ((ulong)uVar2 & 0x3f) << 4;
      uVar12 = uVar12 & 0x3ffffffff | (ulong)uVar17 << 0x20;
    }
    else {
      iVar15 = (int)((ulong)uVar2 & 0x3f);
      iVar11 = (int)uVar12;
      if ((uVar12 & uVar16) == 0) {
        local_30 = (ulong)(uint)(iVar15 << 4) | (uVar12 & 3) << 0x39 | uVar13 & 0xfffc000fffc0f |
                   uVar13 >> 7 & 0x1f000007f000000 | (uVar13 & 0x1f000007f000000) << 7;
        uVar12 = uVar12 >> 1 & 0x100000000 | (uVar12 >> 0x20 & 1) << 0x21 |
                 uVar12 & 0xc000fffc |
                 (ulong)(uVar17 ^ *(uint *)(s_flipYDataMode37 + uVar14 * 8 + 4) ^ 0xfffffffc) <<
                 0x20 | uVar13 >> 0x39 & 3 | uVar12 >> 7 & 0x7f0000 |
                 (ulong)(uint)(iVar11 << 7) & 0x3f800000;
      }
      else if ((uVar12 & uVar8) == 0) {
        local_30 = uVar13 & 0xfff0003fff00000f | (ulong)(uint)(iVar15 << 4) |
                   uVar13 >> 7 & 0x1fc00001fc00 | (uVar13 & 0x1fc00001fc00) << 7;
        uVar12 = uVar12 >> 7 & 0x1fc | uVar12 & 0x33fff0003 | (ulong)(uint)(iVar11 << 7) & 0xfe00 |
                 uVar12 >> 1 & 0x40000000 | (ulong)(uint)(iVar11 << 1) & 0x80000000 |
                 (ulong)(*(uint *)(s_flipYDataMode37 + uVar14 * 8 + 4) ^ uVar17) << 0x20;
      }
      else {
        local_30 = (ulong)(uint)(iVar15 << 4) | (uVar12 & 3) << 0x39 | uVar13 & 0xf |
                   uVar13 >> 7 & 0x1f01fc07f01fc00 | (uVar13 & 0x1f01fc07f01fc00) << 7;
        uVar12 = (uVar12 & 0x140000000) << 1 | uVar12 >> 1 & 0x140000000 |
                 (ulong)(uVar17 ^ 0xfffffffc) << 0x20 | uVar13 >> 0x39 & 3 | uVar12 >> 7 & 0x7f01fc
                 | (ulong)(uint)(iVar11 << 7) & 0x3f80fe00;
      }
    }
    *(ulong *)(param_1 + 8) = uVar12;
    *(ulong *)param_1 = local_30;
  }
  if (*(long *)(lVar7 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 >> 6 & 1;
}


