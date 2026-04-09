// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lateralComponent
// Entry Point: 00733254
// Size: 36 bytes
// Signature: undefined __cdecl lateralComponent(Vector2 * param_1, Vector2 * param_2)


/* lateralComponent(Vector2 const&, Vector2 const&) */

float lateralComponent(Vector2 *param_1,Vector2 *param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(*(float *)param_1,*(float *)param_2,
                            *(float *)(param_1 + 4) * *(float *)(param_2 + 4));
  return *(float *)param_2 - *(float *)param_1 * fVar1;
}


