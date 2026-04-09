// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combineMinus
// Entry Point: 009d9acc
// Size: 16 bytes
// Signature: undefined __cdecl combineMinus(float param_1, float param_2, uint param_3, uint param_4, float * param_5, uint param_6)


/* ProceduralPlacementMask::combineMinus(float, float, unsigned int, unsigned int, float*, unsigned
   int) */

void ProceduralPlacementMask::combineMinus
               (float param_1,float param_2,uint param_3,uint param_4,float *param_5,uint param_6)

{
  param_5[param_3 + param_6 * param_4] = param_1 - param_2;
  return;
}


