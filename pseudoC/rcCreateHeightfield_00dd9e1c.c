// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcCreateHeightfield
// Entry Point: 00dd9e1c
// Size: 144 bytes
// Signature: undefined __cdecl rcCreateHeightfield(rcContext * param_1, rcHeightfield * param_2, int param_3, int param_4, float * param_5, float * param_6, float param_7, float param_8)


/* rcCreateHeightfield(rcContext*, rcHeightfield&, int, int, float const*, float const*, float,
   float) */

bool rcCreateHeightfield(rcContext *param_1,rcHeightfield *param_2,int param_3,int param_4,
                        float *param_5,float *param_6,float param_7,float param_8)

{
  void *__s;
  float fVar1;
  
  fVar1 = *param_5;
  *(int *)param_2 = param_3;
  *(int *)(param_2 + 4) = param_4;
  *(float *)(param_2 + 8) = fVar1;
  *(float *)(param_2 + 0xc) = param_5[1];
  *(float *)(param_2 + 0x10) = param_5[2];
  *(float *)(param_2 + 0x14) = *param_6;
  *(float *)(param_2 + 0x18) = param_6[1];
  fVar1 = param_6[2];
  *(float *)(param_2 + 0x24) = param_8;
  *(float *)(param_2 + 0x1c) = fVar1;
  *(float *)(param_2 + 0x20) = param_7;
  __s = (void *)rcAlloc(param_3 * param_4 * 8,0);
  *(void **)(param_2 + 0x28) = __s;
  if (__s != (void *)0x0) {
    memset(__s,0,(long)*(int *)param_2 * (long)*(int *)(param_2 + 8) * 8);
  }
  return __s != (void *)0x0;
}


