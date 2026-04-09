// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: det
// Entry Point: 0087e448
// Size: 28 bytes
// Signature: undefined __thiscall det(ObstacleAvoidance * this, Vector2 * param_1, Vector2 * param_2)


/* ObstacleAvoidance::det(Vector2 const&, Vector2 const&) */

undefined4 __thiscall
ObstacleAvoidance::det(ObstacleAvoidance *this,Vector2 *param_1,Vector2 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(param_2 + 4),
                     *(float *)param_2 * -*(float *)(param_1 + 4));
  return uVar1;
}


