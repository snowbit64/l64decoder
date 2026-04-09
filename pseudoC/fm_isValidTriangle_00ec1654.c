// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_isValidTriangle
// Entry Point: 00ec1654
// Size: 804 bytes
// Signature: undefined __cdecl fm_isValidTriangle(double * param_1, double * param_2, double * param_3, double param_4)


/* FLOAT_MATH::fm_isValidTriangle(double const*, double const*, double const*, double) */

void FLOAT_MATH::fm_isValidTriangle(double *param_1,double *param_2,double *param_3,double param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  double *pdVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double adStack_628 [192];
  long local_28;
  
  lVar4 = tpidr_el0;
  dVar20 = param_4 * param_4;
  local_28 = *(long *)(lVar4 + 0x28);
  dVar26 = *param_1;
  dVar19 = param_1[1];
  dVar16 = *param_2;
  dVar14 = param_2[1];
  dVar24 = param_1[2];
  dVar17 = param_2[2];
  uVar7 = NEON_fmadd(dVar26 - dVar16,dVar26 - dVar16,(dVar19 - dVar14) * (dVar19 - dVar14));
  dVar8 = (double)NEON_fmadd(dVar24 - dVar17,dVar24 - dVar17,uVar7);
  if (dVar20 <= dVar8) {
    dVar9 = *param_3;
    dVar8 = param_3[1];
    dVar10 = param_3[2];
    dVar12 = dVar26 - dVar9;
    dVar11 = dVar19 - dVar8;
    dVar13 = dVar24 - dVar10;
    uVar7 = NEON_fmadd(dVar12,dVar12,dVar11 * dVar11);
    dVar18 = (double)NEON_fmadd(dVar13,dVar13,uVar7);
    if (dVar20 <= dVar18) {
      uVar7 = NEON_fmadd(dVar16 - dVar9,dVar16 - dVar9,(dVar14 - dVar8) * (dVar14 - dVar8));
      dVar21 = (double)NEON_fmadd(dVar17 - dVar10,dVar17 - dVar10,uVar7);
      if (dVar20 <= dVar21) {
        dVar20 = dVar14 - dVar19;
        dVar21 = dVar16 - dVar26;
        dVar22 = dVar17 - dVar24;
        uVar7 = NEON_fmadd(dVar21,dVar21,dVar20 * dVar20);
        dVar23 = (double)NEON_fmadd(dVar22,dVar22,uVar7);
        dVar23 = SQRT(dVar23);
        if (dVar23 == 0.0) {
          dVar19 = dVar23 * 0.5 * 0.0;
        }
        else {
          dVar28 = (double)NEON_fmadd(dVar21,dVar9 - dVar26,dVar20 * (dVar8 - dVar19));
          dVar28 = (double)NEON_fnmadd(dVar22,dVar10 - dVar24,-dVar28);
          dVar28 = dVar28 / (dVar23 * dVar23);
          dVar19 = (double)NEON_fmadd(dVar28,dVar20,dVar8 - dVar19);
          uVar7 = NEON_fmadd(dVar28,dVar21,dVar9 - dVar26);
          uVar25 = NEON_fmadd(dVar28,dVar22,dVar10 - dVar24);
          uVar7 = NEON_fmadd(uVar7,uVar7,dVar19 * dVar19);
          dVar19 = (double)NEON_fmadd(uVar25,uVar25,uVar7);
          dVar19 = dVar23 * 0.5 * SQRT(dVar19);
        }
        if (param_4 < dVar19) {
          dVar18 = SQRT(dVar18);
          dVar19 = 0.0;
          dVar24 = 0.0;
          dVar29 = 0.0;
          dVar26 = 1.0;
          dVar28 = 1.0;
          if (1.000000011686097e-07 < dVar18) {
            dVar29 = 1.0 / dVar18;
            dVar28 = dVar12 * dVar29;
            dVar24 = dVar11 * dVar29;
            dVar29 = dVar13 * dVar29;
          }
          dVar6 = 1.0 - param_4;
          dVar30 = 0.0;
          if (1.000000011686097e-07 < dVar23) {
            dVar30 = 1.0 / dVar23;
            dVar26 = dVar21 * dVar30;
            dVar19 = dVar20 * dVar30;
            dVar30 = dVar22 * dVar30;
          }
          dVar27 = dVar8 - dVar14;
          dVar31 = 0.0;
          dVar15 = 0.0;
          dVar32 = 1.0;
          uVar7 = NEON_fmadd(dVar28,dVar26,dVar24 * dVar19);
          dVar24 = dVar10 - dVar17;
          dVar26 = (double)NEON_fmadd(dVar29,dVar30,uVar7);
          dVar19 = dVar9 - dVar16;
          dVar28 = 0.0;
          dVar29 = 1.0;
          cVar2 = dVar26 < dVar6;
          lVar1 = 0x18;
          pdVar5 = adStack_628 + 3;
          if (!(bool)cVar2) {
            lVar1 = 0;
            pdVar5 = adStack_628;
          }
          if (1.000000011686097e-07 < dVar23) {
            dVar23 = 1.0 / dVar23;
            dVar32 = dVar21 * dVar23;
            dVar31 = dVar20 * dVar23;
            dVar15 = dVar22 * dVar23;
          }
          dVar21 = 0.0;
          uVar7 = NEON_fmadd(dVar19,dVar19,dVar27 * dVar27);
          dVar20 = (double)NEON_fmadd(dVar24,dVar24,uVar7);
          dVar20 = SQRT(dVar20);
          if (1.000000011686097e-07 < dVar20) {
            dVar21 = 1.0 / dVar20;
            dVar29 = dVar19 * dVar21;
            dVar28 = dVar27 * dVar21;
            dVar21 = dVar24 * dVar21;
          }
          uVar7 = NEON_fmadd(dVar32,dVar29,dVar31 * dVar28);
          dVar21 = (double)NEON_fmadd(dVar15,dVar21,uVar7);
          if (dVar21 < dVar6) {
            *(double *)((long)adStack_628 + lVar1) = dVar16;
            pdVar5[1] = dVar14;
            pdVar5[2] = dVar17;
            pdVar5 = pdVar5 + 3;
            cVar2 = '\x02';
            if (dVar6 <= dVar26) {
              cVar2 = '\x01';
            }
          }
          dVar14 = 0.0;
          dVar17 = 0.0;
          dVar16 = 1.0;
          if (dVar20 <= 1.000000011686097e-07) {
            if (dVar18 <= 1.000000011686097e-07) goto LAB_00ec188c;
LAB_00ec18d4:
            dVar18 = 1.0 / dVar18;
            uVar7 = NEON_fmadd(dVar16,dVar12 * dVar18,dVar14 * dVar11 * dVar18);
            dVar14 = (double)NEON_fmadd(dVar17,dVar13 * dVar18,uVar7);
          }
          else {
            dVar20 = 1.0 / dVar20;
            dVar16 = dVar19 * dVar20;
            dVar14 = dVar27 * dVar20;
            dVar17 = dVar24 * dVar20;
            if (1.000000011686097e-07 < dVar18) goto LAB_00ec18d4;
LAB_00ec188c:
            uVar7 = NEON_fmadd(dVar16,0x3ff0000000000000,dVar14 * 0.0);
            dVar14 = (double)NEON_fmadd(dVar17,0,uVar7);
          }
          if (dVar14 < dVar6) {
            cVar2 = cVar2 + '\x01';
            *pdVar5 = dVar9;
            pdVar5[1] = dVar8;
            pdVar5[2] = dVar10;
          }
          bVar3 = cVar2 == '\x03';
          lVar4 = *(long *)(lVar4 + 0x28);
          goto joined_r0x00ec18c0;
        }
      }
    }
  }
  bVar3 = false;
  lVar4 = *(long *)(lVar4 + 0x28);
joined_r0x00ec18c0:
  if (lVar4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


