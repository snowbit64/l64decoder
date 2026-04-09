// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cullPoints2
// Entry Point: 00f97670
// Size: 1096 bytes
// Signature: undefined __cdecl cullPoints2(int param_1, float * param_2, int param_3, int param_4, int * param_5)


/* cullPoints2(int, float*, int, int, int*) */

void cullPoints2(int param_1,float *param_2,int param_3,int param_4,int *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float fVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  float fVar19;
  ulong uVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined auVar26 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_a8 [4];
  float local_88 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar12 = (ulong)(uint)param_1;
  if (param_1 == 1) {
    uVar25 = *(undefined8 *)param_2;
LAB_00f976d8:
    fVar19 = (float)uVar25;
    fVar24 = (float)((ulong)uVar25 >> 0x20);
  }
  else {
    if (param_1 == 2) {
      uVar25 = CONCAT44(((float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) +
                        (float)((ulong)*(undefined8 *)param_2 >> 0x20)) *
                        SUB164(ZEXT816(0x3f0000003f000000),4),
                        ((float)*(undefined8 *)(param_2 + 2) + (float)*(undefined8 *)param_2) *
                        SUB164(ZEXT816(0x3f0000003f000000),0));
      goto LAB_00f976d8;
    }
    fVar14 = 0.0;
    auVar22 = ZEXT816(0);
    auVar16 = ZEXT816(0);
    uVar9 = param_1 - 1;
    uVar11 = (ulong)uVar9;
    if (uVar9 != 0 && 0 < param_1) {
      if (uVar9 < 9) {
        uVar2 = 0;
        uVar20 = 0;
        fVar14 = 0.0;
        lVar5 = 0;
      }
      else {
        uVar2 = 8;
        if ((uVar9 & 7) != 0) {
          uVar2 = uVar11 & 7;
        }
        lVar5 = uVar11 - uVar2;
        fVar24 = 0.0;
        fVar23 = 0.0;
        fVar19 = 0.0;
        fVar27 = 0.0;
        fVar14 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        pfVar10 = param_2 + 8;
        lVar7 = lVar5;
        auVar16 = ZEXT816(0);
        auVar22 = ZEXT816(0);
        auVar18 = ZEXT816(0);
        do {
          lVar7 = lVar7 + -8;
          fVar35 = -(pfVar10[-7] * pfVar10[-6]) + pfVar10[-8] * pfVar10[-5];
          fVar36 = -(pfVar10[-5] * pfVar10[-4]) + pfVar10[-6] * pfVar10[-3];
          fVar37 = -(pfVar10[-3] * pfVar10[-2]) + pfVar10[-4] * pfVar10[-1];
          fVar38 = -(pfVar10[-1] * *pfVar10) + pfVar10[-2] * pfVar10[1];
          fVar39 = -(pfVar10[1] * pfVar10[2]) + *pfVar10 * pfVar10[3];
          fVar40 = -(pfVar10[3] * pfVar10[4]) + pfVar10[2] * pfVar10[5];
          fVar41 = -(pfVar10[5] * pfVar10[6]) + pfVar10[4] * pfVar10[7];
          fVar42 = -(pfVar10[7] * pfVar10[8]) + pfVar10[6] * pfVar10[9];
          fVar24 = fVar24 + (pfVar10[-6] + pfVar10[-8]) * fVar35;
          fVar23 = fVar23 + (pfVar10[-4] + pfVar10[-6]) * fVar36;
          fVar19 = fVar19 + (pfVar10[-2] + pfVar10[-4]) * fVar37;
          fVar27 = fVar27 + (*pfVar10 + pfVar10[-2]) * fVar38;
          fVar14 = fVar35 + fVar14;
          fVar28 = fVar36 + fVar28;
          fVar29 = fVar37 + fVar29;
          fVar30 = fVar38 + fVar30;
          fVar31 = fVar39 + fVar31;
          fVar32 = fVar40 + fVar32;
          fVar33 = fVar41 + fVar33;
          fVar34 = fVar42 + fVar34;
          auVar26._0_4_ = auVar18._0_4_ + (pfVar10[2] + *pfVar10) * fVar39;
          auVar26._4_4_ = auVar18._4_4_ + (pfVar10[4] + pfVar10[2]) * fVar40;
          auVar26._8_4_ = auVar18._8_4_ + (pfVar10[6] + pfVar10[4]) * fVar41;
          auVar26._12_4_ = auVar18._12_4_ + (pfVar10[8] + pfVar10[6]) * fVar42;
          auVar15._0_4_ = auVar16._0_4_ + (pfVar10[-7] + pfVar10[-5]) * fVar35;
          auVar15._4_4_ = auVar16._4_4_ + (pfVar10[-5] + pfVar10[-3]) * fVar36;
          auVar15._8_4_ = auVar16._8_4_ + (pfVar10[-3] + pfVar10[-1]) * fVar37;
          auVar15._12_4_ = auVar16._12_4_ + (pfVar10[-1] + pfVar10[1]) * fVar38;
          auVar21._0_4_ = auVar22._0_4_ + (pfVar10[1] + pfVar10[3]) * fVar39;
          auVar21._4_4_ = auVar22._4_4_ + (pfVar10[3] + pfVar10[5]) * fVar40;
          auVar21._8_4_ = auVar22._8_4_ + (pfVar10[5] + pfVar10[7]) * fVar41;
          auVar21._12_4_ = auVar22._12_4_ + (pfVar10[7] + pfVar10[9]) * fVar42;
          pfVar10 = pfVar10 + 0x10;
          auVar16 = auVar15;
          auVar22 = auVar21;
          auVar18 = auVar26;
        } while (lVar7 != 0);
        fVar14 = fVar31 + fVar14 + fVar32 + fVar28 + fVar33 + fVar29 + fVar34 + fVar30;
        uVar20 = (ulong)(uint)(auVar26._0_4_ + fVar24 + auVar26._4_4_ + fVar23 +
                              auVar26._8_4_ + fVar19 + auVar26._12_4_ + fVar27);
        uVar2 = (ulong)(uint)(auVar21._0_4_ + auVar15._0_4_ + auVar21._4_4_ + auVar15._4_4_ +
                             auVar21._8_4_ + auVar15._8_4_ + auVar21._12_4_ + auVar15._12_4_);
      }
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar20;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar2;
      lVar7 = uVar11 - lVar5;
      pfVar10 = param_2 + lVar5 * 2;
      do {
        fVar24 = pfVar10[2];
        lVar7 = lVar7 + -1;
        fVar23 = (float)NEON_fnmsub(pfVar10[3],*pfVar10,pfVar10[1] * fVar24);
        fVar14 = fVar23 + fVar14;
        auVar22._0_4_ = NEON_fmadd(fVar23,fVar24 + *pfVar10,auVar22._0_4_);
        auVar16._0_4_ = NEON_fmadd(fVar23,pfVar10[1] + pfVar10[3],auVar16._0_4_);
        pfVar10 = pfVar10 + 2;
      } while (lVar7 != 0);
    }
    fVar23 = (float)NEON_fnmsub(param_2[1],param_2[(long)(param_1 << 1) + -2],
                                param_2[(long)param_1 * 2 + -1] * *param_2);
    fVar24 = 0.3333333 / (fVar23 + fVar14);
    if (ABS(fVar23 + fVar14) <= 1.192093e-07) {
      fVar24 = 1e+18;
    }
    if (param_1 < 1) {
      *(undefined4 *)((long)local_a8 + (long)param_4 * 4) = 0;
      piVar4 = param_5 + 1;
      *param_5 = param_4;
      if (param_3 < 2) goto LAB_00f97a80;
      if (param_3 - 2U < 7) {
        uVar9 = 1;
LAB_00f97a68:
        iVar8 = param_3 - uVar9;
        do {
          iVar8 = iVar8 + -1;
          *piVar4 = param_4;
          piVar4 = piVar4 + 1;
        } while (iVar8 != 0);
      }
      else {
        uVar12 = (ulong)(param_3 - 2U) + 1;
        puVar6 = (undefined8 *)(param_5 + 5);
        uVar2 = uVar12 & 0x1fffffff8;
        auVar18._0_8_ = CONCAT44(param_4,param_4);
        auVar18._8_4_ = param_4;
        auVar18._12_4_ = param_4;
        uVar11 = uVar2;
        do {
          puVar6[-1] = auVar18._8_8_;
          puVar6[-2] = auVar18._0_8_;
          puVar6[1] = auVar18._8_8_;
          *puVar6 = auVar18._0_8_;
          uVar11 = uVar11 - 8;
          puVar6 = puVar6 + 4;
        } while (uVar11 != 0);
        if (uVar12 != uVar2) {
          piVar4 = piVar4 + uVar2;
          uVar9 = (uint)uVar2 | 1;
          goto LAB_00f97a68;
        }
      }
      *(undefined4 *)((long)local_a8 + (long)param_4 * 4) = 0;
      goto LAB_00f97a80;
    }
    fVar19 = (float)NEON_fmadd(fVar23,*param_2 + param_2[(long)(param_1 << 1) + -2],auVar22._0_4_);
    fVar14 = (float)NEON_fmadd(fVar23,param_2[(long)param_1 * 2 + -1] + param_2[1],auVar16._0_4_);
    fVar19 = fVar24 * fVar19;
    fVar24 = fVar24 * fVar14;
  }
  pfVar10 = param_2 + 1;
  pfVar13 = local_88;
  uVar11 = uVar12;
  do {
    fVar14 = atan2f(*pfVar10 - fVar24,pfVar10[-1] - fVar19);
    uVar11 = uVar11 - 1;
    pfVar10 = pfVar10 + 2;
    *pfVar13 = fVar14;
    pfVar13 = pfVar13 + 1;
  } while (uVar11 != 0);
  if ((uint)param_1 < 8) {
    uVar2 = 0;
LAB_00f97904:
    lVar7 = uVar12 - uVar2;
    puVar3 = (undefined4 *)((long)local_a8 + uVar2 * 4);
    do {
      lVar7 = lVar7 + -1;
      *puVar3 = 1;
      puVar3 = puVar3 + 1;
    } while (lVar7 != 0);
  }
  else {
    uVar2 = uVar12 & 0xfffffff8;
    auVar17._8_4_ = 1;
    auVar17._0_8_ = 0x100000001;
    auVar17._12_4_ = 1;
    puVar6 = local_a8 + 2;
    uVar11 = uVar2;
    do {
      puVar6[-1] = auVar17._8_8_;
      puVar6[-2] = 0x100000001;
      puVar6[1] = auVar17._8_8_;
      *puVar6 = 0x100000001;
      uVar11 = uVar11 - 8;
      puVar6 = puVar6 + 4;
    } while (uVar11 != 0);
    if (uVar2 != uVar12) goto LAB_00f97904;
  }
  *param_5 = param_4;
  *(undefined4 *)((long)local_a8 + (long)param_4 * 4) = 0;
  if (1 < param_3) {
    fVar14 = local_88[param_4];
    iVar8 = 1;
    do {
      uVar11 = 0;
      param_5 = param_5 + 1;
      *param_5 = param_4;
      fVar23 = fVar14 + ((float)iVar8 * 6.283185) / (float)param_3;
      fVar24 = fVar23 + -6.283185;
      if (fVar23 <= 3.141593) {
        fVar24 = fVar23;
      }
      fVar23 = 1e+09;
      uVar2 = (ulong)(uint)param_4;
      do {
        if (*(int *)((long)local_a8 + uVar11 * 4) != 0) {
          fVar27 = ABS(local_88[uVar11] - fVar24);
          fVar19 = 6.283185 - fVar27;
          if (fVar27 <= 3.141593) {
            fVar19 = fVar27;
          }
          if (fVar19 < fVar23) {
            uVar2 = uVar11 & 0xffffffff;
            *param_5 = (int)uVar11;
            fVar23 = fVar19;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar12 != uVar11);
      iVar8 = iVar8 + 1;
      *(undefined4 *)((long)local_a8 + (long)(int)uVar2 * 4) = 0;
    } while (iVar8 != param_3);
  }
LAB_00f97a80:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


