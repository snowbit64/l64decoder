// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0089b048
// Size: 1692 bytes
// Signature: undefined __thiscall update(SimulatedPedestrian * this, float param_1)


/* SimulatedPedestrian::update(float) */

void __thiscall SimulatedPedestrian::update(SimulatedPedestrian *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined8 local_50;
  float local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x48) != 0) {
    PedestrianAnimationBlender::update
              ((PedestrianAnimationBlender *)(*(long *)(this + 0x48) + 8),param_1);
  }
  if (this[0x71] != (SimulatedPedestrian)0x0) {
    if ((*(long *)(this + 0x48) != 0) &&
       (uVar2 = PedestrianAnimationBlender::isMainAnimationFinished(), (uVar2 & 1) != 0)) {
      lVar4 = *(long *)(this + 0x48);
      PedestrianGroupData::getNextAnimationName();
                    /* try { // try from 0089b0b4 to 0089b0c7 has its CatchHandler @ 0089b6e4 */
      PedestrianAnimationBlender::switchToAnim
                ((PedestrianAnimationBlender *)(lVar4 + 8),(basic_string *)&local_50,1000.0);
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    goto LAB_0089b6b8;
  }
  lVar4 = *(long *)(this + 0x48);
  this[0x89] = (SimulatedPedestrian)0x0;
  if ((lVar4 != 0) &&
     (uVar2 = PedestrianAnimationBlender::updateAnimWalkEvents
                        ((PedestrianAnimationBlender *)(lVar4 + 8),(vector *)(lVar4 + 0x80)),
     (uVar2 & 1) != 0)) {
    this[0x89] = (SimulatedPedestrian)0x1;
  }
  fVar8 = *(float *)(this + 0xa0);
  fVar9 = *(float *)(this + 0xa8);
  fVar13 = ABS(fVar8 - *(float *)(this + 0xb4));
  fVar7 = 0.0;
  if ((*(float *)(this + 0xb0) < fVar13) &&
     (fVar14 = ABS(fVar9 / *(float *)(this + 0xac)),
     *(float *)(this + 0xb0) + fVar14 * *(float *)(this + 0xac) * fVar14 * 0.5 <= fVar13)) {
    fVar7 = *(float *)(this + 0xa4);
    if (*(float *)(this + 0xb4) <= fVar8) {
      fVar7 = -*(float *)(this + 0xa4);
    }
  }
  fVar13 = param_1 * 0.001;
  if (fVar9 <= fVar7) {
    if (fVar9 < fVar7) {
      fVar9 = (float)NEON_fmadd(*(undefined4 *)(this + 0xac),fVar13,fVar9);
      *(float *)(this + 0xa8) = fVar9;
      if (fVar7 < fVar9) goto LAB_0089b19c;
    }
  }
  else {
    fVar9 = (float)NEON_fmsub(*(undefined4 *)(this + 0xac),fVar13,fVar9);
    *(float *)(this + 0xa8) = fVar9;
    if (fVar9 < fVar7) {
LAB_0089b19c:
      *(float *)(this + 0xa8) = fVar7;
      fVar9 = fVar7;
    }
  }
  fVar7 = *(float *)(this + 0x90);
  uVar10 = NEON_fmadd(fVar13 * fVar9,fVar7 / *(float *)(this + 0x98),fVar8);
  fVar9 = *(float *)(this + 0xb8);
  *(undefined4 *)(this + 0xa0) = uVar10;
  if (((this[0x72] == (SimulatedPedestrian)0x0) && (this[0x8b] == (SimulatedPedestrian)0x0)) &&
     (this[0x8c] == (SimulatedPedestrian)0x0)) {
    if (0.0 < fVar9) {
      *(float *)(this + 0xb8) = fVar9 - fVar13;
LAB_0089b200:
      *(undefined4 *)(this + 0x94) = 0;
    }
  }
  else {
    if (fVar9 <= 0.0) goto LAB_0089b200;
    *(float *)(this + 0xb8) = fVar9 - fVar13;
  }
  fVar9 = *(float *)(this + 0x94);
  if (fVar7 <= fVar9) {
    if (fVar7 < fVar9) {
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(this + 0x9c),fVar13,fVar7);
      *(float *)(this + 0x90) = fVar7;
      if (fVar9 < fVar7) goto LAB_0089b240;
    }
  }
  else {
    fVar7 = (float)NEON_fmsub(*(undefined4 *)(this + 0x9c),fVar13,fVar7);
    *(float *)(this + 0x90) = fVar7;
    if (fVar7 < fVar9) {
LAB_0089b240:
      *(float *)(this + 0x90) = fVar9;
      fVar7 = fVar9;
    }
  }
  if (((this[0x8a] == (SimulatedPedestrian)0x0) || (fVar9 != 0.0)) || (0.8 <= fVar7)) {
    if ((this[0x8a] == (SimulatedPedestrian)0x0) && (fVar9 != 0.0)) {
      this[0x8a] = (SimulatedPedestrian)0x1;
      PedestrianAnimationBlender::stopOverrideAnim
                ((PedestrianAnimationBlender *)(*(long *)(this + 0x48) + 8),400.0,0.0);
    }
  }
  else {
    this[0x8a] = (SimulatedPedestrian)0x0;
    PedestrianAnimationBlender::overrideWithIdleAnim
              ((PedestrianAnimationBlender *)(*(long *)(this + 0x48) + 8),300.0,0.0);
  }
  fVar13 = fVar13 * *(float *)(this + 0x90) * *(float *)(this + 0x80);
  fVar9 = *(float *)(*(long *)(this + 0x78) + 0x24);
  if (this[0x88] == (SimulatedPedestrian)0x0) {
    uVar10 = NEON_fmadd(fVar13,fVar9,*(undefined4 *)(this + 0x84));
    *(undefined4 *)(this + 0x84) = uVar10;
    plVar3 = *(long **)(*(long *)(this + 0x78) + 0x10);
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_50,&local_60);
    lVar4 = **(long **)(this + 0x78);
    RawTransformGroup::updateWorldTransformation();
    fVar9 = (float)((ulong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20) * (float)local_50;
    uVar10 = NEON_fmadd((float)local_50,*(undefined4 *)(lVar4 + 0xc0),
                        local_50._4_4_ * *(float *)(lVar4 + 0xd0));
    fVar7 = (float)NEON_fmadd(local_48,*(undefined4 *)(lVar4 + 0xe0),uVar10);
    local_50._0_4_ =
         (float)*(undefined8 *)(lVar4 + 0xe8) +
         (float)*(undefined8 *)(lVar4 + 200) * local_50._4_4_ +
         (float)*(undefined8 *)(lVar4 + 0xb8) * (float)local_50 +
         (float)*(undefined8 *)(lVar4 + 0xd8) * local_48;
    local_50._4_4_ =
         (float)((ulong)*(undefined8 *)(lVar4 + 0xe8) >> 0x20) +
         (float)((ulong)*(undefined8 *)(lVar4 + 200) >> 0x20) * local_50._4_4_ + fVar9 +
         (float)((ulong)*(undefined8 *)(lVar4 + 0xd8) >> 0x20) * local_48;
    local_48 = *(float *)(lVar4 + 0xf0) + fVar7;
    lVar4 = **(long **)(this + 0x78);
    RawTransformGroup::updateWorldTransformation();
    uVar10 = NEON_fmadd(local_60,*(undefined4 *)(lVar4 + 0xbc),fStack_5c * *(float *)(lVar4 + 0xcc))
    ;
    uVar12 = NEON_fmadd(local_60,*(undefined4 *)(lVar4 + 0xb8),fStack_5c * *(float *)(lVar4 + 200));
    fVar7 = (float)NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xdc),uVar10);
    fVar9 = (float)NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xd8),uVar12);
    uVar10 = NEON_fmadd(local_60,*(undefined4 *)(lVar4 + 0xc0),fStack_5c * *(float *)(lVar4 + 0xd0))
    ;
    fVar8 = (float)NEON_fmadd(local_58,*(undefined4 *)(lVar4 + 0xe0),uVar10);
    uVar10 = NEON_fmadd(fVar9,fVar9,fVar7 * fVar7);
    fVar13 = (float)NEON_fmadd(fVar8,fVar8,uVar10);
    fVar7 = 1.0;
    if (1e-06 < fVar13) {
      fVar7 = 1.0 / SQRT(fVar13);
    }
    fVar13 = *(float *)(this + 0x1c);
    fVar8 = (float)NEON_fmadd(fVar8 * fVar7,*(undefined4 *)(this + 0xa0),(float)local_50);
    local_48 = (float)NEON_fmadd(fVar7 * -fVar9,*(undefined4 *)(this + 0xa0),local_48);
    local_60 = fVar8 - fVar13;
    fStack_5c = local_50._4_4_ - *(float *)(this + 0x20);
    local_50 = CONCAT44(local_50._4_4_,fVar8);
    local_58 = local_48 - *(float *)(this + 0x24);
    if (((0.001 <= ABS(fVar8 - fVar13)) || (0.001 <= ABS(local_50._4_4_ - *(float *)(this + 0x20))))
       || (0.001 <= ABS(local_48 - *(float *)(this + 0x24)))) {
      uVar10 = NEON_fmadd(local_60,local_60,fStack_5c * fStack_5c);
      fVar7 = (float)NEON_fmadd(local_58,local_58,uVar10);
      fVar9 = 1.0;
      if (1e-06 < fVar7) {
        fVar9 = 1.0 / SQRT(fVar7);
      }
      local_60 = local_60 * fVar9;
      fStack_5c = fStack_5c * fVar9;
      local_58 = local_58 * fVar9;
      *(ulong *)(this + 0x28) = CONCAT44(fStack_5c,local_60);
      *(float *)(this + 0x30) = local_58;
    }
    *(ulong *)(this + 0x1c) = local_50;
    *(float *)(this + 0x24) = local_48;
    if (((0.0 < *(float *)(this + 0x80)) && (**(float **)(this + 200) < *(float *)(this + 0x84))) ||
       ((*(float *)(this + 0x80) < 0.0 && (*(float *)(this + 0x84) < **(float **)(this + 200))))) {
      this[0x88] = (SimulatedPedestrian)0x1;
      calculateTransitionCurve();
    }
  }
  else {
    pfVar5 = *(float **)(this + 200);
    fVar7 = (float)NEON_fmadd(fVar13 * fVar9,*(undefined4 *)(this + 0xd4),
                              *(undefined4 *)(this + 0x84));
    *(float *)(this + 0x84) = fVar7;
    fVar13 = (ABS(fVar7 - *pfVar5) / fVar9) / (pfVar5[3] + pfVar5[9]);
    CubicBezierUtil::getPosition
              (fVar13,(Vector3 *)(this + 0xd8),(Vector3 *)(this + 0xe4),(Vector3 *)(this + 0xf0),
               (Vector3 *)(this + 0xfc),(Vector3 *)&local_50);
    uVar2 = *(ulong *)(this + 0x1c);
    fVar9 = (float)uVar2;
    fVar7 = (float)(uVar2 >> 0x20);
    fVar8 = (float)(local_50 >> 0x20);
    uVar2 = NEON_fcmgt(0x3a83126f3a83126f,CONCAT44(ABS(fVar8 - fVar7),ABS((float)local_50 - fVar9)),
                       4);
    if ((((uVar2 & 1) == 0) || ((uVar2 & 0x100000000) == 0)) ||
       (0.001 <= ABS(local_48 - *(float *)(this + 0x24)))) {
      fVar9 = (float)local_50 - fVar9;
      fVar8 = fVar8 - fVar7;
      fVar7 = local_48 - *(float *)(this + 0x24);
      fVar11 = (float)NEON_fmadd(fVar7,fVar7,fVar8 * fVar8 + fVar9 * fVar9);
      fVar14 = 1.0;
      if (1e-06 < fVar11) {
        fVar14 = 1.0 / SQRT(fVar11);
      }
      *(ulong *)(this + 0x28) = CONCAT44(fVar8 * fVar14,fVar9 * fVar14);
      *(float *)(this + 0x30) = fVar7 * fVar14;
    }
    *(ulong *)(this + 0x1c) = local_50;
    *(float *)(this + 0x24) = local_48;
    if (1.0 < fVar13) {
      lVar4 = *(long *)(this + 200);
      this[0x88] = (SimulatedPedestrian)0x0;
      lVar6 = *(long *)(lVar4 + 0x10);
      *(long *)(this + 0x78) = lVar6;
      uVar10 = NEON_fmadd((fVar13 + -0.5) * (*(float *)(lVar4 + 0x1c) - *(float *)(lVar4 + 0x18)),
                          0x40000000,*(float *)(lVar4 + 0x18));
      *(undefined4 *)(this + 0x84) = uVar10;
      uVar10 = *(undefined4 *)(lVar4 + 0x20);
      *(undefined4 *)(this + 0xa0) = *(undefined4 *)(this + 0xd0);
      *(undefined4 *)(this + 0x80) = uVar10;
      uVar10 = 0;
      fVar9 = *(float *)(lVar6 + 0x1c);
      if (0.4 < fVar9) {
        uVar10 = MathUtil::getRandomMinMax(0.4 - fVar9,fVar9 + -0.4);
      }
      *(undefined4 *)(this + 0xb4) = uVar10;
      findNextSpline();
    }
  }
LAB_0089b6b8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


