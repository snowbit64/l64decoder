// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combineDiv
// Entry Point: 009d9aec
// Size: 28 bytes
// Signature: undefined __cdecl combineDiv(float param_1, float param_2, uint param_3, uint param_4, float * param_5, uint param_6)


/* ProceduralPlacementMask::combineDiv(float, float, unsigned int, unsigned int, float*, unsigned
   int) */

void ProceduralPlacementMask::combineDiv
               (float param_1,float param_2,uint param_3,uint param_4,float *param_5,uint param_6)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (param_2 != 0.0) {
    fVar1 = param_1 / param_2;
  }
  param_5[param_3 + param_6 * param_4] = fVar1;
  return;
}


