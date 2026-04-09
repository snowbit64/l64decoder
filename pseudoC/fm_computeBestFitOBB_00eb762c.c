// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitOBB
// Entry Point: 00eb762c
// Size: 120 bytes
// Signature: undefined __cdecl fm_computeBestFitOBB(uint param_1, float * param_2, uint param_3, float * param_4, float * param_5, float * param_6, bool param_7)


/* FLOAT_MATH::fm_computeBestFitOBB(unsigned int, float const*, unsigned int, float*, float*,
   float*, bool) */

void FLOAT_MATH::fm_computeBestFitOBB
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5,
               float *param_6,bool param_7)

{
  long lVar1;
  float afStack_78 [12];
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fm_computeBestFitOBB(param_1,param_2,param_3,param_4,afStack_78,param_7);
  *(undefined8 *)param_5 = local_48;
  param_5[2] = local_40;
  fm_matrixToQuat(afStack_78,param_6);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


