// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitOBB
// Entry Point: 00ebf750
// Size: 120 bytes
// Signature: undefined __cdecl fm_computeBestFitOBB(uint param_1, double * param_2, uint param_3, double * param_4, double * param_5, double * param_6, bool param_7)


/* FLOAT_MATH::fm_computeBestFitOBB(unsigned int, double const*, unsigned int, double*, double*,
   double*, bool) */

void FLOAT_MATH::fm_computeBestFitOBB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5,
               double *param_6,bool param_7)

{
  long lVar1;
  double adStack_b8 [12];
  double local_58;
  double dStack_50;
  double local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fm_computeBestFitOBB(param_1,param_2,param_3,param_4,adStack_b8,param_7);
  param_5[1] = dStack_50;
  *param_5 = local_58;
  param_5[2] = local_48;
  fm_matrixToQuat(adStack_b8,param_6);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


