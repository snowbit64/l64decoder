// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decode
// Entry Point: 00a7e78c
// Size: 1512 bytes
// Signature: undefined __thiscall Decode(D3DX_BC7 * this, HDRColorA * param_1, bool param_2)


/* BC6BC7Util::D3DX_BC7::Decode(BC6BC7Util::HDRColorA*, bool) const */

void __thiscall BC6BC7Util::D3DX_BC7::Decode(D3DX_BC7 *this,HDRColorA *param_1,bool param_2)

{
  float *pfVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  BlockData local_b0;
  byte local_af;
  char local_ae;
  char local_ad;
  byte abStack_94 [6];
  byte local_8e [16];
  byte local_7e [22];
  long local_68;
  
  lVar17 = tpidr_el0;
  local_68 = *(long *)(lVar17 + 0x28);
  uVar19 = ReadBlockData(this,&local_b0);
  if ((uVar19 & 1) == 0) {
    if ((byte)local_b0 < 8) {
      *(undefined8 *)(param_1 + 8) = 0x3f80000000000000;
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 200) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0x3f80000000000000;
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    goto LAB_00a7ed3c;
  }
  lVar18 = (ulong)(byte)local_b0 * 0xf;
  bVar4 = (&ms_aInfo)[lVar18];
  cVar5 = (&DAT_0051f9a5)[lVar18];
  cVar6 = (&DAT_0051f9a6)[lVar18];
  uVar27 = (uint)bVar4 * 2 + 2;
  uVar19 = (ulong)uVar27 & 0xfe;
  bVar7 = (&DAT_0051f9ae)[lVar18];
  uVar24 = (uint)(byte)(&DAT_0051f9ab)[lVar18];
  uVar25 = (uint)(byte)(&DAT_0051f9ac)[lVar18];
  uVar26 = (uint)(byte)(&DAT_0051f9ad)[lVar18];
  if ((0x34UL >> ((ulong)(byte)local_b0 & 0x3f) & 1) == 0) {
    if ((int)uVar19 != 0) {
      uVar28 = 0;
      bVar8 = (&DAT_0051f9a7)[lVar18];
      bVar9 = (&DAT_0051f9a8)[lVar18];
      pbVar22 = (byte *)((ulong)&local_b0 | 7);
      bVar10 = (&DAT_0051f9a9)[lVar18];
      bVar11 = (&DAT_0051f9aa)[lVar18];
      bVar12 = (&DAT_0051f9a2)[lVar18];
      uVar23 = uVar19;
      do {
        uVar30 = 0;
        if ((uVar27 & 0xfe) != 0) {
          uVar30 = uVar28 / uVar19;
        }
        pbVar2 = abStack_94 + uVar30;
        if (bVar8 != uVar24) {
          pbVar22[-3] = *pbVar2 | pbVar22[-3] << 1;
        }
        if (bVar9 != uVar25) {
          pbVar22[-2] = *pbVar2 | pbVar22[-2] << 1;
        }
        if (bVar10 != uVar26) {
          pbVar22[-1] = *pbVar2 | pbVar22[-1] << 1;
        }
        if (bVar11 != bVar7) {
          *pbVar22 = *pbVar2 | *pbVar22 << 1;
        }
        pbVar22 = pbVar22 + 4;
        uVar23 = uVar23 - 1;
        uVar28 = uVar28 + bVar12;
      } while (uVar23 != 0);
      goto LAB_00a7e91c;
    }
  }
  else {
LAB_00a7e91c:
    if ((int)uVar19 != 0) {
      uVar27 = (uint)bVar7;
      puVar20 = (uint *)((ulong)&local_b0 | 4);
      do {
        if (uVar27 == 0) {
          uVar21 = 0xff000000;
        }
        else {
          uVar21 = (uint)*(byte *)((long)puVar20 + 3) << (ulong)(8 - uVar27 & 0x1f);
          uVar21 = ((uVar21 & 0xff) >> (ulong)(uVar27 & 0x1f) | uVar21) << 0x18;
        }
        uVar19 = uVar19 - 1;
        uVar13 = (uint)*(byte *)((long)puVar20 + 1) << (ulong)(8 - uVar25 & 0x1f);
        uVar14 = (uint)*(byte *)puVar20 << (ulong)(8 - uVar24 & 0x1f);
        uVar15 = (uint)*(byte *)((long)puVar20 + 2) << (ulong)(8 - uVar26 & 0x1f);
        *puVar20 = ((uVar14 & 0xff) >> (ulong)(uVar24 & 0x1f) | uVar14) & 0xff |
                   (((uVar13 & 0xff) >> (ulong)(uVar25 & 0x1f) | uVar13) & 0xff) << 8 |
                   (((uVar15 & 0xff) >> (ulong)(uVar26 & 0x1f) | uVar15) & 0xff) << 0x10 | uVar21;
        puVar20 = puVar20 + 1;
      } while (uVar19 != 0);
    }
  }
  bVar7 = cVar5 - 2;
  bVar8 = cVar6 - 2;
  uVar19 = 0;
  do {
    uVar28 = (ulong)(byte)s_aPartitionTable[uVar19 + ((ulong)local_af + (ulong)bVar4 * 0x40) * 0x10]
    ;
    uVar23 = (ulong)((uint)(byte)s_aPartitionTable
                                 [uVar19 + ((ulong)local_af + (ulong)bVar4 * 0x40) * 0x10] << 1 | 1)
    ;
    bVar9 = bVar7;
    if (((byte)local_b0 & 0xfe) == 4) {
      if (local_ad != '\0') {
        if (bVar8 < 3) {
          uVar30 = (ulong)&local_b0 | 4;
          pbVar22 = (byte *)(uVar30 + uVar28 * 8);
          pbVar2 = (byte *)(uVar30 + uVar23 * 4);
          iVar3 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar8] + (ulong)local_7e[uVar19] * 4);
          iVar16 = 0x40 - iVar3;
          uVar27 = iVar3 * (uint)*pbVar2 + iVar16 * (uint)*pbVar22 + 0x20 >> 6;
          uVar24 = iVar3 * (uint)pbVar2[1] + iVar16 * (uint)pbVar22[1] + 0x20 >> 6;
          uVar25 = iVar3 * (uint)pbVar2[2] + iVar16 * (uint)pbVar22[2] + 0x20 >> 6;
        }
        else {
          uVar27 = 0;
          uVar24 = 0;
          uVar25 = 0;
        }
        if (2 < bVar7) goto LAB_00a7ecf0;
        uVar30 = (ulong)local_8e[uVar19];
        goto LAB_00a7ec38;
      }
      if (bVar7 < 3) {
        uVar30 = (ulong)&local_b0 | 4;
        pbVar22 = (byte *)(uVar30 + uVar28 * 8);
        pbVar2 = (byte *)(uVar30 + uVar23 * 4);
        iVar3 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar7] + (ulong)local_8e[uVar19] * 4);
        iVar16 = 0x40 - iVar3;
        uVar27 = iVar3 * (uint)*pbVar2 + iVar16 * (uint)*pbVar22 + 0x20 >> 6;
        uVar24 = iVar3 * (uint)pbVar2[1] + iVar16 * (uint)pbVar22[1] + 0x20 >> 6;
        uVar25 = iVar3 * (uint)pbVar2[2] + iVar16 * (uint)pbVar22[2] + 0x20 >> 6;
      }
      else {
        uVar27 = 0;
        uVar24 = 0;
        uVar25 = 0;
      }
      if (bVar8 < 3) {
        uVar30 = (ulong)local_7e[uVar19];
        bVar9 = bVar8;
        goto LAB_00a7ec38;
      }
LAB_00a7ecf0:
      uVar26 = 0;
    }
    else {
      uVar30 = (ulong)local_8e[uVar19];
      if (2 < bVar7) {
        uVar27 = 0;
        uVar24 = 0;
        uVar25 = 0;
        goto LAB_00a7ecf0;
      }
      uVar29 = (ulong)&local_b0 | 4;
      pbVar22 = (byte *)(uVar29 + uVar28 * 8);
      pbVar2 = (byte *)(uVar29 + uVar23 * 4);
      iVar3 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar7] + uVar30 * 4);
      iVar16 = 0x40 - iVar3;
      uVar27 = iVar3 * (uint)*pbVar2 + iVar16 * (uint)*pbVar22 + 0x20 >> 6;
      uVar24 = iVar3 * (uint)pbVar2[1] + iVar16 * (uint)pbVar22[1] + 0x20 >> 6;
      uVar25 = iVar3 * (uint)pbVar2[2] + iVar16 * (uint)pbVar22[2] + 0x20 >> 6;
LAB_00a7ec38:
      uVar29 = (ulong)&local_b0 | 4;
      uVar26 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + uVar30 * 4) *
               (uint)*(byte *)(uVar29 + uVar23 * 4 + 3) +
               (0x40 - *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + uVar30 * 4)) *
               (uint)*(byte *)(uVar29 + uVar28 * 8 + 3) + 0x20 >> 6;
    }
    uVar21 = uVar25;
    uVar13 = uVar24;
    uVar14 = uVar26;
    if (((local_ae != '\x03') &&
        (uVar21 = uVar24, uVar13 = uVar26, uVar14 = uVar25, local_ae != '\x02')) &&
       (uVar21 = uVar26, uVar13 = uVar24, local_ae == '\x01')) {
      uVar21 = uVar27;
      uVar27 = uVar26;
    }
    uVar28 = uVar19;
    if (param_2) {
      uVar28 = (ulong)(uint)(&s_flipIndices)[uVar19];
    }
    pfVar1 = (float *)(param_1 + uVar28 * 0x10);
    uVar19 = uVar19 + 1;
    *pfVar1 = (float)(ulong)(uVar27 & 0xff) * 0.003921569;
    pfVar1[1] = (float)(ulong)(uVar13 & 0xff) * 0.003921569;
    pfVar1[2] = (float)(ulong)(uVar14 & 0xff) * 0.003921569;
    pfVar1[3] = (float)(ulong)(uVar21 & 0xff) * 0.003921569;
  } while (uVar19 != 0x10);
LAB_00a7ed3c:
  if (*(long *)(lVar17 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


