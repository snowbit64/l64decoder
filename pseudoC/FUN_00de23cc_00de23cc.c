// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00de23cc
// Entry Point: 00de23cc
// Size: 2236 bytes
// Signature: undefined FUN_00de23cc(void)


void FUN_00de23cc(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6,undefined4 param_7,int *param_8,float *param_9,float *param_10,
                 undefined4 param_11)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  float *pfVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float local_1bc [21];
  float local_168 [21];
  float local_114 [4];
  float local_104;
  float fStack_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  float local_c0 [4];
  undefined8 auStack_b0 [4];
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  fVar35 = param_4[1];
  fVar33 = param_4[2];
  fVar31 = param_5[1];
  fVar29 = param_5[2];
  fVar37 = *param_4;
  fVar32 = *param_5;
  fVar27 = *param_6;
  fVar28 = param_6[1];
  fVar30 = param_6[2];
  fVar44 = *param_9;
  fVar34 = fVar33;
  if (fVar29 <= fVar33) {
    fVar34 = fVar29;
  }
  fVar39 = fVar33;
  if (fVar33 <= fVar29) {
    fVar39 = fVar29;
  }
  fVar40 = fVar35;
  if (fVar31 <= fVar35) {
    fVar40 = fVar31;
  }
  fVar42 = fVar35;
  if (fVar35 <= fVar31) {
    fVar42 = fVar31;
  }
  fVar41 = fVar37;
  if (fVar32 <= fVar37) {
    fVar41 = fVar32;
  }
  fVar43 = fVar37;
  if (fVar37 <= fVar32) {
    fVar43 = fVar32;
  }
  if (fVar27 <= fVar41) {
    fVar41 = fVar27;
  }
  if (fVar28 <= fVar40) {
    fVar40 = fVar28;
  }
  if (fVar30 <= fVar34) {
    fVar34 = fVar30;
  }
  if (fVar43 <= fVar27) {
    fVar43 = fVar27;
  }
  if (fVar42 <= fVar28) {
    fVar42 = fVar28;
  }
  if (fVar39 <= fVar30) {
    fVar39 = fVar30;
  }
  if ((fVar43 < fVar44) || (*param_10 < fVar41)) {
    bVar8 = 0;
    fVar38 = param_9[2];
  }
  else {
    bVar8 = 1;
    fVar38 = param_9[2];
  }
  if (fVar38 <= fVar39) {
    if (((bool)((param_9[1] <= fVar42 && fVar40 <= param_10[1]) & bVar8)) && (fVar34 <= param_10[2])
       ) {
      iVar5 = *param_8 + -1;
      iVar14 = (int)((fVar41 - fVar44) * param_2);
      iVar21 = (int)((fVar34 - fVar38) * param_2);
      iVar23 = (int)((fVar43 - fVar44) * param_2);
      iVar24 = (int)((fVar39 - fVar38) * param_2);
      iVar4 = iVar5;
      if (iVar14 <= iVar5) {
        iVar4 = iVar14;
      }
      iVar6 = param_8[1] + -1;
      iVar3 = 0;
      if (-1 < iVar14) {
        iVar3 = iVar4;
      }
      iVar4 = iVar6;
      if (iVar21 <= iVar6) {
        iVar4 = iVar21;
      }
      iVar14 = 0;
      if (-1 < iVar21) {
        iVar14 = iVar4;
      }
      if (iVar23 <= iVar5) {
        iVar5 = iVar23;
      }
      iVar4 = 0;
      if (-1 < iVar23) {
        iVar4 = iVar5;
      }
      if (iVar24 <= iVar6) {
        iVar6 = iVar24;
      }
      iVar5 = 0;
      if (-1 < iVar24) {
        iVar5 = iVar6;
      }
      if (iVar14 <= iVar5) {
        fVar34 = param_10[1] - param_9[1];
        do {
          fVar40 = (float)NEON_fmadd(fVar37,0,fVar33);
          fVar44 = (float)NEON_fmadd((float)iVar14,param_1,fVar38);
          fVar39 = (float)NEON_fmadd(fVar27,0,fVar30);
          fVar39 = fVar39 - fVar44;
          fVar40 = fVar40 - fVar44;
          bVar9 = fVar39 < 0.0 == 0.0 <= fVar40;
          if (bVar9) {
            fVar42 = fVar39 / (fVar39 - fVar40);
            local_168[0] = (float)NEON_fmadd(fVar37 - fVar27,fVar42,fVar27);
            local_168[1] = (float)NEON_fmadd(fVar35 - fVar28,fVar42,fVar28);
            local_168[2] = (float)NEON_fmadd(fVar33 - fVar30,fVar42,fVar30);
          }
          uVar25 = (uint)bVar9;
          uVar12 = (uint)bVar9;
          local_114[0] = fVar37;
          local_114[1] = fVar35;
          local_114[2] = fVar33;
          local_114[3] = fVar32;
          local_104 = fVar31;
          fStack_100 = fVar29;
          local_fc = fVar27;
          fStack_f8 = fVar28;
          local_f4 = fVar30;
          if (0.0 <= fVar40) {
            uVar25 = uVar12 + 1;
            uVar12 = uVar12 | uVar12 << 1;
            local_168[uVar12] = fVar37;
            local_168[uVar12 + 1] = fVar35;
            local_168[uVar12 + 2] = fVar33;
          }
          fVar42 = (float)NEON_fmadd(fVar32,0,fVar29);
          fVar42 = fVar42 - fVar44;
          if (fVar40 < 0.0 == 0.0 <= fVar42) {
            uVar12 = uVar25 * 3;
            uVar25 = uVar25 + 1;
            fVar40 = fVar40 / (fVar40 - fVar42);
            fVar37 = (float)NEON_fmadd(fVar32 - fVar37,fVar40,fVar37);
            fVar35 = (float)NEON_fmadd(fVar31 - fVar35,fVar40,fVar35);
            fVar33 = (float)NEON_fmadd(fVar29 - fVar33,fVar40,fVar33);
            local_168[uVar12] = fVar37;
            local_168[uVar12 + 1] = fVar35;
            local_168[uVar12 + 2] = fVar33;
            if (0.0 <= fVar42) goto LAB_00de26d4;
LAB_00de279c:
            if (fVar42 < 0.0 == 0.0 <= fVar39) {
LAB_00de2708:
              uVar12 = uVar25 * 3;
              uVar25 = uVar25 + 1;
              fVar42 = fVar42 / (fVar42 - fVar39);
              fVar32 = (float)NEON_fmadd(fVar27 - fVar32,fVar42,fVar32);
              fVar31 = (float)NEON_fmadd(fVar28 - fVar31,fVar42,fVar31);
              fVar29 = (float)NEON_fmadd(fVar30 - fVar29,fVar42,fVar29);
              local_168[uVar12] = fVar32;
              local_168[uVar12 + 1] = fVar31;
              local_168[uVar12 + 2] = fVar29;
            }
          }
          else {
            if (fVar42 < 0.0) goto LAB_00de279c;
LAB_00de26d4:
            uVar12 = uVar25 * 3;
            uVar25 = uVar25 + 1;
            local_168[uVar12] = fVar32;
            local_168[uVar12 + 1] = fVar31;
            local_168[uVar12 + 2] = fVar29;
            if (fVar42 < 0.0 == 0.0 <= fVar39) goto LAB_00de2708;
          }
          if (0.0 <= fVar39) {
            uVar12 = uVar25 * 3;
            uVar25 = uVar25 + 1;
            local_168[uVar12] = fVar27;
            local_168[uVar12 + 1] = fVar28;
            local_168[uVar12 + 2] = fVar30;
          }
          if (2 < uVar25) {
            uVar10 = FUN_00de3010(0,0xbf800000,fVar44 + param_1,local_168,uVar25,local_1bc);
            uVar26 = uVar10 & 0xffffffff;
            uVar25 = (uint)uVar10;
            if ((2 < (int)uVar25) && (iVar3 <= iVar4)) {
              uVar10 = uVar10 & 0xfffffff8;
              iVar21 = iVar3;
              do {
                fVar27 = (float)NEON_fmadd((float)iVar21,param_1,*param_9);
                if (uVar25 < 8) {
                  uVar16 = 0;
LAB_00de28f8:
                  pfVar13 = local_1bc + uVar16 * 3 + 2;
                  lVar15 = uVar26 - uVar16;
                  pfVar20 = local_c0 + uVar16;
                  do {
                    fVar28 = *pfVar13;
                    lVar15 = lVar15 + -1;
                    pfVar1 = pfVar13 + -2;
                    pfVar13 = pfVar13 + 3;
                    *pfVar20 = (*pfVar1 + fVar28 * 0.0) - fVar27;
                    pfVar20 = pfVar20 + 1;
                  } while (lVar15 != 0);
                }
                else {
                  pfVar13 = local_1bc;
                  uVar16 = uVar10;
                  puVar18 = auStack_b0;
                  do {
                    uVar16 = uVar16 - 8;
                    fVar28 = *pfVar13;
                    fVar35 = pfVar13[2];
                    fVar29 = pfVar13[3];
                    fVar37 = pfVar13[5];
                    fVar30 = pfVar13[0xc];
                    fVar44 = pfVar13[0xe];
                    fVar31 = pfVar13[0xf];
                    fVar39 = pfVar13[0x11];
                    fVar32 = pfVar13[0x12];
                    fVar40 = pfVar13[0x14];
                    fVar33 = pfVar13[0x15];
                    fVar42 = pfVar13[0x17];
                    puVar18[-1] = CONCAT44((pfVar13[9] + pfVar13[0xb] * 0.0) - fVar27,
                                           (pfVar13[6] + pfVar13[8] * 0.0) - fVar27);
                    puVar18[-2] = CONCAT44((fVar29 + fVar37 * 0.0) - fVar27,
                                           (fVar28 + fVar35 * 0.0) - fVar27);
                    puVar18[1] = CONCAT44((fVar33 + fVar42 * 0.0) - fVar27,
                                          (fVar32 + fVar40 * 0.0) - fVar27);
                    *puVar18 = CONCAT44((fVar31 + fVar39 * 0.0) - fVar27,
                                        (fVar30 + fVar44 * 0.0) - fVar27);
                    puVar18 = puVar18 + 4;
                    pfVar13 = pfVar13 + 0x18;
                  } while (uVar16 != 0);
                  uVar16 = uVar10;
                  if (uVar10 != uVar26) goto LAB_00de28f8;
                }
                uVar16 = 0;
                uVar12 = 0;
                uVar17 = 2;
                uVar22 = (ulong)(uVar25 - 1);
                do {
                  iVar23 = (int)uVar22;
                  fVar29 = local_c0[iVar23];
                  fVar28 = local_c0[uVar16];
                  if (fVar29 < 0.0 == 0.0 <= fVar28) {
                    fVar29 = fVar29 / (fVar29 - fVar28);
                    lVar2 = (long)(int)uVar12 + (long)(int)uVar12 * 2;
                    uVar12 = uVar12 + 1;
                    lVar15 = (long)(int)lVar2;
                    fVar30 = (float)NEON_fmadd(local_1bc[uVar17 - 2] - local_1bc[(long)iVar23 * 3],
                                               fVar29,local_1bc[(long)iVar23 * 3]);
                    fVar31 = (float)NEON_fmadd(local_1bc[uVar17 - 1] -
                                               local_1bc[(long)(iVar23 * 3) + 1],fVar29,
                                               local_1bc[(long)(iVar23 * 3) + 1]);
                    fVar29 = (float)NEON_fmadd(local_1bc[uVar17] - local_1bc[(long)(iVar23 * 3) + 2]
                                               ,fVar29,local_1bc[(long)(iVar23 * 3) + 2]);
                    local_168[lVar2] = fVar30;
                    local_168[lVar15 + 1] = fVar31;
                    local_168[lVar15 + 2] = fVar29;
                  }
                  if (0.0 <= fVar28) {
                    uVar11 = (int)uVar16 * 3;
                    lVar2 = (long)(int)uVar12 + (long)(int)uVar12 * 2;
                    fVar28 = local_1bc[uVar11 + 1];
                    uVar12 = uVar12 + 1;
                    fVar29 = local_1bc[uVar11 + 2];
                    lVar15 = (long)(int)lVar2;
                    local_168[lVar2] = local_1bc[uVar11];
                    local_168[lVar15 + 1] = fVar28;
                    local_168[lVar15 + 2] = fVar29;
                  }
                  uVar22 = uVar16 & 0xffffffff;
                  uVar16 = uVar16 + 1;
                  uVar17 = uVar17 + 3;
                } while (uVar26 != uVar16);
                if (2 < (int)uVar12) {
                  fVar27 = fVar27 + param_1;
                  uVar16 = (ulong)uVar12;
                  if (uVar12 < 8) {
                    uVar19 = 0;
LAB_00de2a9c:
                    lVar15 = uVar16 - uVar19;
                    pfVar13 = local_168 + uVar19 * 3 + 2;
                    pfVar20 = local_c0 + uVar19;
                    do {
                      fVar28 = *pfVar13;
                      lVar15 = lVar15 + -1;
                      pfVar1 = pfVar13 + -2;
                      pfVar13 = pfVar13 + 3;
                      *pfVar20 = fVar27 + (fVar28 * 0.0 - *pfVar1);
                      pfVar20 = pfVar20 + 1;
                    } while (lVar15 != 0);
                  }
                  else {
                    uVar19 = uVar16 & 0xfffffff8;
                    pfVar13 = local_168;
                    uVar22 = uVar19;
                    puVar18 = auStack_b0;
                    do {
                      auVar36 = NEON_fmov(0xbf800000,4);
                      uVar22 = uVar22 - 8;
                      fVar28 = *pfVar13;
                      fVar30 = pfVar13[2];
                      fVar29 = pfVar13[3];
                      fVar31 = pfVar13[5];
                      fVar32 = pfVar13[0xc];
                      fVar44 = pfVar13[0xe];
                      fVar33 = pfVar13[0xf];
                      fVar39 = pfVar13[0x11];
                      fVar35 = pfVar13[0x12];
                      fVar40 = pfVar13[0x14];
                      fVar37 = pfVar13[0x15];
                      fVar42 = pfVar13[0x17];
                      puVar18[-1] = CONCAT44(fVar27 + pfVar13[0xb] * 0.0 +
                                                      auVar36._12_4_ * pfVar13[9],
                                             fVar27 + pfVar13[8] * 0.0 + auVar36._8_4_ * pfVar13[6])
                      ;
                      puVar18[-2] = CONCAT44(fVar27 + fVar31 * 0.0 + auVar36._4_4_ * fVar29,
                                             fVar27 + fVar30 * 0.0 + auVar36._0_4_ * fVar28);
                      puVar18[1] = CONCAT44(fVar27 + fVar42 * 0.0 + auVar36._12_4_ * fVar37,
                                            fVar27 + fVar40 * 0.0 + auVar36._8_4_ * fVar35);
                      *puVar18 = CONCAT44(fVar27 + fVar39 * 0.0 + auVar36._4_4_ * fVar33,
                                          fVar27 + fVar44 * 0.0 + auVar36._0_4_ * fVar32);
                      puVar18 = puVar18 + 4;
                      pfVar13 = pfVar13 + 0x18;
                    } while (uVar22 != 0);
                    if (uVar19 != uVar16) goto LAB_00de2a9c;
                  }
                  uVar22 = 0;
                  uVar17 = 0;
                  uVar11 = 2;
                  iVar23 = uVar12 - 1;
                  do {
                    fVar28 = local_c0[iVar23];
                    fVar27 = local_c0[uVar22];
                    iVar24 = (int)uVar22;
                    if (fVar28 < 0.0 == 0.0 <= fVar27) {
                      fVar28 = fVar28 / (fVar28 - fVar27);
                      lVar2 = (long)(int)uVar17 + (long)(int)uVar17 * 2;
                      uVar17 = uVar17 + 1;
                      lVar15 = (long)(int)lVar2;
                      fVar29 = (float)NEON_fmadd(local_168[uVar11 - 2] - local_168[(long)iVar23 * 3]
                                                 ,fVar28,local_168[(long)iVar23 * 3]);
                      fVar30 = (float)NEON_fmadd(local_168[uVar11 - 1] -
                                                 local_168[(long)(iVar23 * 3) + 1],fVar28,
                                                 local_168[(long)(iVar23 * 3) + 1]);
                      fVar28 = (float)NEON_fmadd(local_168[uVar11] -
                                                 local_168[(long)(iVar23 * 3) + 2],fVar28,
                                                 local_168[(long)(iVar23 * 3) + 2]);
                      local_114[lVar2] = fVar29;
                      local_114[lVar15 + 1] = fVar30;
                      local_114[lVar15 + 2] = fVar28;
                    }
                    if (0.0 <= fVar27) {
                      uVar12 = iVar24 * 3;
                      lVar2 = (long)(int)uVar17 + (long)(int)uVar17 * 2;
                      fVar27 = local_168[uVar12 + 1];
                      uVar17 = uVar17 + 1;
                      fVar28 = local_168[uVar12 + 2];
                      lVar15 = (long)(int)lVar2;
                      local_114[lVar2] = local_168[uVar12];
                      local_114[lVar15 + 1] = fVar27;
                      local_114[lVar15 + 2] = fVar28;
                    }
                    uVar22 = uVar22 + 1;
                    uVar11 = uVar11 + 3;
                    iVar23 = iVar24;
                  } while (uVar16 != uVar22);
                  if (2 < (int)uVar17) {
                    lVar15 = (ulong)uVar17 - 1;
                    pfVar13 = local_114 + 4;
                    fVar27 = local_114[1];
                    fVar28 = local_114[1];
                    do {
                      fVar29 = *pfVar13;
                      if (fVar29 <= fVar27) {
                        fVar27 = fVar29;
                      }
                      if (fVar28 <= fVar29) {
                        fVar28 = fVar29;
                      }
                      lVar15 = lVar15 + -1;
                      pfVar13 = pfVar13 + 3;
                    } while (lVar15 != 0);
                    fVar28 = fVar28 - param_9[1];
                    fVar27 = fVar27 - param_9[1];
                    if (0.0 <= fVar28 && fVar27 == fVar34 || 0.0 <= fVar28 && fVar27 < fVar34) {
                      if (fVar27 <= 0.0) {
                        fVar27 = 0.0;
                      }
                      fVar29 = fVar34;
                      if (fVar28 <= fVar34) {
                        fVar29 = fVar28;
                      }
                      uVar12 = (uint)(fVar27 * param_3);
                      iVar23 = (int)(fVar29 * param_3);
                      if (0x1ffe < (int)uVar12) {
                        uVar12 = 0x1fff;
                      }
                      uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
                      iVar24 = iVar23;
                      if (0x1ffe < iVar23) {
                        iVar24 = 0x1fff;
                      }
                      if (iVar23 <= (int)uVar12) {
                        iVar24 = uVar12 + 1;
                      }
                      FUN_00de20f8(param_8,iVar21,iVar14,uVar12,iVar24,param_7,param_11);
                    }
                  }
                }
                bVar9 = iVar21 != iVar4;
                iVar21 = iVar21 + 1;
              } while (bVar9);
            }
          }
          if (iVar14 == iVar5) break;
          iVar14 = iVar14 + 1;
          fVar38 = param_9[2];
          fVar37 = *param_4;
          fVar35 = param_4[1];
          fVar33 = param_4[2];
          fVar32 = *param_5;
          fVar31 = param_5[1];
          fVar29 = param_5[2];
          fVar27 = *param_6;
          fVar28 = param_6[1];
          fVar30 = param_6[2];
        } while( true );
      }
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


