// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectPointOnRayDistance2D
// Entry Point: 00b59570
// Size: 36 bytes
// Signature: undefined __cdecl projectPointOnRayDistance2D(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3)


/* MathUtil::projectPointOnRayDistance2D(Vector2 const&, Vector2 const&, Vector2 const&) */

undefined4 MathUtil::projectPointOnRayDistance2D(Vector2 *param_1,Vector2 *param_2,Vector2 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(float *)param_3 - *(float *)param_1,
                     (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_2 + 4));
  return uVar1;
}


