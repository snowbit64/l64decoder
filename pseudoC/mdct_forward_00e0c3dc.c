// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mdct_forward
// Entry Point: 00e0c3dc
// Size: 1316 bytes
// Signature: undefined mdct_forward(void)


void mdct_forward(uint *param_1,long param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  int *piVar18;
  float *pfVar19;
  float *pfVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined auVar44 [16];
  float fVar45;
  float afStack_60 [2];
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  uVar5 = *param_1;
  uVar1 = (int)uVar5 >> 1;
  pfVar26 = (float *)((long)afStack_60 - ((long)(int)uVar5 * 4 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (int)uVar5 >> 2;
  pfVar10 = *(float **)(param_1 + 2);
  uVar22 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar17 = (long)((ulong)uVar5 << 0x20) >> 0x21;
  pfVar20 = (float *)((long)pfVar26 + uVar22);
  lVar6 = (long)((ulong)uVar5 << 0x20) >> 0x22;
  pfVar13 = (float *)(param_2 + uVar22 + (long)(int)uVar2 * 4);
  pfVar14 = (float *)((long)pfVar10 + uVar22);
  if ((int)uVar5 < 8) {
    uVar22 = 0;
  }
  else {
    lVar21 = (long)((int)uVar5 >> 3);
    pfVar15 = pfVar13 + 1;
    lVar24 = lVar21;
    if (lVar21 < 3) {
      lVar24 = 2;
    }
    pfVar16 = pfVar15;
    if (lVar24 - 1U < 8) {
      uVar22 = 0;
    }
    else {
      lVar3 = lVar21;
      if (lVar21 < 3) {
        lVar3 = 2;
      }
      uVar22 = 0;
      uVar25 = lVar3 - 1U & 0xfffffffffffffffe;
      uVar23 = (lVar3 - 1U) * 2 & 0xfffffffffffffffc;
      pfVar19 = pfVar26 + uVar25 + uVar17 + 2;
      if ((((float *)(param_2 + (uVar23 + lVar6 + uVar17) * 4 + 0x10) <= pfVar20 ||
            pfVar19 <= pfVar15) &&
          ((float *)((param_2 + (lVar6 + uVar17) * 4) - 4) <= pfVar20 ||
           pfVar19 <= (float *)((param_2 + ((lVar6 + uVar17) - uVar23) * 4) - 0x10))) &&
         (pfVar10 <= pfVar26 || pfVar19 <= pfVar10 + (uVar17 - uVar25) + -2)) {
        uVar22 = (lVar24 - 1U >> 1) + 1;
        uVar23 = 4;
        if ((uVar22 & 3) != 0) {
          uVar23 = uVar22 & 3;
        }
        lVar24 = uVar22 - uVar23;
        uVar22 = lVar24 * 2;
        pfVar14 = pfVar14 + lVar24 * -2;
        pfVar16 = pfVar15 + lVar24 * 4;
        pfVar13 = pfVar13 + lVar24 * -4;
        pfVar9 = (float *)(param_2 + (lVar6 + uVar17) * 4 + -0x20);
        pfVar11 = pfVar20;
        pfVar19 = pfVar10 + uVar17;
        do {
          fVar27 = pfVar9[6];
          lVar24 = lVar24 + -4;
          fVar28 = pfVar9[2];
          fVar31 = pfVar9[-2];
          fVar32 = pfVar9[-6];
          fVar33 = *pfVar15;
          fVar34 = pfVar15[2];
          fVar45 = pfVar15[4];
          fVar35 = pfVar15[6];
          fVar29 = pfVar15[8];
          fVar36 = pfVar15[10];
          fVar30 = pfVar15[0xc];
          fVar37 = pfVar15[0xe];
          pfVar15 = pfVar15 + 0x10;
          auVar38._0_4_ = pfVar19[-8];
          auVar39._0_4_ = pfVar19[-7];
          auVar38._4_4_ = pfVar19[-6];
          auVar39._4_4_ = pfVar19[-5];
          auVar38._8_4_ = pfVar19[-4];
          auVar39._8_4_ = pfVar19[-3];
          auVar38._12_4_ = pfVar19[-2];
          auVar39._12_4_ = pfVar19[-1];
          fVar40 = pfVar9[4];
          fVar41 = *pfVar9;
          auVar44 = NEON_rev64(auVar38,4);
          auVar38 = NEON_rev64(auVar39,4);
          fVar42 = pfVar9[-4];
          pfVar12 = pfVar9 + -8;
          auVar39 = NEON_ext(auVar44,auVar44,8,1);
          pfVar9 = pfVar9 + -0x10;
          fVar43 = *pfVar12;
          auVar38 = NEON_ext(auVar38,auVar38,8,1);
          *pfVar11 = (fVar27 + fVar33) * auVar39._0_4_ + auVar38._0_4_ * (fVar40 + fVar34);
          pfVar11[1] = auVar38._0_4_ * -(fVar27 + fVar33) + auVar39._0_4_ * (fVar40 + fVar34);
          pfVar11[2] = (fVar28 + fVar45) * auVar39._4_4_ + auVar38._4_4_ * (fVar41 + fVar35);
          pfVar11[3] = auVar38._4_4_ * -(fVar28 + fVar45) + auVar39._4_4_ * (fVar41 + fVar35);
          pfVar11[4] = (fVar31 + fVar29) * auVar39._8_4_ + auVar38._8_4_ * (fVar42 + fVar36);
          pfVar11[5] = auVar38._8_4_ * -(fVar31 + fVar29) + auVar39._8_4_ * (fVar42 + fVar36);
          pfVar11[6] = (fVar32 + fVar30) * auVar39._12_4_ + auVar38._12_4_ * (fVar43 + fVar37);
          pfVar11[7] = auVar38._12_4_ * -(fVar32 + fVar30) + auVar39._12_4_ * (fVar43 + fVar37);
          pfVar11 = pfVar11 + 8;
          pfVar19 = pfVar19 + -8;
        } while (lVar24 != 0);
      }
    }
    pfVar15 = pfVar14;
    pfVar19 = pfVar13;
    pfVar11 = pfVar26 + uVar22 + uVar17 + 1;
    do {
      pfVar13 = pfVar19 + -4;
      fVar27 = *pfVar13;
      fVar28 = pfVar19[-2];
      uVar22 = uVar22 + 2;
      fVar31 = *pfVar16;
      pfVar14 = pfVar15 + -2;
      fVar32 = pfVar16[2];
      pfVar16 = pfVar16 + 4;
      fVar33 = (float)NEON_fmadd(fVar27 + fVar32,pfVar15[-1],(fVar28 + fVar31) * *pfVar14);
      pfVar11[-1] = fVar33;
      fVar27 = (float)NEON_fmadd(fVar27 + fVar32,*pfVar14,pfVar15[-1] * -(fVar28 + fVar31));
      *pfVar11 = fVar27;
      pfVar15 = pfVar14;
      pfVar19 = pfVar13;
      pfVar11 = pfVar11 + 2;
    } while ((long)uVar22 < lVar21);
  }
  pfVar15 = (float *)(param_2 + 4);
  iVar7 = uVar1 - ((int)uVar5 >> 3);
  if ((int)uVar22 < iVar7) {
    uVar22 = uVar22 & 0xffffffff;
    pfVar13 = pfVar13 + -2;
    pfVar16 = pfVar14;
    do {
      fVar27 = *pfVar13;
      uVar23 = uVar22 & 0xfffffffe;
      fVar28 = *pfVar15;
      fVar33 = pfVar15[2];
      fVar31 = pfVar13[-2];
      pfVar15 = pfVar15 + 4;
      pfVar13 = pfVar13 + -4;
      pfVar14 = pfVar16 + -2;
      fVar32 = (float)NEON_fmadd(fVar31 - fVar33,pfVar16[-1],(fVar27 - fVar28) * *pfVar14);
      pfVar20[uVar22] = fVar32;
      uVar22 = uVar22 + 2;
      fVar27 = (float)NEON_fmadd(fVar31 - fVar33,*pfVar14,pfVar16[-1] * -(fVar27 - fVar28));
      pfVar20[uVar23 + 1] = fVar27;
      pfVar16 = pfVar14;
    } while ((long)uVar22 < (long)iVar7);
  }
  if ((int)uVar22 < (int)uVar1) {
    uVar22 = uVar22 & 0xffffffff;
    pfVar13 = (float *)(param_2 + (long)(int)uVar5 * 4 + -8);
    pfVar14 = pfVar14 + -1;
    do {
      fVar27 = *pfVar13;
      uVar23 = uVar22 & 0xfffffffe;
      fVar28 = *pfVar15;
      fVar31 = pfVar13[-2];
      pfVar13 = pfVar13 + -4;
      fVar32 = pfVar15[2];
      pfVar15 = pfVar15 + 4;
      fVar33 = (float)NEON_fmadd(-fVar31 - fVar32,*pfVar14,(-fVar27 - fVar28) * pfVar14[-1]);
      pfVar20[uVar22] = fVar33;
      uVar22 = uVar22 + 2;
      fVar33 = *pfVar14;
      pfVar16 = pfVar14 + -1;
      pfVar14 = pfVar14 + -2;
      fVar27 = (float)NEON_fmadd(-fVar31 - fVar32,*pfVar16,fVar33 * -(-fVar27 - fVar28));
      pfVar20[uVar23 + 1] = fVar27;
    } while ((long)uVar22 < (long)uVar17);
  }
  FUN_00e0bc80(param_1[1],pfVar10,pfVar20,uVar17 & 0xffffffff);
  lVar6 = *(long *)(param_1 + 2);
  piVar18 = *(int **)(param_1 + 4);
  pfVar13 = pfVar26 + ((int)*param_1 >> 1);
  pfVar20 = (float *)(lVar6 + (long)(int)*param_1 * 4);
  pfVar10 = pfVar13;
  pfVar14 = pfVar26;
  do {
    fVar32 = pfVar13[piVar18[2]];
    fVar27 = (pfVar13 + piVar18[2])[1];
    fVar31 = pfVar13[*piVar18];
    fVar28 = (pfVar13 + *piVar18)[1];
    iVar7 = piVar18[2];
    iVar4 = piVar18[4];
    piVar18 = piVar18 + 4;
    fVar33 = fVar28 - fVar27;
    fVar45 = fVar31 + fVar32;
    fVar27 = (fVar28 + fVar27) * 0.5;
    fVar31 = (fVar31 - fVar32) * 0.5;
    fVar28 = (float)NEON_fmadd(fVar45,*pfVar20,fVar33 * pfVar20[1]);
    fVar32 = (float)NEON_fmadd(fVar45,pfVar20[1],*pfVar20 * -fVar33);
    *pfVar14 = fVar27 + fVar28;
    pfVar10[-2] = fVar27 - fVar28;
    pfVar14[1] = fVar31 + fVar32;
    pfVar10[-1] = fVar32 - fVar31;
    fVar32 = pfVar13[iVar4];
    fVar27 = (pfVar13 + iVar4)[1];
    fVar31 = pfVar13[iVar7];
    fVar28 = (pfVar13 + iVar7)[1];
    pfVar15 = pfVar20 + 2;
    pfVar16 = pfVar20 + 3;
    pfVar20 = pfVar20 + 4;
    fVar33 = fVar28 - fVar27;
    fVar45 = fVar31 + fVar32;
    fVar27 = (fVar28 + fVar27) * 0.5;
    fVar31 = (fVar31 - fVar32) * 0.5;
    fVar28 = (float)NEON_fmadd(fVar45,*pfVar15,fVar33 * *pfVar16);
    fVar32 = (float)NEON_fmadd(fVar45,*pfVar16,*pfVar15 * -fVar33);
    pfVar14[2] = fVar27 + fVar28;
    pfVar15 = pfVar10 + -4;
    *pfVar15 = fVar27 - fVar28;
    pfVar14[3] = fVar31 + fVar32;
    pfVar14 = pfVar14 + 4;
    pfVar10[-3] = fVar32 - fVar31;
    pfVar10 = pfVar15;
  } while (pfVar14 < pfVar15);
  if (3 < (int)uVar5) {
    pfVar20 = param_3 + uVar17;
    pfVar13 = (float *)(lVar6 + uVar17 * 4);
    if ((int)uVar2 < 2) {
      uVar2 = 1;
    }
    uVar17 = (ulong)uVar2;
    do {
      pfVar20 = pfVar20 + -1;
      fVar31 = *pfVar26;
      fVar27 = pfVar26[1];
      uVar17 = uVar17 - 1;
      fVar28 = (float)NEON_fmadd(fVar31,*pfVar13,fVar27 * pfVar13[1]);
      *param_3 = (float)param_1[6] * fVar28;
      fVar28 = *pfVar13;
      pfVar14 = pfVar13 + 1;
      pfVar13 = pfVar13 + 2;
      fVar27 = (float)NEON_fmadd(fVar31,*pfVar14,fVar28 * -fVar27);
      *pfVar20 = (float)param_1[6] * fVar27;
      param_3 = param_3 + 1;
      pfVar26 = pfVar26 + 2;
    } while (uVar17 != 0);
  }
  if (*(long *)(lVar8 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


