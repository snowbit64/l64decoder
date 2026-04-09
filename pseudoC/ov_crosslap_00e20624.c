// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_crosslap
// Entry Point: 00e20624
// Size: 1240 bytes
// Signature: undefined ov_crosslap(void)


void ov_crosslap(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  uint uVar25;
  ulong uVar26;
  undefined4 *puVar27;
  undefined *puVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong auStack_80 [4];
  
  lVar3 = tpidr_el0;
  auStack_80[3] = *(long *)(lVar3 + 0x28);
  if (param_1 == param_2) {
LAB_00e209f0:
    uVar7 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x80);
    if ((iVar6 < 2) || (*(int *)(param_2 + 0x80) < 2)) {
      uVar7 = 0xffffff7d;
    }
    else {
      while (iVar6 != 4) {
        uVar7 = FUN_00e1f850(param_1,0);
        if (((int)uVar7 < 0) && ((int)uVar7 != -3)) goto LAB_00e209f4;
        iVar6 = *(int *)(param_1 + 0x80);
      }
      lVar14 = param_2 + 0x240;
      do {
        if ((*(int *)(param_2 + 0x80) == 4) &&
           (iVar6 = vorbis_synthesis_pcmout(lVar14,0), iVar6 != 0)) {
          if (*(int *)(param_1 + 8) == 0) {
            lVar8 = *(long *)(param_1 + 0x68);
            lVar17 = lVar8;
          }
          else {
            lVar8 = *(long *)(param_1 + 0x68);
            lVar17 = lVar8;
            if (2 < *(int *)(param_1 + 0x80)) {
              lVar17 = lVar8 + (long)*(int *)(param_1 + 0x90) * 0x38;
            }
          }
          if (*(int *)(param_2 + 8) == 0) {
            lVar21 = *(long *)(param_2 + 0x68);
            lVar31 = lVar21;
          }
          else {
            lVar21 = *(long *)(param_2 + 0x68);
            lVar31 = lVar21;
            if (2 < *(int *)(param_2 + 0x80)) {
              lVar31 = lVar21 + (long)*(int *)(param_2 + 0x90) * 0x38;
            }
          }
          if (lVar8 == 0) {
            uVar29 = 0xffffff7e;
            if (lVar21 != 0) goto LAB_00e20758;
LAB_00e20770:
            uVar30 = 0xffffff7e;
          }
          else {
            iVar6 = vorbis_synthesis_halfrate_p();
            lVar21 = *(long *)(param_2 + 0x68);
            uVar29 = iVar6 + 1;
            if (lVar21 == 0) goto LAB_00e20770;
LAB_00e20758:
            iVar6 = vorbis_synthesis_halfrate_p(lVar21);
            uVar30 = iVar6 + 1;
          }
          lVar8 = -((long)*(int *)(lVar17 + 4) * 8 + 0xfU & 0xfffffffffffffff0);
          puVar28 = (undefined *)((long)auStack_80 + lVar8);
          iVar6 = vorbis_info_blocksize(lVar17,0);
          uVar29 = iVar6 >> (uVar29 & 0x1f);
          auStack_80[1] = lVar31;
          iVar6 = vorbis_info_blocksize(lVar31,0);
          uVar30 = iVar6 >> (uVar30 & 0x1f);
          uVar9 = vorbis_window(param_1 + 0x240,0);
          uVar10 = vorbis_window(lVar14,0);
          uVar25 = *(uint *)(lVar17 + 4);
          uVar22 = (ulong)uVar25;
          if ((int)uVar25 < 1) goto LAB_00e20868;
          if (uVar25 != 1) {
            uVar23 = uVar22 & 0xfffffffe;
            puVar15 = (undefined8 *)((long)auStack_80 + lVar8 + 8);
            uVar26 = (long)(int)uVar29 * 4 + 0xfU & 0xfffffffffffffff0;
            puVar24 = puVar28;
            uVar11 = uVar23;
            do {
              lVar8 = (long)puVar24 - uVar26;
              puVar24 = (undefined *)(lVar8 - uVar26);
              puVar15[-1] = lVar8;
              *puVar15 = puVar24;
              puVar15 = puVar15 + 2;
              uVar11 = uVar11 - 2;
            } while (uVar11 != 0);
            if (uVar23 != uVar22) {
LAB_00e20840:
              lVar8 = uVar22 - uVar23;
              puVar15 = (undefined8 *)(puVar28 + uVar23 * 8);
              do {
                puVar24 = puVar24 + -((long)(int)uVar29 * 4 + 0xfU & 0xfffffffffffffff0);
                lVar8 = lVar8 + -1;
                *puVar15 = puVar24;
                puVar15 = puVar15 + 1;
              } while (lVar8 != 0);
            }
LAB_00e20868:
            FUN_00e20afc(param_1,lVar17,param_1 + 0x240,puVar28,uVar29);
            vorbis_synthesis_lapout(lVar14,auStack_80 + 2);
            uVar25 = 0;
            uVar2 = uVar30;
            if ((int)uVar29 <= (int)uVar30) {
              uVar2 = uVar29;
            }
            uVar22 = (ulong)uVar2;
            if ((int)uVar29 <= (int)uVar30) {
              uVar10 = uVar9;
            }
            iVar6 = *(int *)(auStack_80[1] + 4);
            uVar29 = *(int *)(lVar17 + 4) - 1;
            if ((*(int *)(lVar17 + 4) < 1) || (iVar6 < 1)) {
LAB_00e20a24:
              uVar7 = 0;
              if (((int)uVar2 < 1) || (iVar6 <= (int)uVar25)) break;
              uVar9 = (ulong)uVar25;
              uVar23 = uVar22 & 0xfffffff8;
              do {
                uVar11 = *(ulong *)(auStack_80[2] + uVar9 * 8);
                if ((uVar2 < 8) ||
                   ((uVar11 < uVar10 + uVar22 * 4 && (uVar10 < uVar11 + uVar22 * 4)))) {
                  uVar26 = 0;
LAB_00e20a80:
                  lVar14 = uVar22 - uVar26;
                  pfVar12 = (float *)(uVar10 + uVar26 * 4);
                  pfVar18 = (float *)(uVar11 + uVar26 * 4);
                  do {
                    lVar14 = lVar14 + -1;
                    *pfVar18 = *pfVar18 * *pfVar12 * *pfVar12;
                    pfVar12 = pfVar12 + 1;
                    pfVar18 = pfVar18 + 1;
                  } while (lVar14 != 0);
                }
                else {
                  puVar15 = (undefined8 *)(uVar11 + 0x10);
                  uVar26 = uVar23;
                  puVar16 = (undefined8 *)(uVar10 + 0x10);
                  do {
                    auVar32 = *(undefined (*) [16])(puVar16 + -2);
                    puVar20 = puVar16 + 1;
                    uVar7 = *puVar16;
                    puVar16 = puVar16 + 4;
                    uVar26 = uVar26 - 8;
                    fVar34 = (float)uVar7;
                    fVar36 = (float)((ulong)uVar7 >> 0x20);
                    fVar37 = (float)*puVar20;
                    fVar38 = (float)((ulong)*puVar20 >> 0x20);
                    auVar33._0_8_ =
                         CONCAT44((float)((ulong)puVar15[-2] >> 0x20) *
                                  auVar32._4_4_ * auVar32._4_4_,
                                  (float)puVar15[-2] * auVar32._0_4_ * auVar32._0_4_);
                    auVar33._8_4_ = (float)puVar15[-1] * auVar32._8_4_ * auVar32._8_4_;
                    auVar33._12_4_ =
                         (float)((ulong)puVar15[-1] >> 0x20) * auVar32._12_4_ * auVar32._12_4_;
                    puVar15[-1] = auVar33._8_8_;
                    puVar15[-2] = auVar33._0_8_;
                    puVar15[1] = CONCAT44((float)((ulong)puVar15[1] >> 0x20) * fVar38 * fVar38,
                                          (float)puVar15[1] * fVar37 * fVar37);
                    *puVar15 = CONCAT44((float)((ulong)*puVar15 >> 0x20) * fVar36 * fVar36,
                                        (float)*puVar15 * fVar34 * fVar34);
                    puVar15 = puVar15 + 4;
                  } while (uVar26 != 0);
                  uVar26 = uVar23;
                  if (uVar23 != uVar22) goto LAB_00e20a80;
                }
                uVar7 = 0;
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < iVar6);
              break;
            }
            uVar25 = iVar6 - 1U;
            if (uVar29 <= iVar6 - 1U) {
              uVar25 = uVar29;
            }
            if (0 < (int)uVar2) {
              auVar32 = NEON_fmov(0x3f800000,4);
              uVar9 = 0;
              uVar25 = uVar25 + 1;
              uVar23 = uVar22 & 0xfffffff8;
              do {
                uVar11 = *(ulong *)(puVar28 + uVar9 * 8);
                uVar26 = *(ulong *)(auStack_80[2] + uVar9 * 8);
                if (uVar2 < 8) {
                  uVar13 = 0;
LAB_00e2090c:
                  lVar17 = uVar13 * 4;
                  lVar14 = uVar22 - uVar13;
                  pfVar12 = (float *)(uVar11 + lVar17);
                  pfVar18 = (float *)(uVar10 + lVar17);
                  puVar27 = (undefined4 *)(uVar26 + lVar17);
                  do {
                    lVar14 = lVar14 + -1;
                    fVar34 = *pfVar18 * *pfVar18;
                    uVar35 = NEON_fmadd(*puVar27,fVar34,*pfVar12 * (1.0 - fVar34));
                    *puVar27 = uVar35;
                    pfVar12 = pfVar12 + 1;
                    pfVar18 = pfVar18 + 1;
                    puVar27 = puVar27 + 1;
                  } while (lVar14 != 0);
                }
                else {
                  uVar19 = uVar26 + uVar22 * 4;
                  uVar13 = 0;
                  if ((uVar26 < uVar10 + uVar22 * 4 && uVar10 < uVar19) ||
                     (uVar26 < uVar11 + uVar22 * 4 && uVar11 < uVar19)) goto LAB_00e2090c;
                  puVar15 = (undefined8 *)(uVar26 + 0x10);
                  puVar16 = (undefined8 *)(uVar11 + 0x10);
                  uVar19 = uVar23;
                  puVar20 = (undefined8 *)(uVar10 + 0x10);
                  do {
                    puVar1 = puVar20 + -2;
                    puVar4 = puVar20 + -1;
                    puVar5 = puVar20 + 1;
                    uVar7 = *puVar20;
                    puVar20 = puVar20 + 4;
                    uVar19 = uVar19 - 8;
                    fVar34 = (float)*puVar1;
                    fVar36 = (float)((ulong)*puVar1 >> 0x20);
                    fVar34 = fVar34 * fVar34;
                    fVar36 = fVar36 * fVar36;
                    fVar37 = (float)*puVar4;
                    fVar38 = (float)((ulong)*puVar4 >> 0x20);
                    fVar37 = fVar37 * fVar37;
                    fVar38 = fVar38 * fVar38;
                    fVar39 = (float)uVar7;
                    fVar40 = (float)((ulong)uVar7 >> 0x20);
                    fVar39 = fVar39 * fVar39;
                    fVar40 = fVar40 * fVar40;
                    fVar41 = (float)*puVar5;
                    fVar42 = (float)((ulong)*puVar5 >> 0x20);
                    fVar41 = fVar41 * fVar41;
                    fVar42 = fVar42 * fVar42;
                    puVar1 = puVar16 + -1;
                    uVar7 = puVar16[-2];
                    uVar44 = puVar16[1];
                    uVar43 = *puVar16;
                    puVar16 = puVar16 + 4;
                    puVar15[-1] = CONCAT44((float)((ulong)*puVar1 >> 0x20) *
                                           (auVar32._12_4_ - fVar38) +
                                           fVar38 * (float)((ulong)puVar15[-1] >> 0x20),
                                           (float)*puVar1 * (auVar32._8_4_ - fVar37) +
                                           fVar37 * (float)puVar15[-1]);
                    puVar15[-2] = CONCAT44((float)((ulong)uVar7 >> 0x20) * (auVar32._4_4_ - fVar36)
                                           + fVar36 * (float)((ulong)puVar15[-2] >> 0x20),
                                           (float)uVar7 * (auVar32._0_4_ - fVar34) +
                                           fVar34 * (float)puVar15[-2]);
                    puVar15[1] = CONCAT44((float)((ulong)uVar44 >> 0x20) * (auVar32._12_4_ - fVar42)
                                          + fVar42 * (float)((ulong)puVar15[1] >> 0x20),
                                          (float)uVar44 * (auVar32._8_4_ - fVar41) +
                                          fVar41 * (float)puVar15[1]);
                    *puVar15 = CONCAT44((float)((ulong)uVar43 >> 0x20) * (auVar32._4_4_ - fVar40) +
                                        fVar40 * (float)((ulong)*puVar15 >> 0x20),
                                        (float)uVar43 * (auVar32._0_4_ - fVar39) +
                                        fVar39 * (float)*puVar15);
                    puVar15 = puVar15 + 4;
                  } while (uVar19 != 0);
                  uVar13 = uVar23;
                  if (uVar23 != uVar22) goto LAB_00e2090c;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != uVar25);
              goto LAB_00e20a24;
            }
            goto LAB_00e209f0;
          }
          uVar23 = 0;
          puVar24 = puVar28;
          goto LAB_00e20840;
        }
        uVar7 = FUN_00e1f850(param_2,0);
      } while ((-1 < (int)uVar7) || ((int)uVar7 == -3));
    }
  }
LAB_00e209f4:
  if (*(long *)(lVar3 + 0x28) != auStack_80[3]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


