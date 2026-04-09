// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tangentCubicBezier
// Entry Point: 00743054
// Size: 68 bytes
// Signature: undefined __cdecl tangentCubicBezier(float param_1, Vector2 * param_2)


/* tangentCubicBezier(float, Vector2 const*) */

float tangentCubicBezier(float param_1,Vector2 *param_2)

{
  float fVar1;
  
  fVar1 = 1.0 - param_1;
  return ((float)*(undefined8 *)(param_2 + 8) - (float)*(undefined8 *)param_2) * fVar1 * fVar1 +
         ((float)*(undefined8 *)(param_2 + 0x10) - (float)*(undefined8 *)(param_2 + 8)) *
         (param_1 + param_1) * fVar1 +
         ((float)*(undefined8 *)(param_2 + 0x18) - (float)*(undefined8 *)(param_2 + 0x10)) *
         param_1 * param_1;
}


