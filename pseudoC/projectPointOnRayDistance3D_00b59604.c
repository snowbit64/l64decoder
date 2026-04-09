// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectPointOnRayDistance3D
// Entry Point: 00b59604
// Size: 52 bytes
// Signature: undefined __cdecl projectPointOnRayDistance3D(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3)


/* MathUtil::projectPointOnRayDistance3D(Vector3 const&, Vector3 const&, Vector3 const&) */

undefined4 MathUtil::projectPointOnRayDistance3D(Vector3 *param_1,Vector3 *param_2,Vector3 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(float *)param_3 - *(float *)param_1,
                     (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_2 + 4));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),*(float *)(param_3 + 8) - *(float *)(param_1 + 8),
                     uVar1);
  return uVar1;
}


