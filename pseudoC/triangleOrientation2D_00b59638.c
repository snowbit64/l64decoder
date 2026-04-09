// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: triangleOrientation2D
// Entry Point: 00b59638
// Size: 44 bytes
// Signature: undefined __cdecl triangleOrientation2D(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3)


/* MathUtil::triangleOrientation2D(Vector2 const&, Vector2 const&, Vector2 const&) */

undefined4 MathUtil::triangleOrientation2D(Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(*(float *)param_2 - *(float *)param_1,
                     *(float *)(param_3 + 4) - *(float *)(param_1 + 4),
                     (*(float *)param_3 - *(float *)param_1) *
                     -(*(float *)(param_2 + 4) - *(float *)(param_1 + 4)));
  return uVar1;
}


