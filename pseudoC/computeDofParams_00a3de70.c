// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeDofParams
// Entry Point: 00a3de70
// Size: 52 bytes
// Signature: undefined __thiscall computeDofParams(ScreenSpaceProcessor * this, float param_1, float param_2, float param_3, float param_4, float param_5, float * param_6, float * param_7, float * param_8, float * param_9, float * param_10)


/* ScreenSpaceProcessor::computeDofParams(float, float, float, float, float, float&, float&, float&,
   float&, float&) */

void __thiscall
ScreenSpaceProcessor::computeDofParams
          (ScreenSpaceProcessor *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float *param_6,float *param_7,float *param_8,float *param_9,float *param_10)

{
  float fVar1;
  
  *param_6 = param_1;
  fVar1 = param_3 / (param_5 - param_4);
  *param_7 = -param_1 / param_2;
  *param_9 = fVar1;
  *param_8 = -fVar1 * param_4;
  *param_10 = param_3 / param_1;
  return;
}


