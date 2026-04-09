// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitCapsule
// Entry Point: 00eb9670
// Size: 1580 bytes
// Signature: undefined __cdecl fm_computeBestFitCapsule(uint param_1, float * param_2, uint param_3, float * param_4, float * param_5, float * param_6, bool param_7)


/* FLOAT_MATH::fm_computeBestFitCapsule(unsigned int, float const*, unsigned int, float&, float&,
   float*, bool) */

void FLOAT_MATH::fm_computeBestFitCapsule
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5,
               float *param_6,bool param_7)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  uVar5 = (ulong)param_3;
  fm_computeBestFitOBB(param_1,param_2,param_3,&local_a4,&local_e4,param_7);
  if ((local_a4 <= fStack_a0) || (local_a4 <= local_9c)) {
    fVar6 = 0.0;
    fVar8 = local_d4 * 0.0;
    if ((fStack_a0 <= local_a4) || (fStack_a0 <= local_9c)) {
      uVar19 = NEON_fmadd(local_e4,0,local_d4 * 5.960464e-08);
      uVar7 = NEON_fmadd(local_e0,0,local_d0 * 5.960464e-08);
      uVar9 = NEON_fmadd(local_dc,0,local_cc * 5.960464e-08);
      uVar20 = NEON_fmadd(local_d8,0,local_c8 * 5.960464e-08);
      uVar32 = NEON_fmadd(local_bc,0,local_dc + local_cc * 0.0);
      uVar29 = NEON_fmadd(local_c4,0x3f7fffff,uVar19);
      uVar19 = NEON_fmadd(local_c0,0x3f7fffff,uVar7);
      uVar22 = NEON_fmadd(local_bc,0x3f7fffff,uVar9);
      uVar9 = NEON_fmadd(local_e4,0,local_d4 * -0.9999999);
      uVar30 = NEON_fmadd(local_e0,0,local_d0 * -0.9999999);
      uVar7 = NEON_fmadd(local_dc,0,local_cc * -0.9999999);
      uVar23 = NEON_fmadd(local_b8,0x3f7fffff,uVar20);
      uVar20 = NEON_fmadd(local_d8,0,local_c8 * -0.9999999);
      uVar28 = NEON_fmadd(local_d8,0,local_c8 * 0.0);
      uVar27 = NEON_fmadd(local_c4,0,local_e4 + fVar8);
      uVar16 = NEON_fmadd(local_c0,0,local_e0 + local_d0 * 0.0);
      uVar25 = NEON_fmadd(local_c4,0x33800000,uVar9);
      uVar30 = NEON_fmadd(local_c0,0x33800000,uVar30);
      uVar9 = NEON_fmadd(local_bc,0x33800000,uVar7);
      uVar18 = NEON_fmadd(local_b8,0x33800000,uVar20);
      fVar21 = (float)NEON_fmadd(local_ac,0,uVar32);
      uVar7 = NEON_fmadd(local_e4,0,fVar8);
      fVar11 = (float)NEON_fmadd(local_b4,0,uVar27);
      fVar10 = (float)NEON_fmadd(local_b0,0,uVar16);
      uVar16 = NEON_fmadd(local_e0,0,local_d0 * 0.0);
      uVar27 = NEON_fmadd(local_dc,0,local_cc * 0.0);
      uVar20 = NEON_fmadd(local_b8,0,local_d8 + local_c8 * 0.0);
      param_6[2] = fVar21;
      fVar21 = (float)NEON_fmadd(local_ac,0,uVar22);
      fVar8 = (float)NEON_fmadd(local_c4,0,uVar7);
      fVar12 = (float)NEON_fmadd(local_b8,0,uVar28);
      *param_6 = fVar11;
      fVar14 = (float)NEON_fmadd(local_b4,0,uVar29);
      param_6[1] = fVar10;
      fVar13 = (float)NEON_fmadd(local_b0,0,uVar19);
      param_6[6] = fVar21;
      fVar10 = (float)NEON_fmadd(local_a8,0,uVar23);
      fVar21 = (float)NEON_fmadd(local_c0,0,uVar16);
      fVar11 = (float)NEON_fmadd(local_bc,0,uVar27);
      fVar17 = (float)NEON_fmadd(local_a8,0,uVar20);
      param_6[4] = fVar14;
      fVar14 = (float)NEON_fmadd(local_b0,0,uVar30);
      param_6[5] = fVar13;
      fVar13 = (float)NEON_fmadd(local_b4,0,uVar25);
      fVar15 = (float)NEON_fmadd(local_ac,0,uVar9);
      param_6[7] = fVar10;
      fVar10 = (float)NEON_fmadd(local_a8,0,uVar18);
      param_6[0xc] = local_b4 + fVar8;
      fVar8 = 0.0;
      param_6[3] = fVar17;
      param_6[8] = fVar13;
      param_6[9] = fVar14;
      param_6[10] = fVar15;
      param_6[0xb] = fVar10;
      param_6[0xd] = local_b0 + fVar21;
      param_6[0xe] = local_ac + fVar11;
      param_6[0xf] = local_a8 + fVar12;
      if (param_1 != 0) {
        fVar8 = 0.0;
        pfVar4 = param_2 + 2;
        fVar21 = 0.0;
        do {
          pfVar1 = pfVar4 + -2;
          pfVar2 = pfVar4 + -1;
          fVar11 = *pfVar4;
          pfVar4 = (float *)((long)pfVar4 + uVar5);
          fVar6 = *pfVar2 - local_b0;
          fVar10 = *pfVar1 - local_b4;
          fVar11 = fVar11 - local_ac;
          uVar9 = NEON_fmadd(local_d4,fVar10,local_d0 * fVar6);
          uVar19 = NEON_fmadd(local_e4,fVar10,local_e0 * fVar6);
          uVar7 = NEON_fmadd(local_c4,fVar10,local_c0 * fVar6);
          fVar6 = (float)NEON_fmadd(local_cc,fVar11,uVar9);
          uVar9 = NEON_fmadd(local_dc,fVar11,uVar19);
          fVar10 = (float)NEON_fmadd(local_bc,fVar11,uVar7);
          fVar6 = (float)NEON_fmadd(uVar9,uVar9,fVar6 * fVar6);
          if (fVar6 <= fVar8) {
            fVar6 = fVar8;
          }
          fVar8 = fVar6;
          fVar6 = ABS(fVar10);
          if (ABS(fVar10) <= fVar21) {
            fVar6 = fVar21;
          }
          param_1 = param_1 - 1;
          fVar21 = fVar6;
        } while (param_1 != 0);
      }
    }
    else {
      fVar6 = 0.0;
      fVar12 = local_d0 * 0.0;
      fVar13 = local_cc * 0.0;
      uVar7 = NEON_fmadd(local_e4,0x33800000,fVar8);
      fVar21 = local_c8 * 0.0;
      uVar19 = NEON_fmadd(local_dc,0x33800000,fVar13);
      uVar16 = NEON_fmadd(local_d8,0,local_c8);
      uVar9 = NEON_fmadd(local_e0,0x33800000,fVar12);
      uVar29 = NEON_fmadd(local_c4,0xbf7fffff,uVar7);
      uVar30 = NEON_fmadd(local_d8,0x33800000,fVar21);
      uVar20 = NEON_fmadd(local_e4,0,local_d4);
      uVar23 = NEON_fmadd(local_e0,0,local_d0);
      uVar7 = NEON_fmadd(local_e0,0x3f7fffff,fVar12);
      uVar22 = NEON_fmadd(local_dc,0x3f7fffff,fVar13);
      uVar25 = NEON_fmadd(local_dc,0,local_cc);
      uVar27 = NEON_fmadd(local_c0,0xbf7fffff,uVar9);
      uVar28 = NEON_fmadd(local_bc,0xbf7fffff,uVar19);
      uVar18 = NEON_fmadd(local_b8,0xbf7fffff,uVar30);
      uVar32 = NEON_fmadd(local_e4,0x3f7fffff,fVar8);
      uVar9 = NEON_fmadd(local_d8,0x3f7fffff,fVar21);
      uVar19 = NEON_fmadd(local_c0,0x33800000,uVar7);
      uVar22 = NEON_fmadd(local_bc,0x33800000,uVar22);
      uVar30 = NEON_fmadd(local_d8,0,fVar21);
      uVar7 = NEON_fmadd(local_e4,0,fVar8);
      uVar32 = NEON_fmadd(local_c4,0x33800000,uVar32);
      fVar17 = (float)NEON_fmadd(local_b4,0,uVar29);
      uVar9 = NEON_fmadd(local_b8,0x33800000,uVar9);
      uVar20 = NEON_fmadd(local_c4,0,uVar20);
      fVar11 = (float)NEON_fmadd(local_a8,0,uVar18);
      uVar23 = NEON_fmadd(local_c0,0,uVar23);
      uVar25 = NEON_fmadd(local_bc,0,uVar25);
      uVar16 = NEON_fmadd(local_b8,0,uVar16);
      fVar8 = (float)NEON_fmadd(local_c4,0,uVar7);
      fVar21 = (float)NEON_fmadd(local_b8,0,uVar30);
      fVar15 = (float)NEON_fmadd(local_ac,0,uVar28);
      fVar14 = (float)NEON_fmadd(local_b0,0,uVar27);
      fVar10 = (float)NEON_fmadd(local_a8,0,uVar16);
      param_6[2] = fVar15;
      param_6[3] = fVar11;
      uVar7 = NEON_fmadd(local_e0,0,fVar12);
      uVar30 = NEON_fmadd(local_dc,0,fVar13);
      *param_6 = fVar17;
      param_6[1] = fVar14;
      fVar17 = (float)NEON_fmadd(local_b4,0,uVar20);
      fVar14 = (float)NEON_fmadd(local_b0,0,uVar23);
      fVar15 = (float)NEON_fmadd(local_ac,0,uVar25);
      fVar13 = (float)NEON_fmadd(local_b4,0,uVar32);
      fVar11 = (float)NEON_fmadd(local_c0,0,uVar7);
      fVar12 = (float)NEON_fmadd(local_bc,0,uVar30);
      param_6[4] = fVar17;
      param_6[5] = fVar14;
      fVar14 = (float)NEON_fmadd(local_b0,0,uVar19);
      param_6[6] = fVar15;
      param_6[7] = fVar10;
      fVar15 = (float)NEON_fmadd(local_ac,0,uVar22);
      fVar10 = (float)NEON_fmadd(local_a8,0,uVar9);
      param_6[8] = fVar13;
      param_6[9] = fVar14;
      param_6[0xc] = local_b4 + fVar8;
      param_6[0xd] = local_b0 + fVar11;
      fVar8 = 0.0;
      param_6[10] = fVar15;
      param_6[0xb] = fVar10;
      param_6[0xe] = local_ac + fVar12;
      param_6[0xf] = local_a8 + fVar21;
      if (param_1 != 0) {
        fVar8 = 0.0;
        pfVar4 = param_2 + 2;
        fVar21 = 0.0;
        do {
          pfVar1 = pfVar4 + -2;
          pfVar2 = pfVar4 + -1;
          fVar11 = *pfVar4;
          pfVar4 = (float *)((long)pfVar4 + uVar5);
          fVar6 = *pfVar2 - local_b0;
          fVar10 = *pfVar1 - local_b4;
          fVar11 = fVar11 - local_ac;
          uVar9 = NEON_fmadd(local_c4,fVar10,local_c0 * fVar6);
          uVar19 = NEON_fmadd(local_e4,fVar10,local_e0 * fVar6);
          uVar7 = NEON_fmadd(local_d4,fVar10,local_d0 * fVar6);
          fVar6 = (float)NEON_fmadd(local_bc,fVar11,uVar9);
          uVar9 = NEON_fmadd(local_dc,fVar11,uVar19);
          fVar10 = (float)NEON_fmadd(local_cc,fVar11,uVar7);
          fVar6 = (float)NEON_fmadd(uVar9,uVar9,fVar6 * fVar6);
          if (fVar6 <= fVar8) {
            fVar6 = fVar8;
          }
          fVar8 = fVar6;
          fVar6 = ABS(fVar10);
          if (ABS(fVar10) <= fVar21) {
            fVar6 = fVar21;
          }
          param_1 = param_1 - 1;
          fVar21 = fVar6;
        } while (param_1 != 0);
      }
    }
  }
  else {
    fVar6 = 0.0;
    uVar19 = NEON_fmadd(local_e4,0x33800000,local_d4 * 0.9999999);
    uVar22 = NEON_fmadd(local_e0,0x33800000,local_d0 * 0.9999999);
    uVar25 = NEON_fmadd(local_dc,0x33800000,local_cc * 0.9999999);
    uVar7 = NEON_fmadd(local_d8,0x33800000,local_c8 * 0.9999999);
    uVar30 = NEON_fmadd(local_e4,0xbf7fffff,local_d4 * 5.960464e-08);
    uVar9 = NEON_fmadd(local_e0,0xbf7fffff,local_d0 * 5.960464e-08);
    uVar20 = NEON_fmadd(local_c4,0,uVar19);
    uVar23 = NEON_fmadd(local_c0,0,uVar22);
    uVar25 = NEON_fmadd(local_bc,0,uVar25);
    uVar7 = NEON_fmadd(local_b8,0,uVar7);
    uVar19 = NEON_fmadd(local_dc,0xbf7fffff,local_cc * 5.960464e-08);
    uVar22 = NEON_fmadd(local_d8,0xbf7fffff,local_c8 * 5.960464e-08);
    uVar30 = NEON_fmadd(local_c4,0,uVar30);
    fVar31 = (float)NEON_fmadd(local_e4,0,local_d4 * 0.0);
    uVar9 = NEON_fmadd(local_c0,0,uVar9);
    fVar12 = (float)NEON_fmadd(local_e0,0,local_d0 * 0.0);
    fVar21 = (float)NEON_fmadd(local_b4,0,uVar20);
    fVar24 = (float)NEON_fmadd(local_b0,0,uVar23);
    fVar26 = (float)NEON_fmadd(local_ac,0,uVar25);
    fVar8 = (float)NEON_fmadd(local_a8,0,uVar7);
    uVar7 = NEON_fmadd(local_bc,0,uVar19);
    fVar13 = (float)NEON_fmadd(local_dc,0,local_cc * 0.0);
    uVar19 = NEON_fmadd(local_b8,0,uVar22);
    fVar14 = (float)NEON_fmadd(local_d8,0,local_c8 * 0.0);
    fVar17 = (float)NEON_fmadd(local_b4,0,uVar30);
    fVar10 = (float)NEON_fmadd(local_b0,0,uVar9);
    fVar11 = (float)NEON_fmadd(local_ac,0,uVar7);
    fVar15 = (float)NEON_fmadd(local_a8,0,uVar19);
    *param_6 = fVar21;
    param_6[1] = fVar24;
    fVar24 = (float)NEON_fmadd(local_b4,0,local_c4 + fVar31);
    param_6[2] = fVar26;
    param_6[3] = fVar8;
    fVar8 = (float)NEON_fmadd(local_b0,0,local_c0 + fVar12);
    fVar21 = (float)NEON_fmadd(local_c4,0,fVar31);
    param_6[4] = fVar17;
    param_6[5] = fVar10;
    fVar12 = (float)NEON_fmadd(local_c0,0,fVar12);
    fVar17 = (float)NEON_fmadd(local_bc,0,fVar13);
    fVar10 = (float)NEON_fmadd(local_b8,0,fVar14);
    fVar13 = (float)NEON_fmadd(local_ac,0,local_bc + fVar13);
    fVar14 = (float)NEON_fmadd(local_a8,0,local_b8 + fVar14);
    param_6[6] = fVar11;
    param_6[7] = fVar15;
    param_6[8] = fVar24;
    param_6[9] = fVar8;
    fVar8 = 0.0;
    param_6[10] = fVar13;
    param_6[0xb] = fVar14;
    param_6[0xc] = local_b4 + fVar21;
    param_6[0xd] = local_b0 + fVar12;
    param_6[0xe] = local_ac + fVar17;
    param_6[0xf] = local_a8 + fVar10;
    if (param_1 != 0) {
      fVar8 = 0.0;
      fVar6 = 0.0;
      pfVar4 = param_2 + 2;
      do {
        pfVar1 = pfVar4 + -2;
        pfVar2 = pfVar4 + -1;
        fVar11 = *pfVar4;
        pfVar4 = (float *)((long)pfVar4 + uVar5);
        fVar21 = *pfVar2 - local_b0;
        fVar10 = *pfVar1 - local_b4;
        fVar11 = fVar11 - local_ac;
        uVar9 = NEON_fmadd(local_c4,fVar10,local_c0 * fVar21);
        uVar19 = NEON_fmadd(local_d4,fVar10,local_d0 * fVar21);
        uVar7 = NEON_fmadd(local_e4,fVar10,local_e0 * fVar21);
        fVar21 = (float)NEON_fmadd(local_bc,fVar11,uVar9);
        uVar9 = NEON_fmadd(local_cc,fVar11,uVar19);
        fVar10 = (float)NEON_fmadd(local_dc,fVar11,uVar7);
        fVar21 = (float)NEON_fmadd(uVar9,uVar9,fVar21 * fVar21);
        if (fVar21 <= fVar8) {
          fVar21 = fVar8;
        }
        fVar8 = fVar21;
        fVar21 = ABS(fVar10);
        if (ABS(fVar10) <= fVar6) {
          fVar21 = fVar6;
        }
        fVar6 = fVar21;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
  }
  *param_4 = SQRT(fVar8);
  fVar6 = (float)NEON_fmadd(fVar6,0x40000000,SQRT(fVar8) * -2.0);
  *param_5 = fVar6;
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


