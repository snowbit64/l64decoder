// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tangentArray
// Entry Point: 00b57ad8
// Size: 4 bytes
// Signature: undefined __cdecl tangentArray(uint param_1, float * param_2, float * param_3, float * param_4, uint param_5, ushort * param_6, float * param_7)


/* MathUtil::tangentArray(unsigned int, float const*, float const*, float const*, unsigned int,
   unsigned short const*, float*) */

void MathUtil::tangentArray
               (uint param_1,float *param_2,float *param_3,float *param_4,uint param_5,
               ushort *param_6,float *param_7)

{
  tangentArrayInternal<unsigned_short>(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


