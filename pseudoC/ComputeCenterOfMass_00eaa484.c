// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeCenterOfMass
// Entry Point: 00eaa484
// Size: 288 bytes
// Signature: undefined __thiscall ComputeCenterOfMass(VHACD * this, double * param_1)


/* VHACD::VHACD::ComputeCenterOfMass(double*) const */

void __thiscall VHACD::VHACD::ComputeCenterOfMass(VHACD *this,double *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined auStack_90 [24];
  double local_78;
  double local_70;
  double dStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  uVar3 = (**(code **)(*(long *)this + 0x18))();
  if (uVar3 != 0) {
    dVar7 = 0.0;
    uVar4 = 0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    do {
      (**(code **)(*(long *)this + 0x20))(this,uVar4,auStack_90);
      uVar4 = uVar4 + 1;
      dVar7 = dVar7 + local_78;
    } while (uVar3 != uVar4);
    uVar4 = 0;
    uVar1 = uVar3;
    if (uVar3 < 2) {
      uVar1 = 1;
    }
    do {
      (**(code **)(*(long *)this + 0x20))(this,uVar4,auStack_90);
      uVar4 = uVar4 + 1;
      dVar5 = (1.0 / dVar7) * local_78;
      dVar6 = (double)NEON_fmadd(local_60,dVar5,param_1[2]);
      param_1[1] = param_1[1] + dStack_68 * dVar5;
      *param_1 = *param_1 + local_70 * dVar5;
      param_1[2] = dVar6;
    } while (uVar1 != uVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3 != 0);
}


