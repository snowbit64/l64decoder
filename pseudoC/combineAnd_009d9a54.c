// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combineAnd
// Entry Point: 009d9a54
// Size: 28 bytes
// Signature: undefined __cdecl combineAnd(float param_1, float param_2, uint param_3, uint param_4, float * param_5, uint param_6)


/* ProceduralPlacementMask::combineAnd(float, float, unsigned int, unsigned int, float*, unsigned
   int) */

void ProceduralPlacementMask::combineAnd
               (float param_1,float param_2,uint param_3,uint param_4,float *param_5,uint param_6)

{
  if ((param_2 <= 0.0 || param_1 == 0.0) || 0.0 < param_2 && param_1 < 0.0) {
    param_1 = 0.0;
  }
  param_5[param_3 + param_6 * param_4] = param_1;
  return;
}


