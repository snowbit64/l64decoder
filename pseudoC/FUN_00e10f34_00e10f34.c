// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e10f34
// Entry Point: 00e10f34
// Size: 976 bytes
// Signature: undefined FUN_00e10f34(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


void FUN_00e10f34(long param_1,int param_2,undefined (*param_3) [16],undefined (*param_4) [16],
                 undefined (*param_5) [16],int *param_6,int param_7,uint param_8,int *param_9)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  float *pfVar7;
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  float *pfVar10;
  long lVar11;
  ulong uVar12;
  undefined (*pauVar13) [16];
  float *pfVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  long *__base;
  double dVar18;
  double dVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  float fVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  float fVar27;
  undefined4 uVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  float fVar31;
  long alStack_70 [2];
  
  lVar1 = tpidr_el0;
  alStack_70[1] = *(long *)(lVar1 + 0x28);
  __base = (long *)((long)alStack_70 -
                   ((-(ulong)(param_8 >> 0x1f) & 0xfffffff800000000 | (ulong)param_8 << 3) + 0xf &
                   0xfffffffffffffff0));
  uVar2 = param_8;
  if (*(int *)(param_1 + 500) != 0) {
    uVar2 = *(int *)(param_1 + 0x1f8) - param_7;
  }
  uVar3 = param_8;
  if ((int)uVar2 <= (int)param_8) {
    uVar3 = uVar2;
  }
  uVar4 = (ulong)uVar3;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  else {
    piVar6 = param_6;
    pauVar8 = param_4;
    pauVar9 = param_5;
    pauVar13 = param_3;
    piVar17 = param_9;
    if (param_6 == (int *)0x0) {
      if (uVar3 < 4) {
        uVar5 = 0;
      }
      else {
        lVar11 = uVar4 * 4;
        uVar5 = 0;
        pauVar8 = (undefined (*) [16])(param_9 + uVar4);
        if (((*param_4 + lVar11 <= param_9 || pauVar8 <= param_4) &&
            (*param_5 + lVar11 <= param_9 || pauVar8 <= param_5)) &&
           (*param_3 + lVar11 <= param_9 || pauVar8 <= param_3)) {
          uVar5 = uVar4 & 0xfffffffc;
          piVar6 = param_9;
          pauVar8 = param_3;
          uVar12 = uVar5;
          pauVar13 = param_4;
          do {
            auVar21 = *pauVar13;
            auVar25 = *pauVar9;
            uVar12 = uVar12 - 4;
            auVar29 = NEON_fcmlt(*pauVar8,0,4);
            auVar30._0_8_ = (long)auVar29._0_4_;
            auVar30._8_8_ = (long)auVar29._4_4_;
            auVar24._0_8_ = (double)(auVar21._0_4_ / auVar25._0_4_);
            auVar24._8_8_ = (double)(auVar21._4_4_ / auVar25._4_4_);
            auVar20._0_8_ = (double)(auVar21._8_4_ / auVar25._8_4_);
            auVar20._8_8_ = (double)(auVar21._12_4_ / auVar25._12_4_);
            auVar25 = NEON_fsqrt(auVar24,8);
            auVar21 = NEON_fsqrt(auVar20,8);
            auVar26._0_8_ = (double)(long)auVar25._0_8_;
            auVar26._8_8_ = (double)(long)auVar25._8_8_;
            auVar25._8_8_ = -auVar26._8_8_;
            auVar25._0_8_ = -auVar26._0_8_;
            auVar25 = NEON_bit(auVar26,auVar25,auVar30,1);
            auVar22._0_8_ = (double)(long)auVar21._0_8_;
            auVar22._8_8_ = (double)(long)auVar21._8_8_;
            auVar21._8_8_ = (long)auVar29._12_4_;
            auVar21._0_8_ = (long)auVar29._8_4_;
            auVar29._8_8_ = -auVar22._8_8_;
            auVar29._0_8_ = -auVar22._0_8_;
            auVar21 = NEON_bit(auVar22,auVar29,auVar21,1);
            piVar6[4] = (int)(long)auVar21._0_8_;
            piVar6[5] = (int)(long)auVar21._8_8_;
            *piVar6 = (int)(long)auVar25._0_8_;
            piVar6[1] = (int)(long)auVar25._8_8_;
            piVar6 = piVar6 + 4;
            pauVar8 = pauVar8 + 1;
            pauVar9 = pauVar9 + 1;
            pauVar13 = pauVar13 + 1;
          } while (uVar12 != 0);
          if (uVar5 == uVar4) goto LAB_00e1108c;
        }
      }
      lVar15 = uVar5 * 4;
      lVar11 = uVar4 - uVar5;
      piVar6 = param_9 + uVar5;
      pfVar7 = (float *)(*param_4 + lVar15);
      pfVar10 = (float *)(*param_5 + lVar15);
      pfVar14 = (float *)(*param_3 + lVar15);
      do {
        dVar19 = -(double)(long)SQRT(*pfVar7 / *pfVar10);
        if (0.0 <= *pfVar14) {
          dVar19 = (double)(long)SQRT(*pfVar7 / *pfVar10);
        }
        lVar11 = lVar11 + -1;
        *piVar6 = (int)dVar19;
        piVar6 = piVar6 + 1;
        pfVar7 = pfVar7 + 1;
        pfVar10 = pfVar10 + 1;
        pfVar14 = pfVar14 + 1;
      } while (lVar11 != 0);
    }
    else {
      do {
        if (*piVar6 == 0) {
          dVar18 = (double)(long)SQRT(*(float *)*pauVar8 / *(float *)*pauVar9);
          dVar19 = -dVar18;
          if (0.0 <= *(float *)*pauVar13) {
            dVar19 = dVar18;
          }
          *piVar17 = (int)dVar19;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 1;
        pauVar8 = (undefined (*) [16])(*pauVar8 + 4);
        pauVar9 = (undefined (*) [16])(*pauVar9 + 4);
        pauVar13 = (undefined (*) [16])(*pauVar13 + 4);
        piVar17 = piVar17 + 1;
      } while (uVar4 != 0);
    }
  }
LAB_00e1108c:
  if ((int)uVar3 < (int)param_8) {
    uVar4 = (ulong)uVar3;
    fVar31 = 0.0;
    uVar2 = 0;
    lVar11 = uVar4 << 2;
    do {
      if ((param_6 == (int *)0x0) || (param_6[uVar4] == 0)) {
        lVar15 = uVar4 * 4;
        fVar23 = *(float *)(*param_5 + lVar15);
        fVar27 = *(float *)(*param_4 + lVar15) / fVar23;
        if ((0.25 <= fVar27) || (param_6 != (int *)0x0 && (long)uVar4 < (long)(param_2 - param_7)))
        {
          dVar19 = -(double)(long)SQRT(fVar27);
          if (0.0 <= *(float *)(*param_3 + lVar15)) {
            dVar19 = (double)(long)SQRT(fVar27);
          }
          iVar16 = (int)dVar19;
          param_9[uVar4] = iVar16;
          *(float *)(*param_4 + lVar15) = fVar23 * (float)(iVar16 * iVar16);
        }
        else {
          fVar31 = fVar31 + fVar27;
          __base[(int)uVar2] = (long)(*param_4 + lVar11);
          uVar2 = uVar2 + 1;
        }
      }
      uVar4 = uVar4 + 1;
      lVar11 = lVar11 + 4;
    } while (param_8 != uVar4);
    if ((uVar2 != 0) && (qsort(__base,(long)(int)uVar2,8,FUN_00e11570), 0 < (int)uVar2)) {
      dVar19 = *(double *)(param_1 + 0x200);
      uVar4 = (ulong)uVar2;
      do {
        while (lVar11 = (*__base - (long)param_4) * 0x40000000 >> 0x20, (double)fVar31 < dVar19) {
          param_9[lVar11] = 0;
          __base = __base + 1;
          uVar4 = uVar4 - 1;
          *(undefined4 *)(*param_4 + lVar11 * 4) = 0;
          if (uVar4 == 0) goto LAB_00e111ec;
        }
        fVar31 = fVar31 + -1.0;
        uVar28 = *(undefined4 *)(*param_5 + lVar11 * 4);
        param_9[lVar11] = (int)(float)(*(uint *)(*param_3 + lVar11 * 4) & 0x80000000 | 0x3f800000);
        __base = __base + 1;
        uVar4 = uVar4 - 1;
        *(undefined4 *)(*param_4 + lVar11 * 4) = uVar28;
      } while (uVar4 != 0);
    }
  }
LAB_00e111ec:
  if (*(long *)(lVar1 + 0x28) != alStack_70[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


