// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcCalcGridSize
// Entry Point: 00dd9ddc
// Size: 64 bytes
// Signature: undefined __cdecl rcCalcGridSize(float * param_1, float * param_2, float param_3, int * param_4, int * param_5)


/* rcCalcGridSize(float const*, float const*, float, int*, int*) */

void rcCalcGridSize(float *param_1,float *param_2,float param_3,int *param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1[2];
  fVar1 = param_2[2];
  *param_4 = (int)((*param_2 - *param_1) / param_3 + 0.5);
  *param_5 = (int)((fVar1 - fVar2) / param_3 + 0.5);
  return;
}


