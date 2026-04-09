// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessPrimitiveSet
// Entry Point: 00ea7170
// Size: 1104 bytes
// Signature: undefined __thiscall ProcessPrimitiveSet(VHACD * this, PrimitiveSetBase * param_1, PrimitiveSet * param_2)


/* VHACD::VHACD::ProcessPrimitiveSet(VHACD::PrimitiveSetBase*, VHACD::PrimitiveSet*) */

void __thiscall
VHACD::VHACD::ProcessPrimitiveSet(VHACD *this,PrimitiveSetBase *param_1,PrimitiveSet *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  PrimitiveSet *pPVar4;
  PrimitiveSet *pPVar5;
  Parameters *pPVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined auVar15 [16];
  double local_14f0;
  Plane aPStack_14e8 [40];
  SArray aSStack_14c0 [2560];
  void *local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  SArray aSStack_aa8 [2560];
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  dVar8 = (double)(**(code **)(*(long *)param_2 + 0x40))(param_2);
  (**(code **)(*(long *)param_2 + 0x78))(param_2);
  (**(code **)(*(long *)param_2 + 0x80))(param_2);
  (**(code **)(*(long *)param_2 + 0x70))(param_2,param_2 + 0x10,1);
  dVar9 = (double)Mesh::ComputeVolume();
  dVar9 = ABS(dVar9);
  if (param_2[8] == (PrimitiveSet)0x0) {
    dVar14 = *(double *)(this + 0x270);
  }
  else {
    *(double *)(this + 0x270) = dVar9;
    dVar14 = dVar9;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  dVar14 = ABS(dVar9 - dVar8) / dVar14;
  dVar10 = (double)(**(code **)(*(long *)param_2 + 0x38))(param_2);
  dVar11 = *(double *)(this + 0x270);
  dVar10 = (dVar10 * 0.2) / dVar11;
  if (*(long *)(lVar7 + 0x28) != 0) {
    uVar3 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
    auVar15 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
    FUN_00ea70cc(dVar14,dVar10,dVar8,dVar9,*(undefined8 *)(this + 0x270),aSStack_aa8,auVar15._8_8_,
                 "\t\t Part C=%2.6f E=%2.6f VS=%u VI=%u V=%.5f VCH=%.5f VCH0=%.5f\n",uVar3,
                 auVar15._0_8_);
    (**(code **)(**(long **)(lVar7 + 0x28) + 0x10))(*(long **)(lVar7 + 0x28),aSStack_aa8);
    dVar11 = *(double *)(this + 0x270);
  }
  dVar8 = 1.0;
  if (*(char *)(lVar7 + 0x68) != '\0') {
    dVar8 = dVar11;
  }
  if ((dVar14 <= **(double **)(param_1 + 0x28) / dVar8) || (dVar14 <= dVar10)) {
    PrimitiveSetBase::pushParts(param_1,param_2);
    goto LAB_00ea7584;
  }
  dVar8 = (double)(**(code **)(*(long *)param_2 + 0x30))(param_2,0);
  dVar9 = (double)(**(code **)(*(long *)param_2 + 0x30))(param_2,1);
  dVar10 = (double)(**(code **)(*(long *)param_2 + 0x30))(param_2,2);
  dVar11 = (dVar9 - dVar10) * (dVar9 - dVar10);
  dVar12 = (dVar8 - dVar10) * (dVar8 - dVar10);
  dVar13 = (dVar8 - dVar9) * (dVar8 - dVar9);
  if ((dVar12 <= dVar11) || (dVar13 <= dVar11)) {
    if ((dVar11 <= dVar12) || (dVar13 <= dVar12)) {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0x3ff0000000000000;
      dVar11 = (double)NEON_fmadd(dVar8,dVar8,dVar9 * dVar9);
      dVar8 = 0.0;
      if (dVar11 != 0.0) {
        dVar11 = dVar13 / dVar11;
        goto LAB_00ea73f4;
      }
    }
    else {
      local_80 = 0;
      dVar11 = (double)NEON_fmadd(dVar8,dVar8,dVar10 * dVar10);
      dVar8 = 0.0;
      uStack_88 = 0x3ff0000000000000;
      local_90 = 0;
      if (dVar11 != 0.0) {
        dVar11 = dVar12 / dVar11;
LAB_00ea73f4:
        dVar8 = 1.0 - dVar11;
      }
    }
  }
  else {
    dVar8 = 0.0;
    uStack_88 = 0;
    local_80 = 0;
    dVar9 = (double)NEON_fmadd(dVar9,dVar9,dVar10 * dVar10);
    local_90 = 0x3ff0000000000000;
    if (dVar9 != 0.0) {
      dVar11 = dVar11 / dVar9;
      goto LAB_00ea73f4;
    }
  }
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0x40;
  uStack_ab8 = 0;
  local_ac0 = (void *)0x0;
  local_ab0 = 0x40;
  ComputeAxesAlignedClippingPlanes
            ((VoxelSet *)param_2,(short)*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x48),
             aSStack_aa8);
  pPVar6 = *(Parameters **)(param_1 + 0x28);
  local_14f0 = 1.79769e+308;
  ComputeBestClippingPlane
            (this,param_2,*(double *)(pPVar6 + 8),aSStack_aa8,(Vec3 *)&local_90,dVar8,
             dVar14 * *(double *)(pPVar6 + 8),dVar14 * *(double *)(pPVar6 + 0x10),
             *(int *)(pPVar6 + 0x4c),aPStack_14e8,&local_14f0,pPVar6);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + 0x48);
  if ((1 < uVar1) || (1 < *(uint *)(*(long *)(param_1 + 0x28) + 0x4c))) {
    RefineAxesAlignedClippingPlanes((VoxelSet *)param_2,aPStack_14e8,(short)uVar1,aSStack_14c0);
    pPVar6 = *(Parameters **)(param_1 + 0x28);
    ComputeBestClippingPlane
              (this,param_2,*(double *)(pPVar6 + 8),aSStack_14c0,(Vec3 *)&local_90,dVar8,
               dVar14 * *(double *)(pPVar6 + 8),dVar14 * *(double *)(pPVar6 + 0x10),1,aPStack_14e8,
               &local_14f0,pPVar6);
  }
  dVar8 = local_14f0;
  std::__ndk1::mutex::lock();
  if (**(double **)(param_1 + 0x90) < dVar8) {
    **(double **)(param_1 + 0x90) = dVar8;
  }
  std::__ndk1::mutex::unlock();
  pPVar4 = (PrimitiveSet *)(**(code **)(*(long *)param_2 + 0x10))(param_2);
  pPVar5 = (PrimitiveSet *)(**(code **)(*(long *)param_2 + 0x10))(param_2);
  PrimitiveSetBase::pushTemp(param_1,pPVar4);
  PrimitiveSetBase::pushTemp(param_1,pPVar5);
  (**(code **)(*(long *)param_2 + 0x48))(param_2,aPStack_14e8,pPVar5,pPVar4);
  (**(code **)(*(long *)param_2 + 8))(param_2);
  if (local_ac0 != (void *)0x0) {
    operator_delete__(local_ac0);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
LAB_00ea7584:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


