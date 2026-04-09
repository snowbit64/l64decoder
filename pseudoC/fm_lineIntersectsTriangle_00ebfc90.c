// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_lineIntersectsTriangle
// Entry Point: 00ebfc90
// Size: 256 bytes
// Signature: undefined __cdecl fm_lineIntersectsTriangle(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5, double * param_6)


/* FLOAT_MATH::fm_lineIntersectsTriangle(double const*, double const*, double const*, double const*,
   double const*, double*) */

void FLOAT_MATH::fm_lineIntersectsTriangle
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
               double *param_6)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  dVar3 = param_2[1] - param_1[1];
  dVar8 = param_2[2] - param_1[2];
  dVar4 = *param_2 - *param_1;
  uVar5 = NEON_fmadd(dVar4,dVar4,dVar3 * dVar3);
  dVar6 = (double)NEON_fmadd(dVar8,dVar8,uVar5);
  dVar7 = 1.0 / SQRT(dVar6);
  local_70 = dVar4 * dVar7;
  dStack_68 = dVar3 * dVar7;
  local_60 = dVar8 * dVar7;
  uVar1 = fm_rayIntersectsTriangle(param_1,&local_70,param_3,param_4,param_5,&local_78);
  if (((uVar1 & 1) == 0) || (local_78 <= SQRT(dVar6))) {
    uVar5 = 0;
    lVar2 = *(long *)(lVar2 + 0x28);
  }
  else {
    uVar5 = 1;
    dVar4 = (double)NEON_fmadd(dVar4 * dVar7,local_78,*param_1);
    *param_6 = dVar4;
    dVar3 = (double)NEON_fmadd(dVar3 * dVar7,local_78,param_1[1]);
    param_6[1] = dVar3;
    dVar3 = (double)NEON_fmadd(dVar8 * dVar7,local_78,param_1[2]);
    param_6[2] = dVar3;
    lVar2 = *(long *)(lVar2 + 0x28);
  }
  if (lVar2 != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


