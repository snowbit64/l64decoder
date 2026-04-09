// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtClosestHeightPointTriangle
// Entry Point: 00dcdaf4
// Size: 244 bytes
// Signature: undefined __cdecl dtClosestHeightPointTriangle(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* dtClosestHeightPointTriangle(float const*, float const*, float const*, float const*, float&) */

bool dtClosestHeightPointTriangle
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  fVar3 = param_2[2];
  fVar2 = param_4[2] - fVar3;
  fVar6 = *param_2;
  fVar4 = param_3[2] - fVar3;
  fVar5 = *param_4 - fVar6;
  fVar7 = *param_3 - fVar6;
  uVar9 = NEON_fmadd(fVar5,fVar5,fVar2 * fVar2);
  fVar11 = (float)NEON_fmadd(fVar5,fVar7,fVar2 * fVar4);
  fVar8 = (float)NEON_fnmadd(fVar5,fVar7,-(fVar2 * fVar4));
  uVar10 = NEON_fmadd(fVar7,fVar7,fVar4 * fVar4);
  fVar5 = (float)NEON_fmadd(fVar5,*param_1 - fVar6,fVar2 * (param_1[2] - fVar3));
  fVar11 = (float)NEON_fmadd(uVar9,uVar10,fVar11 * fVar8);
  fVar2 = (float)NEON_fmadd(fVar7,*param_1 - fVar6,fVar4 * (param_1[2] - fVar3));
  fVar3 = (float)NEON_fmadd(uVar10,fVar5,fVar2 * fVar8);
  fVar2 = (float)NEON_fmadd(uVar9,fVar2,fVar5 * fVar8);
  fVar3 = (1.0 / fVar11) * fVar3;
  fVar2 = (1.0 / fVar11) * fVar2;
  bVar1 = fVar3 + fVar2 <= 1.0001;
  if ((-0.0001 <= fVar3 && -0.0001 <= fVar2) && bVar1) {
    fVar5 = param_2[1];
    uVar9 = NEON_fmadd(param_4[1] - fVar5,fVar3,fVar5);
    fVar5 = (float)NEON_fmadd(param_3[1] - fVar5,fVar2,uVar9);
    *param_5 = fVar5;
  }
  return (-0.0001 <= fVar3 && -0.0001 <= fVar2) && bVar1;
}


