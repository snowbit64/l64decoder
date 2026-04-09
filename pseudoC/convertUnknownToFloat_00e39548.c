// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertUnknownToFloat
// Entry Point: 00e39548
// Size: 40 bytes
// Signature: undefined __cdecl convertUnknownToFloat(void * param_1, float * param_2, uint param_3, uint param_4)


/* SoLoud::convertUnknownToFloat(void const*, float*, unsigned int, unsigned int) */

void * SoLoud::convertUnknownToFloat(void *param_1,float *param_2,uint param_3,uint param_4)

{
  if (param_3 != 0) {
    param_1 = memset(param_2,0,(ulong)param_3 << 2);
  }
  return param_1;
}


