// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4b168
// Entry Point: 00e4b168
// Size: 1480 bytes
// Signature: undefined FUN_00e4b168(void)


void FUN_00e4b168(uint param_1,undefined2 *param_2,uint param_3,long param_4,int param_5,
                 uint param_6)

{
  float *pfVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined auVar8 [16];
  bool bVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  float *pfVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  float *pfVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  undefined2 *puVar26;
  long lVar27;
  ulong uVar28;
  undefined (*pauVar29) [16];
  int iVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  float fVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  if ((((int)param_3 < 7) && ((int)param_1 < 3)) && (param_1 != param_3)) {
    if (0 < (int)param_1) {
      uVar25 = 0;
      do {
        if (0 < (int)param_6) {
          iVar31 = 0;
          iVar12 = 0;
          uVar14 = 0;
          lVar24 = (long)param_5;
          lVar23 = (long)param_5 + 1;
          iVar30 = 0x10;
          do {
            iVar13 = (int)uVar14;
            uVar19 = iVar30 + iVar13;
            uStack_a8 = 0;
            local_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            iVar5 = param_6 - iVar13;
            if ((int)uVar19 <= (int)param_6) {
              iVar5 = iVar30;
            }
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            uStack_e8 = 0;
            local_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            local_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            if (0 < (int)param_3) {
              uVar32 = 0;
              uVar3 = param_6;
              if ((int)uVar19 <= (int)param_6) {
                uVar3 = uVar19;
              }
              uVar3 = uVar3 + iVar12;
              uVar6 = param_6;
              if ((int)uVar19 <= (int)param_6) {
                uVar6 = uVar19;
              }
              uVar33 = (ulong)(int)uVar3;
              uVar15 = (ulong)(int)(uVar6 + iVar12);
              uVar28 = uVar33 & 0xfffffffffffffffe;
              lVar27 = -uVar15;
              do {
                bVar4 = (&DAT_0055ff04)[uVar32 + (long)(int)param_3 * 6] & 6;
                if (bVar4 == 2) {
                  if (0 < iVar5) {
                    lVar20 = *(long *)(param_4 + uVar32 * 8);
                    if (uVar3 < 2) {
                      uVar11 = 0;
                    }
                    else {
                      pfVar21 = (float *)(lVar20 + lVar23 * 4);
                      uVar11 = uVar15 & 0xfffffffffffffffe;
                      puVar16 = &uStack_108;
                      do {
                        pfVar17 = pfVar21 + -1;
                        fVar38 = *pfVar21;
                        uVar11 = uVar11 - 2;
                        pfVar21 = pfVar21 + 2;
                        *(float *)(puVar16 + -1) = *pfVar17 + *(float *)(puVar16 + -1);
                        *(float *)puVar16 = fVar38 + *(float *)puVar16;
                        puVar16 = puVar16 + 2;
                      } while (uVar11 != 0);
                      uVar11 = uVar28;
                      if (uVar28 == uVar33) goto LAB_00e4b308;
                    }
                    lVar18 = lVar27 + uVar11;
                    pfVar21 = (float *)(lVar20 + (lVar24 + uVar11) * 4);
                    puVar16 = &local_110 + uVar11;
                    do {
                      bVar9 = lVar18 != -1;
                      lVar18 = lVar18 + 1;
                      *(float *)puVar16 = *pfVar21 + *(float *)puVar16;
                      pfVar21 = pfVar21 + 1;
                      puVar16 = puVar16 + 1;
                    } while (bVar9);
                  }
                }
                else if (bVar4 == 6) {
                  if (0 < iVar5) {
                    lVar20 = *(long *)(param_4 + uVar32 * 8);
                    if (uVar3 < 4) {
                      uVar11 = 0;
                    }
                    else {
                      puVar16 = &local_110;
                      puVar10 = (undefined8 *)(lVar20 + lVar24 * 4);
                      uVar11 = uVar15 & 0xfffffffffffffffc;
                      do {
                        uVar11 = uVar11 - 4;
                        fVar38 = (float)*puVar10;
                        fVar42 = (float)((ulong)*puVar10 >> 0x20);
                        fVar43 = (float)puVar10[1];
                        fVar44 = (float)((ulong)puVar10[1] >> 0x20);
                        *(float *)puVar16 = fVar38 + *(float *)puVar16;
                        *(float *)((long)puVar16 + 4) = fVar38 + *(float *)((long)puVar16 + 4);
                        *(float *)(puVar16 + 1) = fVar42 + *(float *)(puVar16 + 1);
                        *(float *)((long)puVar16 + 0xc) = fVar42 + *(float *)((long)puVar16 + 0xc);
                        *(float *)(puVar16 + 2) = fVar43 + *(float *)(puVar16 + 2);
                        *(float *)((long)puVar16 + 0x14) = fVar43 + *(float *)((long)puVar16 + 0x14)
                        ;
                        *(float *)(puVar16 + 3) = fVar44 + *(float *)(puVar16 + 3);
                        *(float *)((long)puVar16 + 0x1c) = fVar44 + *(float *)((long)puVar16 + 0x1c)
                        ;
                        puVar16 = puVar16 + 4;
                        puVar10 = puVar10 + 2;
                      } while (uVar11 != 0);
                      uVar11 = uVar33 & 0xfffffffffffffffc;
                      if ((uVar33 & 0xfffffffffffffffc) == uVar33) goto LAB_00e4b308;
                    }
                    lVar18 = lVar27 + uVar11;
                    pfVar21 = (float *)(lVar20 + (lVar24 + uVar11) * 4);
                    puVar16 = &local_110 + uVar11;
                    do {
                      bVar9 = lVar18 != -1;
                      lVar18 = lVar18 + 1;
                      fVar38 = *pfVar21;
                      pfVar21 = pfVar21 + 1;
                      *puVar16 = CONCAT44(fVar38 + (float)((ulong)*puVar16 >> 0x20),
                                          fVar38 + (float)*puVar16);
                      puVar16 = puVar16 + 1;
                    } while (bVar9);
                  }
                }
                else {
                  bVar9 = true;
                  if (bVar4 == 4) {
                    bVar9 = iVar5 + -1 < 0;
                  }
                  if (bVar9 == (bVar4 == 4 && SBORROW4(iVar5,1))) {
                    lVar20 = *(long *)(param_4 + uVar32 * 8);
                    if (uVar3 < 2) {
                      uVar11 = 0;
                    }
                    else {
                      pfVar21 = (float *)(lVar20 + lVar23 * 4);
                      uVar11 = uVar15 & 0xfffffffffffffffe;
                      pfVar17 = (float *)((long)&uStack_108 + 4);
                      do {
                        pfVar1 = pfVar21 + -1;
                        fVar38 = *pfVar21;
                        uVar11 = uVar11 - 2;
                        pfVar21 = pfVar21 + 2;
                        pfVar17[-2] = *pfVar1 + pfVar17[-2];
                        *pfVar17 = fVar38 + *pfVar17;
                        pfVar17 = pfVar17 + 4;
                      } while (uVar11 != 0);
                      uVar11 = uVar28;
                      if (uVar28 == uVar33) goto LAB_00e4b308;
                    }
                    lVar18 = lVar27 + uVar11;
                    pfVar21 = (float *)(lVar20 + (lVar24 + uVar11) * 4);
                    pfVar17 = (float *)((long)&local_110 + uVar11 * 8 + 4);
                    do {
                      bVar9 = lVar18 != -1;
                      lVar18 = lVar18 + 1;
                      *pfVar17 = *pfVar21 + *pfVar17;
                      pfVar21 = pfVar21 + 1;
                      pfVar17 = pfVar17 + 2;
                    } while (bVar9);
                  }
                }
LAB_00e4b308:
                uVar32 = uVar32 + 1;
              } while (uVar32 != param_3);
            }
            if (0 < iVar5 * 2) {
              uVar3 = param_6;
              if ((int)uVar19 <= (int)param_6) {
                uVar3 = uVar19;
              }
              uVar19 = (uVar3 + iVar12) * 2;
              if (uVar19 < 8) {
                uVar15 = 0;
              }
              else {
                uVar3 = param_6;
                if (iVar30 + iVar13 <= (int)param_6) {
                  uVar3 = iVar30 + iVar13;
                }
                uVar15 = (ulong)uVar19 & 0xfffffff8;
                uVar32 = (ulong)((uVar3 + iVar12) * 2) & 0xfffffff8;
                puVar16 = (undefined8 *)(param_2 + iVar31);
                pauVar29 = (undefined (*) [16])&local_110;
                do {
                  auVar41 = *pauVar29;
                  auVar36 = pauVar29[1];
                  uVar32 = uVar32 - 8;
                  auVar39._0_4_ = auVar41._0_4_ + 384.0;
                  auVar39._4_4_ = auVar41._4_4_ + 384.0;
                  auVar39._8_4_ = auVar41._8_4_ + 384.0;
                  auVar39._12_4_ = auVar41._12_4_ + 384.0;
                  auVar35._0_4_ = auVar36._0_4_ + 384.0;
                  auVar35._4_4_ = auVar36._4_4_ + 384.0;
                  auVar35._8_4_ = auVar36._8_4_ + 384.0;
                  auVar35._12_4_ = auVar36._12_4_ + 384.0;
                  auVar36._8_4_ = 0x43bf8000;
                  auVar36._0_8_ = 0x43bf800043bf8000;
                  auVar36._12_4_ = 0x43bf8000;
                  auVar40 = NEON_smax(auVar39,auVar36,4);
                  auVar41._8_4_ = 0x43bf8000;
                  auVar41._0_8_ = 0x43bf800043bf8000;
                  auVar41._12_4_ = 0x43bf8000;
                  auVar36 = NEON_smax(auVar35,auVar41,4);
                  auVar8._8_4_ = 0x43c07fff;
                  auVar8._0_8_ = 0x43c07fff43c07fff;
                  auVar8._12_4_ = 0x43c07fff;
                  auVar41 = NEON_umin(auVar40,auVar8,4);
                  auVar40._8_4_ = 0x43c07fff;
                  auVar40._0_8_ = 0x43c07fff43c07fff;
                  auVar40._12_4_ = 0x43c07fff;
                  auVar36 = NEON_umin(auVar36,auVar40,4);
                  auVar37._0_8_ =
                       CONCAT26(auVar41._12_2_,
                                CONCAT24(auVar41._8_2_,CONCAT22(auVar41._4_2_,auVar41._0_2_)));
                  auVar37._8_2_ = auVar36._0_2_;
                  auVar37._10_2_ = auVar36._4_2_;
                  auVar37._12_2_ = auVar36._8_2_;
                  auVar37._14_2_ = auVar36._12_2_;
                  puVar16[1] = auVar37._8_8_;
                  *puVar16 = auVar37._0_8_;
                  puVar16 = puVar16 + 2;
                  pauVar29 = pauVar29 + 2;
                } while (uVar32 != 0);
                if (uVar15 == uVar19) goto LAB_00e4b27c;
              }
              uVar19 = param_6;
              if (iVar30 + iVar13 <= (int)param_6) {
                uVar19 = iVar30 + iVar13;
              }
              lVar27 = uVar15 - (uVar19 + iVar12) * 2;
              pfVar21 = (float *)((long)&local_110 + uVar15 * 4);
              puVar26 = param_2 + uVar15 + (long)iVar31;
              do {
                fVar38 = *pfVar21 + 384.0;
                if ((int)(*pfVar21 + 384.0) < 0x43bf8001) {
                  fVar38 = 383.0;
                }
                if (0x43c07ffe < (uint)fVar38) {
                  fVar38 = 385.0;
                }
                bVar9 = lVar27 != -1;
                lVar27 = lVar27 + 1;
                *puVar26 = SUB42(fVar38,0);
                pfVar21 = pfVar21 + 1;
                puVar26 = puVar26 + 1;
              } while (bVar9);
            }
LAB_00e4b27c:
            iVar31 = iVar31 + 0x20;
            uVar14 = uVar14 + 0x10;
            iVar12 = iVar12 + -0x10;
            lVar23 = lVar23 + 0x10;
            lVar24 = lVar24 + 0x10;
            iVar30 = iVar5;
          } while (uVar14 < param_6);
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != param_1);
    }
  }
  else {
    uVar25 = param_1;
    if ((int)param_3 <= (int)param_1) {
      uVar25 = param_3;
    }
    uVar14 = (ulong)uVar25;
    if (0 < (int)param_6) {
      uVar32 = 0;
      uVar15 = uVar14 & 0xfffffffe;
      do {
        if ((int)uVar25 < 1) {
          uVar19 = 0;
        }
        else {
          uVar19 = uVar25;
          if (uVar25 == 1) {
            uVar28 = 0;
            puVar26 = param_2;
          }
          else {
            puVar26 = param_2 + uVar15;
            uVar28 = uVar15;
            plVar22 = (long *)(param_4 + 8);
            do {
              plVar2 = plVar22 + -1;
              lVar23 = *plVar22;
              lVar24 = (uVar32 + (long)param_5) * 4;
              plVar22 = plVar22 + 2;
              uVar28 = uVar28 - 2;
              uVar34 = NEON_smax(CONCAT44(*(float *)(lVar23 + lVar24) + 384.0,
                                          *(float *)(*plVar2 + lVar24) + 384.0),0x43bf800043bf8000,4
                                );
              uVar34 = NEON_umin(uVar34,0x43c07fff43c07fff,4);
              *param_2 = (short)uVar34;
              param_2[1] = (short)((ulong)uVar34 >> 0x20);
              param_2 = param_2 + 2;
            } while (uVar28 != 0);
            uVar28 = uVar15;
            param_2 = puVar26;
            if (uVar15 == uVar14) goto LAB_00e4b6bc;
          }
          lVar23 = uVar14 - uVar28;
          plVar22 = (long *)(param_4 + uVar28 * 8);
          do {
            fVar38 = *(float *)(*plVar22 + (uVar32 + (long)param_5) * 4) + 384.0;
            if ((int)fVar38 < 0x43bf8001) {
              fVar38 = 383.0;
            }
            if (0x43c07ffe < (uint)fVar38) {
              fVar38 = 385.0;
            }
            lVar23 = lVar23 + -1;
            param_2 = puVar26 + 1;
            *puVar26 = SUB42(fVar38,0);
            plVar22 = plVar22 + 1;
            puVar26 = param_2;
          } while (lVar23 != 0);
        }
LAB_00e4b6bc:
        if ((int)uVar19 < (int)param_1) {
          memset(param_2,0,(ulong)(~uVar19 + param_1) * 2 + 2);
          param_2 = param_2 + (ulong)(~uVar19 + param_1) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != param_6);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


