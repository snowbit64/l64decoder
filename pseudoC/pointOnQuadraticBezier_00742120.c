// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointOnQuadraticBezier
// Entry Point: 00742120
// Size: 52 bytes
// Signature: undefined __cdecl pointOnQuadraticBezier(float param_1, Vector2 * param_2)


/* pointOnQuadraticBezier(float, Vector2 const*) */

float pointOnQuadraticBezier(float param_1,Vector2 *param_2)

{
  float fVar1;
  
  fVar1 = (float)*(undefined8 *)(param_2 + 8);
  return fVar1 + ((float)*(undefined8 *)param_2 - fVar1) * (1.0 - param_1) * (1.0 - param_1) +
         ((float)*(undefined8 *)(param_2 + 0x10) - fVar1) * param_1 * param_1;
}


