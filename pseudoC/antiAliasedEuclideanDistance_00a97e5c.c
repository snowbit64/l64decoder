// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: antiAliasedEuclideanDistance
// Entry Point: 00a97e5c
// Size: 516 bytes
// Signature: undefined __cdecl antiAliasedEuclideanDistance(float * param_1, float * param_2, float * param_3, uint param_4, int param_5, int param_6, int param_7, int param_8, int param_9)


/* ImageUtil::antiAliasedEuclideanDistance(float const*, float const*, float const*, unsigned int,
   int, int, int, int, int) */

float ImageUtil::antiAliasedEuclideanDistance
                (float *param_1,float *param_2,float *param_3,uint param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = param_5 - (param_6 + param_7 * param_4);
  fVar2 = (float)NEON_fmin(param_1[iVar1],0x3f800000);
  fVar3 = 0.0;
  if (0.0 <= param_1[iVar1]) {
    fVar3 = fVar2;
  }
  if (fVar3 == 0.0) {
    return 10000.0;
  }
  fVar5 = (float)param_8;
  fVar4 = (float)param_9;
  fVar2 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
  fVar2 = SQRT(fVar2);
  if (fVar2 <= 1e-05) {
    fVar4 = param_2[iVar1];
    if (1e-05 < ABS(fVar4)) {
      fVar5 = param_3[iVar1];
      if (1e-05 < ABS(fVar5)) {
        fVar6 = (float)NEON_fmadd(fVar4,fVar4,fVar5 * fVar5);
        fVar7 = ABS(fVar4) * (1.0 / SQRT(fVar6));
        fVar5 = ABS(fVar5) * (1.0 / SQRT(fVar6));
        fVar4 = fVar5;
        if (fVar5 <= fVar7) {
          fVar4 = fVar7;
          fVar7 = fVar5;
        }
        fVar5 = (fVar7 * 0.5) / fVar4;
        if (fVar5 <= fVar3) {
          if (fVar3 < 1.0 - fVar5) {
            return fVar2 + (0.5 - fVar3) * fVar4;
          }
          fVar3 = (1.0 - fVar3) * fVar7 * (fVar4 + fVar4);
          goto LAB_00a98048;
        }
        fVar5 = fVar7 * (fVar4 + fVar4);
        goto LAB_00a97fb8;
      }
    }
  }
  else if ((1e-05 < ABS(fVar5)) && (1e-05 < ABS(fVar4))) {
    fVar7 = ABS(fVar5) * (1.0 / fVar2);
    fVar5 = ABS(fVar4) * (1.0 / fVar2);
    fVar4 = fVar5;
    if (fVar5 <= fVar7) {
      fVar4 = fVar7;
      fVar7 = fVar5;
    }
    fVar5 = (fVar7 * 0.5) / fVar4;
    if (fVar5 <= fVar3) {
      if (fVar3 < 1.0 - fVar5) {
        return fVar2 + fVar4 * (0.5 - fVar3);
      }
      fVar3 = fVar7 * (fVar4 + fVar4) * (1.0 - fVar3);
LAB_00a98048:
      fVar3 = (float)NEON_fmadd(fVar4 + fVar7,0xbf000000,SQRT(fVar3));
      return fVar2 + fVar3;
    }
    fVar5 = fVar7 * (fVar4 + fVar4);
LAB_00a97fb8:
    fVar3 = (float)NEON_fnmsub(fVar4 + fVar7,0x3f000000,SQRT(fVar5 * fVar3));
    return fVar2 + fVar3;
  }
  return fVar2 + (0.5 - fVar3);
}


