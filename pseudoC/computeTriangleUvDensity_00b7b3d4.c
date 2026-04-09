// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeTriangleUvDensity
// Entry Point: 00b7b3d4
// Size: 188 bytes
// Signature: undefined __cdecl computeTriangleUvDensity(Vector3 * param_1, Vector2 * param_2)


/* IndexedTriangleSet::computeTriangleUvDensity(Vector3 const*, Vector2 const*) */

float IndexedTriangleSet::computeTriangleUvDensity(Vector3 *param_1,Vector2 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_1 + 0xc) - *(float *)param_1;
  fVar7 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 8);
  fVar9 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 0x18) - *(float *)param_1;
  fVar8 = (float)NEON_fmadd(fVar7,fVar3,fVar5 * -fVar1);
  uVar6 = NEON_fmadd(fVar9,fVar5,fVar4 * -fVar7);
  uVar2 = NEON_fmadd(fVar1,fVar4,fVar3 * -fVar9);
  uVar6 = NEON_fmadd(uVar6,uVar6,fVar8 * fVar8);
  fVar3 = (float)NEON_fmadd(uVar2,uVar2,uVar6);
  fVar1 = 0.0;
  if (1e-06 <= SQRT(fVar3)) {
    fVar1 = (float)NEON_fmadd(*(float *)(param_2 + 8) - *(float *)param_2,
                              *(float *)(param_2 + 0x14) - *(float *)(param_2 + 4),
                              (*(float *)(param_2 + 0x10) - *(float *)param_2) *
                              -(*(float *)(param_2 + 0xc) - *(float *)(param_2 + 4)));
    fVar1 = SQRT(ABS(fVar1) / SQRT(fVar3));
  }
  return fVar1;
}


