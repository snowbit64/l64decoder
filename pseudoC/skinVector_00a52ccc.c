// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: skinVector
// Entry Point: 00a52ccc
// Size: 128 bytes
// Signature: undefined __cdecl skinVector(Vector3 * param_1, float * param_2)


/* GsShape::skinVector(Vector3 const&, float const (*) [4]) */

float GsShape::skinVector(Vector3 *param_1,float *param_2)

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
  
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar5 = *param_2;
  fVar3 = param_2[1];
  fVar6 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar7 = *(float *)param_1;
  fVar9 = (float)NEON_fmadd(fVar1,fVar4,fVar6 * -fVar2);
  fVar10 = (float)NEON_fmadd(fVar3,fVar6,fVar7 * -fVar1);
  fVar8 = (float)NEON_fmadd(fVar2,fVar7,fVar4 * -fVar3);
  fVar9 = fVar9 + fVar7 * fVar5;
  fVar10 = fVar4 * fVar5 + fVar10;
  fVar8 = fVar8 + fVar6 * fVar5;
  NEON_fmadd(fVar2,fVar9,fVar10 * -fVar3);
  NEON_fmadd(fVar3,fVar8,fVar9 * -fVar1);
  fVar1 = (float)NEON_fmadd(fVar1,fVar10,fVar8 * -fVar2);
  return fVar7 + fVar1 + fVar1;
}


