// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traceRay
// Entry Point: 00ece2dc
// Size: 148 bytes
// Signature: undefined __cdecl traceRay(RaycastMesh * param_1, double * param_2, double * param_3, uint * param_4, uint * param_5)


/* VHACD::traceRay(VHACD::RaycastMesh*, double const*, double const*, unsigned int&, unsigned int&)
    */

void VHACD::traceRay(RaycastMesh *param_1,double *param_2,double *param_3,uint *param_4,
                    uint *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  double local_60;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (***(code ***)param_1)();
  if ((uVar2 & 1) != 0) {
    if (0.0 <= local_60) {
      param_5 = param_4;
    }
    *param_5 = *param_5 + 1;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


