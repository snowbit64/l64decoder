// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeTireForces
// Entry Point: 009a6ed0
// Size: 744 bytes
// Signature: undefined __thiscall computeTireForces(Bt2RaycastVehicle * this, Bt2WheelInfo * param_1, float param_2, float param_3, float param_4, float * param_5, float * param_6, float * param_7, float * param_8)


/* Bt2RaycastVehicle::computeTireForces(Bt2WheelInfo const&, float, float, float, float&, float&,
   float&, float&) const */

void __thiscall
Bt2RaycastVehicle::computeTireForces
          (Bt2RaycastVehicle *this,Bt2WheelInfo *param_1,float param_2,float param_3,float param_4,
          float *param_5,float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if (ABS(param_3) <= 1e-05 && ABS(param_2) < 1e-05 ||
      ABS(param_3) <= 1e-05 && ABS(param_2) == 1e-05) {
    *param_5 = 0.0;
    *param_6 = 0.0;
    *param_7 = 0.0;
    *param_8 = 0.0;
    return;
  }
  fVar6 = 0.02;
  if ((0.02 < param_4) && (fVar6 = param_4, param_4 < 1.0)) {
    fVar6 = (param_4 + -0.02) / 0.98 + 0.02;
  }
  fVar1 = fVar6 / *(float *)(param_1 + 0x14c);
  uVar4 = NEON_fmadd(fVar1,0x40400000,fVar1 * fVar1 * -3.0);
  uVar4 = NEON_fmadd(fVar1 * fVar1,fVar1,uVar4);
  fVar2 = (float)NEON_fmin(uVar4,0x3f800000);
  fVar3 = *(float *)(param_1 + 0x150);
  fVar2 = *(float *)(param_1 + 0x148) * fVar2;
  fVar1 = (float)NEON_fmadd(fVar2 * fVar2 * param_3,param_3,fVar3 * fVar3 * param_2 * param_2);
  fVar6 = fVar6 * *(float *)(param_1 + 0x154);
  fVar7 = SQRT(fVar1) / fVar6;
  fVar1 = 1.0;
  if (fVar7 <= 6.283185) {
    fVar1 = cosf(fVar7 * 0.5);
    fVar1 = (float)NEON_fmsub(1.0 - fVar2 / fVar3,fVar1,fVar2 / fVar3 + 1.0);
    fVar1 = fVar1 * 0.5;
  }
  uVar5 = NEON_fmsub(fVar7,fVar7,fVar7);
  fVar2 = (float)NEON_fmadd(param_2,param_2,fVar1 * fVar1 * param_3 * param_3);
  uVar4 = NEON_fmadd(fVar7 * -0.3333333,fVar7,fVar7);
  uVar4 = NEON_fmadd(fVar7 * fVar7 * 0.03703704,fVar7,uVar4);
  uVar5 = NEON_fmadd(fVar7 * fVar7 * 0.3333333,fVar7,uVar5);
  fVar3 = (float)NEON_fmin(uVar4,0x3f800000);
  fVar7 = (float)NEON_fmadd(fVar7 * fVar7 * fVar7 * -0.03703704,fVar7,uVar5);
  fVar3 = fVar3 * (fVar6 / SQRT(fVar2));
  *param_6 = fVar3 * param_2;
  *param_7 = -fVar1 * param_3 * fVar3;
  *param_8 = fVar7 * fVar1 * param_3 * (fVar6 / SQRT(fVar2));
  *param_5 = *(float *)(param_1 + 0xe0) * -*param_6;
  fVar1 = *param_6;
  if (0.0 <= fVar1) {
    fVar2 = fVar6 * 0.03;
    if (fVar2 <= fVar1) goto LAB_009a7150;
  }
  else {
    fVar2 = fVar6 * -0.03;
    if (fVar1 <= fVar2) goto LAB_009a7150;
  }
  *param_6 = fVar2;
LAB_009a7150:
  fVar1 = *param_7;
  if (0.0 <= fVar1) {
    fVar6 = fVar6 * 0.03;
    if (fVar6 <= fVar1) {
      return;
    }
  }
  else {
    fVar6 = fVar6 * -0.03;
    if (fVar1 <= fVar6) {
      return;
    }
  }
  *param_7 = fVar6;
  return;
}


