// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMotorTargetInConstraintSpace
// Entry Point: 00f3bf68
// Size: 1100 bytes
// Signature: undefined __thiscall setMotorTargetInConstraintSpace(btConeTwistConstraint * this, btQuaternion * param_1)


/* btConeTwistConstraint::setMotorTargetInConstraintSpace(btQuaternion const&) */

void __thiscall
btConeTwistConstraint::setMotorTargetInConstraintSpace
          (btConeTwistConstraint *this,btQuaternion *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float extraout_s16;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float local_68;
  float local_64;
  float local_8;
  float local_4;
  
  uVar4 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x24c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x244) = uVar4;
  fVar10 = *(float *)(this + 0x248);
  fVar5 = *(float *)(this + 0x24c);
  fVar1 = *(float *)(this + 0x250);
  fVar7 = *(float *)(this + 0x244);
  fVar12 = (float)NEON_fmadd(fVar7,fVar7,fVar1 * fVar1);
  fVar13 = (float)NEON_fmadd(fVar10,fVar10,fVar5 * fVar5);
  if (-0.9999999 <= fVar12 - fVar13) {
    fVar12 = (float)NEON_fmadd(fVar12 - fVar13,0x40000000,0x40000000);
    fVar16 = (float)NEON_fmadd(fVar5 + fVar5,fVar1,fVar7 * fVar10);
    fVar18 = (float)NEON_fnmsub(fVar1 + fVar1,fVar10,(fVar5 + fVar5) * fVar7);
    fVar13 = 1.0 / SQRT(fVar12);
    fVar18 = fVar13 * fVar18;
    fVar13 = fVar13 * (fVar16 + fVar7 * fVar10);
    fVar12 = SQRT(fVar12) * 0.5;
    fVar16 = 0.0;
  }
  else {
    fVar13 = 0.0;
    fVar16 = -0.0;
    fVar12 = 0.0;
    fVar18 = 1.0;
  }
  fVar17 = *(float *)(this + 0x1d4);
  uVar19 = NEON_fmadd(fVar18,fVar18,fVar16 * fVar16);
  uVar19 = NEON_fmadd(fVar13,fVar13,uVar19);
  fVar20 = (float)NEON_fmadd(fVar12,fVar12,uVar19);
  fVar21 = 1.0 / SQRT(fVar20);
  fVar18 = fVar21 * fVar18;
  fVar12 = fVar21 * fVar12;
  fVar16 = fVar21 * fVar16;
  fVar21 = fVar21 * fVar13;
  fVar13 = (float)NEON_fmadd(fVar16,fVar1,fVar18 * fVar5);
  fVar20 = (float)NEON_fmadd(fVar21,fVar10,fVar12 * fVar7);
  fVar15 = (float)NEON_fmadd(fVar12,fVar10,fVar16 * fVar5);
  fVar20 = fVar20 - fVar13;
  fVar14 = (float)NEON_fmadd(fVar18,fVar1,fVar21 * fVar7);
  fVar13 = (float)NEON_fmadd(fVar12,fVar5,fVar18 * fVar7);
  uVar19 = NEON_fmadd(fVar21,fVar5,fVar18 * fVar10);
  fVar10 = (float)NEON_fmadd(fVar21,fVar1,fVar16 * fVar10);
  fVar15 = fVar15 - fVar14;
  fVar14 = fVar20 * fVar20;
  uVar19 = NEON_fmadd(fVar16,fVar7,uVar19);
  fVar10 = fVar13 - fVar10;
  uVar8 = NEON_fmadd(fVar15,fVar15,fVar14);
  fVar5 = (float)NEON_fmadd(fVar12,fVar1,uVar19);
  uVar19 = NEON_fmadd(fVar10,fVar10,uVar8);
  fVar1 = (float)NEON_fmadd(fVar5,fVar5,uVar19);
  fVar1 = 1.0 / SQRT(fVar1);
  if ((0.05 <= fVar17) && (fVar7 = *(float *)(this + 0x1d8), 0.05 <= fVar7)) {
    fVar2 = (float)NEON_fminnm(fVar12,0x3f800000);
    fVar3 = acosf(fVar2);
    fVar3 = fVar3 + fVar3;
    fVar2 = extraout_s16;
    if (1.192093e-07 < fVar3) {
      uVar19 = NEON_fmadd(fVar18,fVar18,fVar16 * fVar16);
      fVar13 = (float)NEON_fmadd(fVar21,fVar21,uVar19);
      fVar13 = 1.0 / SQRT(fVar13);
      fVar14 = fVar13 * fVar18;
      fVar2 = fVar13 * fVar16;
      fVar13 = fVar13 * fVar21;
      if (1.192093e-07 < ABS(fVar14)) {
        fVar6 = (fVar13 * fVar13) / (fVar14 * fVar14);
        fVar17 = SQRT((fVar6 + 1.0) / (fVar6 / (fVar17 * fVar17) + 1.0 / (fVar7 * fVar7)));
      }
    }
    if (1.192093e-07 < ABS(fVar3)) {
      if ((fVar3 <= fVar17) && (fVar7 = -fVar17, fVar17 = fVar3, fVar3 < fVar7)) {
        fVar17 = fVar7;
      }
      uVar19 = NEON_fmadd(fVar14,fVar14,fVar13 * fVar13);
      fVar7 = (float)NEON_fmadd(fVar2,fVar2,uVar19);
      sincosf(fVar17 * 0.5,&local_4,&local_8);
      local_4 = local_4 / SQRT(fVar7);
      fVar16 = local_4 * fVar2;
      fVar18 = local_4 * fVar14;
      fVar21 = local_4 * fVar13;
      fVar12 = local_8;
    }
  }
  fVar7 = *(float *)(this + 0x1dc);
  fVar20 = fVar1 * fVar20;
  fVar15 = fVar1 * fVar15;
  fVar10 = fVar1 * fVar10;
  fVar1 = fVar1 * fVar5;
  if (0.05 <= fVar7) {
    fVar5 = (float)NEON_fminnm(fVar1,0x3f800000);
    fVar14 = acosf(fVar5);
    fVar14 = fVar14 + fVar14;
    fVar17 = fVar15;
    fVar5 = fVar20;
    fVar13 = fVar10;
    if (3.141593 < fVar14) {
      fVar14 = -fVar1;
      fVar5 = -fVar20;
      if (fVar14 <= -1.0) {
        fVar14 = -1.0;
      }
      fVar17 = -fVar15;
      fVar13 = -fVar10;
      fVar14 = (float)NEON_fminnm(fVar14,0x3f800000);
      fVar14 = acosf(fVar14);
      fVar14 = fVar14 + fVar14;
    }
    if (1.192093e-07 < fVar14) {
      uVar19 = NEON_fmadd(fVar17,fVar17,fVar5 * fVar5);
      fVar2 = (float)NEON_fmadd(fVar13,fVar13,uVar19);
      fVar2 = 1.0 / SQRT(fVar2);
      fVar5 = fVar2 * fVar5;
      fVar17 = fVar2 * fVar17;
      fVar13 = fVar2 * fVar13;
    }
    if (1.192093e-07 < ABS(fVar14)) {
      uVar19 = NEON_fmadd(fVar17,fVar17,fVar13 * fVar13);
      fVar10 = (float)NEON_fmadd(fVar5,fVar5,uVar19);
      fVar1 = fVar14;
      if (fVar14 < -fVar7) {
        fVar1 = -fVar7;
      }
      if (fVar14 <= fVar7) {
        fVar7 = fVar1;
      }
      sincosf(fVar7 * 0.5,&local_64,&local_68);
      local_64 = local_64 / SQRT(fVar10);
      fVar20 = local_64 * fVar5;
      fVar15 = local_64 * fVar17;
      fVar10 = local_64 * fVar13;
      fVar1 = local_68;
    }
  }
  uVar19 = NEON_fnmsub(fVar20,fVar12,fVar15 * fVar21);
  uVar8 = NEON_fmadd(fVar15,fVar12,fVar20 * fVar21);
  uVar9 = NEON_fnmsub(fVar15,fVar16,fVar20 * fVar18);
  uVar11 = NEON_fmadd(fVar15,fVar18,fVar20 * fVar16);
  uVar19 = NEON_fmadd(fVar10,fVar18,uVar19);
  uVar8 = NEON_fmsub(fVar10,fVar16,uVar8);
  uVar9 = NEON_fmadd(fVar10,fVar12,uVar9);
  uVar11 = NEON_fmadd(fVar10,fVar21,uVar11);
  uVar19 = NEON_fmadd(fVar1,fVar16,uVar19);
  uVar8 = NEON_fmadd(fVar1,fVar18,uVar8);
  uVar9 = NEON_fmadd(fVar1,fVar21,uVar9);
  uVar11 = NEON_fnmsub(fVar1,fVar12,uVar11);
  *(undefined4 *)(this + 0x244) = uVar19;
  *(undefined4 *)(this + 0x248) = uVar8;
  *(undefined4 *)(this + 0x24c) = uVar9;
  *(undefined4 *)(this + 0x250) = uVar11;
  return;
}


