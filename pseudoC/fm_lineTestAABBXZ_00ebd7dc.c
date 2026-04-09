// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_lineTestAABBXZ
// Entry Point: 00ebd7dc
// Size: 132 bytes
// Signature: undefined __cdecl fm_lineTestAABBXZ(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5)


/* FLOAT_MATH::fm_lineTestAABBXZ(double const*, double const*, double const*, double const*,
   double&) */

uint FLOAT_MATH::fm_lineTestAABBXZ
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  long lVar1;
  uint uVar2;
  double local_58;
  undefined8 local_50;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dStack_40 = *param_3;
  local_30 = param_3[2];
  local_58 = *param_4;
  local_50 = 0x41cdcd6500000000;
  local_48 = param_4[2];
  local_38 = 0xc1cdcd6500000000;
  uVar2 = intersect(param_1,param_2,&dStack_40,&local_58,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


