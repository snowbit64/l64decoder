// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointLineDistance
// Entry Point: 008810b4
// Size: 72 bytes
// Signature: undefined __thiscall pointLineDistance(AnimalSteering * this, Vector2 * param_1, Vector2 * param_2, Vector2 * param_3)


/* AnimalSteering::pointLineDistance(Vector2 const&, Vector2 const&, Vector2 const&) */

float __thiscall
AnimalSteering::pointLineDistance
          (AnimalSteering *this,Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)param_2 - *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  fVar4 = (float)NEON_fmadd(fVar3,fVar3,fVar2 * fVar2);
  fVar1 = (float)NEON_fmadd(*(float *)param_1,*(float *)(param_2 + 4),
                            *(float *)(param_1 + 4) * -*(float *)param_2);
  fVar2 = (float)NEON_fmadd(fVar3,*(undefined4 *)param_3,fVar2 * *(float *)(param_3 + 4));
  return ABS(fVar1 + fVar2) / SQRT(fVar4);
}


