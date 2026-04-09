// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyMixVectorScalar
// Entry Point: 00e3e380
// Size: 144 bytes
// Signature: undefined __cdecl applyMixVectorScalar(float * param_1, uint param_2, uint param_3, AlignedFloatBuffer * param_4, uint param_5, float * param_6, float param_7, float param_8, float param_9, float param_10)


/* SoLoud::applyMixVectorScalar(float*, unsigned int, unsigned int, SoLoud::AlignedFloatBuffer&,
   unsigned int, float const*, float, float, float, float) */

void SoLoud::applyMixVectorScalar
               (float *param_1,uint param_2,uint param_3,AlignedFloatBuffer *param_4,uint param_5,
               float *param_6,float param_7,float param_8,float param_9,float param_10)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((((param_7 != 0.0) || (param_8 != 0.0)) && (param_5 != 0)) && (param_2 != 0)) {
    uVar1 = 0;
    lVar2 = *(long *)param_4;
    do {
      fVar5 = *param_6;
      if (fVar5 != 0.0) {
        fVar4 = fVar5 * param_7;
        lVar3 = 0;
        fVar6 = param_9;
        do {
          fVar7 = fVar6 * *(float *)(lVar2 + lVar3);
          fVar6 = fVar6 + param_10;
          uVar8 = NEON_fmadd(fVar7,fVar4,*(undefined4 *)((long)param_1 + lVar3));
          fVar4 = fVar5 * param_8 + fVar4;
          *(undefined4 *)((long)param_1 + lVar3) = uVar8;
          lVar3 = lVar3 + 4;
        } while ((ulong)param_2 * 4 - lVar3 != 0);
      }
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + (ulong)param_3 * 4;
      param_6 = param_6 + 1;
    } while (uVar1 != param_5);
  }
  return;
}


