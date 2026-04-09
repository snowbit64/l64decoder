// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointInTri2D
// Entry Point: 00b58bd0
// Size: 164 bytes
// Signature: undefined __cdecl pointInTri2D(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3, Vector2 * param_4)


/* MathUtil::pointInTri2D(Vector2 const&, Vector2 const&, Vector2 const&, Vector2 const&) */

bool MathUtil::pointInTri2D(Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4)

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
  
  fVar1 = *(float *)param_3;
  fVar4 = *(float *)(param_3 + 4);
  fVar3 = *(float *)param_2;
  fVar8 = *(float *)(param_2 + 4);
  fVar6 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar7 = *(float *)param_4;
  fVar9 = *(float *)(param_4 + 4);
  fVar2 = (float)NEON_fmadd(fVar6 - fVar1,fVar8 - fVar4,(fVar5 - fVar4) * -(fVar3 - fVar1));
  fVar4 = (float)NEON_fmadd(fVar6 - fVar7,fVar4 - fVar9,(fVar5 - fVar9) * -(fVar1 - fVar7));
  fVar1 = (float)NEON_fmadd(fVar6 - fVar3,fVar9 - fVar8,(fVar5 - fVar8) * -(fVar7 - fVar3));
  return (0.0 <= fVar2 && 0.0 <= fVar4) && 0.0 <= fVar1 ||
         ((fVar2 == 0.0 || 0.0 > fVar2) && (fVar4 == 0.0 || 0.0 > fVar4)) &&
         (fVar1 == 0.0 || 0.0 > fVar1);
}


