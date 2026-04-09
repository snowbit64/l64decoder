// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSunDirectionalLightColor
// Entry Point: 00a02be0
// Size: 180 bytes
// Signature: undefined __cdecl computeSunDirectionalLightColor(float * param_1, float * param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float * param_9)


/* LightScatteringUtil::computeSunDirectionalLightColor(float const*, float const*, float, float,
   float, float, float, float, float*) */

void LightScatteringUtil::computeSunDirectionalLightColor
               (float *param_1,float *param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,float *param_9)

{
  long lVar1;
  double dVar2;
  double local_50;
  double dStack_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  computeDirectionalLightExtinction
            (param_3,param_4,param_5,param_6,param_1,param_7,param_8,&local_50);
  dVar2 = (double)NEON_fmin(local_50 * (double)*param_2,0x47efffffe0000000);
  *param_9 = (float)dVar2;
  dVar2 = (double)NEON_fmin(dStack_48 * (double)param_2[1],0x47efffffe0000000);
  param_9[1] = (float)dVar2;
  dVar2 = (double)NEON_fmin(local_40 * (double)param_2[2],0x47efffffe0000000);
  param_9[2] = (float)dVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


