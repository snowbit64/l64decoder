// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ReadBlockData
// Entry Point: 00a7dc74
// Size: 1020 bytes
// Signature: undefined __thiscall ReadBlockData(D3DX_BC7 * this, BlockData * param_1)


/* BC6BC7Util::D3DX_BC7::ReadBlockData(BC6BC7Util::D3DX_BC7::BlockData&) const */

bool __thiscall BC6BC7Util::D3DX_BC7::ReadBlockData(D3DX_BC7 *this,BlockData *param_1)

{
  uint uVar1;
  BlockData BVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  BlockData *pBVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  
  uVar3 = *(ulong *)this;
  uVar4 = *(ulong *)(this + 8);
  uVar25 = uVar3 & 0xffffffff;
  uVar1 = 0;
  do {
    uVar20 = uVar1;
    uVar18 = uVar25 >> 1;
    uVar1 = uVar20 + 1;
    if ((uVar25 & 1) != 0) break;
    uVar25 = uVar18;
  } while (uVar20 < 0x7f);
  *param_1 = SUB41(uVar20,0);
  if (7 < (uVar20 & 0xff)) goto LAB_00a7e054;
  lVar21 = ((ulong)uVar20 & 0xff) * 0xf;
  bVar5 = (&DAT_0051f9a1)[lVar21];
  bVar6 = (&DAT_0051f9a3)[lVar21];
  bVar7 = (&DAT_0051f9a4)[lVar21];
  uVar13 = (uint)uVar18;
  uVar24 = uVar13 >> (ulong)(bVar5 & 0x1f);
  bVar8 = (&ms_aInfo)[lVar21];
  uVar13 = uVar13 & (-1 << (ulong)(bVar5 & 0x1f) ^ 0xffffffffU);
  uVar23 = (uint)bVar6;
  uVar22 = (uint)bVar5;
  param_1[2] = (BlockData)((byte)uVar24 & ((byte)(-1 << (ulong)(bVar6 & 0x1f)) ^ 0xff));
  bVar5 = bVar8 * '\x02' + 2;
  uVar15 = uVar22 + uVar23 + (uint)bVar7 + uVar1;
  param_1[1] = SUB41(uVar13,0);
  param_1[3] = (BlockData)
               ((byte)(uVar24 >> (ulong)(bVar6 & 0x1f)) &
               ((byte)(-1 << (ulong)(bVar7 & 0x1f)) ^ 0xff));
  if (uVar15 < 0x40) {
    uVar25 = uVar4 << ((ulong)-uVar15 & 0x3f) | uVar3 >> ((ulong)uVar15 & 0x3f);
  }
  else {
    uVar25 = uVar4 >> ((ulong)uVar15 & 0x3f);
  }
  uVar18 = (ulong)bVar5;
  if (bVar5 == 0) {
    iVar14 = 0;
  }
  else {
    bVar6 = (&DAT_0051f9a7)[lVar21];
    bVar9 = (&DAT_0051f9a8)[lVar21];
    pBVar16 = param_1 + 4;
    uVar27 = uVar18;
    do {
      bVar11 = (byte)uVar25;
      uVar25 = uVar25 >> ((ulong)bVar6 & 0x3f);
      uVar27 = uVar27 - 1;
      *pBVar16 = (BlockData)(bVar11 & ~(byte)(-1 << (ulong)(bVar6 & 0x1f)));
      pBVar16 = pBVar16 + 4;
    } while (uVar27 != 0);
    iVar14 = (uint)bVar6 * (uint)bVar5;
    if (bVar5 != 0) {
      pBVar16 = param_1 + 5;
      uVar27 = uVar18;
      do {
        bVar6 = (byte)uVar25;
        uVar25 = uVar25 >> ((ulong)bVar9 & 0x3f);
        uVar27 = uVar27 - 1;
        *pBVar16 = (BlockData)(bVar6 & ~(byte)(-1 << (ulong)(bVar9 & 0x1f)));
        pBVar16 = pBVar16 + 4;
      } while (uVar27 != 0);
      iVar14 = iVar14 + (uint)bVar9 * (uint)bVar5;
    }
  }
  uVar24 = (uint)bVar7;
  uVar15 = iVar14 + uVar22 + uVar23 + uVar24 + uVar1;
  if (uVar15 < 0x40) {
    uVar25 = uVar4 << ((ulong)-uVar15 & 0x3f) | uVar3 >> ((ulong)uVar15 & 0x3f);
    if (bVar5 == 0) goto LAB_00a7de9c;
LAB_00a7de00:
    bVar6 = (&DAT_0051f9a9)[lVar21];
    bVar7 = (&DAT_0051f9aa)[lVar21];
    pBVar16 = param_1 + 6;
    uVar27 = uVar18;
    do {
      bVar9 = (byte)uVar25;
      uVar25 = uVar25 >> ((ulong)bVar6 & 0x3f);
      uVar27 = uVar27 - 1;
      *pBVar16 = (BlockData)(bVar9 & ~(byte)(-1 << (ulong)(bVar6 & 0x1f)));
      pBVar16 = pBVar16 + 4;
    } while (uVar27 != 0);
    iVar19 = (uint)bVar6 * (uint)bVar5;
    if (bVar5 != 0) {
      uVar15 = 0;
      if (3 < (uVar20 & 0xff)) {
        uVar15 = (uint)bVar7;
      }
      pBVar16 = param_1 + 7;
      do {
        BVar2 = (BlockData)((byte)uVar25 & ~(byte)(-1 << (ulong)(bVar7 & 0x1f)));
        uVar25 = uVar25 >> ((ulong)uVar15 & 0x3f);
        if ((uVar20 & 0xff) < 4) {
          BVar2 = (BlockData)0xff;
        }
        iVar19 = iVar19 + uVar15;
        uVar18 = uVar18 - 1;
        *pBVar16 = BVar2;
        pBVar16 = pBVar16 + 4;
      } while (uVar18 != 0);
    }
  }
  else {
    uVar25 = uVar4 >> ((ulong)uVar15 & 0x3f);
    if (bVar5 != 0) goto LAB_00a7de00;
LAB_00a7de9c:
    iVar19 = 0;
  }
  if ((0x34UL >> ((ulong)uVar20 & 0x3f) & 1) == 0) {
    uVar15 = (uint)(byte)(&DAT_0051f9a2)[lVar21];
    if ((byte)(&DAT_0051f9a2)[lVar21] < 2) {
      uVar15 = 1;
    }
    uVar18 = (ulong)uVar15;
    pBVar16 = param_1 + 0x1c;
    do {
      bVar5 = (byte)uVar25;
      uVar25 = uVar25 >> 1;
      uVar18 = uVar18 - 1;
      *pBVar16 = (BlockData)(bVar5 & 1);
      pBVar16 = pBVar16 + 1;
    } while (uVar18 != 0);
    iVar19 = iVar19 + uVar15;
  }
  uVar15 = iVar14 + iVar19 + uVar22 + uVar23 + uVar24 + uVar1;
  if (uVar15 < 0x40) {
    uVar25 = uVar4 << ((ulong)-uVar15 & 0x3f) | uVar3 >> ((ulong)uVar15 & 0x3f);
  }
  else {
    uVar25 = uVar4 >> ((ulong)uVar15 & 0x3f);
  }
  bVar5 = (&DAT_0051f9a5)[lVar21];
  bVar6 = (&DAT_0051f9a6)[lVar21];
  uVar18 = 0;
  iVar12 = 0;
  do {
    iVar26 = iVar12;
    uVar27 = uVar18;
    uVar18 = 0;
    do {
      uVar17 = (ulong)(byte)s_aFixUp[uVar18 + (ulong)(uVar13 & 0xff) * 3 + (ulong)bVar8 * 0xc0];
      bVar10 = uVar18 < bVar8;
      uVar18 = uVar18 + 1;
    } while (uVar27 != uVar17 && bVar10);
    uVar15 = (uint)bVar5 - (uint)(uVar27 == uVar17);
    bVar7 = (byte)uVar25;
    uVar25 = uVar25 >> ((ulong)uVar15 & 0x3f);
    param_1[uVar27 + 0x22] = (BlockData)(bVar7 & ((byte)(-1 << (ulong)(uVar15 & 0x1f)) ^ 0xff));
    uVar18 = uVar27 + 1;
    iVar12 = uVar15 + iVar26;
  } while (uVar27 + 1 != 0x10);
  if ((uVar20 & 0xff) == 4) {
    iVar26 = iVar14 + iVar19 + uVar22 + uVar23 + uVar24 + (uint)bVar5 + iVar26;
    uVar15 = (iVar26 - (uint)(uVar27 == uVar17)) + uVar1;
    if (uVar15 < 0x40) {
      uVar25 = uVar4 << ((ulong)-((iVar26 - (uint)(uVar27 == uVar17)) + uVar1) & 0x3f) |
               uVar3 >> ((ulong)uVar15 & 0x3f);
    }
    else {
      uVar25 = uVar4 >> ((ulong)((iVar26 - (uint)(uVar27 == uVar17)) + uVar1) & 0x3f);
    }
  }
  else if ((uVar20 & 0xfe) != 4) goto LAB_00a7e054;
  lVar21 = 0;
  do {
    uVar1 = (uint)bVar6 - (uint)(lVar21 == 0);
    bVar5 = (byte)uVar25;
    uVar25 = uVar25 >> ((ulong)uVar1 & 0x3f);
    param_1[lVar21 + 0x32] = (BlockData)(bVar5 & ((byte)(-1 << (ulong)(uVar1 & 0x1f)) ^ 0xff));
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0x10);
LAB_00a7e054:
  return (uVar20 & 0xff) < 8;
}


