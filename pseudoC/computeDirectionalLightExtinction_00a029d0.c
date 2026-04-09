// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeDirectionalLightExtinction
// Entry Point: 00a029d0
// Size: 528 bytes
// Signature: undefined __cdecl computeDirectionalLightExtinction(float param_1, float param_2, float param_3, float param_4, float * param_5, float param_6, float param_7, double * param_8)


/* LightScatteringUtil::computeDirectionalLightExtinction(float, float, float, float, float const*,
   float, float, double*) */

void LightScatteringUtil::computeDirectionalLightExtinction
               (float param_1,float param_2,float param_3,float param_4,float *param_5,float param_6
               ,float param_7,double *param_8)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  undefined4 local_88;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_98 = param_5[2];
  local_90 = 0x3f80000000000000;
  local_a0 = *(undefined8 *)param_5;
  local_88 = 0;
  getDensityIntegralFromChapmanFunc
            (param_1,param_2,(Vector3 *)&local_90,(Vector3 *)&local_a0,&local_80);
  fVar8 = param_5[2];
  fVar7 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_1 + 6360000.0;
  uVar6 = NEON_fmadd(fVar7,fVar7,fVar4 * fVar4);
  fVar2 = (float)NEON_fmadd(fVar8,fVar8,uVar6);
  uVar6 = NEON_fmadd(fVar7,0,fVar5 * fVar4);
  fVar4 = (float)NEON_fmadd(fVar8,0,uVar6);
  fVar5 = (float)NEON_fmsub(param_2 + 6360000.0,param_2 + 6360000.0,fVar5 * fVar5 + 0.0);
  fVar4 = fVar4 + fVar4;
  fVar5 = (float)NEON_fmadd(fVar4,fVar4,fVar5 * fVar2 * -4.0);
  if (1e-05 <= fVar5) {
    local_7c = ((1.0 / (fVar2 + fVar2)) * (SQRT(fVar5) - fVar4) * param_3) / param_6 + local_7c;
  }
  fVar2 = 1e-08;
  fVar4 = param_7 * 5.804543e-06;
  if (param_7 * 5.804543e-06 <= 1e-08) {
    fVar4 = fVar2;
  }
  fVar5 = param_6 * 2e-05;
  if (param_6 * 2e-05 <= 1e-08) {
    fVar5 = fVar2;
  }
  fVar5 = fVar5 * local_7c;
  fVar7 = param_7 * 1.356291e-05;
  if (param_7 * 1.356291e-05 <= 1e-08) {
    fVar7 = fVar2;
  }
  dVar3 = exp((double)-(fVar4 * local_80 + fVar5));
  *param_8 = dVar3;
  dVar3 = exp((double)-(fVar7 * local_80 + fVar5));
  param_8[1] = dVar3;
  dVar3 = exp((double)-(param_7 * 3.311258e-05 * local_80 + fVar5));
  param_8[2] = dVar3;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


