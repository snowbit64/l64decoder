// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: skinPoint
// Entry Point: 00a52d4c
// Size: 232 bytes
// Signature: undefined __cdecl skinPoint(Vector3 * param_1, float * param_2)


/* GsShape::skinPoint(Vector3 const&, float const (*) [4]) */

float GsShape::skinPoint(Vector3 *param_1,float *param_2)

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
  
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar5 = *param_2;
  fVar3 = param_2[1];
  fVar8 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar9 = *(float *)param_1;
  fVar6 = -fVar2;
  fVar10 = -fVar1;
  fVar7 = -fVar3;
  fVar14 = param_2[5];
  fVar11 = (float)NEON_fmadd(fVar1,fVar4,fVar8 * fVar6);
  fVar13 = (float)NEON_fmadd(fVar3,fVar8,fVar9 * fVar10);
  fVar12 = (float)NEON_fmadd(fVar2,fVar9,fVar4 * fVar7);
  fVar11 = fVar11 + fVar9 * fVar5;
  fVar13 = fVar4 * fVar5 + fVar13;
  fVar12 = fVar12 + fVar8 * fVar5;
  fVar4 = (float)NEON_fmadd(fVar1,param_2[7],param_2[6] * fVar6);
  NEON_fmadd(fVar2,fVar14,param_2[7] * fVar7);
  NEON_fmadd(fVar3,param_2[6],fVar14 * fVar10);
  NEON_fmadd(fVar2,fVar11,fVar13 * fVar7);
  fVar1 = (float)NEON_fmadd(fVar1,fVar13,fVar12 * fVar6);
  NEON_fmadd(fVar3,fVar12,fVar11 * fVar10);
  fVar4 = fVar4 + (fVar5 * fVar14 - fVar3 * param_2[4]);
  return fVar9 + fVar1 + fVar1 + fVar4 + fVar4;
}


