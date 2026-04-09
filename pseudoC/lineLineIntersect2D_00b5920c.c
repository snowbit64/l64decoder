// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lineLineIntersect2D
// Entry Point: 00b5920c
// Size: 344 bytes
// Signature: undefined __cdecl lineLineIntersect2D(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float * param_9, float * param_10)


/* MathUtil::lineLineIntersect2D(float, float, float, float, float, float, float, float, float&,
   float&) */

undefined8
MathUtil::lineLineIntersect2D
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 0;
  }
  if ((param_5 == param_7) && (param_6 == param_8)) {
    return 0;
  }
  if ((param_1 == param_5) && (param_2 == param_6)) {
    return 0;
  }
  if ((param_3 == param_5) && (param_4 == param_6)) {
    return 0;
  }
  if ((param_1 == param_7) && (param_2 == param_8)) {
    return 0;
  }
  if ((param_3 == param_7) && (param_4 == param_8)) {
    return 0;
  }
  fVar2 = param_4 - param_2;
  fVar6 = param_3 - param_1;
  fVar1 = (float)NEON_fmadd(fVar6,fVar6,fVar2 * fVar2);
  fVar1 = SQRT(fVar1);
  fVar2 = fVar2 / fVar1;
  fVar6 = fVar6 / fVar1;
  fVar3 = (float)NEON_fmadd(param_6 - param_2,fVar6,fVar2 * -(param_5 - param_1));
  fVar4 = (float)NEON_fmadd(param_8 - param_2,fVar6,fVar2 * -(param_7 - param_1));
  if ((fVar3 < 0.0) && (fVar4 < 0.0)) {
    return 0;
  }
  if ((0.0 <= fVar3) && (0.0 <= fVar4)) {
    return 0;
  }
  fVar7 = (float)NEON_fmadd(param_5 - param_1,fVar6,(param_6 - param_2) * fVar2);
  fVar5 = (float)NEON_fmadd(param_7 - param_1,fVar6,(param_8 - param_2) * fVar2);
  fVar5 = fVar5 + (fVar4 * (fVar7 - fVar5)) / (fVar4 - fVar3);
  if ((fVar5 < 0.0 || fVar5 != fVar1) && (fVar5 < 0.0 || fVar1 <= fVar5)) {
    return 0;
  }
  fVar1 = (float)NEON_fmadd(fVar5,fVar6,param_1);
  fVar2 = (float)NEON_fmadd(fVar5,fVar2,param_2);
  *param_9 = fVar1;
  *param_10 = fVar2;
  return 1;
}


