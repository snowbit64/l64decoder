// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointOnCubicBezier
// Entry Point: 00743004
// Size: 80 bytes
// Signature: undefined __cdecl pointOnCubicBezier(float param_1, Vector2 * param_2)


/* pointOnCubicBezier(float, Vector2 const*) */

float pointOnCubicBezier(float param_1,Vector2 *param_2)

{
  float fVar1;
  
  fVar1 = 1.0 - param_1;
  return (float)*(undefined8 *)param_2 * fVar1 * fVar1 * fVar1 +
         (float)*(undefined8 *)(param_2 + 8) * fVar1 * fVar1 * 3.0 * param_1 +
         (float)*(undefined8 *)(param_2 + 0x10) * param_1 * param_1 * fVar1 * 3.0 +
         (float)*(undefined8 *)(param_2 + 0x18) * param_1 * param_1 * param_1;
}


