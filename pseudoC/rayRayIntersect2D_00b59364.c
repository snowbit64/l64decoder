// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayRayIntersect2D
// Entry Point: 00b59364
// Size: 112 bytes
// Signature: undefined __cdecl rayRayIntersect2D(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3, Vector2 * param_4, float * param_5)


/* MathUtil::rayRayIntersect2D(Vector2 const&, Vector2 const&, Vector2 const&, Vector2 const&,
   float&) */

bool MathUtil::rayRayIntersect2D
               (Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)(param_2 + 4),
                            *(float *)param_2 * -*(float *)(param_4 + 4));
  if (1e-06 <= ABS(fVar2)) {
    fVar1 = (float)NEON_fmadd(*(float *)(param_3 + 4) - *(float *)(param_1 + 4),
                              *(undefined4 *)param_4,
                              *(float *)(param_4 + 4) * -(*(float *)param_3 - *(float *)param_1));
    *param_5 = fVar1 / fVar2;
  }
  return 1e-06 <= ABS(fVar2);
}


