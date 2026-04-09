// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_composeTransform
// Entry Point: 00eb4cdc
// Size: 468 bytes
// Signature: undefined __cdecl fm_composeTransform(float * param_1, float * param_2, float * param_3, float * param_4)


/* FLOAT_MATH::fm_composeTransform(float const*, float const*, float const*, float*) */

void FLOAT_MATH::fm_composeTransform(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  *(undefined8 *)(param_4 + 3) = 0;
  *(undefined8 *)(param_4 + 1) = 0;
  *(undefined8 *)(param_4 + 6) = 0;
  *(undefined8 *)(param_4 + 8) = 0;
  *param_4 = 1.0;
  param_4[5] = 1.0;
  param_4[10] = 1.0;
  param_4[0xf] = 1.0;
  *(undefined8 *)(param_4 + 0xd) = 0;
  *(undefined8 *)(param_4 + 0xb) = 0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  param_4[7] = 0.0;
  param_4[3] = 0.0;
  *(undefined8 *)(param_4 + 0xd) = 0;
  fVar3 = fVar1 * fVar2 - fVar4 * fVar5;
  fVar7 = fVar1 * fVar2 + fVar4 * fVar5;
  fVar10 = fVar1 * fVar4 + fVar2 * fVar5;
  *(undefined8 *)(param_4 + 0xb) = 0;
  param_4[0xf] = 1.0;
  fVar6 = (float)NEON_fmadd(fVar2 * fVar2 + fVar4 * fVar4,0xc0000000,0x3f800000);
  fVar3 = fVar3 + fVar3;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar2 * fVar4 - fVar1 * fVar5;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar1 * fVar4 - fVar2 * fVar5;
  fVar5 = fVar2 * fVar4 + fVar1 * fVar5;
  fVar4 = (float)NEON_fmadd(fVar1 * fVar1 + fVar4 * fVar4,0xc0000000,0x3f800000);
  fVar8 = fVar8 + fVar8;
  *param_4 = fVar6;
  param_4[1] = fVar7;
  fVar11 = fVar11 + fVar11;
  fVar5 = fVar5 + fVar5;
  fVar1 = (float)NEON_fmadd(fVar1 * fVar1 + fVar2 * fVar2,0xc0000000,0x3f800000);
  param_4[4] = fVar3;
  param_4[5] = fVar4;
  param_4[8] = fVar10;
  param_4[9] = fVar8;
  param_4[2] = fVar11;
  param_4[6] = fVar5;
  param_4[10] = fVar1;
  if (param_3 != (float *)0x0) {
    fVar2 = *param_3;
    fVar12 = param_3[1];
    if (((fVar2 != 1.0) || (fVar12 != 1.0)) || (fVar12 = 1.0, param_3[2] != 1.0)) {
      fVar15 = param_3[2];
      fVar9 = (float)NEON_fmadd(fVar2,0,0);
      fVar16 = (float)NEON_fmadd(fVar15,0,0);
      param_4[0xf] = 1.0;
      fVar14 = (float)NEON_fmadd(fVar6,0,fVar7 * 0.0);
      fVar13 = (float)NEON_fmadd(fVar3,0,fVar4 * 0.0);
      param_4[0xc] = fVar9 + 0.0;
      param_4[0xd] = fVar12 * 0.0 + 0.0;
      fVar9 = (float)NEON_fmadd(fVar10,0,fVar8 * 0.0);
      param_4[0xe] = fVar16 + 0.0;
      *(ulong *)param_4 =
           CONCAT44(fVar12 * fVar7 + fVar6 * 0.0 + fVar11 * 0.0 + 0.0,
                    fVar7 * 0.0 + fVar2 * fVar6 + fVar11 * 0.0 + 0.0);
      *(ulong *)(param_4 + 2) = CONCAT44(fVar14 + fVar11 * 0.0 + 0.0,fVar14 + fVar15 * fVar11 + 0.0)
      ;
      *(ulong *)(param_4 + 4) =
           CONCAT44(fVar12 * fVar4 + fVar3 * 0.0 + fVar5 * 0.0 + 0.0,
                    fVar4 * 0.0 + fVar2 * fVar3 + fVar5 * 0.0 + 0.0);
      *(ulong *)(param_4 + 6) = CONCAT44(fVar13 + fVar5 * 0.0 + 0.0,fVar13 + fVar15 * fVar5 + 0.0);
      *(ulong *)(param_4 + 8) =
           CONCAT44(fVar12 * fVar8 + fVar10 * 0.0 + fVar1 * 0.0 + 0.0,
                    fVar8 * 0.0 + fVar2 * fVar10 + fVar1 * 0.0 + 0.0);
      *(ulong *)(param_4 + 10) = CONCAT44(fVar9 + fVar1 * 0.0 + 0.0,fVar9 + fVar15 * fVar1 + 0.0);
    }
  }
  param_4[0xc] = *param_1;
  param_4[0xd] = param_1[1];
  param_4[0xe] = param_1[2];
  return;
}


