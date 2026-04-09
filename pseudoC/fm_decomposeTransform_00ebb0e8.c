// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_decomposeTransform
// Entry Point: 00ebb0e8
// Size: 328 bytes
// Signature: undefined __cdecl fm_decomposeTransform(double * param_1, double * param_2, double * param_3, double * param_4)


/* FLOAT_MATH::fm_decomposeTransform(double const*, double*, double*, double*) */

void FLOAT_MATH::fm_decomposeTransform
               (double *param_1,double *param_2,double *param_3,double *param_4)

{
  long lVar1;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  local_a0 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  *param_4 = local_a0;
  local_80 = SQRT(param_1[4] * param_1[4] + param_1[5] * param_1[5] + param_1[6] * param_1[6]);
  param_4[1] = local_80;
  local_a0 = 1.0 / local_a0;
  local_60 = SQRT(param_1[8] * param_1[8] + param_1[9] * param_1[9] + param_1[10] * param_1[10]);
  param_4[2] = local_60;
  dStack_78 = param_1[7];
  local_80 = 1.0 / local_80;
  dStack_58 = param_1[0xb];
  local_60 = 1.0 / local_60;
  dStack_98 = param_1[3];
  local_90 = param_1[4] * local_80;
  dStack_88 = param_1[5] * local_80;
  local_80 = local_80 * param_1[6];
  dStack_48 = param_1[0xd];
  local_50 = param_1[0xc];
  dStack_38 = param_1[0xf];
  dStack_40 = param_1[0xe];
  local_b0 = *param_1 * local_a0;
  dStack_a8 = param_1[1] * local_a0;
  local_a0 = local_a0 * param_1[2];
  local_70 = param_1[8] * local_60;
  dStack_68 = param_1[9] * local_60;
  local_60 = local_60 * param_1[10];
  fm_matrixToQuat(&local_b0,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


