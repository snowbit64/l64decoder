// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScreenSpaceBounds
// Entry Point: 00a29fc4
// Size: 636 bytes
// Signature: undefined __thiscall getScreenSpaceBounds(LightListRasterizer * this, float * param_1, float param_2, float param_3, Matrix4x4 * param_4, uint param_5, uint param_6, uint * param_7, uint * param_8)


/* LightListRasterizer::getScreenSpaceBounds(float const*, float, float, Matrix4x4 const&, unsigned
   int, unsigned int, unsigned int*, unsigned int*) */

void __thiscall
LightListRasterizer::getScreenSpaceBounds
          (LightListRasterizer *this,float *param_1,float param_2,float param_3,Matrix4x4 *param_4,
          uint param_5,uint param_6,uint *param_7,uint *param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar8 = param_1[2];
  if (fVar8 - param_2 <= -param_3) {
    fVar13 = param_2 * param_2;
    fVar11 = fVar8 * fVar8;
    fVar15 = *param_1;
    fVar14 = (float)NEON_fmsub(fVar8,fVar8,fVar13);
    fVar3 = (float)NEON_fnmadd(fVar15,fVar15,-fVar11);
    fVar3 = (float)NEON_fmadd(fVar13 * fVar15,fVar15,fVar14 * fVar3);
    if (0.0 <= fVar3) {
      fVar16 = (float)NEON_fmadd(fVar15,fVar15,fVar11);
      fVar19 = (float)NEON_fmsub(param_2,param_2,fVar16);
      fVar20 = (fVar15 * param_2 + SQRT(fVar3)) / fVar16;
      fVar16 = (fVar15 * param_2 - SQRT(fVar3)) / fVar16;
      fVar17 = (float)NEON_fnmadd(-fVar20,fVar15,-param_2);
      fVar18 = (float)NEON_fmadd((fVar17 / fVar8) / fVar20,fVar15,fVar8);
      fVar3 = 1.0;
      fVar21 = -1.0;
      if ((fVar19 / fVar18 < 0.0) &&
         (fVar21 = *(float *)(param_4 + 0x20) + (*(float *)param_4 * (fVar17 / fVar8)) / fVar20,
         fVar3 = 1.0, 0.0 <= fVar20)) {
        fVar3 = (float)NEON_fmin(fVar21,0x3f800000);
        fVar21 = -1.0;
      }
      fVar17 = (float)NEON_fnmadd(-fVar16,fVar15,-param_2);
      fVar15 = (float)NEON_fmadd((fVar17 / fVar8) / fVar16,fVar15,fVar8);
      if (fVar19 / fVar15 < 0.0) {
        fVar15 = *(float *)(param_4 + 0x20) + (*(float *)param_4 * (fVar17 / fVar8)) / fVar16;
        if (0.0 <= fVar16) {
          if (fVar15 < fVar3) {
            fVar3 = fVar15;
          }
        }
        else if (fVar21 < fVar15) {
          fVar21 = fVar15;
        }
      }
    }
    else {
      fVar3 = 1.0;
      fVar21 = -1.0;
    }
    fVar15 = param_1[1];
    fVar16 = (float)NEON_fnmadd(fVar15,fVar15,-fVar11);
    fVar13 = (float)NEON_fmadd(fVar13 * fVar15,fVar15,fVar14 * fVar16);
    if (0.0 <= fVar13) {
      fVar14 = (float)NEON_fmadd(fVar15,fVar15,fVar11);
      fVar18 = (float)NEON_fmsub(param_2,param_2,fVar14);
      fVar19 = (fVar15 * param_2 + SQRT(fVar13)) / fVar14;
      fVar14 = (fVar15 * param_2 - SQRT(fVar13)) / fVar14;
      fVar16 = (float)NEON_fnmadd(-fVar19,fVar15,-param_2);
      fVar17 = (float)NEON_fmadd((fVar16 / fVar8) / fVar19,fVar15,fVar8);
      fVar11 = -1.0;
      fVar13 = 1.0;
      if ((fVar18 / fVar17 < 0.0) &&
         (fVar11 = *(float *)(param_4 + 0x24) +
                   (*(float *)(param_4 + 0x14) * (fVar16 / fVar8)) / fVar19, fVar13 = 1.0,
         0.0 <= fVar19)) {
        fVar13 = (float)NEON_fmin(fVar11,0x3f800000);
        fVar11 = -1.0;
      }
      fVar16 = (float)NEON_fnmadd(-fVar14,fVar15,-param_2);
      fVar15 = (float)NEON_fmadd((fVar16 / fVar8) / fVar14,fVar15,fVar8);
      uVar9 = CONCAT44(fVar11,fVar21);
      uVar1 = CONCAT44(fVar13,fVar3);
      if (fVar18 / fVar15 < 0.0) {
        fVar8 = *(float *)(param_4 + 0x24) +
                (*(float *)(param_4 + 0x14) * (fVar16 / fVar8)) / fVar14;
        if (0.0 <= fVar14) {
          if (fVar8 < fVar13) {
            fVar13 = fVar8;
          }
          uVar1 = CONCAT44(fVar13,fVar3);
        }
        else {
          if (fVar11 < fVar8) {
            fVar11 = fVar8;
          }
          uVar9 = CONCAT44(fVar11,fVar21);
        }
      }
    }
    else {
      uVar1 = NEON_fmov(0x3f800000,4);
      uVar9 = NEON_fmov(0xbf800000,4);
      uVar1 = CONCAT44((int)((ulong)uVar1 >> 0x20),fVar3);
      uVar9 = CONCAT44((int)((ulong)uVar9 >> 0x20),fVar21);
    }
  }
  else {
    uVar9 = NEON_fmov(0x3f800000,4);
    uVar1 = NEON_fmov(0xbf800000,4);
  }
  uVar4 = CONCAT44(param_6,param_5);
  dVar6 = 3.051758528727078e-05 -
          (double)CONCAT44((float)((ulong)uVar1 >> 0x20) * 0.5,(float)uVar1 * 0.5);
  dVar12 = 3.051758528727078e-05 -
           (double)CONCAT44((float)((ulong)uVar9 >> 0x20) * 0.5,(float)uVar9 * 0.5);
  uVar1 = NEON_ucvtf(uVar4,4);
  fVar8 = (float)((ulong)uVar1 >> 0x20);
  uVar9 = CONCAT44((int)(float)(int)((float)((ulong)dVar6 >> 0x20) * fVar8),
                   (int)(float)(int)(SUB84(dVar6,0) * (float)uVar1));
  uVar1 = CONCAT44((int)(float)(int)((float)((ulong)dVar12 >> 0x20) * fVar8),
                   (int)(float)(int)(SUB84(dVar12,0) * (float)uVar1));
  uVar10 = NEON_smin(uVar4,uVar9,4);
  uVar7 = NEON_cmge(uVar9,0,4);
  uVar5 = NEON_smin(uVar4,uVar1,4);
  uVar2 = NEON_cmge(uVar1,0,4);
  *(ulong *)param_7 = uVar7 & uVar10;
  *(ulong *)param_8 = uVar2 & uVar5;
  return;
}


