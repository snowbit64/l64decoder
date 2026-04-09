// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeneratePaletteQuantized
// Entry Point: 00a80dfc
// Size: 768 bytes
// Signature: undefined __thiscall GeneratePaletteQuantized(D3DX_BC7 * this, EncodeParams * param_1, ulong param_2, LDREndPntPair * param_3, LDRColorA * param_4)


/* BC6BC7Util::D3DX_BC7::GeneratePaletteQuantized(BC6BC7Util::D3DX_BC7::EncodeParams const*,
   unsigned long, BC6BC7Util::LDREndPntPair const&, BC6BC7Util::LDRColorA*) const */

void __thiscall
BC6BC7Util::D3DX_BC7::GeneratePaletteQuantized
          (D3DX_BC7 *this,EncodeParams *param_1,ulong param_2,LDREndPntPair *param_3,
          LDRColorA *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  EncodeParams EVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  LDRColorA *pLVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  LDRColorA LVar23;
  
  EVar4 = *param_1;
  lVar21 = (ulong)(byte)EVar4 * 0xf;
  pbVar1 = &DAT_0051f9a5 + lVar21;
  if (param_2 != 0) {
    pbVar1 = &DAT_0051f9a6 + lVar21;
  }
  bVar5 = (&DAT_0051f9ab)[lVar21];
  pbVar2 = &DAT_0051f9a6 + lVar21;
  if (param_2 != 0) {
    pbVar2 = &DAT_0051f9a5 + lVar21;
  }
  bVar6 = (&DAT_0051f9ac)[lVar21];
  bVar7 = (&DAT_0051f9ad)[lVar21];
  uVar13 = 8 - bVar5;
  uVar14 = 8 - bVar6;
  bVar8 = *pbVar2;
  uVar15 = 8 - bVar7;
  bVar9 = (&DAT_0051f9ae)[lVar21];
  uVar10 = (uint)(byte)*param_3 << (ulong)(uVar13 & 0x1f);
  uVar11 = (uint)(byte)param_3[1] << (ulong)(uVar14 & 0x1f);
  uVar12 = (uint)(byte)param_3[2] << (ulong)(uVar15 & 0x1f);
  if ((ulong)(byte)EVar4 < 4) {
    uVar19 = 0xff;
  }
  else {
    uVar19 = (uint)(byte)param_3[3] << (ulong)(8 - bVar9 & 0x1f);
    uVar19 = ((uVar19 & 0xff) >> (ulong)(bVar9 & 0x1f) | uVar19) & 0xff;
  }
  uVar13 = (uint)(byte)param_3[4] << (ulong)(uVar13 & 0x1f);
  uVar14 = (uint)(byte)param_3[5] << (ulong)(uVar14 & 0x1f);
  uVar15 = (uint)(byte)param_3[6] << (ulong)(uVar15 & 0x1f);
  if ((byte)EVar4 < 4) {
    uVar20 = 0xff;
  }
  else {
    uVar20 = (uint)(byte)param_3[7] << (ulong)(8 - bVar9 & 0x1f);
    uVar20 = ((uVar20 & 0xff) >> (ulong)(bVar9 & 0x1f) | uVar20) & 0xff;
  }
  lVar21 = 1L << ((ulong)*pbVar1 & 0x3f);
  bVar9 = *pbVar1 - 2;
  uVar10 = ((uVar10 & 0xff) >> (ulong)(bVar5 & 0x1f) | uVar10) & 0xff;
  uVar13 = ((uVar13 & 0xff) >> (ulong)(bVar5 & 0x1f) | uVar13) & 0xff;
  uVar11 = ((uVar11 & 0xff) >> (ulong)(bVar6 & 0x1f) | uVar11) & 0xff;
  uVar14 = ((uVar14 & 0xff) >> (ulong)(bVar6 & 0x1f) | uVar14) & 0xff;
  uVar12 = ((uVar12 & 0xff) >> (ulong)(bVar7 & 0x1f) | uVar12) & 0xff;
  uVar15 = ((uVar15 & 0xff) >> (ulong)(bVar7 & 0x1f) | uVar15) & 0xff;
  if (bVar8 == 0) {
    pLVar18 = param_4 + 1;
    lVar17 = 0;
    do {
      if (bVar9 < 3) {
        iVar3 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + lVar17 * 4);
        iVar16 = 0x40 - iVar3;
        pLVar18[-1] = SUB41(iVar16 * uVar10 + iVar3 * uVar13 + 0x20 >> 6,0);
        *pLVar18 = SUB41(iVar16 * uVar11 + iVar3 * uVar14 + 0x20 >> 6,0);
        pLVar18[1] = SUB41(iVar16 * uVar12 + iVar3 * uVar15 + 0x20 >> 6,0);
        if (bVar9 < 3) goto LAB_00a8104c;
LAB_00a810e8:
        LVar23 = (LDRColorA)0x0;
      }
      else {
        pLVar18[1] = (LDRColorA)0x0;
        *(undefined2 *)(pLVar18 + -1) = 0;
        if (2 < bVar9) goto LAB_00a810e8;
LAB_00a8104c:
        LVar23 = SUB41((0x40 - *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + lVar17 * 4)) *
                       uVar19 + *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + lVar17 * 4) *
                                uVar20 + 0x20 >> 6,0);
      }
      pLVar18[2] = LVar23;
      lVar17 = lVar17 + 1;
      pLVar18 = pLVar18 + 4;
    } while (lVar21 != lVar17);
  }
  else {
    lVar17 = 0;
    pLVar18 = param_4 + 2;
    do {
      if (bVar9 < 3) {
        iVar3 = *(int *)((&PTR_s_aWeights2_00fe4410)[(char)bVar9] + lVar17 * 4);
        iVar16 = 0x40 - iVar3;
        pLVar18[-2] = SUB41(iVar16 * uVar10 + iVar3 * uVar13 + 0x20 >> 6,0);
        pLVar18[-1] = SUB41(iVar16 * uVar11 + iVar3 * uVar14 + 0x20 >> 6,0);
        *pLVar18 = SUB41(iVar16 * uVar12 + iVar3 * uVar15 + 0x20 >> 6,0);
      }
      else {
        *pLVar18 = (LDRColorA)0x0;
        *(undefined2 *)(pLVar18 + -2) = 0;
      }
      lVar17 = lVar17 + 1;
      pLVar18 = pLVar18 + 4;
    } while (lVar21 != lVar17);
    uVar22 = 0;
    pLVar18 = param_4 + 3;
    do {
      if ((byte)(bVar8 - 2) < 3) {
        LVar23 = SUB41((0x40 - *(int *)((&PTR_s_aWeights2_00fe4410)[(char)(bVar8 - 2)] + uVar22 * 4)
                       ) * uVar19 +
                       *(int *)((&PTR_s_aWeights2_00fe4410)[(char)(bVar8 - 2)] + uVar22 * 4) *
                       uVar20 + 0x20 >> 6,0);
      }
      else {
        LVar23 = (LDRColorA)0x0;
      }
      uVar22 = uVar22 + 1;
      *pLVar18 = LVar23;
      pLVar18 = pLVar18 + 4;
    } while (uVar22 >> ((ulong)bVar8 & 0x3f) == 0);
  }
  return;
}


