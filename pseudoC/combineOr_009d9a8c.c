// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combineOr
// Entry Point: 009d9a8c
// Size: 48 bytes
// Signature: undefined __cdecl combineOr(float param_1, float param_2, uint param_3, uint param_4, float * param_5, uint param_6)


/* ProceduralPlacementMask::combineOr(float, float, unsigned int, unsigned int, float*, unsigned
   int) */

void ProceduralPlacementMask::combineOr
               (float param_1,float param_2,uint param_3,uint param_4,float *param_5,uint param_6)

{
  uint uVar1;
  
  if (0.0 < param_1) {
    param_5[param_3 + param_6 * param_4] = param_1;
    return;
  }
  uVar1 = param_3 + param_6 * param_4;
  if (0.0 < param_2) {
    param_5[uVar1] = param_2;
    return;
  }
  param_5[uVar1] = 0.0;
  return;
}


