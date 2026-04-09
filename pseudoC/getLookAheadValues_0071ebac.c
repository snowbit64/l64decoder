// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLookAheadValues
// Entry Point: 0071ebac
// Size: 792 bytes
// Signature: undefined __thiscall getLookAheadValues(TrafficVehicle * this, float param_1, uint param_2, float param_3, LookAheadState * param_4)


/* TrafficVehicle::getLookAheadValues(float, unsigned int, float, TrafficVehicle::LookAheadState&)
    */

void __thiscall
TrafficVehicle::getLookAheadValues
          (TrafficVehicle *this,float param_1,uint param_2,float param_3,LookAheadState *param_4)

{
  long lVar1;
  bool bVar2;
  TrafficVehicle *this_00;
  long *plVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  float extraout_s0;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_a8;
  float fStack_a4;
  undefined4 local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0xffffffff) {
    uVar7 = *(uint *)(this + 0x1f0);
    bVar2 = false;
    pplVar4 = (long **)(this + 0x1e8);
  }
  else {
    uVar7 = param_2 + 1;
    uVar7 = uVar7 - (uVar7 / 3 + ((uint)((ulong)uVar7 * 0xaaaaaaab >> 0x20) & 0xfffffffe));
    bVar2 = uVar7 == *(uint *)(this + 0x1f0);
    pplVar4 = (long **)(this + (ulong)param_2 * 8 + 0x1f8);
  }
  plVar5 = *pplVar4;
  *(uint *)param_4 = param_2;
  this_00 = (TrafficVehicle *)Spline::getLength();
  fVar16 = 1.0;
  fVar17 = param_3 / extraout_s0 + param_1;
  fVar15 = (float)NEON_fmin(fVar17,0x3f800000);
  if ((1.0 <= fVar17) && (!bVar2)) {
    plVar3 = *(long **)(this + (ulong)uVar7 * 8 + 0x1f8);
    if (*(long **)(this + (ulong)uVar7 * 8 + 0x1f8) == (long *)0x0) {
      plVar3 = (long *)getSuccessorRoad(this_00,(Road *)plVar5);
      *(long **)(this + (ulong)uVar7 * 8 + 0x1f8) = plVar3;
    }
    plVar5 = plVar3;
    uVar8 = Spline::getLength();
    fVar15 = (float)NEON_fmsub(fVar17 + -1.0,uVar8,param_3);
    fVar17 = (float)Spline::getLength();
    *(uint *)param_4 = uVar7;
    fVar15 = (float)NEON_fmin((param_3 - fVar15) / fVar17,0x3f800000);
  }
  (**(code **)(*(long *)plVar5[1] + 0x10))(fVar15,(long *)plVar5[1],&local_a8,&local_b8);
  uVar8 = NEON_fmadd(local_b8,local_b8,fStack_b4 * fStack_b4);
  fVar17 = (float)NEON_fmadd(local_b0,local_b0,uVar8);
  if (1e-06 < fVar17) {
    fVar16 = 1.0 / SQRT(fVar17);
  }
  local_b8 = local_b8 * fVar16;
  fStack_b4 = fStack_b4 * fVar16;
  local_b0 = local_b0 * fVar16;
  lVar6 = *plVar5;
  RawTransformGroup::updateWorldTransformation();
  fVar18 = *(float *)(lVar6 + 0xcc);
  uVar19 = *(undefined4 *)(lVar6 + 0xbc);
  uVar8 = NEON_fmadd(local_a8,*(undefined4 *)(lVar6 + 0xb8),fStack_a4 * *(float *)(lVar6 + 200));
  uVar11 = NEON_fmadd(local_a8,*(undefined4 *)(lVar6 + 0xc0),fStack_a4 * *(float *)(lVar6 + 0xd0));
  uVar13 = *(undefined4 *)(lVar6 + 0xdc);
  fVar16 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar6 + 0xd8),uVar8);
  fVar17 = (float)NEON_fmadd(local_a0,*(undefined4 *)(lVar6 + 0xe0),uVar11);
  fVar14 = *(float *)(lVar6 + 0xec);
  fVar16 = fVar16 + *(float *)(lVar6 + 0xe8);
  fVar17 = *(float *)(lVar6 + 0xf0) + fVar17;
  if (*(int *)(this + 0x378) == 0) goto LAB_0071ee54;
  fVar10 = 0.0;
  lVar6 = *(long *)(this + 0x380);
  if (lVar6 == 0) goto switchD_0071eda8_caseD_5;
  switch(*(int *)(this + 0x378)) {
  case 1:
  case 4:
    fVar9 = (fVar15 - *(float *)(this + 0x388)) /
            (*(float *)(this + 0x38c) - *(float *)(this + 0x388));
    fVar12 = (float)NEON_fmin(fVar9,0x3f800000);
    fVar10 = 0.0;
    goto LAB_0071ee18;
  case 2:
  case 5:
    fVar10 = *(float *)(lVar6 + 8);
    break;
  case 3:
    fVar10 = 3.141593;
    fVar9 = (fVar15 - *(float *)(this + 0x388)) /
            (*(float *)(this + 0x38c) - *(float *)(this + 0x388));
    fVar12 = (float)NEON_fmin(fVar9,0x3f800000);
    fVar12 = 1.0 - fVar12;
LAB_0071ee18:
    if (0.0 <= fVar9) {
      fVar10 = fVar12 * 3.141593;
    }
    fVar10 = cosf(fVar10);
    fVar10 = *(float *)(lVar6 + 8) * (fVar10 + -1.0) * -0.5;
  }
switchD_0071eda8_caseD_5:
  fVar16 = (float)NEON_fmadd(local_b0,fVar10,fVar16);
  fVar17 = (float)NEON_fmsub(local_b8,fVar10,fVar17);
LAB_0071ee54:
  *(float *)(param_4 + 4) = fVar15;
  *(float *)(param_4 + 8) = fVar16;
  *(ulong *)(param_4 + 0x14) = CONCAT44(fStack_b4,local_b8);
  uVar8 = NEON_fmadd(local_a8,uVar19,fStack_a4 * fVar18);
  *(float *)(param_4 + 0x1c) = local_b0;
  fVar15 = (float)NEON_fmadd(local_a0,uVar13,uVar8);
  *(float *)(param_4 + 0xc) = fVar14 + fVar15;
  *(float *)(param_4 + 0x10) = fVar17;
  *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)((long)plVar5 + 0x44);
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


