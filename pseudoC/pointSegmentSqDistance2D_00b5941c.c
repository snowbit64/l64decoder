// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointSegmentSqDistance2D
// Entry Point: 00b5941c
// Size: 136 bytes
// Signature: undefined __cdecl pointSegmentSqDistance2D(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3)


/* MathUtil::pointSegmentSqDistance2D(Vector2 const&, Vector2 const&, Vector2 const&) */

undefined4 MathUtil::pointSegmentSqDistance2D(Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  undefined4 uVar1;
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
  
  fVar5 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar2 = *(float *)param_3;
  fVar3 = *(float *)(param_3 + 4);
  fVar6 = *(float *)(param_2 + 4) - fVar4;
  fVar7 = *(float *)param_2 - fVar5;
  fVar10 = fVar3 - fVar4;
  fVar9 = fVar2 - fVar5;
  fVar11 = (float)NEON_fmadd(fVar7,fVar7,fVar6 * fVar6);
  fVar8 = (float)NEON_fmadd(fVar9,fVar7,fVar6 * fVar10);
  fVar8 = fVar8 / fVar11;
  if (fVar8 < 0.0) {
    uVar1 = NEON_fmadd(fVar9,fVar9,fVar10 * fVar10);
    return uVar1;
  }
  if (1.0 < fVar8) {
    fVar3 = fVar3 - *(float *)(param_2 + 4);
    fVar2 = fVar2 - *(float *)param_2;
    uVar1 = NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
    return uVar1;
  }
  fVar3 = fVar3 - (fVar4 + fVar6 * fVar8);
  fVar2 = fVar2 - (fVar5 + fVar7 * fVar8);
  uVar1 = NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
  return uVar1;
}


