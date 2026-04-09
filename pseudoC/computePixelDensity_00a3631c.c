// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computePixelDensity
// Entry Point: 00a3631c
// Size: 24 bytes
// Signature: undefined __cdecl computePixelDensity(float param_1, float param_2, float param_3, float param_4, float param_5)


/* RenderQueueUtil::computePixelDensity(float, float, float, float, float) */

float RenderQueueUtil::computePixelDensity
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  fVar1 = param_1 - param_5;
  if (param_1 - param_5 <= param_4) {
    fVar1 = param_4;
  }
  return param_3 / (fVar1 * param_2);
}


