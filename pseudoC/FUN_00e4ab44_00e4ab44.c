// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4ab44
// Entry Point: 00e4ab44
// Size: 1168 bytes
// Signature: undefined FUN_00e4ab44(void)


void FUN_00e4ab44(uint param_1,long param_2,int param_3,uint param_4,long param_5,int param_6,
                 uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  bool bVar9;
  undefined (*pauVar10) [16];
  ulong uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  undefined2 *puVar21;
  int iVar22;
  long *plVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  float fVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  ulong local_100;
  undefined8 local_f0 [7];
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if ((((int)param_4 < 7) && ((int)param_1 < 3)) && (param_1 != param_4)) {
    if (0 < (int)param_1) {
      auVar29._8_4_ = 0x43c07fff;
      auVar29._0_8_ = 0x43c07fff43c07fff;
      auVar29._12_4_ = 0x43c07fff;
      local_100 = 0;
      do {
        if (0 < (int)param_7) {
          iVar22 = 0;
          uVar25 = 0;
          uVar16 = *(uint *)(&UNK_0055feec + local_100 * 4 + (long)(int)param_1 * 8);
          puVar14 = (undefined8 *)(*(long *)(param_2 + local_100 * 8) + (long)param_3 * 2);
          lVar20 = (long)param_6;
          lVar26 = (long)param_6 + 4;
          iVar27 = 0x20;
          do {
            iVar24 = (int)uVar25;
            uVar1 = iVar27 + iVar24;
            uStack_88 = 0;
            local_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            iVar4 = param_7 - iVar24;
            if ((int)uVar1 <= (int)param_7) {
              iVar4 = iVar27;
            }
            uStack_a8 = 0;
            local_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            local_f0[5] = 0;
            local_f0[4] = 0;
            uStack_b8 = 0;
            local_f0[6] = 0;
            local_f0[1] = 0;
            local_f0[0] = 0;
            local_f0[3] = 0;
            local_f0[2] = 0;
            if (0 < (int)param_4) {
              uVar28 = 0;
              uVar2 = param_7;
              if ((int)uVar1 <= (int)param_7) {
                uVar2 = uVar1;
              }
              uVar2 = uVar2 + iVar22;
              if ((int)uVar2 < 2) {
                uVar2 = 1;
              }
              uVar3 = param_7;
              if ((int)uVar1 <= (int)param_7) {
                uVar3 = uVar1;
              }
              uVar17 = (ulong)uVar2 & 0x7ffffff8;
              uVar3 = uVar3 + iVar22;
              if ((int)uVar3 < 2) {
                uVar3 = 1;
              }
              do {
                if ((uVar16 & (int)(char)(&DAT_0055ff04)[uVar28 + (long)(int)param_4 * 6]) != 0 &&
                    0 < iVar4) {
                  lVar18 = *(long *)(param_5 + uVar28 * 8);
                  if (uVar2 < 8) {
                    uVar11 = 0;
                  }
                  else {
                    pauVar10 = (undefined (*) [16])(lVar18 + lVar26 * 4);
                    puVar13 = local_f0 + 2;
                    uVar11 = (ulong)uVar3 & 0x7ffffff8;
                    do {
                      auVar35 = pauVar10[-1];
                      auVar41 = *pauVar10;
                      pauVar10 = pauVar10 + 2;
                      uVar11 = uVar11 - 8;
                      auVar33._0_8_ =
                           CONCAT44(auVar35._4_4_ + (float)((ulong)puVar13[-2] >> 0x20),
                                    auVar35._0_4_ + (float)puVar13[-2]);
                      auVar33._8_4_ = auVar35._8_4_ + (float)puVar13[-1];
                      auVar33._12_4_ = auVar35._12_4_ + (float)((ulong)puVar13[-1] >> 0x20);
                      auVar39._0_8_ =
                           CONCAT44(auVar41._4_4_ + (float)((ulong)*puVar13 >> 0x20),
                                    auVar41._0_4_ + (float)*puVar13);
                      auVar39._8_4_ = auVar41._8_4_ + (float)puVar13[1];
                      auVar39._12_4_ = auVar41._12_4_ + (float)((ulong)puVar13[1] >> 0x20);
                      puVar13[-1] = auVar33._8_8_;
                      puVar13[-2] = auVar33._0_8_;
                      puVar13[1] = auVar39._8_8_;
                      *puVar13 = auVar39._0_8_;
                      puVar13 = puVar13 + 4;
                    } while (uVar11 != 0);
                    uVar11 = uVar17;
                    if (uVar17 == uVar2) goto LAB_00e4ad00;
                  }
                  lVar15 = uVar11 - uVar3;
                  pfVar12 = (float *)((long)local_f0 + uVar11 * 4);
                  pfVar19 = (float *)(lVar18 + (lVar20 + uVar11) * 4);
                  do {
                    bVar9 = lVar15 != -1;
                    lVar15 = lVar15 + 1;
                    *pfVar12 = *pfVar19 + *pfVar12;
                    pfVar12 = pfVar12 + 1;
                    pfVar19 = pfVar19 + 1;
                  } while (bVar9);
                }
LAB_00e4ad00:
                uVar28 = uVar28 + 1;
              } while (uVar28 != param_4);
            }
            if (0 < iVar4) {
              uVar2 = param_7;
              if ((int)uVar1 <= (int)param_7) {
                uVar2 = uVar1;
              }
              uVar2 = uVar2 + iVar22;
              if (uVar2 < 8) {
                uVar28 = 0;
              }
              else {
                uVar28 = (ulong)uVar2 & 0xfffffff8;
                uVar1 = param_7;
                if (iVar27 + iVar24 <= (int)param_7) {
                  uVar1 = iVar27 + iVar24;
                }
                uVar17 = (ulong)(uVar1 + iVar22) & 0xfffffff8;
                puVar13 = puVar14;
                pauVar10 = (undefined (*) [16])local_f0;
                do {
                  auVar41 = *pauVar10;
                  auVar35 = pauVar10[1];
                  uVar17 = uVar17 - 8;
                  auVar40._0_4_ = auVar41._0_4_ + 384.0;
                  auVar40._4_4_ = auVar41._4_4_ + 384.0;
                  auVar40._8_4_ = auVar41._8_4_ + 384.0;
                  auVar40._12_4_ = auVar41._12_4_ + 384.0;
                  auVar34._0_4_ = auVar35._0_4_ + 384.0;
                  auVar34._4_4_ = auVar35._4_4_ + 384.0;
                  auVar34._8_4_ = auVar35._8_4_ + 384.0;
                  auVar34._12_4_ = auVar35._12_4_ + 384.0;
                  auVar6._8_4_ = 0x43bf8000;
                  auVar6._0_8_ = 0x43bf800043bf8000;
                  auVar6._12_4_ = 0x43bf8000;
                  auVar41 = NEON_smax(auVar40,auVar6,4);
                  auVar7._8_4_ = 0x43bf8000;
                  auVar7._0_8_ = 0x43bf800043bf8000;
                  auVar7._12_4_ = 0x43bf8000;
                  auVar35 = NEON_smax(auVar34,auVar7,4);
                  auVar41 = NEON_umin(auVar41,auVar29,4);
                  auVar35 = NEON_umin(auVar35,auVar29,4);
                  auVar36._0_8_ =
                       CONCAT26(auVar41._12_2_,
                                CONCAT24(auVar41._8_2_,CONCAT22(auVar41._4_2_,auVar41._0_2_)));
                  auVar36._8_2_ = auVar35._0_2_;
                  auVar36._10_2_ = auVar35._4_2_;
                  auVar36._12_2_ = auVar35._8_2_;
                  auVar36._14_2_ = auVar35._12_2_;
                  puVar13[1] = auVar36._8_8_;
                  *puVar13 = auVar36._0_8_;
                  puVar13 = puVar13 + 2;
                  pauVar10 = pauVar10 + 2;
                } while (uVar17 != 0);
                if (uVar28 == uVar2) goto LAB_00e4ac70;
              }
              uVar1 = param_7;
              if (iVar27 + iVar24 <= (int)param_7) {
                uVar1 = iVar27 + iVar24;
              }
              do {
                fVar32 = *(float *)((long)local_f0 + uVar28 * 4) + 384.0;
                if ((int)fVar32 < 0x43bf8001) {
                  fVar32 = 383.0;
                }
                if (0x43c07ffe < (uint)fVar32) {
                  fVar32 = 385.0;
                }
                *(short *)((long)puVar14 + uVar28 * 2) = SUB42(fVar32,0);
                uVar28 = uVar28 + 1;
              } while (uVar1 + iVar22 != uVar28);
            }
LAB_00e4ac70:
            uVar25 = uVar25 + 0x20;
            iVar22 = iVar22 + -0x20;
            lVar26 = lVar26 + 0x20;
            lVar20 = lVar20 + 0x20;
            puVar14 = puVar14 + 8;
            iVar27 = iVar4;
          } while (uVar25 < param_7);
        }
        local_100 = local_100 + 1;
      } while (local_100 != param_1);
    }
  }
  else {
    lVar26 = (long)param_3;
    uVar16 = param_1;
    if ((int)param_4 <= (int)param_1) {
      uVar16 = param_4;
    }
    if ((int)uVar16 < 1) {
      uVar16 = 0;
    }
    else {
      uVar28 = (ulong)param_7;
      uVar25 = 0;
      uVar17 = uVar28 & 0xfffffff8;
      do {
        if (0 < (int)param_7) {
          lVar18 = *(long *)(param_2 + uVar25 * 8);
          lVar20 = *(long *)(param_5 + uVar25 * 8);
          if (param_7 < 8) {
            uVar11 = 0;
          }
          else {
            puVar14 = (undefined8 *)(lVar18 + lVar26 * 2);
            pauVar10 = (undefined (*) [16])(lVar20 + (long)param_6 * 4);
            uVar11 = uVar17;
            do {
              auVar41 = *pauVar10;
              auVar35 = pauVar10[1];
              uVar11 = uVar11 - 8;
              auVar37._0_4_ = auVar41._0_4_ + 384.0;
              auVar37._4_4_ = auVar41._4_4_ + 384.0;
              auVar37._8_4_ = auVar41._8_4_ + 384.0;
              auVar37._12_4_ = auVar41._12_4_ + 384.0;
              auVar30._0_4_ = auVar35._0_4_ + 384.0;
              auVar30._4_4_ = auVar35._4_4_ + 384.0;
              auVar30._8_4_ = auVar35._8_4_ + 384.0;
              auVar30._12_4_ = auVar35._12_4_ + 384.0;
              auVar35._8_4_ = 0x43bf8000;
              auVar35._0_8_ = 0x43bf800043bf8000;
              auVar35._12_4_ = 0x43bf8000;
              auVar38 = NEON_smax(auVar37,auVar35,4);
              auVar41._8_4_ = 0x43bf8000;
              auVar41._0_8_ = 0x43bf800043bf8000;
              auVar41._12_4_ = 0x43bf8000;
              auVar35 = NEON_smax(auVar30,auVar41,4);
              auVar8._8_4_ = 0x43c07fff;
              auVar8._0_8_ = 0x43c07fff43c07fff;
              auVar8._12_4_ = 0x43c07fff;
              auVar41 = NEON_umin(auVar38,auVar8,4);
              auVar38._8_4_ = 0x43c07fff;
              auVar38._0_8_ = 0x43c07fff43c07fff;
              auVar38._12_4_ = 0x43c07fff;
              auVar35 = NEON_umin(auVar35,auVar38,4);
              auVar31._0_8_ =
                   CONCAT26(auVar41._12_2_,
                            CONCAT24(auVar41._8_2_,CONCAT22(auVar41._4_2_,auVar41._0_2_)));
              auVar31._8_2_ = auVar35._0_2_;
              auVar31._10_2_ = auVar35._4_2_;
              auVar31._12_2_ = auVar35._8_2_;
              auVar31._14_2_ = auVar35._12_2_;
              puVar14[1] = auVar31._8_8_;
              *puVar14 = auVar31._0_8_;
              puVar14 = puVar14 + 2;
              pauVar10 = pauVar10 + 2;
            } while (uVar11 != 0);
            uVar11 = uVar17;
            if (uVar17 == uVar28) goto LAB_00e4aea4;
          }
          lVar15 = uVar28 - uVar11;
          puVar21 = (undefined2 *)(lVar18 + lVar26 * 2 + uVar11 * 2);
          pfVar12 = (float *)(lVar20 + (long)param_6 * 4 + uVar11 * 4);
          do {
            fVar32 = *pfVar12 + 384.0;
            if ((int)(*pfVar12 + 384.0) < 0x43bf8001) {
              fVar32 = 383.0;
            }
            if (0x43c07ffe < (uint)fVar32) {
              fVar32 = 385.0;
            }
            lVar15 = lVar15 + -1;
            *puVar21 = SUB42(fVar32,0);
            puVar21 = puVar21 + 1;
            pfVar12 = pfVar12 + 1;
          } while (lVar15 != 0);
        }
LAB_00e4aea4:
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar16);
    }
    if ((int)uVar16 < (int)param_1) {
      lVar20 = (ulong)param_1 - (ulong)uVar16;
      plVar23 = (long *)(param_2 + (ulong)uVar16 * 8);
      do {
        memset((void *)(*plVar23 + lVar26 * 2),0,
               -(ulong)(param_7 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_7 << 1);
        lVar20 = lVar20 + -1;
        plVar23 = plVar23 + 1;
      } while (lVar20 != 0);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


