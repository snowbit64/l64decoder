// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitOBB
// Entry Point: 00eb7054
// Size: 1140 bytes
// Signature: undefined __cdecl fm_computeBestFitOBB(uint param_1, float * param_2, uint param_3, float * param_4, float * param_5, bool param_6)


/* FLOAT_MATH::fm_computeBestFitOBB(unsigned int, float const*, unsigned int, float*, float*, bool)
    */

void FLOAT_MATH::fm_computeBestFitOBB
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5,bool param_6)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float local_114;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  float afStack_c4 [3];
  float afStack_b8 [4];
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  fm_computeBestFitPlane(param_1,param_2,param_3,(float *)0x0,0,afStack_b8,afStack_c4);
  fm_planeToMatrix(afStack_b8,param_5);
  computeOBB(param_1,param_2,param_3,param_4,param_5);
  if (param_6) {
    fVar10 = param_5[6];
    fVar15 = param_5[7];
    fVar8 = (float)*(undefined8 *)(param_5 + 4);
    fVar9 = (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20);
    fVar23 = param_5[2];
    fVar26 = param_5[3];
    fVar19 = (float)*(undefined8 *)param_5;
    fVar21 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
    uVar11 = NEON_fmadd(fVar23,0,fVar10 * 0.0);
    uVar16 = NEON_fmadd(fVar26,0,fVar15 * 0.0);
    fVar28 = param_5[10];
    fVar29 = param_5[0xb];
    fVar34 = (float)*(undefined8 *)(param_5 + 8);
    fVar37 = (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
    fVar32 = param_5[0xe];
    fVar33 = param_5[0xf];
    fVar12 = (float)NEON_fmadd(fVar28,0,uVar11);
    fVar17 = (float)NEON_fmadd(fVar29,0,uVar16);
    fVar30 = (float)*(undefined8 *)(param_5 + 0xc);
    fVar50 = fVar30 + fVar8 * 0.0 + fVar19 * 0.0 + fVar34 * 0.0;
    fVar31 = (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20);
    fVar51 = fVar31 + fVar9 * 0.0 + fVar21 * 0.0 + fVar37 * 0.0;
    local_114 = *param_4 * param_4[1] * param_4[2];
    fVar17 = fVar33 + fVar17;
    uVar7 = 10;
    do {
      sincosf((float)uVar7 * 0.01745329 * 0.5,&fStack_10c,&local_110);
      fVar20 = fStack_10c * 0.0;
      fVar24 = (float)NEON_fnmsub(local_110,0,fVar20);
      fVar18 = local_110 * 0.0 - fVar20;
      fVar13 = fStack_10c + local_110 * 0.0 * 0.0;
      fVar20 = local_110 + fVar20 * 0.0;
      fVar41 = fVar24 * fVar13 + fVar18 * fVar20;
      fVar35 = fVar24 * fVar13 - fVar18 * fVar20;
      fVar46 = fVar18 * fVar13 - fVar24 * fVar20;
      fVar38 = fVar24 * fVar18 + fVar13 * fVar20;
      fVar25 = (float)NEON_fmadd(fVar24 * fVar24 + fVar18 * fVar18,0xc0000000,0x3f800000);
      fVar22 = fVar24 * fVar18 - fVar13 * fVar20;
      fVar41 = fVar41 + fVar41;
      fVar14 = fVar18 * fVar13 + fVar24 * fVar20;
      fVar18 = (float)NEON_fmadd(fVar18 * fVar18 + fVar13 * fVar13,0xc0000000,0x3f800000);
      fVar35 = fVar35 + fVar35;
      fVar46 = fVar46 + fVar46;
      fVar38 = fVar38 + fVar38;
      fVar14 = fVar14 + fVar14;
      uVar42 = NEON_fmadd(fVar35,fVar23,fVar25 * fVar10);
      uVar16 = NEON_fmadd(fVar35,fVar26,fVar25 * fVar15);
      uVar36 = NEON_fmadd(fVar18,fVar23,fVar41 * fVar10);
      uVar11 = NEON_fmadd(fVar18,fVar26,fVar41 * fVar15);
      fVar22 = fVar22 + fVar22;
      uVar43 = NEON_fmadd(fVar14,fVar28,uVar42);
      uVar16 = NEON_fmadd(fVar14,fVar29,uVar16);
      fVar47 = (float)NEON_fmadd(fVar24 * fVar24 + fVar13 * fVar13,0xc0000000,0x3f800000);
      uVar42 = NEON_fmadd(fVar38,fVar23,fVar46 * fVar10);
      uVar39 = NEON_fmadd(fVar38,fVar26,fVar46 * fVar15);
      uVar36 = NEON_fmadd(fVar22,fVar28,uVar36);
      uVar11 = NEON_fmadd(fVar22,fVar29,uVar11);
      fStack_f0 = (float)NEON_fmadd(fVar32,0,uVar43);
      uStack_ec = NEON_fmadd(fVar33,0,uVar16);
      uVar16 = NEON_fmadd(fVar47,fVar28,uVar42);
      uVar42 = NEON_fmadd(fVar47,fVar29,uVar39);
      uStack_100 = NEON_fmadd(fVar32,0,uVar36);
      uStack_fc = NEON_fmadd(fVar33,0,uVar11);
      uStack_e0 = NEON_fmadd(fVar32,0,uVar16);
      uStack_dc = NEON_fmadd(fVar33,0,uVar42);
      fVar20 = fVar8 * fVar25 + fVar19 * fVar35 + fVar34 * fVar14 + fVar30 * 0.0;
      fVar13 = fVar9 * fVar25 + fVar21 * fVar35 + fVar37 * fVar14 + fVar31 * 0.0;
      local_f8 = CONCAT44(fVar13,fVar20);
      fVar24 = fVar8 * fVar41 + fVar19 * fVar18 + fVar34 * fVar22 + fVar30 * 0.0;
      fVar22 = fVar9 * fVar41 + fVar21 * fVar18 + fVar37 * fVar22 + fVar31 * 0.0;
      local_108 = CONCAT44(fVar22,fVar24);
      fVar14 = fVar8 * fVar46 + fVar19 * fVar38 + fVar34 * fVar47 + fVar30 * 0.0;
      fVar18 = fVar9 * fVar46 + fVar21 * fVar38 + fVar37 * fVar47 + fVar31 * 0.0;
      local_e8 = CONCAT44(fVar18,fVar14);
      if (param_1 == 0) {
        fVar41 = 1e+09;
        fVar35 = -1e+09;
        fVar46 = fVar41;
        fVar47 = fVar41;
        fVar25 = fVar35;
        fVar38 = fVar35;
      }
      else {
        fVar25 = -1e+09;
        fVar45 = 1e+09;
        pfVar6 = param_2 + 2;
        fVar27 = fVar45;
        fVar40 = fVar25;
        fVar44 = fVar45;
        uVar5 = param_1;
        fVar38 = fVar25;
        do {
          pfVar1 = pfVar6 + -2;
          pfVar2 = pfVar6 + -1;
          fVar46 = *pfVar6;
          pfVar6 = (float *)((long)pfVar6 + (ulong)param_3);
          fVar41 = *pfVar2 - fVar51;
          fVar35 = *pfVar1 - fVar50;
          fVar46 = fVar46 - (fVar32 + fVar12);
          uVar16 = NEON_fmadd(fVar24,fVar35,fVar22 * fVar41);
          uVar42 = NEON_fmadd(fVar20,fVar35,fVar13 * fVar41);
          uVar11 = NEON_fmadd(fVar14,fVar35,fVar18 * fVar41);
          fVar35 = (float)NEON_fmadd(uStack_100,fVar46,uVar16);
          fVar49 = (float)NEON_fmadd(fStack_f0,fVar46,uVar42);
          fVar48 = (float)NEON_fmadd(uStack_e0,fVar46,uVar11);
          fVar46 = fVar35;
          if (fVar27 <= fVar35) {
            fVar46 = fVar27;
          }
          fVar47 = fVar49;
          if (fVar44 <= fVar49) {
            fVar47 = fVar44;
          }
          fVar41 = fVar48;
          if (fVar45 <= fVar48) {
            fVar41 = fVar45;
          }
          if (fVar35 <= fVar40) {
            fVar35 = fVar40;
          }
          if (fVar49 <= fVar25) {
            fVar49 = fVar25;
          }
          fVar25 = fVar49;
          if (fVar48 <= fVar38) {
            fVar48 = fVar38;
          }
          fVar38 = fVar48;
          uVar5 = uVar5 - 1;
          fVar45 = fVar41;
          fVar27 = fVar46;
          fVar40 = fVar35;
          fVar44 = fVar47;
        } while (uVar5 != 0);
      }
      fVar25 = fVar25 - fVar47;
      fVar35 = fVar35 - fVar46;
      fVar38 = fVar38 - fVar41;
      fVar45 = (float)NEON_fmadd(fVar25,0x3f000000,fVar47);
      fVar47 = (float)NEON_fmadd(fVar35,0x3f000000,fVar46);
      fVar46 = (float)NEON_fmadd(fVar38,0x3f000000,fVar41);
      uVar11 = NEON_fmadd(uStack_100,fVar47,fStack_f0 * fVar45);
      fStack_d0 = (float)NEON_fmadd(uStack_e0,fVar46,uVar11);
      fVar41 = fVar38 * fVar25 * fVar35;
      local_d8 = CONCAT44(fVar51 + fVar13 * fVar45 + fVar22 * fVar47 + fVar18 * fVar46,
                          fVar50 + fVar20 * fVar45 + fVar24 * fVar47 + fVar14 * fVar46);
      fStack_d0 = fVar32 + fVar12 + fStack_d0;
      if (fVar41 < local_114) {
        *(ulong *)(param_5 + 2) = CONCAT44(uStack_fc,uStack_100);
        *(undefined8 *)param_5 = local_108;
        *(ulong *)(param_5 + 6) = CONCAT44(uStack_ec,fStack_f0);
        *(undefined8 *)(param_5 + 4) = local_f8;
        *(ulong *)(param_5 + 10) = CONCAT44(uStack_dc,uStack_e0);
        *(undefined8 *)(param_5 + 8) = local_e8;
        *(ulong *)(param_5 + 0xe) = CONCAT44(fVar17,fStack_d0);
        *(undefined8 *)(param_5 + 0xc) = local_d8;
        *param_4 = fVar35;
        param_4[1] = fVar25;
        param_4[2] = fVar38;
        local_114 = fVar41;
      }
      bVar4 = uVar7 < 0xaa;
      uVar7 = uVar7 + 10;
      fStack_cc = fVar17;
    } while (bVar4);
  }
  if (*(long *)(lVar3 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


