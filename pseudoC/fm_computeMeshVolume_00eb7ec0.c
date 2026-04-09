// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeMeshVolume
// Entry Point: 00eb7ec0
// Size: 168 bytes
// Signature: undefined __cdecl fm_computeMeshVolume(float * param_1, uint param_2, uint * param_3)


/* FLOAT_MATH::fm_computeMeshVolume(float const*, unsigned int, unsigned int const*) */

float FLOAT_MATH::fm_computeMeshVolume(float *param_1,uint param_2,uint *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar4 = 0.0;
  if (param_2 != 0) {
    do {
      param_2 = param_2 - 1;
      pfVar1 = param_1 + param_3[1] * 3;
      pfVar2 = param_1 + param_3[2] * 3;
      pfVar3 = param_1 + *param_3 * 3;
      uVar6 = NEON_fmadd(*pfVar3 * pfVar1[1],pfVar2[2],*pfVar1 * pfVar2[1] * pfVar3[2]);
      uVar6 = NEON_fmadd(*pfVar2 * pfVar3[1],pfVar1[2],uVar6);
      uVar6 = NEON_fmadd(pfVar2[1] * -*pfVar3,pfVar1[2],uVar6);
      uVar6 = NEON_fmadd(pfVar3[1] * -*pfVar1,pfVar2[2],uVar6);
      fVar5 = (float)NEON_fmadd(pfVar1[1] * -*pfVar2,pfVar3[2],uVar6);
      fVar4 = fVar4 + fVar5;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
    fVar4 = fVar4 * 0.1666667;
  }
  fVar5 = -fVar4;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  return fVar5;
}


