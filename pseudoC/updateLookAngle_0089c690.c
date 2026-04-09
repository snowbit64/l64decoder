// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLookAngle
// Entry Point: 0089c690
// Size: 508 bytes
// Signature: undefined __thiscall updateLookAngle(SimulatedPedestrian * this, Vector3 * param_1, float param_2)


/* SimulatedPedestrian::updateLookAngle(Vector3 const&, float) */

void __thiscall
SimulatedPedestrian::updateLookAngle(SimulatedPedestrian *this,Vector3 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  if (*(char *)(*(long *)(this + 0x50) + 0xd1) != '\0') {
    fVar1 = (float)MathUtil::degreeToRadian(40.0);
    fVar6 = *(float *)(this + 0x1c) - *(float *)param_1;
    uVar7 = NEON_fmadd(*(float *)(this + 0x20) - *(float *)(param_1 + 4),
                       *(float *)(this + 0x20) - *(float *)(param_1 + 4),fVar6 * fVar6);
    fVar6 = *(float *)(this + 0x24) - *(float *)(param_1 + 8);
    fVar6 = (float)NEON_fmadd(fVar6,fVar6,uVar7);
    if (400.0 <= fVar6) {
      fVar1 = (float)PedestrianTransitionValue::getTargetValue();
      if (fVar1 != 0.0) {
        PedestrianTransitionValue::setTargetValue((PedestrianTransitionValue *)this,0.0,500.0);
      }
    }
    else {
      fVar6 = *(float *)param_1 - *(float *)(this + 0x1c);
      fVar2 = *(float *)(param_1 + 8) - *(float *)(this + 0x24);
      uVar7 = NEON_fmadd(fVar6,fVar6,0);
      fVar5 = (float)NEON_fmadd(fVar2,fVar2,uVar7);
      fVar4 = 1.0;
      if (1e-06 < fVar5) {
        fVar4 = 1.0 / SQRT(fVar5);
      }
      uVar8 = *(undefined4 *)(this + 0x28);
      fVar9 = *(float *)(this + 0x30);
      uVar7 = NEON_fmadd(fVar6 * fVar4,uVar8,fVar4 * 0.0 * *(float *)(this + 0x2c));
      fVar3 = (float)NEON_fmadd(fVar2 * fVar4,fVar9,uVar7);
      fVar5 = -1.0;
      if ((-1.0 <= fVar3) && (fVar5 = 1.0, fVar3 <= 1.0)) {
        fVar5 = fVar3;
      }
      fVar5 = acosf(fVar5);
      fVar2 = (float)NEON_fmadd(fVar2 * fVar4,uVar8,fVar9 * -(fVar6 * fVar4));
      fVar6 = -fVar5;
      if (fVar2 <= 0.0) {
        fVar6 = fVar5;
      }
      fVar2 = (float)PedestrianTransitionValue::getTargetValue();
      if (fVar1 <= fVar5) {
        if (fVar2 != 0.0) {
          fVar1 = (float)MathUtil::getRandomMinMax(0.0,500.0);
          PedestrianTransitionValue::setTargetValue
                    ((PedestrianTransitionValue *)this,0.0,500.0,fVar1);
        }
      }
      else if (fVar2 == 0.0) {
        fVar1 = (float)MathUtil::getRandomMinMax(0.0,2000.0);
        PedestrianTransitionValue::setTargetValue
                  ((PedestrianTransitionValue *)this,fVar6,500.0,fVar1);
      }
      else {
        PedestrianTransitionValue::updateTargetValue((PedestrianTransitionValue *)this,fVar6);
      }
    }
    PedestrianTransitionValue::update((PedestrianTransitionValue *)this,param_2);
    return;
  }
  return;
}


