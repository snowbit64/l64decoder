// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_limit_motor_info2
// Entry Point: 00f3db44
// Size: 1336 bytes
// Signature: undefined __thiscall get_limit_motor_info2(btGeneric6DofConstraint * this, btRotationalLimitMotor * param_1, btTransform * param_2, btTransform * param_3, btVector3 * param_4, btVector3 * param_5, btVector3 * param_6, btVector3 * param_7, btConstraintInfo2 * param_8, int param_9, btVector3 * param_10, int param_11, int param_12)


/* btGeneric6DofConstraint::get_limit_motor_info2(btRotationalLimitMotor*, btTransform const&,
   btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&,
   btTypedConstraint::btConstraintInfo2*, int, btVector3&, int, int) */

undefined8 __thiscall
btGeneric6DofConstraint::get_limit_motor_info2
          (btGeneric6DofConstraint *this,btRotationalLimitMotor *param_1,btTransform *param_2,
          btTransform *param_3,btVector3 *param_4,btVector3 *param_5,btVector3 *param_6,
          btVector3 *param_7,btConstraintInfo2 *param_8,int param_9,btVector3 *param_10,int param_11
          ,int param_12)

{
  undefined8 *puVar1;
  uint uVar2;
  btRotationalLimitMotor bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  bVar3 = param_1[0x2c];
  uVar2 = *(uint *)(param_1 + 0x38);
  if (((byte)bVar3 | uVar2) == 0) {
    return 0;
  }
  lVar8 = 8;
  if (param_11 != 0) {
    lVar8 = 0x10;
  }
  uVar4 = *(int *)(param_8 + 0x28) * param_9;
  lVar8 = *(long *)(param_8 + lVar8);
  uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
  lVar5 = (long)(int)uVar4;
  *(undefined4 *)(lVar8 + uVar9) = *(undefined4 *)param_10;
  lVar6 = (lVar5 + 1) * 4;
  lVar7 = (lVar5 + 2) * 4;
  *(undefined4 *)(lVar8 + lVar6) = *(undefined4 *)(param_10 + 4);
  *(undefined4 *)(lVar8 + lVar7) = *(undefined4 *)(param_10 + 8);
  lVar8 = 0x18;
  if (param_11 != 0) {
    lVar8 = 0x20;
  }
  lVar8 = *(long *)(param_8 + lVar8);
  *(float *)(lVar8 + uVar9) = -*(float *)param_10;
  *(float *)(lVar8 + lVar6) = -*(float *)(param_10 + 4);
  *(float *)(lVar8 + lVar7) = -*(float *)(param_10 + 8);
  if (param_11 == 0) {
    if (this[0x52d] == (btGeneric6DofConstraint)0x0) {
      lVar8 = *(long *)(param_8 + 0x10);
      fVar10 = *(float *)(this + 0x4b0) - *(float *)(param_2 + 0x30);
      uVar17 = NEON_fnmsub(*(float *)(param_10 + 4),fVar10,
                           *(float *)param_10 *
                           (*(float *)(this + 0x4b4) - *(float *)(param_2 + 0x34)));
      uVar11 = NEON_fnmsub(*(float *)(param_10 + 8),
                           *(float *)(this + 0x4b4) - *(float *)(param_2 + 0x34),
                           *(float *)(param_10 + 4) *
                           (*(float *)(this + 0x4b8) - *(float *)(param_2 + 0x38)));
      uVar22 = NEON_fnmsub(*(float *)param_10,*(float *)(this + 0x4b8) - *(float *)(param_2 + 0x38),
                           *(float *)(param_10 + 8) * fVar10);
      *(undefined4 *)(lVar8 + lVar7) = uVar17;
      *(undefined4 *)(lVar8 + lVar5 * 4) = uVar11;
      *(undefined4 *)(lVar8 + lVar6) = uVar22;
      lVar8 = *(long *)(param_8 + 0x20);
      uVar17 = NEON_fnmsub(*(float *)(param_10 + 8),
                           *(float *)(this + 0x4b0) - *(float *)(param_3 + 0x30),
                           *(float *)param_10 *
                           (*(float *)(this + 0x4b8) - *(float *)(param_3 + 0x38)));
      uVar22 = NEON_fnmsub(*(float *)(param_10 + 4),
                           *(float *)(this + 0x4b8) - *(float *)(param_3 + 0x38),
                           *(float *)(param_10 + 8) *
                           (*(float *)(this + 0x4b4) - *(float *)(param_3 + 0x34)));
      uVar11 = NEON_fnmsub(*(float *)param_10,*(float *)(this + 0x4b4) - *(float *)(param_3 + 0x34),
                           *(float *)(param_10 + 4) *
                           (*(float *)(this + 0x4b0) - *(float *)(param_3 + 0x30)));
      *(undefined4 *)(lVar8 + lVar6) = uVar17;
      *(undefined4 *)(lVar8 + lVar5 * 4) = uVar22;
      *(undefined4 *)(lVar8 + lVar7) = uVar11;
    }
    else {
      fVar10 = *(float *)param_10;
      fVar27 = *(float *)(this + 0x4b0) - *(float *)(param_3 + 0x30);
      fVar20 = (float)*(undefined8 *)(this + 0x4b4) - (float)*(undefined8 *)(param_3 + 0x34);
      fVar23 = (float)((ulong)*(undefined8 *)(this + 0x4b4) >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20);
      fVar15 = (float)*(undefined8 *)(this + 0x474) - (float)*(undefined8 *)(param_2 + 0x34);
      fVar19 = (float)((ulong)*(undefined8 *)(this + 0x474) >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
      fVar14 = (float)*(undefined8 *)(param_10 + 4);
      fVar21 = (float)((ulong)*(undefined8 *)(param_10 + 4) >> 0x20);
      fVar12 = (*(float *)(this + 0x470) - *(float *)(param_2 + 0x30)) * fVar10 + fVar15 * fVar14 +
               fVar19 * fVar21;
      fVar18 = fVar10 * fVar27 + fVar20 * fVar14 + fVar23 * fVar21;
      fVar13 = *(float *)(this + 0x510);
      fVar29 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x30);
      fVar16 = *(float *)(this + 0x514);
      fVar30 = fVar14 * fVar12 + -fVar14 * fVar18 + fVar14 * fVar29;
      fVar31 = fVar21 * fVar12 + -fVar21 * fVar18 + fVar21 * fVar29;
      uVar11 = NEON_fmadd(fVar29,fVar10,fVar12 * fVar10 + fVar18 * -fVar10);
      fVar15 = (fVar15 - fVar14 * fVar12) + fVar30 * fVar13;
      fVar29 = (fVar19 - fVar21 * fVar12) + fVar31 * fVar13;
      fVar30 = (-fVar14 * fVar18 + fVar20) - fVar30 * fVar16;
      fVar23 = (-fVar21 * fVar18 + fVar23) - fVar31 * fVar16;
      fVar19 = (float)NEON_fmadd(uVar11,fVar13,
                                 (*(float *)(this + 0x470) - *(float *)(param_2 + 0x30)) -
                                 fVar12 * fVar10);
      fVar20 = (float)NEON_fmsub(uVar11,fVar16,fVar18 * -fVar10 + fVar27);
      fVar18 = -(fVar15 * fVar10) + fVar19 * fVar14;
      fVar12 = -(fVar30 * fVar10) + fVar20 * fVar14;
      fVar15 = -(fVar29 * fVar14) + fVar21 * fVar15;
      fVar19 = -(fVar19 * fVar21) + fVar10 * fVar29;
      uVar25 = CONCAT44(fVar19,fVar15);
      fVar14 = -(fVar23 * fVar14) + fVar21 * fVar30;
      fVar10 = -(fVar20 * fVar21) + fVar10 * fVar23;
      if ((param_12 == 0) && (this[0x518] != (btGeneric6DofConstraint)0x0)) {
        uVar25 = CONCAT44(fVar19 * fVar13,fVar15 * fVar13);
        fVar18 = fVar18 * fVar13;
        fVar14 = fVar14 * fVar16;
        fVar10 = fVar10 * fVar16;
        fVar12 = fVar12 * fVar16;
      }
      puVar1 = (undefined8 *)(*(long *)(param_8 + 0x10) + lVar5 * 4);
      *puVar1 = uVar25;
      *(float *)(puVar1 + 1) = fVar18;
      puVar1 = (undefined8 *)(*(long *)(param_8 + 0x20) + lVar5 * 4);
      *puVar1 = CONCAT44(-fVar10,-fVar14);
      *(float *)(puVar1 + 1) = -fVar12;
    }
  }
  if (uVar2 == 0) {
    lVar8 = *(long *)(param_8 + 0x30);
    *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
    if ((byte)bVar3 != 0) {
      *(undefined4 *)(*(long *)(param_8 + 0x38) + lVar5 * 4) = *(undefined4 *)(param_1 + 0x1c);
      fVar14 = *(float *)(param_1 + 4);
      fVar12 = *(float *)(param_1 + 8);
      fVar21 = *(float *)param_1;
      fVar10 = -fVar12;
      if (param_11 != 0) {
        fVar10 = fVar12;
      }
      fVar13 = 1.0;
      if ((fVar21 <= fVar14) && (fVar13 = 0.0, fVar21 != fVar14)) {
        fVar10 = fVar10 / (*(float *)(param_1 + 0x20) * *(float *)param_8);
        fVar18 = *(float *)(param_1 + 0x34);
        if (0.0 <= fVar10) {
          if (0.0 < fVar10) {
            if ((fVar14 < fVar18) || (fVar18 <= fVar14 - fVar10)) {
              fVar13 = 0.0;
              if (fVar18 <= fVar14) {
                fVar13 = 1.0;
              }
            }
            else {
              fVar13 = (fVar14 - fVar18) / fVar10;
            }
          }
        }
        else if ((fVar18 < fVar21) || (fVar21 - fVar10 <= fVar18)) {
          fVar13 = 0.0;
          if (fVar21 <= fVar18) {
            fVar13 = 1.0;
          }
        }
        else {
          fVar13 = (fVar21 - fVar18) / fVar10;
        }
      }
      lVar5 = lVar5 * 4;
      uVar11 = NEON_fmadd(fVar12,fVar13,*(undefined4 *)(lVar8 + lVar5));
      *(undefined4 *)(lVar8 + lVar5) = uVar11;
      lVar8 = *(long *)(param_8 + 0x48);
      *(float *)(*(long *)(param_8 + 0x40) + lVar5) = -*(float *)(param_1 + 0xc);
      *(undefined4 *)(lVar8 + lVar5) = *(undefined4 *)(param_1 + 0xc);
      return 1;
    }
  }
  else {
    fVar10 = *(float *)param_1;
    fVar12 = *(float *)(param_1 + 4);
    lVar8 = *(long *)(param_8 + 0x30);
    *(undefined4 *)(lVar8 + lVar5 * 4) = 0;
    if ((fVar10 != fVar12) && (bVar3 != (btRotationalLimitMotor)0x0)) {
      *(undefined4 *)(*(long *)(param_8 + 0x38) + lVar5 * 4) = *(undefined4 *)(param_1 + 0x1c);
    }
    if (param_11 == 0) {
      uVar11 = NEON_fmadd(*(undefined4 *)(param_1 + 0x30),
                          *(float *)(param_1 + 0x20) * *(float *)param_8,
                          *(undefined4 *)(lVar8 + lVar5 * 4));
    }
    else {
      uVar11 = NEON_fmsub(*(undefined4 *)(param_1 + 0x30),
                          *(float *)(param_1 + 0x20) * *(float *)param_8,
                          *(undefined4 *)(lVar8 + lVar5 * 4));
    }
    lVar6 = lVar5 * 4;
    lVar7 = *(long *)(param_8 + 0x38);
    *(undefined4 *)(lVar8 + lVar6) = uVar11;
    *(undefined4 *)(lVar7 + lVar6) = *(undefined4 *)(param_1 + 0x24);
    if (*(float *)param_1 == *(float *)(param_1 + 4)) {
      lVar8 = *(long *)(param_8 + 0x48);
      *(undefined4 *)(*(long *)(param_8 + 0x40) + lVar6) = 0xff7fffff;
      *(undefined4 *)(lVar8 + lVar6) = 0x7f7fffff;
      return 1;
    }
    uVar17 = 0x7f7fffff;
    lVar7 = *(long *)(param_8 + 0x48);
    uVar11 = 0;
    if (uVar2 != 1) {
      uVar11 = 0xff7fffff;
      uVar17 = 0;
    }
    *(undefined4 *)(*(long *)(param_8 + 0x40) + lVar6) = uVar11;
    *(undefined4 *)(lVar7 + lVar6) = uVar17;
    fVar10 = *(float *)(param_1 + 0x28);
    if (0.0 < fVar10) {
      if (param_11 == 0) {
        uVar24 = *(undefined4 *)(param_10 + 4);
        uVar26 = *(undefined4 *)(param_5 + 4);
        uVar28 = *(undefined4 *)(param_10 + 8);
        fVar12 = *(float *)param_5 * *(float *)param_10;
        uVar17 = *(undefined4 *)(param_4 + 8);
        uVar11 = NEON_fmadd(uVar24,*(undefined4 *)(param_4 + 4),
                            *(float *)param_10 * *(float *)param_4);
        uVar22 = *(undefined4 *)(param_5 + 8);
      }
      else {
        uVar24 = *(undefined4 *)(param_10 + 4);
        uVar26 = *(undefined4 *)(param_7 + 4);
        uVar28 = *(undefined4 *)(param_10 + 8);
        fVar12 = *(float *)param_7 * *(float *)param_10;
        uVar17 = *(undefined4 *)(param_6 + 8);
        uVar11 = NEON_fmadd(uVar24,*(undefined4 *)(param_6 + 4),
                            *(float *)param_10 * *(float *)param_6);
        uVar22 = *(undefined4 *)(param_7 + 8);
      }
      uVar24 = NEON_fmadd(uVar26,uVar24,fVar12);
      fVar14 = (float)NEON_fmadd(uVar22,uVar28,uVar24);
      fVar12 = (float)NEON_fmadd(uVar28,uVar17,uVar11);
      fVar12 = fVar12 - fVar14;
      if (uVar2 == 1) {
        if ((fVar12 < 0.0) && (fVar12 = fVar12 * -fVar10, *(float *)(lVar8 + lVar5 * 4) < fVar12)) {
LAB_00f3e014:
          *(float *)(lVar8 + lVar5 * 4) = fVar12;
          return 1;
        }
      }
      else if ((0.0 < fVar12) && (fVar12 = fVar12 * -fVar10, fVar12 < *(float *)(lVar8 + lVar5 * 4))
              ) goto LAB_00f3e014;
    }
  }
  return 1;
}


