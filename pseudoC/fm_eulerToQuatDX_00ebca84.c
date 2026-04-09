// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToQuatDX
// Entry Point: 00ebca84
// Size: 412 bytes
// Signature: undefined __cdecl fm_eulerToQuatDX(double param_1, double param_2, double param_3, double * param_4)


/* FLOAT_MATH::fm_eulerToQuatDX(double, double, double, double*) */

void FLOAT_MATH::fm_eulerToQuatDX(double param_1,double param_2,double param_3,double *param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  sincos(param_1 * 0.5,&dStack_f0,&local_f8);
  sincos(param_2 * 0.5,&dStack_100,&local_108);
  sincos(param_3 * 0.5,&dStack_110,&local_118);
  local_b0 = 0;
  local_d0 = 0;
  local_70 = 0x3ff0000000000000;
  dVar3 = (double)NEON_fmadd(local_f8,local_108 * dStack_110,dStack_100 * local_118 * -dStack_f0);
  dVar4 = (double)NEON_fmadd(local_f8,dStack_100 * local_118,dStack_f0 * local_108 * dStack_110);
  dVar5 = (double)NEON_fmadd(dStack_f0,local_108 * local_118,dStack_100 * dStack_110 * -local_f8);
  dVar2 = (double)NEON_fmadd(local_f8,local_108 * local_118,dStack_f0 * dStack_100 * dStack_110);
  dStack_e0 = dVar5 * dVar4 + dVar3 * dVar2;
  local_c8 = dVar5 * dVar4 - dVar3 * dVar2;
  local_a8 = dVar5 * dVar3 + dVar4 * dVar2;
  local_d8 = dVar5 * dVar3 - dVar4 * dVar2;
  dStack_a0 = dVar4 * dVar3 - dVar5 * dVar2;
  local_e8 = (double)NEON_fmadd(dVar4 * dVar4 + dVar3 * dVar3,0xc000000000000000,0x3ff0000000000000)
  ;
  local_b8 = dVar4 * dVar3 + dVar5 * dVar2;
  dStack_e0 = dStack_e0 + dStack_e0;
  local_c8 = local_c8 + local_c8;
  uStack_c0 = NEON_fmadd(dVar5 * dVar5 + dVar3 * dVar3,0xc000000000000000,0x3ff0000000000000);
  local_a8 = local_a8 + local_a8;
  uStack_88 = 0;
  local_90 = 0;
  local_b8 = local_b8 + local_b8;
  uStack_78 = 0;
  local_80 = 0;
  dStack_a0 = dStack_a0 + dStack_a0;
  local_d8 = local_d8 + local_d8;
  local_98 = NEON_fmadd(dVar5 * dVar5 + dVar4 * dVar4,0xc000000000000000,0x3ff0000000000000);
  fm_matrixToQuat(&local_e8,param_4);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


