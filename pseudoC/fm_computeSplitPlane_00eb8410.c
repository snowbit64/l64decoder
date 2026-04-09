// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeSplitPlane
// Entry Point: 00eb8410
// Size: 612 bytes
// Signature: undefined __cdecl fm_computeSplitPlane(uint param_1, float * param_2, uint param_3, uint * param_4, float * param_5)


/* FLOAT_MATH::fm_computeSplitPlane(unsigned int, float const*, unsigned int, unsigned int const*,
   float*) */

undefined8
FLOAT_MATH::fm_computeSplitPlane
          (uint param_1,float *param_2,uint param_3,uint *param_4,float *param_5)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  float local_64;
  float fStack_60;
  float local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  float local_44;
  float fStack_40;
  float local_3c;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  fm_computeBestFitOBB(param_1,param_2,0xc,&local_34,&local_74,true);
  fVar7 = local_34 * 0.5;
  fVar20 = fStack_30 * 0.5;
  fVar18 = local_2c * 0.5;
  fVar6 = -(local_34 * 0.5);
  fVar12 = -(fStack_30 * 0.5);
  fVar4 = (float)NEON_fnmsub(local_34,0x3f000000,fVar7);
  fVar9 = (float)NEON_fnmsub(fStack_30,0x3f000000,fVar20);
  fVar3 = (float)NEON_fnmsub(local_2c,0x3f000000,fVar18);
  cVar1 = '\x02';
  if ((local_2c <= fStack_30 || local_2c == local_34) || fStack_30 < local_2c && local_2c < local_34
     ) {
    cVar1 = local_34 < fStack_30;
  }
  fVar11 = fVar3;
  fVar10 = fVar3;
  fVar15 = fVar12;
  if (cVar1 == '\x02') {
    fVar8 = fVar12;
    if (local_34 <= fStack_30) {
      fVar7 = fVar6;
      fVar8 = fVar20;
    }
  }
  else {
    fVar17 = -(local_2c * 0.5);
    fVar8 = fVar9;
    fVar15 = fVar9;
    if (cVar1 == '\x01') {
      fVar11 = fVar17;
      fVar10 = fVar17;
      if (local_34 <= local_2c) {
        fVar7 = fVar6;
        fVar11 = fVar18;
      }
    }
    else {
      fVar6 = fVar4;
      fVar7 = fVar4;
      if ((cVar1 == '\0') &&
         (fVar11 = fVar17, fVar8 = fVar20, fVar10 = fVar17, fVar15 = fVar12, local_2c <= fStack_30))
      {
        fVar11 = fVar18;
        fVar8 = fVar12;
      }
    }
  }
  uVar22 = NEON_fmadd(local_74,fVar6,fVar15 * local_64);
  uVar13 = NEON_fmadd(local_74,fVar7,fVar8 * local_64);
  uVar19 = NEON_fmadd(local_74,fVar4,fVar9 * local_64);
  uVar21 = NEON_fmadd(local_70,fVar4,fVar9 * fStack_60);
  uVar5 = NEON_fmadd(uStack_6c,fVar4,fVar9 * local_5c);
  fVar18 = (float)NEON_fmadd(local_54,fVar10,uVar22);
  uVar14 = NEON_fmadd(uStack_6c,fVar6,fVar15 * local_5c);
  uVar16 = NEON_fmadd(uStack_6c,fVar7,fVar8 * local_5c);
  fVar20 = (float)NEON_fmadd(local_54,fVar11,uVar13);
  uVar13 = NEON_fmadd(local_70,fVar6,fVar15 * fStack_60);
  uVar22 = NEON_fmadd(local_70,fVar7,fVar8 * fStack_60);
  fVar4 = (float)NEON_fmadd(local_4c,fVar3,uVar5);
  fVar9 = (float)NEON_fmadd(local_4c,fVar10,uVar14);
  fVar12 = (float)NEON_fmadd(local_4c,fVar11,uVar16);
  fVar15 = (float)NEON_fmadd(local_54,fVar3,uVar19);
  fVar7 = (float)NEON_fmadd(uStack_50,fVar3,uVar21);
  fVar6 = (float)NEON_fmadd(uStack_50,fVar10,uVar13);
  fVar3 = (float)NEON_fmadd(uStack_50,fVar11,uVar22);
  fVar20 = (local_44 + fVar18) - (local_44 + fVar20);
  fVar12 = (local_3c + fVar9) - (local_3c + fVar12);
  fVar9 = (local_3c + fVar4) - (local_3c + fVar9);
  fVar11 = (local_44 + fVar15) - (local_44 + fVar18);
  fVar3 = (fStack_40 + fVar6) - (fStack_40 + fVar3);
  fVar6 = (fStack_40 + fVar7) - (fStack_40 + fVar6);
  fVar18 = (float)NEON_fmadd(fVar12,fVar11,fVar9 * -fVar20);
  fVar9 = (float)NEON_fmadd(fVar3,fVar9,fVar6 * -fVar12);
  fVar3 = (float)NEON_fmadd(fVar20,fVar6,fVar11 * -fVar3);
  uVar5 = NEON_fmadd(fVar9,fVar9,fVar18 * fVar18);
  fVar12 = (float)NEON_fmadd(fVar3,fVar3,uVar5);
  fVar6 = 0.0;
  if (1e-06 <= SQRT(fVar12)) {
    fVar6 = 1.0 / SQRT(fVar12);
  }
  *param_5 = fVar9 * fVar6;
  param_5[1] = fVar18 * fVar6;
  uVar5 = NEON_fmadd(fVar9 * fVar6,local_44 + fVar15,(fStack_40 + fVar7) * fVar18 * fVar6);
  fVar7 = (float)NEON_fmadd(fVar3 * fVar6,local_3c + fVar4,uVar5);
  param_5[2] = fVar3 * fVar6;
  param_5[3] = 0.0 - fVar7;
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


