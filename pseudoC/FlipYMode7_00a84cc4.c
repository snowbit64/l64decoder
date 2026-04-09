// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FlipYMode7
// Entry Point: 00a84cc4
// Size: 904 bytes
// Signature: undefined __cdecl FlipYMode7(uchar * param_1)


/* BC7FlipUtil::FlipYMode7(unsigned char*) */

uint BC7FlipUtil::FlipYMode7(uchar *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  
  lVar7 = tpidr_el0;
  lVar9 = *(long *)(lVar7 + 0x28);
  uVar11 = *(ulong *)(param_1 + 8);
  uVar12 = *(ulong *)param_1;
  uVar13 = uVar12 >> 8 & 0x3f;
  uVar2 = *(uint *)(s_flipYDataMode37 + uVar13 * 8);
  if ((uVar2 >> 6 & 1) == 0) goto LAB_00a85028;
  uVar16 = uVar2 >> 0x14 & 3;
  uVar6 = uVar2 >> 0x16 & 3;
  uVar3 = (uint)(uVar11 >> 0x20);
  if (uVar16 == 2) {
    uVar16 = uVar3 & 0xfffc0000 | uVar3 >> 1 & 0x1fffc;
  }
  else if (uVar16 == 1) {
    uVar16 = uVar3 & 0xffffc000 | uVar3 >> 1 & 0x1ffc;
  }
  else if (uVar16 == 0) {
    uVar16 = uVar3 & 0xffffffc0 | uVar3 >> 1 & 0x1c;
  }
  else {
    uVar16 = uVar3 >> 1 & 0x7ffffffc;
  }
  uVar4 = (uVar16 & 0xff00ff00) >> 8;
  uVar3 = uVar4 | (uVar3 >> 2 & 1 | uVar16 & 0xff00ff) << 8;
  uVar5 = uVar3 >> 0x10;
  uVar3 = uVar3 << 0x10;
  if (uVar6 == 2) {
    uVar16 = uVar3 & 0xfffc0000 | ((uVar5 | uVar3) >> 2 & 0x7fff) << 3;
  }
  else if (uVar6 == 1) {
    uVar16 = ((uVar16 & 0xc00000) << 8) >> 0x10 | uVar3 | ((uVar5 & 0x1ffc) >> 2) << 3;
  }
  else if (uVar6 == 0) {
    uVar16 = uVar5 & 0xffffffc0 | uVar3 | ((uVar4 & 0x1c0000) >> 0x12) << 3;
  }
  else {
    uVar16 = ((uVar5 | uVar3) & 0x7ffffffc) << 1;
  }
  uVar15 = 1L << ((ulong)(uVar2 >> 8) & 0x3f);
  uVar8 = 1L << ((ulong)(uVar2 >> 0xe) & 0x3f);
  if ((uVar2 >> 7 & 1) != 0) {
    uVar1 = uVar12 >> 0x36;
    uVar12 = uVar12 >> 10 & 0xffc00ffc000 | uVar12 & 0x3fff | (uVar12 & 0xffc00ffc000) << 10 |
             uVar11 << 0x36;
    uVar11 = uVar11 & 0xfffffffc00000000 |
             uVar1 | uVar11 >> 10 & 0xffc00 | (ulong)(uint)((int)uVar11 << 10) & 0x3ff00000 |
             uVar11 >> 2 & 0xc0000000 | (uVar11 >> 0x1e & 3) << 0x20;
  }
  uVar16 = uVar16 | ((uVar4 & 0x10000) >> 0x10) << 2;
  if ((uVar11 & (uVar15 | uVar8)) == 0) {
    uVar8 = uVar12 & 0xffffffffffffc000 | uVar12 & 0xff | ((ulong)uVar2 & 0x3f) << 8;
    uVar12 = uVar11 & 0x3ffffffff | (ulong)uVar16 << 0x20;
  }
  else {
    iVar14 = (int)((ulong)uVar2 & 0x3f);
    iVar10 = (int)uVar11;
    if ((uVar11 & uVar15) == 0) {
      uVar8 = uVar12 & 0xffc00ffc00ffc0ff | (ulong)(uint)(iVar14 << 8) |
              uVar12 >> 5 & 0x1f0001f000000 | (uVar12 & 0x1f0001f000000) << 5;
      uVar13 = uVar11 & 0xc00ffc00 |
               (ulong)(uVar16 ^ *(uint *)(s_flipYDataMode37 + uVar13 * 8 + 4) ^ 0xfffffffc) << 0x20
               | uVar11 >> 5 & 0x1f0001f | (ulong)(uint)(iVar10 << 5) & 0x3e0003e0;
      uVar12 = uVar11 >> 1 & 0x100000000 | (uVar11 >> 0x20 & 1) << 0x21;
    }
    else {
      if ((uVar11 & uVar8) == 0) {
        uVar8 = uVar12 & 0x3ff003ff0000ff | (ulong)(uint)(iVar14 << 8) |
                uVar12 >> 5 & 0x7c0007c0007c000 | (uVar12 & 0x7c0007c0007c000) << 5;
        uVar12 = uVar11 >> 5 & 0x7c00 | uVar11 & 0x33ff003ff | (ulong)(uint)(iVar10 << 5) & 0xf8000
                 | uVar11 >> 1 & 0x40000000 | (ulong)(uint)(iVar10 << 1) & 0x80000000 |
                 (ulong)(*(uint *)(s_flipYDataMode37 + uVar13 * 8 + 4) ^ uVar16) << 0x20;
        goto LAB_00a8501c;
      }
      uVar8 = (ulong)(uint)(iVar14 << 8) | uVar12 & 0xff | uVar12 >> 5 & 0x7c1f07c1f07c000 |
              (uVar12 & 0x7c1f07c1f07c000) << 5;
      uVar13 = uVar11 >> 5 & 0x1f07c1f | (ulong)(uVar16 ^ 0xfffffffc) << 0x20 |
               (ulong)(uint)(iVar10 << 5) & 0x3e0f83e0;
      uVar12 = (uVar11 & 0x140000000) << 1 | uVar11 >> 1 & 0x140000000;
    }
    uVar12 = uVar12 | uVar13;
  }
LAB_00a8501c:
  *(ulong *)(param_1 + 8) = uVar12;
  *(ulong *)param_1 = uVar8;
LAB_00a85028:
  if (*(long *)(lVar7 + 0x28) == lVar9) {
    return uVar2 >> 6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


