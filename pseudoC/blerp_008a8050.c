// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: blerp
// Entry Point: 008a8050
// Size: 120 bytes
// Signature: undefined __cdecl blerp(uint param_1, uint param_2, uint param_3, uint param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10)


/* AudioMathUtil::blerp(unsigned int, unsigned int, unsigned int, unsigned int, float, float, float,
   float, float, float) */

float AudioMathUtil::blerp
                (uint param_1,uint param_2,uint param_3,uint param_4,float param_5,float param_6,
                float param_7,float param_8,float param_9,float param_10)

{
  float fVar1;
  float fVar2;
  
  if (param_2 - param_1 != 0) {
    fVar1 = (float)(ulong)(param_2 - param_1);
    fVar2 = (param_9 - (float)(ulong)param_1) / fVar1;
    fVar1 = ((float)(ulong)param_2 - param_9) / fVar1;
    param_6 = (float)NEON_fmadd(fVar1,param_6,fVar2 * param_7);
    param_5 = (float)NEON_fmadd(fVar1,param_5,fVar2 * param_8);
  }
  if (param_4 - param_3 != 0) {
    fVar1 = (float)(ulong)(param_4 - param_3);
    fVar1 = (float)NEON_fmadd(((float)(ulong)param_4 - param_10) / fVar1,param_6,
                              ((param_10 - (float)(ulong)param_3) / fVar1) * param_5);
    return fVar1;
  }
  return param_6;
}


