// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitCapsule
// Entry Point: 00ec0fb8
// Size: 1636 bytes
// Signature: undefined __cdecl fm_computeBestFitCapsule(uint param_1, double * param_2, uint param_3, double * param_4, double * param_5, double * param_6, bool param_7)


/* FLOAT_MATH::fm_computeBestFitCapsule(unsigned int, double const*, unsigned int, double&, double&,
   double*, bool) */

void FLOAT_MATH::fm_computeBestFitCapsule
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5,
               double *param_6,bool param_7)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  uVar5 = (ulong)param_3;
  fm_computeBestFitOBB(param_1,param_2,param_3,&local_b0,&local_130,param_7);
  if ((local_b0 <= dStack_a8) || (local_b0 <= local_a0)) {
    dVar6 = 0.0;
    dVar7 = local_110 * 0.0;
    if ((dStack_a8 <= local_b0) || (dStack_a8 <= local_a0)) {
      uVar14 = NEON_fmadd(local_130,0,dVar7);
      uVar26 = NEON_fmadd(local_f0,0,local_130 + dVar7);
      uVar21 = NEON_fmadd(local_130,0,local_110 * -4.371139006309477e-08);
      uVar8 = NEON_fmadd(local_128,0,local_108 * -4.371139006309477e-08);
      uVar9 = NEON_fmadd(local_120,0,local_100 * -4.371139006309477e-08);
      uVar15 = NEON_fmadd(dStack_118,0,local_f8 * -4.371139006309477e-08);
      uVar24 = NEON_fmadd(local_e8,0,local_128 + local_108 * 0.0);
      uVar31 = NEON_fmadd(dStack_118,0,local_f8 * -0.999999999999999);
      uVar28 = NEON_fmadd(dStack_118,0,local_f8 * 0.0);
      uVar29 = NEON_fmadd(local_f0,0x3feffffffffffff7,uVar21);
      uVar8 = NEON_fmadd(local_e8,0x3feffffffffffff7,uVar8);
      uVar9 = NEON_fmadd(local_e0,0x3feffffffffffff7,uVar9);
      uVar21 = NEON_fmadd(local_d8,0x3feffffffffffff7,uVar15);
      dVar16 = (double)NEON_fmadd(local_d0,0,uVar26);
      uVar30 = NEON_fmadd(local_e0,0,local_120 + local_100 * 0.0);
      dVar7 = (double)NEON_fmadd(local_c8,0,uVar24);
      uVar15 = NEON_fmadd(local_d8,0,dStack_118 + local_f8 * 0.0);
      uVar24 = NEON_fmadd(local_130,0,local_110 * -0.999999999999999);
      uVar26 = NEON_fmadd(local_128,0,local_108 * -0.999999999999999);
      uVar18 = NEON_fmadd(local_120,0,local_100 * -0.999999999999999);
      uVar23 = NEON_fmadd(local_128,0,local_108 * 0.0);
      uVar31 = NEON_fmadd(local_d8,0xbe6777a5d0000000,uVar31);
      uVar34 = NEON_fmadd(local_120,0,local_100 * 0.0);
      *param_6 = dVar16;
      param_6[1] = dVar7;
      dVar20 = (double)NEON_fmadd(local_d0,0,uVar29);
      uVar24 = NEON_fmadd(local_f0,0xbe6777a5d0000000,uVar24);
      uVar26 = NEON_fmadd(local_e8,0xbe6777a5d0000000,uVar26);
      uVar18 = NEON_fmadd(local_e0,0xbe6777a5d0000000,uVar18);
      dVar13 = (double)NEON_fmadd(local_c0,0,uVar30);
      dVar22 = (double)NEON_fmadd(local_b8,0,uVar15);
      dVar17 = (double)NEON_fmadd(local_c8,0,uVar8);
      dVar7 = (double)NEON_fmadd(local_f0,0,uVar14);
      dVar10 = (double)NEON_fmadd(local_e8,0,uVar23);
      dVar12 = (double)NEON_fmadd(local_d8,0,uVar28);
      dVar11 = (double)NEON_fmadd(local_e0,0,uVar34);
      dVar19 = (double)NEON_fmadd(local_c0,0,uVar18);
      dVar16 = (double)NEON_fmadd(local_b8,0,uVar31);
      param_6[2] = dVar13;
      param_6[3] = dVar22;
      dVar13 = (double)NEON_fmadd(local_c0,0,uVar9);
      param_6[4] = dVar20;
      param_6[5] = dVar17;
      dVar17 = (double)NEON_fmadd(local_b8,0,uVar21);
      dVar20 = (double)NEON_fmadd(local_c8,0,uVar26);
      param_6[10] = dVar19;
      param_6[0xb] = dVar16;
      param_6[6] = dVar13;
      param_6[7] = dVar17;
      dVar16 = (double)NEON_fmadd(local_d0,0,uVar24);
      param_6[0xc] = local_d0 + dVar7;
      param_6[0xd] = local_c8 + dVar10;
      dVar7 = 0.0;
      param_6[0xe] = local_c0 + dVar11;
      param_6[0xf] = local_b8 + dVar12;
      param_6[8] = dVar16;
      param_6[9] = dVar20;
      if (param_1 != 0) {
        pdVar4 = param_2 + 2;
        dVar16 = 0.0;
        dVar19 = 0.0;
        do {
          pdVar1 = pdVar4 + -2;
          pdVar2 = pdVar4 + -1;
          dVar10 = *pdVar4;
          pdVar4 = (double *)((long)pdVar4 + uVar5);
          dVar7 = *pdVar1 - local_d0;
          dVar6 = *pdVar2 - local_c8;
          dVar10 = dVar10 - local_c0;
          uVar8 = NEON_fmadd(local_110,dVar7,local_108 * dVar6);
          uVar9 = NEON_fmadd(local_130,dVar7,local_128 * dVar6);
          uVar14 = NEON_fmadd(local_f0,dVar7,local_e8 * dVar6);
          dVar6 = (double)NEON_fmadd(local_100,dVar10,uVar8);
          uVar8 = NEON_fmadd(local_120,dVar10,uVar9);
          dVar10 = (double)NEON_fmadd(local_e0,dVar10,uVar14);
          dVar7 = (double)NEON_fmadd(uVar8,uVar8,dVar6 * dVar6);
          if (dVar7 <= dVar19) {
            dVar7 = dVar19;
          }
          dVar6 = ABS(dVar10);
          if (ABS(dVar10) <= dVar16) {
            dVar6 = dVar16;
          }
          param_1 = param_1 - 1;
          dVar16 = dVar6;
          dVar19 = dVar7;
        } while (param_1 != 0);
      }
    }
    else {
      dVar6 = 0.0;
      dVar19 = local_108 * 0.0;
      uVar14 = NEON_fmadd(local_130,0xbe6777a5d0000000,dVar7);
      dVar10 = local_100 * 0.0;
      dVar16 = local_f8 * 0.0;
      uVar30 = NEON_fmadd(local_f0,0xbfeffffffffffff7,uVar14);
      uVar8 = NEON_fmadd(local_120,0xbe6777a5d0000000,dVar10);
      uVar14 = NEON_fmadd(local_128,0xbe6777a5d0000000,dVar19);
      uVar9 = NEON_fmadd(dStack_118,0xbe6777a5d0000000,dVar16);
      uVar23 = NEON_fmadd(dStack_118,0,local_f8);
      uVar24 = NEON_fmadd(local_128,0,local_108);
      uVar26 = NEON_fmadd(local_120,0,local_100);
      uVar21 = NEON_fmadd(local_130,0,local_110);
      uVar28 = NEON_fmadd(local_e8,0xbfeffffffffffff7,uVar14);
      uVar29 = NEON_fmadd(local_e0,0xbfeffffffffffff7,uVar8);
      uVar31 = NEON_fmadd(local_d8,0xbfeffffffffffff7,uVar9);
      uVar34 = NEON_fmadd(local_130,0x3feffffffffffff7,dVar7);
      uVar9 = NEON_fmadd(local_128,0x3feffffffffffff7,dVar19);
      uVar15 = NEON_fmadd(local_120,0x3feffffffffffff7,dVar10);
      uVar8 = NEON_fmadd(dStack_118,0x3feffffffffffff7,dVar16);
      uVar18 = NEON_fmadd(dStack_118,0,dVar16);
      uVar14 = NEON_fmadd(local_130,0,dVar7);
      uVar35 = NEON_fmadd(local_f0,0xbe6777a5d0000000,uVar34);
      uVar24 = NEON_fmadd(local_e8,0,uVar24);
      uVar9 = NEON_fmadd(local_e8,0xbe6777a5d0000000,uVar9);
      uVar15 = NEON_fmadd(local_e0,0xbe6777a5d0000000,uVar15);
      uVar8 = NEON_fmadd(local_d8,0xbe6777a5d0000000,uVar8);
      dVar16 = (double)NEON_fmadd(local_b8,0,uVar31);
      uVar26 = NEON_fmadd(local_e0,0,uVar26);
      uVar34 = NEON_fmadd(local_d8,0,uVar23);
      dVar7 = (double)NEON_fmadd(local_f0,0,uVar14);
      dVar20 = (double)NEON_fmadd(local_d0,0,uVar30);
      param_6[3] = dVar16;
      uVar31 = NEON_fmadd(local_128,0,dVar19);
      dVar12 = (double)NEON_fmadd(local_c8,0,uVar28);
      uVar23 = NEON_fmadd(local_120,0,dVar10);
      dVar10 = (double)NEON_fmadd(local_c0,0,uVar29);
      uVar14 = NEON_fmadd(local_f0,0,uVar21);
      dVar19 = (double)NEON_fmadd(local_d8,0,uVar18);
      dVar11 = (double)NEON_fmadd(local_b8,0,uVar34);
      dVar16 = (double)NEON_fmadd(local_e8,0,uVar31);
      param_6[1] = dVar12;
      dVar13 = (double)NEON_fmadd(local_c8,0,uVar24);
      param_6[2] = dVar10;
      dVar17 = (double)NEON_fmadd(local_c0,0,uVar26);
      dVar10 = (double)NEON_fmadd(local_e0,0,uVar23);
      *param_6 = dVar20;
      dVar20 = (double)NEON_fmadd(local_d0,0,uVar14);
      dVar12 = (double)NEON_fmadd(local_d0,0,uVar35);
      param_6[5] = dVar13;
      dVar13 = (double)NEON_fmadd(local_c8,0,uVar9);
      param_6[6] = dVar17;
      dVar17 = (double)NEON_fmadd(local_c0,0,uVar15);
      param_6[7] = dVar11;
      dVar11 = (double)NEON_fmadd(local_b8,0,uVar8);
      param_6[0xc] = local_d0 + dVar7;
      dVar7 = 0.0;
      param_6[4] = dVar20;
      param_6[8] = dVar12;
      param_6[9] = dVar13;
      param_6[10] = dVar17;
      param_6[0xb] = dVar11;
      param_6[0xd] = local_c8 + dVar16;
      param_6[0xe] = local_c0 + dVar10;
      param_6[0xf] = local_b8 + dVar19;
      if (param_1 != 0) {
        pdVar4 = param_2 + 2;
        dVar16 = 0.0;
        dVar19 = 0.0;
        do {
          pdVar1 = pdVar4 + -2;
          pdVar2 = pdVar4 + -1;
          dVar10 = *pdVar4;
          pdVar4 = (double *)((long)pdVar4 + uVar5);
          dVar7 = *pdVar1 - local_d0;
          dVar6 = *pdVar2 - local_c8;
          dVar10 = dVar10 - local_c0;
          uVar8 = NEON_fmadd(local_f0,dVar7,local_e8 * dVar6);
          uVar9 = NEON_fmadd(local_130,dVar7,local_128 * dVar6);
          uVar14 = NEON_fmadd(local_110,dVar7,local_108 * dVar6);
          dVar6 = (double)NEON_fmadd(local_e0,dVar10,uVar8);
          uVar8 = NEON_fmadd(local_120,dVar10,uVar9);
          dVar10 = (double)NEON_fmadd(local_100,dVar10,uVar14);
          dVar7 = (double)NEON_fmadd(uVar8,uVar8,dVar6 * dVar6);
          if (dVar7 <= dVar19) {
            dVar7 = dVar19;
          }
          dVar6 = ABS(dVar10);
          if (ABS(dVar10) <= dVar16) {
            dVar6 = dVar16;
          }
          param_1 = param_1 - 1;
          dVar16 = dVar6;
          dVar19 = dVar7;
        } while (param_1 != 0);
      }
    }
  }
  else {
    dVar6 = 0.0;
    uVar24 = NEON_fmadd(local_128,0xbe6777a5d0000000,local_108 * 0.999999999999999);
    uVar21 = NEON_fmadd(local_130,0xbe6777a5d0000000,local_110 * 0.999999999999999);
    uVar26 = NEON_fmadd(local_120,0xbe6777a5d0000000,local_100 * 0.999999999999999);
    uVar14 = NEON_fmadd(dStack_118,0xbe6777a5d0000000,local_f8 * 0.999999999999999);
    uVar31 = NEON_fmadd(local_130,0xbfeffffffffffff7,local_110 * -4.371139006309477e-08);
    uVar8 = NEON_fmadd(local_128,0xbfeffffffffffff7,local_108 * -4.371139006309477e-08);
    uVar15 = NEON_fmadd(local_d8,0,uVar14);
    uVar14 = NEON_fmadd(dStack_118,0xbfeffffffffffff7,local_f8 * -4.371139006309477e-08);
    uVar9 = NEON_fmadd(local_120,0xbfeffffffffffff7,local_100 * -4.371139006309477e-08);
    uVar31 = NEON_fmadd(local_f0,0,uVar31);
    dVar16 = (double)NEON_fmadd(local_b8,0,uVar15);
    dVar32 = (double)NEON_fmadd(local_130,0,local_110 * 0.0);
    uVar14 = NEON_fmadd(local_d8,0,uVar14);
    uVar15 = NEON_fmadd(local_f0,0,uVar21);
    uVar21 = NEON_fmadd(local_e8,0,uVar24);
    uVar24 = NEON_fmadd(local_e0,0,uVar26);
    dVar10 = (double)NEON_fmadd(local_128,0,local_108 * 0.0);
    dVar11 = (double)NEON_fmadd(local_120,0,local_100 * 0.0);
    dVar12 = (double)NEON_fmadd(dStack_118,0,local_f8 * 0.0);
    dVar19 = (double)NEON_fmadd(local_d0,0,uVar31);
    dVar7 = (double)NEON_fmadd(local_b8,0,uVar14);
    param_6[3] = dVar16;
    dVar17 = (double)NEON_fmadd(local_f0,0,dVar32);
    dVar22 = (double)NEON_fmadd(local_d0,0,uVar15);
    dVar25 = (double)NEON_fmadd(local_c8,0,uVar21);
    dVar27 = (double)NEON_fmadd(local_c0,0,uVar24);
    uVar14 = NEON_fmadd(local_e8,0,uVar8);
    uVar8 = NEON_fmadd(local_e0,0,uVar9);
    param_6[4] = dVar19;
    dVar20 = (double)NEON_fmadd(local_e8,0,dVar10);
    dVar33 = (double)NEON_fmadd(local_e0,0,dVar11);
    dVar13 = (double)NEON_fmadd(local_d8,0,dVar12);
    param_6[7] = dVar7;
    dVar16 = (double)NEON_fmadd(local_c8,0,uVar14);
    dVar19 = (double)NEON_fmadd(local_c0,0,uVar8);
    dVar32 = (double)NEON_fmadd(local_d0,0,local_f0 + dVar32);
    *param_6 = dVar22;
    dVar10 = (double)NEON_fmadd(local_c8,0,local_e8 + dVar10);
    param_6[1] = dVar25;
    dVar11 = (double)NEON_fmadd(local_c0,0,local_e0 + dVar11);
    param_6[2] = dVar27;
    dVar12 = (double)NEON_fmadd(local_b8,0,local_d8 + dVar12);
    param_6[0xc] = local_d0 + dVar17;
    dVar7 = 0.0;
    param_6[5] = dVar16;
    param_6[6] = dVar19;
    param_6[8] = dVar32;
    param_6[9] = dVar10;
    param_6[10] = dVar11;
    param_6[0xb] = dVar12;
    param_6[0xd] = local_c8 + dVar20;
    param_6[0xe] = local_c0 + dVar33;
    param_6[0xf] = local_b8 + dVar13;
    if (param_1 != 0) {
      pdVar4 = param_2 + 2;
      dVar16 = 0.0;
      dVar19 = 0.0;
      do {
        pdVar1 = pdVar4 + -2;
        pdVar2 = pdVar4 + -1;
        dVar10 = *pdVar4;
        pdVar4 = (double *)((long)pdVar4 + uVar5);
        dVar7 = *pdVar1 - local_d0;
        dVar6 = *pdVar2 - local_c8;
        dVar10 = dVar10 - local_c0;
        uVar8 = NEON_fmadd(local_f0,dVar7,local_e8 * dVar6);
        uVar9 = NEON_fmadd(local_110,dVar7,local_108 * dVar6);
        uVar14 = NEON_fmadd(local_130,dVar7,local_128 * dVar6);
        dVar6 = (double)NEON_fmadd(local_e0,dVar10,uVar8);
        uVar8 = NEON_fmadd(local_100,dVar10,uVar9);
        dVar10 = (double)NEON_fmadd(local_120,dVar10,uVar14);
        dVar7 = (double)NEON_fmadd(uVar8,uVar8,dVar6 * dVar6);
        if (dVar7 <= dVar19) {
          dVar7 = dVar19;
        }
        dVar6 = ABS(dVar10);
        if (ABS(dVar10) <= dVar16) {
          dVar6 = dVar16;
        }
        param_1 = param_1 - 1;
        dVar16 = dVar6;
        dVar19 = dVar7;
      } while (param_1 != 0);
    }
  }
  *param_4 = SQRT(dVar7);
  dVar6 = (double)NEON_fmadd(dVar6,0x4000000000000000,SQRT(dVar7) * -2.0);
  *param_5 = dVar6;
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


