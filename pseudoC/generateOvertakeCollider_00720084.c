// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateOvertakeCollider
// Entry Point: 00720084
// Size: 1120 bytes
// Signature: undefined __thiscall generateOvertakeCollider(TrafficVehicle * this, float param_1, float param_2, bool param_3, vector * param_4, vector * param_5)


/* TrafficVehicle::generateOvertakeCollider(float, float, bool, std::__ndk1::vector<Vector3,
   std::__ndk1::allocator<Vector3> >&, std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3>
   >&) */

void __thiscall
TrafficVehicle::generateOvertakeCollider
          (TrafficVehicle *this,float param_1,float param_2,bool param_3,vector *param_4,
          vector *param_5)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x380) == 0) goto LAB_007204a8;
  local_88 = *(undefined8 *)(this + 0x354);
  local_80 = *(float *)(this + 0x35c);
  if (param_3) {
    plVar4 = *(long **)(this + 0x1e8);
    fVar15 = *(float *)(this + 0x214) + param_1;
  }
  else {
    plVar4 = (long *)(*(long *)(*(long *)(this + 0x48) + 0x18) +
                     (ulong)*(uint *)(*(long *)(this + 0x380) + 0x10) * 0x88);
    lVar3 = *plVar4;
    RawTransformGroup::updateWorldTransformation();
    local_88._4_4_ = local_88._4_4_ - *(float *)(lVar3 + 0xec);
    local_88._0_4_ = (float)local_88 - *(float *)(lVar3 + 0xe8);
    local_80 = local_80 - *(float *)(lVar3 + 0xf0);
    uVar9 = NEON_fmadd((float)local_88,*(undefined4 *)(lVar3 + 0xb8),
                       local_88._4_4_ * *(float *)(lVar3 + 0xbc));
    uVar13 = NEON_fmadd((float)local_88,*(undefined4 *)(lVar3 + 200),
                        local_88._4_4_ * *(float *)(lVar3 + 0xcc));
    uVar7 = NEON_fmadd((float)local_88,*(undefined4 *)(lVar3 + 0xd8),
                       local_88._4_4_ * *(float *)(lVar3 + 0xdc));
    uVar9 = NEON_fmadd(local_80,*(undefined4 *)(lVar3 + 0xc0),uVar9);
    uVar13 = NEON_fmadd(local_80,*(undefined4 *)(lVar3 + 0xd0),uVar13);
    local_80 = (float)NEON_fmadd(local_80,*(undefined4 *)(lVar3 + 0xe0),uVar7);
    local_88 = CONCAT44(uVar13,uVar9);
    fVar15 = (float)(**(code **)(*(long *)plVar4[1] + 0x20))
                              (0x3dcccccd,(long *)plVar4[1],&local_88,&local_98);
  }
  fVar5 = (float)Spline::getLength();
  if ((param_3) || (0.0 <= *(float *)(*(long *)(this + 0x380) + 0xc))) {
    fVar11 = (float)NEON_fmin(fVar15 + param_2 / fVar5,0x3f800000);
    if (fVar15 < fVar11) goto LAB_00720200;
  }
  else {
    fVar8 = fVar15 - param_2 / fVar5;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    bVar2 = fVar8 < fVar15;
    fVar11 = fVar15;
    fVar15 = fVar8;
    if (bVar2) {
LAB_00720200:
      fVar8 = 0.0;
      do {
        (**(code **)(*(long *)plVar4[1] + 0x10))(fVar15,(long *)plVar4[1],&local_98,&local_a8);
        lVar3 = *plVar4;
        RawTransformGroup::updateWorldTransformation();
        uVar7 = NEON_fmadd((float)local_98,*(undefined4 *)(lVar3 + 0xc0),
                           local_98._4_4_ * *(float *)(lVar3 + 0xd0));
        fVar6 = (float)NEON_fmadd(local_90,*(undefined4 *)(lVar3 + 0xe0),uVar7);
        local_98 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0xe8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_98._4_4_ +
                            (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_98
                            + (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_90,
                            (float)*(undefined8 *)(lVar3 + 0xe8) +
                            (float)*(undefined8 *)(lVar3 + 200) * local_98._4_4_ +
                            (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_98 +
                            (float)*(undefined8 *)(lVar3 + 0xd8) * local_90);
        local_90 = *(float *)(lVar3 + 0xf0) + fVar6;
        lVar3 = *plVar4;
        RawTransformGroup::updateWorldTransformation();
        uVar7 = NEON_fmadd((float)local_a8,*(undefined4 *)(lVar3 + 0xbc),
                           local_a8._4_4_ * *(float *)(lVar3 + 0xcc));
        uVar9 = NEON_fmadd((float)local_a8,*(undefined4 *)(lVar3 + 0xb8),
                           local_a8._4_4_ * *(float *)(lVar3 + 200));
        fVar6 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar3 + 0xdc),uVar7);
        fVar10 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar3 + 0xd8),uVar9);
        uVar7 = NEON_fmadd((float)local_a8,*(undefined4 *)(lVar3 + 0xc0),
                           local_a8._4_4_ * *(float *)(lVar3 + 0xd0));
        local_a0 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar3 + 0xe0),uVar7);
        uVar7 = NEON_fmadd(fVar10,fVar10,fVar6 * fVar6);
        fVar14 = (float)NEON_fmadd(local_a0,local_a0,uVar7);
        fVar12 = 1.0;
        if (1e-06 < fVar14) {
          fVar12 = 1.0 / SQRT(fVar14);
        }
        lVar3 = *(long *)(param_5 + 8);
        local_a0 = local_a0 * fVar12;
        local_a8 = CONCAT44(fVar6 * fVar12,fVar10 * fVar12);
        if (*(long *)param_5 == lVar3) {
LAB_00720224:
          FUN_007204e4(param_4,&local_98);
          FUN_007204e4(param_5,&local_a8);
          fVar6 = fVar8;
        }
        else {
          uVar7 = NEON_fmadd(fVar10 * fVar12,*(undefined4 *)(lVar3 + -0xc),
                             fVar6 * fVar12 * *(float *)(lVar3 + -8));
          fVar6 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar3 + -4),uVar7);
          fVar6 = fVar8 + (1.0 - fVar6);
          fVar8 = 0.0;
          if (0.01 < fVar6) goto LAB_00720224;
        }
        fVar8 = fVar6;
        fVar15 = 5.0 / fVar5 + fVar15;
      } while (fVar15 < fVar11);
    }
  }
  (**(code **)(*(long *)plVar4[1] + 0x10))(fVar11,(long *)plVar4[1],&local_98,&local_a8);
  lVar3 = *plVar4;
  RawTransformGroup::updateWorldTransformation();
  uVar7 = NEON_fmadd((float)local_98,*(undefined4 *)(lVar3 + 0xc0),
                     local_98._4_4_ * *(float *)(lVar3 + 0xd0));
  fVar15 = (float)NEON_fmadd(local_90,*(undefined4 *)(lVar3 + 0xe0),uVar7);
  local_98 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0xe8) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_98._4_4_ +
                      (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_98 +
                      (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_90,
                      (float)*(undefined8 *)(lVar3 + 0xe8) +
                      (float)*(undefined8 *)(lVar3 + 200) * local_98._4_4_ +
                      (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_98 +
                      (float)*(undefined8 *)(lVar3 + 0xd8) * local_90);
  local_90 = *(float *)(lVar3 + 0xf0) + fVar15;
  lVar3 = *plVar4;
  RawTransformGroup::updateWorldTransformation();
  fVar15 = (float)*(undefined8 *)(lVar3 + 200) * local_a8._4_4_ +
           (float)*(undefined8 *)(lVar3 + 0xb8) * (float)local_a8 +
           (float)*(undefined8 *)(lVar3 + 0xd8) * local_a0;
  fVar5 = (float)((ulong)*(undefined8 *)(lVar3 + 200) >> 0x20) * local_a8._4_4_ +
          (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) * (float)local_a8 +
          (float)((ulong)*(undefined8 *)(lVar3 + 0xd8) >> 0x20) * local_a0;
  uVar7 = NEON_fmadd((float)local_a8,*(undefined4 *)(lVar3 + 0xc0),
                     local_a8._4_4_ * *(float *)(lVar3 + 0xd0));
  local_a0 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar3 + 0xe0),uVar7);
  fVar8 = (float)NEON_fmadd(local_a0,local_a0,fVar5 * fVar5 + fVar15 * fVar15);
  fVar11 = 1.0;
  if (1e-06 < fVar8) {
    fVar11 = 1.0 / SQRT(fVar8);
  }
  local_a8 = CONCAT44(fVar5 * fVar11,fVar15 * fVar11);
  local_a0 = local_a0 * fVar11;
  FUN_007204e4(param_4,&local_98);
  FUN_007204e4(param_5,&local_a8);
LAB_007204a8:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


