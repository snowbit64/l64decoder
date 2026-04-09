// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitOBB
// Entry Point: 00ebf124
// Size: 1200 bytes
// Signature: undefined __cdecl fm_computeBestFitOBB(uint param_1, double * param_2, uint param_3, double * param_4, double * param_5, bool param_6)


/* FLOAT_MATH::fm_computeBestFitOBB(unsigned int, double const*, unsigned int, double*, double*,
   bool) */

void FLOAT_MATH::fm_computeBestFitOBB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5,
               bool param_6)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  double *pdVar6;
  uint uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  double dVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  double dVar46;
  double dVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  double dVar52;
  undefined8 uVar53;
  double dVar54;
  undefined8 uVar55;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double adStack_d0 [3];
  double adStack_b8 [4];
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  fm_computeBestFitPlane(param_1,param_2,param_3,(double *)0x0,0,adStack_b8,adStack_d0);
  fm_planeToMatrix(adStack_b8,param_5);
  computeOBB(param_1,param_2,param_3,param_4,param_5);
  if (param_6) {
    dVar11 = param_5[4];
    dVar15 = param_5[5];
    dVar19 = param_5[6];
    dVar23 = param_5[7];
    dVar36 = 10.0;
    dVar38 = param_5[2];
    dVar24 = param_5[3];
    dVar26 = *param_5;
    dVar31 = param_5[1];
    uVar16 = NEON_fmadd(dVar38,0,dVar19 * 0.0);
    uVar20 = NEON_fmadd(dVar24,0,dVar23 * 0.0);
    dVar39 = param_5[10];
    dVar43 = param_5[0xb];
    uVar8 = NEON_fmadd(dVar26,0,dVar11 * 0.0);
    uVar12 = NEON_fmadd(dVar31,0,dVar15 * 0.0);
    dVar27 = param_5[8];
    dVar32 = param_5[9];
    dVar17 = (double)NEON_fmadd(dVar39,0,uVar16);
    dVar34 = param_5[0xe];
    dVar35 = param_5[0xf];
    dVar21 = (double)NEON_fmadd(dVar43,0,uVar20);
    local_168 = *param_4 * param_4[1] * param_4[2];
    dVar9 = (double)NEON_fmadd(dVar27,0,uVar8);
    dVar13 = (double)NEON_fmadd(dVar32,0,uVar12);
    dVar28 = param_5[0xc];
    dVar37 = param_5[0xd];
    dVar21 = dVar35 + dVar21;
    uVar7 = 10;
    do {
      sincos(dVar36 * 0.01745329238474369 * 0.5,&dStack_158,&local_160);
      dVar18 = dStack_158 * 0.0;
      dVar29 = (double)NEON_fnmsub(local_160,0,dVar18);
      dVar14 = local_160 * 0.0 - dVar18;
      dVar10 = dStack_158 + local_160 * 0.0 * 0.0;
      dVar18 = local_160 + dVar18 * 0.0;
      dVar22 = dVar29 * dVar10 - dVar14 * dVar18;
      dVar30 = dVar29 * dVar14 + dVar10 * dVar18;
      dVar40 = dVar29 * dVar10 + dVar14 * dVar18;
      dVar46 = (double)NEON_fmadd(dVar29 * dVar29 + dVar14 * dVar14,0xc000000000000000,
                                  0x3ff0000000000000);
      dVar47 = dVar14 * dVar10 - dVar29 * dVar18;
      dVar25 = dVar29 * dVar14 - dVar10 * dVar18;
      dVar18 = dVar14 * dVar10 + dVar29 * dVar18;
      dVar22 = dVar22 + dVar22;
      dVar30 = dVar30 + dVar30;
      dVar40 = dVar40 + dVar40;
      dVar47 = dVar47 + dVar47;
      uVar8 = NEON_fmadd(dVar14 * dVar14 + dVar10 * dVar10,0xc000000000000000,0x3ff0000000000000);
      uVar12 = NEON_fmadd(dVar29 * dVar29 + dVar10 * dVar10,0xc000000000000000,0x3ff0000000000000);
      uVar41 = NEON_fmadd(dVar22,dVar26,dVar46 * dVar11);
      uVar44 = NEON_fmadd(dVar22,dVar31,dVar46 * dVar15);
      uVar48 = NEON_fmadd(dVar22,dVar38,dVar46 * dVar19);
      uVar20 = NEON_fmadd(dVar22,dVar24,dVar46 * dVar23);
      uVar50 = NEON_fmadd(uVar8,dVar26,dVar40 * dVar11);
      uVar51 = NEON_fmadd(uVar8,dVar31,dVar40 * dVar15);
      uVar53 = NEON_fmadd(uVar8,dVar38,dVar40 * dVar19);
      uVar16 = NEON_fmadd(uVar8,dVar24,dVar40 * dVar23);
      uVar55 = NEON_fmadd(dVar30,dVar24,dVar47 * dVar23);
      dVar18 = dVar18 + dVar18;
      dVar25 = dVar25 + dVar25;
      uVar33 = NEON_fmadd(dVar30,dVar38,dVar47 * dVar19);
      uVar42 = NEON_fmadd(dVar18,dVar27,uVar41);
      uVar45 = NEON_fmadd(dVar18,dVar32,uVar44);
      uVar49 = NEON_fmadd(dVar18,dVar39,uVar48);
      uVar8 = NEON_fmadd(dVar18,dVar43,uVar20);
      uVar20 = NEON_fmadd(dVar30,dVar26,dVar47 * dVar11);
      uVar41 = NEON_fmadd(dVar30,dVar31,dVar47 * dVar15);
      uVar16 = NEON_fmadd(dVar25,dVar43,uVar16);
      uVar50 = NEON_fmadd(dVar25,dVar27,uVar50);
      uVar51 = NEON_fmadd(dVar25,dVar32,uVar51);
      uVar44 = NEON_fmadd(dVar25,dVar39,uVar53);
      uVar48 = NEON_fmadd(uVar12,dVar43,uVar55);
      dStack_118 = (double)NEON_fmadd(dVar35,0,uVar8);
      uVar33 = NEON_fmadd(uVar12,dVar39,uVar33);
      uVar20 = NEON_fmadd(uVar12,dVar27,uVar20);
      uVar8 = NEON_fmadd(uVar12,dVar32,uVar41);
      local_120 = (double)NEON_fmadd(dVar34,0,uVar49);
      dStack_138 = (double)NEON_fmadd(dVar35,0,uVar16);
      local_140 = (double)NEON_fmadd(dVar34,0,uVar44);
      dStack_f8 = (double)NEON_fmadd(dVar35,0,uVar48);
      local_100 = (double)NEON_fmadd(dVar34,0,uVar33);
      dStack_128 = (double)NEON_fmadd(dVar37,0,uVar45);
      dStack_108 = (double)NEON_fmadd(dVar37,0,uVar8);
      local_150 = (double)NEON_fmadd(dVar28,0,uVar50);
      dStack_148 = (double)NEON_fmadd(dVar37,0,uVar51);
      local_130 = (double)NEON_fmadd(dVar28,0,uVar42);
      local_110 = (double)NEON_fmadd(dVar28,0,uVar20);
      if (param_1 == 0) {
        dVar18 = 1000000000.0;
        dVar14 = -1000000000.0;
        dVar10 = dVar18;
        dVar22 = dVar14;
        dVar30 = dVar18;
        dVar25 = dVar14;
      }
      else {
        dVar47 = -1000000000.0;
        dVar29 = 1000000000.0;
        pdVar6 = param_2 + 2;
        dVar40 = dVar29;
        dVar46 = dVar47;
        dVar52 = dVar29;
        dVar54 = dVar47;
        uVar5 = param_1;
        do {
          pdVar1 = pdVar6 + -2;
          pdVar2 = pdVar6 + -1;
          dVar14 = *pdVar6;
          pdVar6 = (double *)((long)pdVar6 + (ulong)param_3);
          dVar10 = *pdVar1 - (dVar28 + dVar9);
          dVar18 = *pdVar2 - (dVar37 + dVar13);
          dVar14 = dVar14 - (dVar34 + dVar17);
          uVar12 = NEON_fmadd(local_150,dVar10,dStack_148 * dVar18);
          uVar16 = NEON_fmadd(local_130,dVar10,dStack_128 * dVar18);
          uVar8 = NEON_fmadd(local_110,dVar10,dStack_108 * dVar18);
          dVar22 = (double)NEON_fmadd(local_140,dVar14,uVar12);
          dVar25 = (double)NEON_fmadd(local_120,dVar14,uVar16);
          dVar14 = (double)NEON_fmadd(local_100,dVar14,uVar8);
          dVar10 = dVar22;
          if (dVar40 <= dVar22) {
            dVar10 = dVar40;
          }
          dVar30 = dVar25;
          if (dVar52 <= dVar25) {
            dVar30 = dVar52;
          }
          dVar18 = dVar14;
          if (dVar29 <= dVar14) {
            dVar18 = dVar29;
          }
          if (dVar22 <= dVar46) {
            dVar22 = dVar46;
          }
          if (dVar25 <= dVar54) {
            dVar25 = dVar54;
          }
          if (dVar14 <= dVar47) {
            dVar14 = dVar47;
          }
          uVar5 = uVar5 - 1;
          dVar29 = dVar18;
          dVar40 = dVar10;
          dVar47 = dVar14;
          dVar46 = dVar22;
          dVar52 = dVar30;
          dVar54 = dVar25;
        } while (uVar5 != 0);
      }
      dVar25 = dVar25 - dVar30;
      dVar22 = dVar22 - dVar10;
      dVar14 = dVar14 - dVar18;
      dVar30 = (double)NEON_fmadd(dVar25,0x3fe0000000000000,dVar30);
      uVar8 = NEON_fmadd(dVar22,0x3fe0000000000000,dVar10);
      uVar20 = NEON_fmadd(dVar14,0x3fe0000000000000,dVar18);
      uVar16 = NEON_fmadd(dStack_148,uVar8,dStack_128 * dVar30);
      uVar12 = NEON_fmadd(local_150,uVar8,local_130 * dVar30);
      uVar8 = NEON_fmadd(local_140,uVar8,local_120 * dVar30);
      dStack_e8 = (double)NEON_fmadd(dStack_108,uVar20,uVar16);
      local_f0 = (double)NEON_fmadd(local_110,uVar20,uVar12);
      local_e0 = (double)NEON_fmadd(local_100,uVar20,uVar8);
      dVar18 = dVar14 * dVar25 * dVar22;
      dStack_e8 = dVar37 + dVar13 + dStack_e8;
      local_f0 = dVar28 + dVar9 + local_f0;
      local_e0 = dVar34 + dVar17 + local_e0;
      if (dVar18 < local_168) {
        param_5[9] = dStack_108;
        param_5[8] = local_110;
        param_5[0xb] = dStack_f8;
        param_5[10] = local_100;
        param_5[0xd] = dStack_e8;
        param_5[0xc] = local_f0;
        param_5[0xf] = dVar21;
        param_5[0xe] = local_e0;
        param_5[1] = dStack_148;
        *param_5 = local_150;
        param_5[3] = dStack_138;
        param_5[2] = local_140;
        param_5[5] = dStack_128;
        param_5[4] = local_130;
        param_5[7] = dStack_118;
        param_5[6] = local_120;
        *param_4 = dVar22;
        param_4[1] = dVar25;
        param_4[2] = dVar14;
        local_168 = dVar18;
      }
      bVar4 = uVar7 < 0xaa;
      dVar36 = dVar36 + 10.0;
      uVar7 = uVar7 + 10;
      local_d8 = dVar21;
    } while (bVar4);
  }
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


