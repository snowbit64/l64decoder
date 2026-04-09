// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combineNotEqual
// Entry Point: 009d9b68
// Size: 32 bytes
// Signature: undefined __cdecl combineNotEqual(float param_1, float param_2, uint param_3, uint param_4, float * param_5, uint param_6)


/* ProceduralPlacementMask::combineNotEqual(float, float, unsigned int, unsigned int, float*,
   unsigned int) */

void ProceduralPlacementMask::combineNotEqual
               (float param_1,float param_2,uint param_3,uint param_4,float *param_5,uint param_6)

{
  float fVar1;
  
  fVar1 = 255.0;
  if (param_1 == param_2) {
    fVar1 = 0.0;
  }
  param_5[param_3 + param_6 * param_4] = fVar1;
  return;
}


