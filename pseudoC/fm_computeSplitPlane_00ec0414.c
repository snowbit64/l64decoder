// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeSplitPlane
// Entry Point: 00ec0414
// Size: 616 bytes
// Signature: undefined __cdecl fm_computeSplitPlane(uint param_1, double * param_2, uint param_3, uint * param_4, double * param_5)


/* FLOAT_MATH::fm_computeSplitPlane(unsigned int, double const*, unsigned int, unsigned int const*,
   double*) */

undefined8
FLOAT_MATH::fm_computeSplitPlane
          (uint param_1,double *param_2,uint param_3,uint *param_4,double *param_5)

{
  char cVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  double local_60;
  double dStack_58;
  double local_50;
  double local_40;
  double dStack_38;
  double local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  fm_computeBestFitOBB(param_1,param_2,0x18,&local_40,&local_c0,true);
  dVar7 = local_40 * 0.5;
  dVar6 = -(local_40 * 0.5);
  dVar20 = dStack_38 * 0.5;
  dVar18 = local_30 * 0.5;
  dVar12 = -(dStack_38 * 0.5);
  dVar4 = (double)NEON_fnmsub(local_40,0x3fe0000000000000,dVar7);
  dVar9 = (double)NEON_fnmsub(dStack_38,0x3fe0000000000000,dVar20);
  dVar3 = (double)NEON_fnmsub(local_30,0x3fe0000000000000,dVar18);
  cVar1 = '\x02';
  if ((local_30 <= dStack_38 || local_30 == local_40) || dStack_38 < local_30 && local_30 < local_40
     ) {
    cVar1 = local_40 < dStack_38;
  }
  dVar11 = dVar3;
  dVar10 = dVar3;
  dVar15 = dVar12;
  if (cVar1 == '\x02') {
    dVar8 = dVar12;
    if (local_40 <= dStack_38) {
      dVar7 = dVar6;
      dVar8 = dVar20;
    }
  }
  else {
    dVar17 = -(local_30 * 0.5);
    dVar8 = dVar9;
    dVar15 = dVar9;
    if (cVar1 == '\x01') {
      dVar11 = dVar17;
      dVar10 = dVar17;
      if (local_40 <= local_30) {
        dVar7 = dVar6;
        dVar11 = dVar18;
      }
    }
    else {
      dVar6 = dVar4;
      dVar7 = dVar4;
      if ((cVar1 == '\0') &&
         (dVar11 = dVar17, dVar8 = dVar20, dVar10 = dVar17, dVar15 = dVar12, local_30 <= dStack_38))
      {
        dVar11 = dVar18;
        dVar8 = dVar12;
      }
    }
  }
  uVar22 = NEON_fmadd(local_c0,dVar6,dVar15 * local_a0);
  uVar13 = NEON_fmadd(local_c0,dVar7,dVar8 * local_a0);
  uVar19 = NEON_fmadd(local_c0,dVar4,dVar9 * local_a0);
  uVar21 = NEON_fmadd(local_b8,dVar4,dVar9 * dStack_98);
  uVar5 = NEON_fmadd(uStack_b0,dVar4,dVar9 * local_90);
  dVar18 = (double)NEON_fmadd(local_80,dVar10,uVar22);
  uVar14 = NEON_fmadd(uStack_b0,dVar6,dVar15 * local_90);
  uVar16 = NEON_fmadd(uStack_b0,dVar7,dVar8 * local_90);
  dVar20 = (double)NEON_fmadd(local_80,dVar11,uVar13);
  uVar13 = NEON_fmadd(local_b8,dVar6,dVar15 * dStack_98);
  uVar22 = NEON_fmadd(local_b8,dVar7,dVar8 * dStack_98);
  dVar4 = (double)NEON_fmadd(local_70,dVar3,uVar5);
  dVar9 = (double)NEON_fmadd(local_70,dVar10,uVar14);
  dVar12 = (double)NEON_fmadd(local_70,dVar11,uVar16);
  dVar15 = (double)NEON_fmadd(local_80,dVar3,uVar19);
  dVar7 = (double)NEON_fmadd(uStack_78,dVar3,uVar21);
  dVar6 = (double)NEON_fmadd(uStack_78,dVar10,uVar13);
  dVar3 = (double)NEON_fmadd(uStack_78,dVar11,uVar22);
  dVar20 = (local_60 + dVar18) - (local_60 + dVar20);
  dVar12 = (local_50 + dVar9) - (local_50 + dVar12);
  dVar9 = (local_50 + dVar4) - (local_50 + dVar9);
  dVar11 = (local_60 + dVar15) - (local_60 + dVar18);
  dVar3 = (dStack_58 + dVar6) - (dStack_58 + dVar3);
  dVar6 = (dStack_58 + dVar7) - (dStack_58 + dVar6);
  dVar18 = (double)NEON_fmadd(dVar12,dVar11,dVar9 * -dVar20);
  dVar9 = (double)NEON_fmadd(dVar3,dVar9,dVar6 * -dVar12);
  dVar3 = (double)NEON_fmadd(dVar20,dVar6,dVar11 * -dVar3);
  uVar5 = NEON_fmadd(dVar9,dVar9,dVar18 * dVar18);
  dVar12 = (double)NEON_fmadd(dVar3,dVar3,uVar5);
  dVar6 = 0.0;
  if (9.999999974752427e-07 <= SQRT(dVar12)) {
    dVar6 = 1.0 / SQRT(dVar12);
  }
  *param_5 = dVar9 * dVar6;
  param_5[1] = dVar18 * dVar6;
  param_5[2] = dVar3 * dVar6;
  uVar5 = NEON_fmadd(dVar9 * dVar6,local_60 + dVar15,(dStack_58 + dVar7) * dVar18 * dVar6);
  dVar6 = (double)NEON_fmadd(dVar3 * dVar6,local_50 + dVar4,uVar5);
  param_5[3] = 0.0 - dVar6;
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


