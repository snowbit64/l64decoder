// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointInQuad2D
// Entry Point: 00b58c74
// Size: 216 bytes
// Signature: undefined __cdecl pointInQuad2D(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3, Vector2 * param_4, Vector2 * param_5)


/* MathUtil::pointInQuad2D(Vector2 const&, Vector2 const&, Vector2 const&, Vector2 const&, Vector2
   const&) */

bool MathUtil::pointInQuad2D
               (Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4,Vector2 *param_5
               )

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
  
  fVar2 = *(float *)param_2;
  fVar8 = *(float *)(param_2 + 4);
  fVar3 = *(float *)param_3;
  fVar5 = *(float *)(param_3 + 4);
  fVar1 = *(float *)param_4;
  fVar9 = *(float *)(param_4 + 4);
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar10 = *(float *)param_5;
  fVar11 = *(float *)(param_5 + 4);
  fVar4 = (float)NEON_fmadd(fVar6 - fVar3,fVar8 - fVar5,(fVar7 - fVar5) * -(fVar2 - fVar3));
  fVar3 = (float)NEON_fmadd(fVar6 - fVar1,fVar5 - fVar9,(fVar7 - fVar9) * -(fVar3 - fVar1));
  fVar5 = (float)NEON_fmadd(fVar6 - fVar10,fVar9 - fVar11,(fVar7 - fVar11) * -(fVar1 - fVar10));
  fVar1 = (float)NEON_fmadd(fVar6 - fVar2,fVar11 - fVar8,(fVar7 - fVar8) * -(fVar10 - fVar2));
  return ((0.0 <= fVar4 && 0.0 <= fVar3) && 0.0 <= fVar5) && 0.0 <= fVar1 ||
         (((fVar4 == 0.0 || 0.0 > fVar4) && (fVar3 == 0.0 || 0.0 > fVar3)) &&
         (fVar5 == 0.0 || 0.0 > fVar5)) && (fVar1 == 0.0 || 0.0 > fVar1);
}


