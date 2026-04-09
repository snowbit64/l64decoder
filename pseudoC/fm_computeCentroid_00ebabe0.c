// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeCentroid
// Entry Point: 00ebabe0
// Size: 352 bytes
// Signature: undefined __cdecl fm_computeCentroid(uint param_1, float * param_2, uint param_3, uint * param_4, float * param_5)


/* FLOAT_MATH::fm_computeCentroid(unsigned int, float const*, unsigned int, unsigned int const*,
   float*) */

bool FLOAT_MATH::fm_computeCentroid
               (uint param_1,float *param_2,uint param_3,uint *param_4,float *param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (param_1 != 0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    param_5[2] = 0.0;
    *(undefined8 *)param_5 = 0;
    if (param_3 == 0) {
      fVar3 = 0.0;
      fVar2 = 0.0;
    }
    else {
      fVar2 = 0.0;
      uVar4 = NEON_fmov(0x40400000,4);
      fVar3 = 0.0;
      uVar1 = 0;
      fVar5 = 0.0;
      fVar8 = 0.0;
      do {
        fVar7 = fVar8;
        fVar6 = fVar5;
        fVar25 = 0.0;
        uVar10 = *(undefined8 *)(param_2 + param_4[uVar1 & 0xffffffff] * 3);
        fVar15 = *(float *)((long)(param_2 + param_4[uVar1 & 0xffffffff] * 3) + 8);
        uVar13 = *(undefined8 *)(param_2 + param_4[(int)uVar1 + 1] * 3);
        fVar16 = *(float *)((long)(param_2 + param_4[(int)uVar1 + 1] * 3) + 8);
        fVar9 = (float)uVar10;
        fVar12 = (float)uVar13;
        fVar17 = fVar12 - fVar9;
        fVar11 = (float)((ulong)uVar10 >> 0x20);
        fVar14 = (float)((ulong)uVar13 >> 0x20);
        fVar19 = fVar14 - fVar11;
        fVar22 = fVar16 - fVar15;
        uVar10 = *(undefined8 *)(param_2 + param_4[(int)uVar1 + 2] * 3);
        fVar5 = (float)NEON_fmadd(fVar22,fVar22,fVar19 * fVar19 + fVar17 * fVar17);
        fVar5 = SQRT(fVar5);
        fVar8 = *(float *)((long)(param_2 + param_4[(int)uVar1 + 2] * 3) + 8);
        fVar20 = (float)uVar10;
        fVar21 = (float)((ulong)uVar10 >> 0x20);
        if (fVar5 != 0.0) {
          fVar24 = fVar20 - fVar9;
          fVar25 = fVar21 - fVar11;
          fVar27 = fVar8 - fVar15;
          fVar26 = (float)NEON_fmadd(fVar17,fVar24,fVar19 * fVar25);
          fVar26 = (float)NEON_fnmadd(fVar22,fVar27,-fVar26);
          fVar26 = fVar26 / (fVar5 * fVar5);
          fVar25 = (float)NEON_fmadd(fVar26,fVar19,fVar25);
          uVar18 = NEON_fmadd(fVar26,fVar17,fVar24);
          uVar23 = NEON_fmadd(fVar26,fVar22,fVar27);
          uVar18 = NEON_fmadd(uVar18,uVar18,fVar25 * fVar25);
          fVar25 = (float)NEON_fmadd(uVar23,uVar23,uVar18);
          fVar25 = SQRT(fVar25);
        }
        uVar1 = uVar1 + 3;
        fVar9 = (fVar9 + fVar12 + fVar20) / (float)uVar4;
        fVar11 = (fVar11 + fVar14 + fVar21) / (float)((ulong)uVar4 >> 0x20);
        fVar25 = fVar5 * 0.5 * fVar25;
        fVar3 = fVar3 + fVar25;
        fVar2 = (float)NEON_fmadd((fVar15 + fVar16 + fVar8) / 3.0,fVar25,fVar2);
        fVar5 = fVar6 + fVar9 * fVar25;
        fVar8 = fVar7 + fVar11 * fVar25;
      } while ((ulong)param_3 + (ulong)param_3 * 2 != uVar1);
      fVar6 = fVar6 + fVar25 * fVar9;
      fVar7 = fVar7 + fVar25 * fVar11;
    }
    fVar3 = 1.0 / fVar3;
    *(ulong *)param_5 = CONCAT44(fVar7 * fVar3,fVar6 * fVar3);
    param_5[2] = fVar2 * fVar3;
  }
  return param_1 != 0;
}


