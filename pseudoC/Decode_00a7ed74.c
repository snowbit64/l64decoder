// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decode
// Entry Point: 00a7ed74
// Size: 1376 bytes
// Signature: undefined __thiscall Decode(D3DX_BC7 * this, LDRColorA * param_1, bool param_2)


/* BC6BC7Util::D3DX_BC7::Decode(BC6BC7Util::LDRColorA*, bool) const */

void __thiscall BC6BC7Util::D3DX_BC7::Decode(D3DX_BC7 *this,LDRColorA *param_1,bool param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  BlockData local_b0;
  byte local_af;
  char local_ae;
  char local_ad;
  byte abStack_94 [6];
  byte local_8e [16];
  byte local_7e [22];
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  uVar16 = ReadBlockData(this,&local_b0);
  if ((uVar16 & 1) == 0) {
    if ((byte)local_b0 < 8) {
      *(undefined8 *)(param_1 + 8) = 0xff000000ff000000;
      *(undefined8 *)param_1 = 0xff000000ff000000;
      *(undefined8 *)(param_1 + 0x18) = 0xff000000ff000000;
      *(undefined8 *)(param_1 + 0x10) = 0xff000000ff000000;
      *(undefined8 *)(param_1 + 0x28) = 0xff000000ff000000;
      *(undefined8 *)(param_1 + 0x20) = 0xff000000ff000000;
      *(undefined8 *)(param_1 + 0x38) = 0xff000000ff000000;
      *(undefined8 *)(param_1 + 0x30) = 0xff000000ff000000;
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
    goto LAB_00a7f2a0;
  }
  lVar15 = (ulong)(byte)local_b0 * 0xf;
  bVar3 = (&ms_aInfo)[lVar15];
  cVar4 = (&DAT_0051f9a5)[lVar15];
  cVar5 = (&DAT_0051f9a6)[lVar15];
  uVar25 = (uint)bVar3 * 2 + 2;
  uVar16 = (ulong)uVar25 & 0xfe;
  bVar6 = (&DAT_0051f9ae)[lVar15];
  uVar22 = (uint)(byte)(&DAT_0051f9ab)[lVar15];
  uVar23 = (uint)(byte)(&DAT_0051f9ac)[lVar15];
  uVar24 = (uint)(byte)(&DAT_0051f9ad)[lVar15];
  if ((0x34UL >> ((ulong)(byte)local_b0 & 0x3f) & 1) == 0) {
    if ((int)uVar16 != 0) {
      uVar26 = 0;
      bVar7 = (&DAT_0051f9a7)[lVar15];
      bVar8 = (&DAT_0051f9a8)[lVar15];
      pbVar19 = (byte *)((ulong)&local_b0 | 7);
      bVar9 = (&DAT_0051f9a9)[lVar15];
      bVar10 = (&DAT_0051f9aa)[lVar15];
      bVar11 = (&DAT_0051f9a2)[lVar15];
      uVar21 = uVar16;
      do {
        uVar28 = 0;
        if ((uVar25 & 0xfe) != 0) {
          uVar28 = uVar26 / uVar16;
        }
        pbVar1 = abStack_94 + uVar28;
        if (bVar7 != uVar22) {
          pbVar19[-3] = *pbVar1 | pbVar19[-3] << 1;
        }
        if (bVar8 != uVar23) {
          pbVar19[-2] = *pbVar1 | pbVar19[-2] << 1;
        }
        if (bVar9 != uVar24) {
          pbVar19[-1] = *pbVar1 | pbVar19[-1] << 1;
        }
        if (bVar10 != bVar6) {
          *pbVar19 = *pbVar1 | *pbVar19 << 1;
        }
        pbVar19 = pbVar19 + 4;
        uVar21 = uVar21 - 1;
        uVar26 = uVar26 + bVar11;
      } while (uVar21 != 0);
      goto LAB_00a7eee4;
    }
  }
  else {
LAB_00a7eee4:
    if ((int)uVar16 != 0) {
      uVar25 = (uint)bVar6;
      puVar17 = (uint *)((ulong)&local_b0 | 4);
      do {
        if (uVar25 == 0) {
          uVar18 = 0xff000000;
        }
        else {
          uVar18 = (uint)*(byte *)((long)puVar17 + 3) << (ulong)(8 - uVar25 & 0x1f);
          uVar18 = ((uVar18 & 0xff) >> (ulong)(uVar25 & 0x1f) | uVar18) << 0x18;
        }
        uVar16 = uVar16 - 1;
        uVar27 = (uint)*(byte *)((long)puVar17 + 1) << (ulong)(8 - uVar23 & 0x1f);
        uVar20 = (uint)*(byte *)puVar17 << (ulong)(8 - uVar22 & 0x1f);
        uVar12 = (uint)*(byte *)((long)puVar17 + 2) << (ulong)(8 - uVar24 & 0x1f);
        *puVar17 = ((uVar20 & 0xff) >> (ulong)(uVar22 & 0x1f) | uVar20) & 0xff |
                   (((uVar27 & 0xff) >> (ulong)(uVar23 & 0x1f) | uVar27) & 0xff) << 8 |
                   (((uVar12 & 0xff) >> (ulong)(uVar24 & 0x1f) | uVar12) & 0xff) << 0x10 | uVar18;
        puVar17 = puVar17 + 1;
      } while (uVar16 != 0);
    }
  }
  bVar6 = cVar4 - 2;
  bVar7 = cVar5 - 2;
  uVar16 = 0;
  do {
    uVar26 = (ulong)(byte)s_aPartitionTable[uVar16 + ((ulong)local_af + (ulong)bVar3 * 0x40) * 0x10]
    ;
    uVar21 = (ulong)((uint)(byte)s_aPartitionTable
                                 [uVar16 + ((ulong)local_af + (ulong)bVar3 * 0x40) * 0x10] << 1 | 1)
    ;
    bVar8 = bVar6;
    if (((byte)local_b0 & 0xfe) == 4) {
      if (local_ad != '\0') {
        if (bVar7 < 3) {
          pbVar19 = (byte *)(((ulong)&local_b0 | 4) + uVar26 * 8);
          pbVar1 = (byte *)(((ulong)&local_b0 | 4) + uVar21 * 4);
          iVar2 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar7] + (ulong)local_7e[uVar16] * 4);
          iVar13 = 0x40 - iVar2;
          uVar25 = iVar2 * (uint)*pbVar1 + iVar13 * (uint)*pbVar19 + 0x20 >> 6;
          uVar22 = iVar2 * (uint)pbVar1[1] + iVar13 * (uint)pbVar19[1] + 0x20 >> 6;
          uVar23 = iVar2 * (uint)pbVar1[2] + iVar13 * (uint)pbVar19[2] + 0x20 >> 6;
        }
        else {
          uVar23 = 0;
          uVar22 = 0;
          uVar25 = 0;
        }
        if (2 < bVar6) goto LAB_00a7f258;
        uVar28 = (ulong)local_8e[uVar16];
        goto LAB_00a7f1cc;
      }
      if (bVar6 < 3) {
        pbVar19 = (byte *)(((ulong)&local_b0 | 4) + uVar26 * 8);
        pbVar1 = (byte *)(((ulong)&local_b0 | 4) + uVar21 * 4);
        iVar2 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar6] + (ulong)local_8e[uVar16] * 4);
        iVar13 = 0x40 - iVar2;
        uVar25 = iVar2 * (uint)*pbVar1 + iVar13 * (uint)*pbVar19 + 0x20 >> 6;
        uVar22 = iVar2 * (uint)pbVar1[1] + iVar13 * (uint)pbVar19[1] + 0x20 >> 6;
        uVar23 = iVar2 * (uint)pbVar1[2] + iVar13 * (uint)pbVar19[2] + 0x20 >> 6;
      }
      else {
        uVar23 = 0;
        uVar22 = 0;
        uVar25 = 0;
      }
      if (bVar7 < 3) {
        uVar28 = (ulong)local_7e[uVar16];
        bVar8 = bVar7;
        goto LAB_00a7f1cc;
      }
LAB_00a7f258:
      uVar24 = 0;
      uVar18 = uVar22;
      uVar27 = uVar24;
      uVar20 = uVar23;
      if (local_ae != '\x03') goto LAB_00a7f204;
LAB_00a7f26c:
      uVar24 = uVar25;
      uVar22 = uVar18;
      uVar23 = uVar27;
      uVar25 = uVar20;
    }
    else {
      uVar28 = (ulong)local_8e[uVar16];
      if (2 < bVar6) {
        uVar23 = 0;
        uVar22 = 0;
        uVar25 = 0;
        goto LAB_00a7f258;
      }
      pbVar19 = (byte *)(((ulong)&local_b0 | 4) + uVar26 * 8);
      pbVar1 = (byte *)(((ulong)&local_b0 | 4) + uVar21 * 4);
      iVar2 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar6] + uVar28 * 4);
      iVar13 = 0x40 - iVar2;
      uVar25 = iVar2 * (uint)*pbVar1 + iVar13 * (uint)*pbVar19 + 0x20 >> 6;
      uVar22 = iVar2 * (uint)pbVar1[1] + iVar13 * (uint)pbVar19[1] + 0x20 >> 6;
      uVar23 = iVar2 * (uint)pbVar1[2] + iVar13 * (uint)pbVar19[2] + 0x20 >> 6;
LAB_00a7f1cc:
      uVar24 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar8] + uVar28 * 4) *
               (uint)*(byte *)(((ulong)&local_b0 | 4) + uVar21 * 4 + 3) +
               (0x40 - *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar8] + uVar28 * 4)) *
               (uint)*(byte *)(((ulong)&local_b0 | 4) + uVar26 * 8 + 3) + 0x20 >> 6;
      uVar18 = uVar22;
      uVar27 = uVar24;
      uVar20 = uVar23;
      if (local_ae == '\x03') goto LAB_00a7f26c;
LAB_00a7f204:
      uVar18 = uVar24;
      uVar27 = uVar23;
      uVar20 = uVar22;
      if ((local_ae == '\x02') || (uVar18 = uVar22, uVar20 = uVar24, local_ae != '\x01'))
      goto LAB_00a7f26c;
    }
    uVar26 = uVar16;
    if (param_2) {
      uVar26 = (ulong)(uint)(&s_flipIndices)[uVar16];
    }
    uVar16 = uVar16 + 1;
    *(uint *)(param_1 + uVar26 * 4) =
         uVar25 << 0x18 | (uVar23 & 0xff) << 0x10 | (uVar22 & 0xff) << 8 | uVar24 & 0xff;
  } while (uVar16 != 0x10);
LAB_00a7f2a0:
  if (*(long *)(lVar14 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


