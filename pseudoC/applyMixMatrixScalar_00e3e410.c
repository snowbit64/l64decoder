// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyMixMatrixScalar
// Entry Point: 00e3e410
// Size: 232 bytes
// Signature: undefined __cdecl applyMixMatrixScalar(float * param_1, uint param_2, uint param_3, uint param_4, AlignedFloatBuffer * param_5, uint param_6, float * param_7, float * param_8, float * param_9, float param_10, float param_11)


/* SoLoud::applyMixMatrixScalar(float*, unsigned int, unsigned int, unsigned int,
   SoLoud::AlignedFloatBuffer&, unsigned int, float const*, float const*, float const*, float,
   float) */

void SoLoud::applyMixMatrixScalar
               (float *param_1,uint param_2,uint param_3,uint param_4,AlignedFloatBuffer *param_5,
               uint param_6,float *param_7,float *param_8,float *param_9,float param_10,
               float param_11)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  
  if ((((param_10 != 0.0) || (param_11 != 0.0)) && (param_3 != 0)) &&
     ((param_2 != 0 && (param_6 != 0)))) {
    uVar4 = 0;
    uVar5 = 0;
    lVar6 = *(long *)param_5;
    do {
      fVar8 = param_8[uVar5];
      fVar9 = param_9[uVar5];
      if ((fVar8 != 0.0) || (fVar9 != 0.0)) {
        uVar7 = 0;
        lVar1 = lVar6;
        pfVar2 = param_7;
        do {
          fVar11 = *pfVar2;
          if (fVar11 != 0.0) {
            fVar10 = fVar8 * fVar11;
            lVar3 = 0;
            fVar12 = param_10;
            do {
              fVar13 = fVar12 * *(float *)(lVar1 + lVar3);
              fVar12 = fVar12 + param_11;
              uVar14 = NEON_fmadd(fVar13,fVar10,
                                  *(undefined4 *)((long)param_1 + lVar3 + (ulong)uVar4 * 4));
              fVar10 = fVar9 * fVar11 + fVar10;
              *(undefined4 *)((long)param_1 + lVar3 + (ulong)uVar4 * 4) = uVar14;
              lVar3 = lVar3 + 4;
            } while ((ulong)param_2 * 4 - lVar3 != 0);
          }
          uVar7 = uVar7 + 1;
          lVar1 = lVar1 + (ulong)param_4 * 4;
          pfVar2 = pfVar2 + 1;
        } while (uVar7 != param_6);
      }
      param_7 = param_7 + param_6;
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 + param_4;
    } while (uVar5 != param_3);
  }
  return;
}


