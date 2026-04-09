// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecompressAlphaDxt5
// Entry Point: 00dec4e8
// Size: 640 bytes
// Signature: undefined __cdecl DecompressAlphaDxt5(uchar * param_1, void * param_2)


/* squish::DecompressAlphaDxt5(unsigned char*, void const*) */

void squish::DecompressAlphaDxt5(uchar *param_1,void *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte local_30 [7];
  undefined local_29;
  long local_28;
  
  lVar17 = tpidr_el0;
  local_28 = *(long *)(lVar17 + 0x28);
                    /* WARNING: Load size is inaccurate */
  local_30[0] = *param_2;
  local_30[1] = *(byte *)((long)param_2 + 1);
  uVar19 = (uint)local_30[0];
  uVar20 = (uint)local_30[0];
  uVar21 = (uint)local_30[1];
  if ((uint)local_30[0] < (uint)local_30[1] || uVar19 == local_30[1]) {
    local_30[6] = 0;
    local_30[2] = (char)(((uint)local_30[1] + uVar19 * 4) / 5);
    local_30[3] = (char)(((uint)local_30[0] * 2 + uVar19 + (uint)local_30[1] * 2) / 5);
    local_29 = 0xff;
    local_30[4] = (char)(((uint)local_30[0] * 2 + (uint)local_30[1] * 2 + uVar21) / 5);
    local_30[5] = (char)((uVar20 + (uint)local_30[1] * 4) / 5);
  }
  else {
    uVar15 = uVar21 + uVar20 * 6;
    uVar19 = (uint)local_30[0] * 4 + uVar20 + (uint)local_30[1] * 2;
    uVar1 = (uint)local_30[0] * 4 + (uint)local_30[1] * 2 + uVar21;
    uVar11 = uVar19 / 7;
    uVar16 = uVar20 + uVar21 * 6;
    uVar12 = uVar15 / 7;
    uVar20 = (uint)local_30[0] * 2 + uVar20 + (uint)local_30[1] * 4;
    uVar21 = (uint)local_30[0] * 2 + (uint)local_30[1] * 4 + uVar21;
    uVar13 = uVar1 / 7;
    local_30[3] = (char)(uVar11 + (uVar19 - uVar11 >> 1) >> 2);
    uVar19 = uVar20 / 7;
    uVar11 = uVar21 / 7;
    uVar14 = uVar16 / 7;
    local_29 = (undefined)(uVar14 + ((uVar16 - uVar14 & 0xfffe) >> 1) >> 2);
    local_30[2] = (char)(uVar12 + (uVar15 - uVar12 >> 1) >> 2);
    local_30[4] = (char)(uVar13 + (uVar1 - uVar13 >> 1) >> 2);
    local_30[5] = (char)(uVar19 + (uVar20 - uVar19 >> 1) >> 2);
    local_30[6] = (char)(uVar11 + (uVar21 - uVar11 >> 1) >> 2);
  }
  bVar2 = *(byte *)(ushort *)((long)param_2 + 2);
  bVar3 = *(byte *)((long)param_2 + 3);
  bVar4 = *(byte *)((long)param_2 + 4);
  bVar5 = *(byte *)(ushort *)((long)param_2 + 5);
  bVar8 = local_30[(ulong)(*(ushort *)((long)param_2 + 2) >> 6) & 7];
  bVar6 = *(byte *)((long)param_2 + 6);
  uVar18 = *(ushort *)((long)param_2 + 5);
  bVar7 = *(byte *)((long)param_2 + 7);
  param_1[3] = local_30[(ulong)bVar2 & 7];
  bVar9 = local_30[(ulong)(bVar3 >> 4) & 7];
  bVar10 = local_30[(ulong)(((uint)bVar3 << 8 | (uint)bVar4 << 0x10) >> 0xf) & 7];
  param_1[0xb] = bVar8;
  bVar8 = local_30[(ulong)(bVar4 >> 2) & 7];
  bVar4 = local_30[bVar4 >> 5];
  param_1[0x13] = bVar9;
  bVar9 = local_30[(ulong)bVar5 & 7];
  param_1[0x17] = bVar10;
  bVar5 = local_30[(ulong)(bVar5 >> 3) & 7];
  param_1[0x1b] = bVar8;
  bVar8 = local_30[(ulong)(uVar18 >> 6) & 7];
  param_1[0x1f] = bVar4;
  bVar4 = local_30[(ulong)(bVar6 >> 1) & 7];
  bVar2 = local_30[(ulong)(bVar2 >> 3) & 7];
  bVar3 = local_30[(ulong)(bVar3 >> 1) & 7];
  param_1[0x23] = bVar9;
  bVar9 = local_30[(ulong)(bVar6 >> 4) & 7];
  param_1[0x27] = bVar5;
  bVar5 = local_30[(ulong)(((uint)bVar6 << 8 | (uint)bVar7 << 0x10) >> 0xf) & 7];
  param_1[0x2b] = bVar8;
  bVar6 = local_30[(ulong)(bVar7 >> 2) & 7];
  param_1[0x2f] = bVar4;
  bVar4 = local_30[bVar7 >> 5];
  param_1[7] = bVar2;
  param_1[0xf] = bVar3;
  param_1[0x33] = bVar9;
  param_1[0x37] = bVar5;
  param_1[0x3b] = bVar6;
  param_1[0x3f] = bVar4;
  if (*(long *)(lVar17 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


