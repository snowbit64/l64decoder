// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignIndices
// Entry Point: 00a820d4
// Size: 1636 bytes
// Signature: undefined __thiscall AssignIndices(D3DX_BC7 * this, EncodeParams * param_1, ulong param_2, ulong param_3, LDREndPntPair * param_4, ulong * param_5, ulong * param_6, float * param_7)


/* BC6BC7Util::D3DX_BC7::AssignIndices(BC6BC7Util::D3DX_BC7::EncodeParams const*, unsigned long,
   unsigned long, BC6BC7Util::LDREndPntPair*, unsigned long*, unsigned long*, float*) const */

void __thiscall
BC6BC7Util::D3DX_BC7::AssignIndices
          (D3DX_BC7 *this,EncodeParams *param_1,ulong param_2,ulong param_3,LDREndPntPair *param_4,
          ulong *param_5,ulong *param_6,float *param_7)

{
  byte bVar1;
  byte bVar2;
  LDREndPntPair LVar3;
  undefined2 uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  LDREndPntPair *pLVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  EncodeParams *pEVar15;
  long lVar16;
  LDRColorA *pLVar17;
  byte *pbVar18;
  float fVar19;
  undefined8 uVar20;
  LDRColorA aLStack_130 [192];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pLVar17 = aLStack_130;
  lVar16 = (ulong)(byte)*param_1 * 0xf;
  uVar10 = (ulong)(byte)(&ms_aInfo)[lVar16];
  pbVar18 = &DAT_0051f9a6 + lVar16;
  pbVar6 = &DAT_0051f9a5 + lVar16;
  if (param_3 != 0) {
    pbVar18 = &DAT_0051f9a5 + lVar16;
    pbVar6 = &DAT_0051f9a6 + lVar16;
  }
  lVar16 = uVar10 + 1;
  bVar1 = *pbVar6;
  bVar2 = *pbVar18;
  uVar8 = 1L << ((ulong)bVar1 & 0x3f);
  uVar7 = 1L << ((ulong)bVar2 & 0x3f);
  uVar9 = uVar8 >> 1 & 0x7f;
  pLVar11 = param_4;
  pfVar14 = param_7;
  do {
    this = (D3DX_BC7 *)GeneratePaletteQuantized(this,param_1,param_3,pLVar11,pLVar17);
    lVar16 = lVar16 + -1;
    pLVar11 = pLVar11 + 8;
    pLVar17 = pLVar17 + 0x40;
    *pfVar14 = 0.0;
    pfVar14 = pfVar14 + 1;
  } while (lVar16 != 0);
  lVar16 = 0;
  pEVar15 = param_1 + 0x601;
  pbVar18 = s_aPartitionTable + (param_2 + uVar10 * 0x40) * 0x10;
  do {
    uVar12 = (ulong)*pbVar18;
    fVar19 = (float)ComputeError((LDRColorA *)pEVar15,aLStack_130 + uVar12 * 0x40,bVar1,bVar2,
                                 (ulong *)((long)param_5 + lVar16),(ulong *)((long)param_6 + lVar16)
                                );
    lVar16 = lVar16 + 8;
    pEVar15 = (EncodeParams *)((LDRColorA *)pEVar15 + 4);
    param_7[uVar12] = fVar19 + param_7[uVar12];
    pbVar18 = pbVar18 + 1;
  } while (lVar16 != 0x80);
  uVar12 = 0;
  lVar16 = (long)(int)(((uint)uVar8 & 0xff) - 1);
  if (bVar2 == 0) {
    pbVar18 = s_aPartitionTable + param_2 * 0x10 + uVar10 * 0x400;
    do {
      if ((param_5[(byte)s_aFixUp[uVar12 + param_2 * 3 + uVar10 * 0xc0]] & uVar9) != 0) {
        bVar1 = *pbVar18;
        uVar20 = NEON_rev64(*(undefined8 *)(param_4 + uVar12 * 8),4);
        *(undefined8 *)(param_4 + uVar12 * 8) = uVar20;
        if (uVar12 == bVar1) {
          *param_5 = lVar16 - *param_5;
        }
        if (uVar12 == pbVar18[1]) {
          param_5[1] = lVar16 - param_5[1];
        }
        if (uVar12 == pbVar18[2]) {
          param_5[2] = lVar16 - param_5[2];
        }
        if (uVar12 == pbVar18[3]) {
          param_5[3] = lVar16 - param_5[3];
        }
        if (uVar12 == pbVar18[4]) {
          param_5[4] = lVar16 - param_5[4];
        }
        if (uVar12 == pbVar18[5]) {
          param_5[5] = lVar16 - param_5[5];
        }
        if (uVar12 == pbVar18[6]) {
          param_5[6] = lVar16 - param_5[6];
        }
        if (uVar12 == pbVar18[7]) {
          param_5[7] = lVar16 - param_5[7];
        }
        if (uVar12 == pbVar18[8]) {
          param_5[8] = lVar16 - param_5[8];
        }
        if (uVar12 == pbVar18[9]) {
          param_5[9] = lVar16 - param_5[9];
        }
        if (uVar12 == pbVar18[10]) {
          param_5[10] = lVar16 - param_5[10];
        }
        if (uVar12 == pbVar18[0xb]) {
          param_5[0xb] = lVar16 - param_5[0xb];
        }
        if (uVar12 == pbVar18[0xc]) {
          param_5[0xc] = lVar16 - param_5[0xc];
        }
        if (uVar12 == pbVar18[0xd]) {
          param_5[0xd] = lVar16 - param_5[0xd];
        }
        if (uVar12 == pbVar18[0xe]) {
          param_5[0xe] = lVar16 - param_5[0xe];
        }
        if (uVar12 == pbVar18[0xf]) {
          param_5[0xf] = lVar16 - param_5[0xf];
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar10 + 1 != uVar12);
  }
  else {
    pbVar18 = s_aPartitionTable + param_2 * 0x10 + uVar10 * 0x400;
    lVar13 = (long)(int)(((uint)uVar7 & 0xff) - 1);
    pLVar11 = param_4 + 3;
    do {
      if ((param_5[(byte)s_aFixUp[uVar12 + param_2 * 3 + uVar10 * 0xc0]] & uVar9) != 0) {
        bVar1 = *pbVar18;
        LVar3 = pLVar11[-3];
        pLVar11[-3] = pLVar11[1];
        uVar4 = *(undefined2 *)(pLVar11 + -2);
        pLVar11[1] = LVar3;
        *(undefined2 *)(pLVar11 + -2) = *(undefined2 *)(pLVar11 + 2);
        *(undefined2 *)(pLVar11 + 2) = uVar4;
        if (uVar12 == bVar1) {
          *param_5 = lVar16 - *param_5;
        }
        if (uVar12 == pbVar18[1]) {
          param_5[1] = lVar16 - param_5[1];
        }
        if (uVar12 == pbVar18[2]) {
          param_5[2] = lVar16 - param_5[2];
        }
        if (uVar12 == pbVar18[3]) {
          param_5[3] = lVar16 - param_5[3];
        }
        if (uVar12 == pbVar18[4]) {
          param_5[4] = lVar16 - param_5[4];
        }
        if (uVar12 == pbVar18[5]) {
          param_5[5] = lVar16 - param_5[5];
        }
        if (uVar12 == pbVar18[6]) {
          param_5[6] = lVar16 - param_5[6];
        }
        if (uVar12 == pbVar18[7]) {
          param_5[7] = lVar16 - param_5[7];
        }
        if (uVar12 == pbVar18[8]) {
          param_5[8] = lVar16 - param_5[8];
        }
        if (uVar12 == pbVar18[9]) {
          param_5[9] = lVar16 - param_5[9];
        }
        if (uVar12 == pbVar18[10]) {
          param_5[10] = lVar16 - param_5[10];
        }
        if (uVar12 == pbVar18[0xb]) {
          param_5[0xb] = lVar16 - param_5[0xb];
        }
        if (uVar12 == pbVar18[0xc]) {
          param_5[0xc] = lVar16 - param_5[0xc];
        }
        if (uVar12 == pbVar18[0xd]) {
          param_5[0xd] = lVar16 - param_5[0xd];
        }
        if (uVar12 == pbVar18[0xe]) {
          param_5[0xe] = lVar16 - param_5[0xe];
        }
        if (uVar12 == pbVar18[0xf]) {
          param_5[0xf] = lVar16 - param_5[0xf];
        }
      }
      if ((*param_6 & uVar7 >> 1 & 0x7f) != 0) {
        LVar3 = *pLVar11;
        *pLVar11 = pLVar11[4];
        pLVar11[4] = LVar3;
        param_6[1] = lVar13 - param_6[1];
        *param_6 = lVar13 - *param_6;
        param_6[3] = lVar13 - param_6[3];
        param_6[2] = lVar13 - param_6[2];
        param_6[5] = lVar13 - param_6[5];
        param_6[4] = lVar13 - param_6[4];
        param_6[7] = lVar13 - param_6[7];
        param_6[6] = lVar13 - param_6[6];
        param_6[9] = lVar13 - param_6[9];
        param_6[8] = lVar13 - param_6[8];
        param_6[0xb] = lVar13 - param_6[0xb];
        param_6[10] = lVar13 - param_6[10];
        param_6[0xd] = lVar13 - param_6[0xd];
        param_6[0xc] = lVar13 - param_6[0xc];
        param_6[0xf] = lVar13 - param_6[0xf];
        param_6[0xe] = lVar13 - param_6[0xe];
      }
      uVar12 = uVar12 + 1;
      pLVar11 = pLVar11 + 8;
    } while (uVar10 + 1 != uVar12);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


