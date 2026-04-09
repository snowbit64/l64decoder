// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_decomposeTransform
// Entry Point: 00eb30c8
// Size: 312 bytes
// Signature: undefined __cdecl fm_decomposeTransform(float * param_1, float * param_2, float * param_3, float * param_4)


/* FLOAT_MATH::fm_decomposeTransform(float const*, float*, float*, float*) */

void FLOAT_MATH::fm_decomposeTransform(float *param_1,float *param_2,float *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  fVar2 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  *param_4 = fVar2;
  fVar3 = SQRT(param_1[4] * param_1[4] + param_1[5] * param_1[5] + param_1[6] * param_1[6]);
  param_4[1] = fVar3;
  fVar2 = 1.0 / fVar2;
  fVar4 = SQRT(param_1[8] * param_1[8] + param_1[9] * param_1[9] + param_1[10] * param_1[10]);
  param_4[2] = fVar4;
  uStack_38 = *(undefined8 *)(param_1 + 0xe);
  uStack_40 = *(undefined8 *)(param_1 + 0xc);
  fVar3 = 1.0 / fVar3;
  fVar4 = 1.0 / fVar4;
  uStack_68._0_4_ = (float)*(undefined8 *)(param_1 + 2);
  local_70 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar2,
                      (float)*(undefined8 *)param_1 * fVar2);
  local_58._0_4_ = (float)*(undefined8 *)(param_1 + 6);
  uStack_48._0_4_ = (float)*(undefined8 *)(param_1 + 10);
  local_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) * fVar3,
                      (float)*(undefined8 *)(param_1 + 4) * fVar3);
  local_50 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar4,
                      (float)*(undefined8 *)(param_1 + 8) * fVar4);
  uStack_68 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20),fVar2 * (float)uStack_68);
  local_58 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20),fVar3 * (float)local_58);
  uStack_48 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20),fVar4 * (float)uStack_48)
  ;
  fm_matrixToQuat((float *)&local_70,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


