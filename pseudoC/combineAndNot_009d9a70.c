// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combineAndNot
// Entry Point: 009d9a70
// Size: 28 bytes
// Signature: undefined __cdecl combineAndNot(float param_1, float param_2, uint param_3, uint param_4, float * param_5, uint param_6)


/* ProceduralPlacementMask::combineAndNot(float, float, unsigned int, unsigned int, float*, unsigned
   int) */

void ProceduralPlacementMask::combineAndNot
               (float param_1,float param_2,uint param_3,uint param_4,float *param_5,uint param_6)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  param_5[param_3 + param_6 * param_4] = param_1;
  return;
}


