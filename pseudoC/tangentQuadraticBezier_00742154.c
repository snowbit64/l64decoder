// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tangentQuadraticBezier
// Entry Point: 00742154
// Size: 36 bytes
// Signature: undefined __cdecl tangentQuadraticBezier(float param_1, Vector2 * param_2)


/* tangentQuadraticBezier(float, Vector2 const*) */

undefined  [16] tangentQuadraticBezier(float param_1,Vector2 *param_2)

{
  undefined auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)*(undefined8 *)(param_2 + 8);
  fVar4 = fVar2 - (float)*(undefined8 *)param_2;
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar5 = fVar3 - (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  auVar1._0_4_ = fVar4 + (((float)*(undefined8 *)(param_2 + 0x10) - fVar2) - fVar4) * param_1;
  auVar1._4_4_ = fVar5 + (((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) - fVar3) - fVar5)
                         * param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}


