// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testAngularLimitMotor
// Entry Point: 00f3e07c
// Size: 760 bytes
// Signature: undefined __thiscall testAngularLimitMotor(btGeneric6DofConstraint * this, int param_1)


/* btGeneric6DofConstraint::testAngularLimitMotor(int) */

byte __thiscall
btGeneric6DofConstraint::testAngularLimitMotor(btGeneric6DofConstraint *this,int param_1)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar4 = (long)param_1;
  fVar8 = *(float *)(this + (long)param_1 * 4 + 0x4c0);
  fVar10 = *(float *)(this + lVar4 * 0x40 + 0x37c);
  fVar9 = *(float *)(this + lVar4 * 0x40 + 0x380);
  fVar7 = fVar8;
  if (fVar10 < fVar9) {
    if (fVar10 <= fVar8) {
      if (fVar8 <= fVar9) goto LAB_00f3e274;
      fVar5 = fmodf(fVar8 - fVar9,6.283185);
      if (-3.141593 <= fVar5) {
        if (3.141593 < fVar5) {
          fVar5 = fVar5 + -6.283185;
        }
      }
      else {
        fVar5 = fVar5 + 6.283185;
      }
      fVar6 = fmodf(fVar8 - fVar10,6.283185);
      if (-3.141593 <= fVar6) {
        if (3.141593 < fVar6) {
          fVar7 = -6.283185;
          goto LAB_00f3e250;
        }
      }
      else {
        fVar7 = 6.283185;
LAB_00f3e250:
        fVar6 = fVar6 + fVar7;
      }
      fVar7 = fVar8 + -6.283185;
      if (ABS(fVar5) <= ABS(fVar6)) {
        fVar7 = fVar8;
      }
    }
    else {
      fVar5 = fmodf(fVar10 - fVar8,6.283185);
      if (-3.141593 <= fVar5) {
        if (3.141593 < fVar5) {
          fVar6 = -6.283185;
          goto LAB_00f3e154;
        }
      }
      else {
        fVar6 = 6.283185;
LAB_00f3e154:
        fVar5 = fVar5 + fVar6;
      }
      fVar6 = fmodf(fVar9 - fVar8,6.283185);
      if (-3.141593 <= fVar6) {
        if (3.141593 < fVar6) {
          fVar2 = -6.283185;
          goto LAB_00f3e1b0;
        }
      }
      else {
        fVar2 = 6.283185;
LAB_00f3e1b0:
        fVar6 = fVar6 + fVar2;
      }
      if (ABS(fVar6) <= ABS(fVar5)) {
        fVar7 = fVar8 + 6.283185;
      }
    }
  }
LAB_00f3e274:
  *(float *)(this + lVar4 * 0x40 + 0x3b0) = fVar7;
  if (fVar9 < fVar10) {
    bVar1 = 0;
    *(undefined4 *)(this + lVar4 * 0x40 + 0x3b4) = 0;
    goto LAB_00f3e348;
  }
  if (fVar10 <= fVar7) {
    if (fVar7 <= fVar9) {
      bVar1 = 0;
      *(undefined4 *)(this + lVar4 * 0x40 + 0x3b4) = 0;
      goto LAB_00f3e348;
    }
    fVar7 = fVar7 - fVar9;
    pfVar3 = (float *)(this + lVar4 * 0x40 + 0x3ac);
    *(undefined4 *)(this + lVar4 * 0x40 + 0x3b4) = 2;
    *(float *)(this + lVar4 * 0x40 + 0x3ac) = fVar7;
    if (3.141593 < fVar7) goto LAB_00f3e2c4;
LAB_00f3e308:
    if (-3.141593 <= fVar7) {
      bVar1 = 1;
      goto LAB_00f3e348;
    }
    fVar8 = 6.283185;
  }
  else {
    fVar7 = fVar7 - fVar10;
    pfVar3 = (float *)(this + lVar4 * 0x40 + 0x3ac);
    *(undefined4 *)(this + lVar4 * 0x40 + 0x3b4) = 1;
    *(float *)(this + lVar4 * 0x40 + 0x3ac) = fVar7;
    if (fVar7 <= 3.141593) goto LAB_00f3e308;
LAB_00f3e2c4:
    fVar8 = -6.283185;
  }
  bVar1 = 1;
  *pfVar3 = fVar7 + fVar8;
LAB_00f3e348:
  return bVar1 | this[lVar4 * 0x40 + 0x3a8] != (btGeneric6DofConstraint)0x0;
}


