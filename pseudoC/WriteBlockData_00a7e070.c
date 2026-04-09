// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteBlockData
// Entry Point: 00a7e070
// Size: 1820 bytes
// Signature: undefined __thiscall WriteBlockData(D3DX_BC7 * this, BlockData * param_1)


/* BC6BC7Util::D3DX_BC7::WriteBlockData(BC6BC7Util::D3DX_BC7::BlockData&) */

void __thiscall BC6BC7Util::D3DX_BC7::WriteBlockData(D3DX_BC7 *this,BlockData *param_1)

{
  BlockData BVar1;
  BlockData BVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  D3DX_BC7 *pDVar7;
  byte bVar8;
  BlockData *pBVar9;
  uint uVar10;
  byte bVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  byte bVar20;
  long lVar21;
  ulong uVar22;
  byte bVar23;
  uint uVar24;
  byte bVar25;
  
  BVar1 = *param_1;
  uVar17 = (ulong)(byte)BVar1;
  lVar16 = uVar17 * 0xf;
  uVar15 = (ulong)(byte)(&ms_aInfo)[lVar16];
  uVar24 = (uint)(byte)BVar1;
  if (BVar1 == (BlockData)0x0) {
    uVar10 = 0;
    uVar19 = 0;
  }
  else {
    pDVar7 = this;
    uVar13 = uVar24;
    if (8 < (byte)BVar1) {
      *this = (D3DX_BC7)0x0;
      pDVar7 = this + 1;
      uVar13 = uVar24 - 8;
    }
    uVar19 = (ulong)((byte)BVar1 >> 3);
    uVar10 = (byte)BVar1 & 7;
    *pDVar7 = (D3DX_BC7)((byte)*pDVar7 & (byte)(-1 << (ulong)(uVar13 & 0x1f)));
  }
  uVar14 = uVar17 + 1;
  this[uVar19] = (D3DX_BC7)((byte)this[uVar19] | (byte)(1 << (ulong)uVar10));
  if (2 < uVar17 - 4) {
    bVar25 = (&DAT_0051f9a1)[lVar16];
    uVar19 = uVar14 & 7;
    BVar2 = param_1[1];
    uVar22 = uVar14 >> 3;
    if (uVar19 + bVar25 < 9) {
      pDVar7 = this + uVar22;
      bVar20 = (char)BVar2 << uVar19;
      bVar8 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(bVar25 & 0x1f)) << uVar19) ^ 0xff);
    }
    else {
      uVar10 = 8 - (int)uVar19;
      pDVar7 = this + uVar22 + 1;
      bVar20 = (byte)BVar2 >> (ulong)(uVar10 & 0x1f);
      bVar8 = (byte)*pDVar7 & (byte)(-1 << (ulong)(bVar25 - uVar10 & 0x1f));
      this[uVar22] = (D3DX_BC7)
                     ((byte)this[uVar22] &
                      ((byte)(~(-1 << (ulong)(uVar10 & 0x1f)) << uVar19) ^ 0xff) |
                     (char)BVar2 << uVar19);
    }
    uVar14 = uVar14 + bVar25;
    *pDVar7 = (D3DX_BC7)(bVar8 | bVar20);
  }
  bVar25 = (&DAT_0051f9a7)[lVar16];
  uVar10 = (byte)BVar1 & 0xfe;
  if (uVar10 == 4) {
    bVar8 = (&DAT_0051f9a3)[lVar16];
    uVar19 = uVar14 & 7;
    BVar1 = param_1[2];
    uVar22 = uVar14 >> 3;
    if (uVar19 + bVar8 < 9) {
      pDVar7 = this + uVar22;
      bVar18 = (char)BVar1 << uVar19;
      bVar20 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(bVar8 & 0x1f)) << uVar19) ^ 0xff);
    }
    else {
      uVar13 = 8 - (int)uVar19;
      pDVar7 = this + uVar22 + 1;
      bVar18 = (byte)BVar1 >> (ulong)(uVar13 & 0x1f);
      bVar20 = (byte)*pDVar7 & (byte)(-1 << (ulong)(bVar8 - uVar13 & 0x1f));
      this[uVar22] = (D3DX_BC7)
                     ((byte)this[uVar22] &
                      ((byte)(~(-1 << (ulong)(uVar13 & 0x1f)) << uVar19) ^ 0xff) |
                     (char)BVar1 << uVar19);
    }
    uVar14 = uVar14 + bVar8;
    *pDVar7 = (D3DX_BC7)(bVar20 | bVar18);
  }
  bVar8 = (&DAT_0051f9a5)[lVar16];
  lVar21 = uVar15 * 2 + 2;
  bVar20 = (&DAT_0051f9a6)[lVar16];
  bVar18 = (&DAT_0051f9a8)[lVar16];
  bVar3 = (&DAT_0051f9a9)[lVar16];
  bVar4 = (&DAT_0051f9aa)[lVar16];
  if (uVar24 == 4) {
    bVar5 = (&DAT_0051f9a4)[lVar16];
    uVar19 = uVar14 & 7;
    BVar1 = param_1[3];
    uVar22 = uVar14 >> 3;
    if (uVar19 + bVar5 < 9) {
      pDVar7 = this + uVar22;
      bVar11 = (char)BVar1 << uVar19;
      bVar23 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(bVar5 & 0x1f)) << uVar19) ^ 0xff);
    }
    else {
      uVar13 = 8 - (int)uVar19;
      pDVar7 = this + uVar22 + 1;
      bVar11 = (byte)BVar1 >> (ulong)(uVar13 & 0x1f);
      bVar23 = (byte)*pDVar7 & (byte)(-1 << (ulong)(bVar5 - uVar13 & 0x1f));
      this[uVar22] = (D3DX_BC7)
                     ((byte)this[uVar22] &
                      ((byte)(~(-1 << (ulong)(uVar13 & 0x1f)) << uVar19) ^ 0xff) |
                     (char)BVar1 << uVar19);
    }
    uVar14 = uVar14 + bVar5;
    *pDVar7 = (D3DX_BC7)(bVar23 | bVar11);
  }
  bVar5 = (&DAT_0051f9a2)[lVar16];
  pBVar9 = param_1 + 4;
  lVar16 = lVar21;
  do {
    BVar1 = *pBVar9;
    uVar19 = uVar14 & 7;
    uVar22 = uVar14 >> 3;
    if (uVar19 + bVar25 < 9) {
      pDVar7 = this + uVar22;
      bVar11 = (char)BVar1 << uVar19;
      bVar23 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(bVar25 & 0x1f)) << uVar19) ^ 0xff);
    }
    else {
      uVar13 = 8 - (int)uVar19;
      pDVar7 = this + uVar22 + 1;
      bVar11 = (byte)BVar1 >> (ulong)(uVar13 & 0x1f);
      bVar23 = (byte)*pDVar7 & (byte)(-1 << (ulong)(bVar25 - uVar13 & 0x1f));
      this[uVar22] = (D3DX_BC7)
                     ((byte)this[uVar22] &
                      ((byte)(~(-1 << (ulong)(uVar13 & 0x1f)) << uVar19) ^ 0xff) |
                     (char)BVar1 << uVar19);
    }
    uVar14 = uVar14 + bVar25;
    pBVar9 = pBVar9 + 4;
    lVar16 = lVar16 + -1;
    *pDVar7 = (D3DX_BC7)(bVar23 | bVar11);
  } while (lVar16 != 0);
  pBVar9 = param_1 + 5;
  lVar16 = lVar21;
  do {
    BVar1 = *pBVar9;
    uVar19 = uVar14 & 7;
    uVar22 = uVar14 >> 3;
    if (uVar19 + bVar18 < 9) {
      pDVar7 = this + uVar22;
      bVar23 = (char)BVar1 << uVar19;
      bVar25 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(bVar18 & 0x1f)) << uVar19) ^ 0xff);
    }
    else {
      uVar13 = 8 - (int)uVar19;
      pDVar7 = this + uVar22 + 1;
      bVar23 = (byte)BVar1 >> (ulong)(uVar13 & 0x1f);
      bVar25 = (byte)*pDVar7 & (byte)(-1 << (ulong)(bVar18 - uVar13 & 0x1f));
      this[uVar22] = (D3DX_BC7)
                     ((byte)this[uVar22] &
                      ((byte)(~(-1 << (ulong)(uVar13 & 0x1f)) << uVar19) ^ 0xff) |
                     (char)BVar1 << uVar19);
    }
    uVar14 = uVar14 + bVar18;
    pBVar9 = pBVar9 + 4;
    lVar16 = lVar16 + -1;
    *pDVar7 = (D3DX_BC7)(bVar25 | bVar23);
  } while (lVar16 != 0);
  pBVar9 = param_1 + 6;
  lVar16 = lVar21;
  do {
    BVar1 = *pBVar9;
    uVar19 = uVar14 & 7;
    uVar22 = uVar14 >> 3;
    if (uVar19 + bVar3 < 9) {
      pDVar7 = this + uVar22;
      bVar18 = (char)BVar1 << uVar19;
      bVar25 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(bVar3 & 0x1f)) << uVar19) ^ 0xff);
    }
    else {
      uVar13 = 8 - (int)uVar19;
      pDVar7 = this + uVar22 + 1;
      bVar18 = (byte)BVar1 >> (ulong)(uVar13 & 0x1f);
      bVar25 = (byte)*pDVar7 & (byte)(-1 << (ulong)(bVar3 - uVar13 & 0x1f));
      this[uVar22] = (D3DX_BC7)
                     ((byte)this[uVar22] &
                      ((byte)(~(-1 << (ulong)(uVar13 & 0x1f)) << uVar19) ^ 0xff) |
                     (char)BVar1 << uVar19);
    }
    uVar14 = uVar14 + bVar3;
    pBVar9 = pBVar9 + 4;
    lVar16 = lVar16 + -1;
    *pDVar7 = (D3DX_BC7)(bVar25 | bVar18);
  } while (lVar16 != 0);
  if (3 < uVar24) {
    pBVar9 = param_1 + 7;
    do {
      BVar1 = *pBVar9;
      uVar19 = uVar14 & 7;
      uVar22 = uVar14 >> 3;
      if (uVar19 + bVar4 < 9) {
        pDVar7 = this + uVar22;
        bVar18 = (char)BVar1 << uVar19;
        bVar25 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(bVar4 & 0x1f)) << uVar19) ^ 0xff);
      }
      else {
        uVar24 = 8 - (int)uVar19;
        pDVar7 = this + uVar22 + 1;
        bVar18 = (byte)BVar1 >> (ulong)(uVar24 & 0x1f);
        bVar25 = (byte)*pDVar7 & (byte)(-1 << (ulong)(bVar4 - uVar24 & 0x1f));
        this[uVar22] = (D3DX_BC7)
                       ((byte)this[uVar22] &
                        ((byte)(~(-1 << (ulong)(uVar24 & 0x1f)) << uVar19) ^ 0xff) |
                       (char)BVar1 << uVar19);
      }
      uVar14 = uVar14 + bVar4;
      pBVar9 = pBVar9 + 4;
      lVar21 = lVar21 + -1;
      *pDVar7 = (D3DX_BC7)(bVar25 | bVar18);
    } while (lVar21 != 0);
  }
  if ((0x34UL >> (uVar17 & 0x3f) & 1) == 0) {
    uVar24 = (uint)bVar5;
    if (bVar5 < 2) {
      uVar24 = 1;
    }
    uVar17 = (ulong)uVar24;
    pBVar9 = param_1 + 0x1c;
    do {
      uVar19 = uVar14 >> 3;
      uVar24 = (uint)uVar14 & 7;
      uVar14 = uVar14 + 1;
      uVar17 = uVar17 - 1;
      this[uVar19] = (D3DX_BC7)
                     ((byte)this[uVar19] & ((byte)(1 << (ulong)uVar24) ^ 0xff) |
                     (char)*pBVar9 << (ulong)uVar24);
      pBVar9 = pBVar9 + 1;
    } while (uVar17 != 0);
  }
  uVar17 = 0;
  do {
    uVar19 = 0;
    do {
      lVar16 = uVar19 + (ulong)(byte)param_1[1] * 3 + uVar15 * 0xc0;
      bVar6 = uVar19 < uVar15;
      uVar19 = uVar19 + 1;
    } while (uVar17 != (byte)s_aFixUp[lVar16] && bVar6);
    uVar24 = (uint)bVar8 - (uint)(uVar17 == (byte)s_aFixUp[lVar16]);
    uVar19 = (ulong)uVar24;
    if (uVar19 != 0) {
      uVar22 = uVar14 & 7;
      uVar12 = uVar14 >> 3;
      BVar1 = param_1[uVar17 + 0x22];
      if (uVar19 + uVar22 < 9) {
        pDVar7 = this + uVar12;
        bVar18 = (char)BVar1 << uVar22;
        bVar25 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(uVar24 & 0x1f)) << uVar22) ^ 0xff);
      }
      else {
        uVar13 = 8 - (int)uVar22;
        pDVar7 = this + uVar12 + 1;
        bVar18 = (byte)BVar1 >> (ulong)(uVar13 & 0x1f);
        bVar25 = (byte)*pDVar7 & (byte)(-1 << (ulong)(uVar24 - uVar13 & 0x1f));
        this[uVar12] = (D3DX_BC7)
                       ((byte)this[uVar12] &
                        ((byte)(~(-1 << (ulong)(uVar13 & 0x1f)) << uVar22) ^ 0xff) |
                       (char)BVar1 << uVar22);
      }
      uVar14 = uVar19 + uVar14;
      *pDVar7 = (D3DX_BC7)(bVar25 | bVar18);
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 != 0x10);
  if (uVar10 == 4) {
    lVar16 = 0;
    do {
      uVar24 = (uint)bVar20 - (uint)(lVar16 == 0);
      uVar15 = (ulong)uVar24;
      if (uVar15 != 0) {
        BVar1 = param_1[lVar16 + 0x32];
        uVar19 = uVar14 & 7;
        uVar17 = uVar14 >> 3;
        if (uVar15 + uVar19 < 9) {
          pDVar7 = this + uVar17;
          bVar8 = (char)BVar1 << uVar19;
          bVar25 = (byte)*pDVar7 & ((byte)(~(-1 << (ulong)(uVar24 & 0x1f)) << uVar19) ^ 0xff);
        }
        else {
          uVar10 = 8 - (int)uVar19;
          pDVar7 = this + uVar17 + 1;
          bVar8 = (byte)BVar1 >> (ulong)(uVar10 & 0x1f);
          bVar25 = (byte)*pDVar7 & (byte)(-1 << (ulong)(uVar24 - uVar10 & 0x1f));
          this[uVar17] = (D3DX_BC7)
                         ((byte)this[uVar17] &
                          ((byte)(~(-1 << (ulong)(uVar10 & 0x1f)) << uVar19) ^ 0xff) |
                         (char)BVar1 << uVar19);
        }
        uVar14 = uVar15 + uVar14;
        *pDVar7 = (D3DX_BC7)(bVar25 | bVar8);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x10);
  }
  return;
}


