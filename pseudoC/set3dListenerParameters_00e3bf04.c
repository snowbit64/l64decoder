// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dListenerParameters
// Entry Point: 00e3bf04
// Size: 68 bytes
// Signature: undefined __cdecl set3dListenerParameters(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12)


/* SoLoud::Soloud::set3dListenerParameters(float, float, float, float, float, float, float, float,
   float, float, float, float) */

void SoLoud::Soloud::set3dListenerParameters
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,float param_10,float param_11,
               float param_12)

{
  long in_x0;
  
  *(float *)(in_x0 + 0x3448) = param_1;
  *(float *)(in_x0 + 0x344c) = param_2;
  *(float *)(in_x0 + 0x3450) = param_3;
  *(float *)(in_x0 + 0x3454) = param_4;
  *(float *)(in_x0 + 0x3458) = param_5;
  *(float *)(in_x0 + 0x345c) = param_6;
  *(float *)(in_x0 + 0x3460) = param_7;
  *(float *)(in_x0 + 0x3464) = param_8;
  *(float *)(in_x0 + 0x3468) = param_9;
  *(float *)(in_x0 + 0x346c) = param_10;
  *(float *)(in_x0 + 0x3470) = param_11;
  *(float *)(in_x0 + 0x3474) = param_12;
  return;
}


