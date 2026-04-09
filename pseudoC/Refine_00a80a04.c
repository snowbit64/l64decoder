// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Refine
// Entry Point: 00a80a04
// Size: 1016 bytes
// Signature: undefined __thiscall Refine(D3DX_BC7 * this, EncodeParams * param_1, ulong param_2, ulong param_3, ulong param_4)


/* BC6BC7Util::D3DX_BC7::Refine(BC6BC7Util::D3DX_BC7::EncodeParams const*, unsigned long, unsigned
   long, unsigned long) */

float __thiscall
BC6BC7Util::D3DX_BC7::Refine
          (D3DX_BC7 *this,EncodeParams *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  D3DX_BC7 *pDVar1;
  D3DX_BC7 *pDVar2;
  D3DX_BC7 *pDVar3;
  float *pfVar4;
  float *pfVar5;
  EncodeParams EVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  bool bVar18;
  D3DX_BC7 *pDVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  float *pfVar25;
  float *pfVar26;
  ulong uVar27;
  uint *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  LDREndPntPair aLStack_2f8 [24];
  LDREndPntPair aLStack_2e0 [24];
  float local_2c8 [6];
  ulong auStack_2b0 [16];
  ulong local_230 [16];
  ulong auStack_1b0 [16];
  ulong auStack_130 [16];
  LDREndPntPair aLStack_b0 [24];
  LDREndPntPair aLStack_98 [24];
  long local_80;
  
  lVar17 = tpidr_el0;
  local_80 = *(long *)(lVar17 + 0x28);
  EVar6 = *param_1;
  lVar23 = (ulong)(byte)EVar6 * 0xf;
  uVar22 = (ulong)(byte)(&ms_aInfo)[lVar23];
  uVar13 = 8 - (byte)(&DAT_0051f9ae)[lVar23];
  uVar14 = 8 - (byte)(&DAT_0051f9ad)[lVar23];
  uVar15 = 8 - (byte)(&DAT_0051f9ac)[lVar23];
  uVar16 = 8 - (byte)(&DAT_0051f9ab)[lVar23];
  iVar8 = 1 << (ulong)(7 - (byte)(&DAT_0051f9ae)[lVar23] & 0x1f);
  iVar9 = 1 << (ulong)(7 - (byte)(&DAT_0051f9ad)[lVar23] & 0x1f);
  iVar10 = 1 << (ulong)(7 - (byte)(&DAT_0051f9ac)[lVar23] & 0x1f);
  iVar11 = 1 << (ulong)(7 - (byte)(&DAT_0051f9ab)[lVar23] & 0x1f);
  lVar23 = uVar22 + 1;
  pDVar19 = (D3DX_BC7 *)(param_1 + param_2 * 0x18 + 4);
  puVar28 = (uint *)((ulong)aLStack_98 | 4);
  do {
    if ((byte)EVar6 < 4) {
      uVar20 = 0xff000000;
    }
    else {
      uVar20 = (((uint)(byte)*pDVar19 + iVar8 & 0xff) >> (ulong)(uVar13 & 0x1f)) << 0x18;
    }
    uVar12 = ((uint)(byte)pDVar19[-3] + iVar11 & 0xff) >> (ulong)(uVar16 & 0x1f);
    puVar28[-1] = uVar12 & 0xff000000 |
                  uVar12 & 0xff |
                  (((uint)(byte)pDVar19[-2] + iVar10 & 0xff) >> (ulong)(uVar15 & 0x1f) & 0xff) << 8
                  | (((uint)(byte)pDVar19[-1] + iVar9 & 0xff) >> (ulong)(uVar14 & 0x1f) & 0xff) <<
                    0x10 | uVar20;
    if ((byte)EVar6 < 4) {
      uVar20 = 0xff000000;
    }
    else {
      uVar20 = (((uint)(byte)pDVar19[4] + iVar8 & 0xff) >> (ulong)(uVar13 & 0x1f)) << 0x18;
    }
    pDVar1 = pDVar19 + 2;
    lVar23 = lVar23 + -1;
    pDVar2 = pDVar19 + 3;
    pDVar3 = pDVar19 + 1;
    pDVar19 = pDVar19 + 8;
    uVar12 = ((uint)(byte)*pDVar3 + iVar11 & 0xff) >> (ulong)(uVar16 & 0x1f);
    *puVar28 = uVar12 & 0xff000000 |
               uVar12 & 0xff |
               (((uint)(byte)*pDVar1 + iVar10 & 0xff) >> (ulong)(uVar15 & 0x1f) & 0xff) << 8 |
               (((uint)(byte)*pDVar2 + iVar9 & 0xff) >> (ulong)(uVar14 & 0x1f) & 0xff) << 0x10 |
               uVar20;
    puVar28 = puVar28 + 2;
  } while (lVar23 != 0);
  pDVar19 = (D3DX_BC7 *)FixEndpointPBits(pDVar19,param_1,aLStack_98,aLStack_2e0);
  AssignIndices(pDVar19,param_1,param_2,param_4,aLStack_2e0,auStack_130,auStack_1b0,local_2c8 + 3);
  bVar7 = (&ms_aInfo)[(ulong)(byte)*param_1 * 0xf];
  uVar27 = 0;
  do {
    lVar23 = 0;
    uVar24 = 0;
    do {
      uVar21 = uVar24;
      if (uVar27 == (byte)s_aPartitionTable[lVar23 + (param_2 + (ulong)bVar7 * 0x40) * 0x10]) {
        uVar21 = uVar24 + 1;
        *(undefined4 *)((long)local_230 + uVar24 * 4) =
             *(undefined4 *)(param_1 + lVar23 * 4 + 0x601);
      }
      lVar23 = lVar23 + 1;
      uVar24 = uVar21;
    } while (lVar23 != 0x10);
    pDVar19 = (D3DX_BC7 *)
              OptimizeOne(this,param_1,(LDRColorA *)local_230,uVar21,param_4,local_2c8[uVar27 + 3],
                          aLStack_2e0 + uVar27 * 8,aLStack_b0 + uVar27 * 8);
    bVar18 = uVar27 != bVar7;
    uVar27 = uVar27 + 1;
  } while (bVar18);
  pDVar19 = (D3DX_BC7 *)FixEndpointPBits(pDVar19,param_1,aLStack_b0,aLStack_2f8);
  AssignIndices(pDVar19,param_1,param_2,param_4,aLStack_2f8,local_230,auStack_2b0,local_2c8);
  if ((ulong)(byte)EVar6 - 4 < 3) {
    fVar31 = 0.0;
    fVar32 = 0.0;
    uVar24 = 0;
  }
  else {
    fVar31 = 0.0;
    fVar32 = 0.0;
    pfVar25 = local_2c8 + 4;
    pfVar26 = local_2c8 + 1;
    uVar24 = uVar22 + 1 & 0x1fe;
    uVar27 = uVar24;
    do {
      pfVar4 = pfVar25 + -1;
      fVar29 = *pfVar25;
      pfVar5 = pfVar26 + -1;
      fVar30 = *pfVar26;
      pfVar25 = pfVar25 + 2;
      pfVar26 = pfVar26 + 2;
      uVar27 = uVar27 - 2;
      fVar32 = fVar32 + *pfVar4 + fVar29;
      fVar31 = fVar31 + *pfVar5 + fVar30;
    } while (uVar27 != 0);
    if (uVar22 + 1 == uVar24) goto LAB_00a80d64;
  }
  lVar23 = (uVar22 - uVar24) + 1;
  pfVar25 = local_2c8 + uVar24;
  pfVar26 = local_2c8 + uVar24 + 3;
  do {
    lVar23 = lVar23 + -1;
    fVar32 = fVar32 + *pfVar26;
    fVar31 = fVar31 + *pfVar25;
    pfVar25 = pfVar25 + 1;
    pfVar26 = pfVar26 + 1;
  } while (lVar23 != 0);
LAB_00a80d64:
  if (fVar32 <= fVar31) {
    EmitBlock(this,param_1,param_2,param_3,param_4,aLStack_2e0,auStack_130,auStack_1b0);
  }
  else {
    EmitBlock(this,param_1,param_2,param_3,param_4,aLStack_2f8,local_230,auStack_2b0);
    fVar32 = fVar31;
  }
  if (*(long *)(lVar17 + 0x28) == local_80) {
    return fVar32;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


