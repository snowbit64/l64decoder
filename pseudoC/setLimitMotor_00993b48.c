// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLimitMotor
// Entry Point: 00993b48
// Size: 1424 bytes
// Signature: undefined __thiscall setLimitMotor(Bt2D6Joint * this, RotationalLimitMotor * param_1, int param_2, btTransform * param_3, btTransform * param_4, btVector3 * param_5, btVector3 * param_6, btVector3 * param_7, btVector3 * param_8, btConstraintInfo2 * param_9, int param_10, btVector3 * param_11, bool param_12, bool param_13)


/* WARNING: Removing unreachable block (ram,0x00994018) */
/* Bt2D6Joint::setLimitMotor(Bt2D6Joint::RotationalLimitMotor*, int, btTransform const&, btTransform
   const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&,
   btTypedConstraint::btConstraintInfo2*, int, btVector3&, bool, bool) */

int __thiscall
Bt2D6Joint::setLimitMotor
          (Bt2D6Joint *this,RotationalLimitMotor *param_1,int param_2,btTransform *param_3,
          btTransform *param_4,btVector3 *param_5,btVector3 *param_6,btVector3 *param_7,
          btVector3 *param_8,btConstraintInfo2 *param_9,int param_10,btVector3 *param_11,
          bool param_12,bool param_13)

{
  RotationalLimitMotor RVar1;
  RotationalLimitMotor *extraout_x1;
  RotationalLimitMotor *extraout_x1_00;
  RotationalLimitMotor *extraout_x1_01;
  RotationalLimitMotor *pRVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  
  uVar7 = (long)*(int *)(param_9 + 0x28) * (long)param_10;
  fVar16 = *(float *)(param_1 + 0xc);
  iVar8 = (int)uVar7;
  if (*(int *)(param_1 + 0x40) == 3) {
    setLimitMotorJacobi(this,param_1,param_2,param_3,param_4,param_9,iVar8,param_11,param_12,
                        param_13);
    lVar5 = uVar7 * 4;
    lVar4 = *(long *)(param_9 + 0x40);
    lVar3 = *(long *)(param_9 + 0x48);
    iVar8 = 1;
    fVar9 = -(*(float *)param_9 * *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x34));
    if (!param_12) {
      fVar9 = *(float *)param_9 * *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x34);
    }
    *(float *)(*(long *)(param_9 + 0x30) + lVar5) = fVar9;
    *(float *)(lVar4 + lVar5) = -fVar16;
    *(float *)(lVar3 + lVar5) = fVar16;
    pRVar2 = extraout_x1;
  }
  else {
    if (*(int *)(param_1 + 0x40) != 4) {
      iVar8 = 0;
      RVar1 = param_1[0x20];
      pRVar2 = param_1;
      goto joined_r0x00993ea8;
    }
    if (param_12) {
      uVar13 = *(undefined4 *)param_7;
      fVar11 = *(float *)(param_7 + 4);
      fVar9 = *(float *)(param_11 + 4);
      fVar12 = -1.0;
      uVar15 = *(undefined4 *)(param_7 + 8);
    }
    else {
      uVar13 = *(undefined4 *)param_5;
      fVar11 = *(float *)(param_5 + 4);
      fVar9 = *(float *)(param_11 + 4);
      fVar12 = 1.0;
      uVar15 = *(undefined4 *)(param_5 + 8);
      param_8 = param_6;
    }
    uVar13 = NEON_fmadd(uVar13,*(undefined4 *)param_11,fVar11 * fVar9);
    fVar11 = (float)NEON_fmadd(uVar15,*(undefined4 *)(param_11 + 8),uVar13);
    uVar13 = NEON_fmadd(*(undefined4 *)param_8,*(undefined4 *)param_11,
                        fVar9 * *(float *)((long)param_8 + 4));
    fVar9 = (float)NEON_fmadd(*(undefined4 *)((long)param_8 + 8),*(undefined4 *)(param_11 + 8),
                              uVar13);
    fVar11 = fVar11 - fVar9;
    setLimitMotorJacobi(this,param_1,param_2,param_3,param_4,param_9,iVar8,param_11,param_12,
                        param_13);
    lVar4 = *(long *)(param_9 + 0x30);
    fVar9 = fVar12 * *(float *)param_9 * *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x34);
    *(float *)(lVar4 + (long)iVar8 * 4) = fVar9;
    fVar14 = (float)NEON_fmsub(fVar11,*(undefined4 *)(param_1 + 0x10),fVar9);
    if (param_12) {
      fVar10 = fVar16;
      if ((0.0 < fVar14) && (fVar14 = fVar11 * -*(float *)(param_1 + 8), fVar9 < fVar14)) {
LAB_00993d6c:
        *(float *)(lVar4 + (long)iVar8 * 4) = fVar14;
      }
    }
    else {
      fVar10 = 0.0;
      if (fVar14 < 0.0) {
        fVar14 = fVar11 * -*(float *)(param_1 + 8);
        fVar10 = 0.0;
        if (fVar14 < fVar9) goto LAB_00993d6c;
      }
    }
    fVar14 = -fVar16;
    lVar3 = (long)iVar8 * 4;
    lVar4 = *(long *)(param_9 + 0x48);
    fVar9 = 0.0;
    if (!param_12) {
      fVar9 = fVar14;
    }
    lVar5 = *(long *)(param_9 + 0x38);
    iVar6 = *(int *)(param_9 + 0x28);
    *(float *)(*(long *)(param_9 + 0x40) + lVar3) = fVar9;
    *(float *)(lVar4 + lVar3) = fVar10;
    uVar7 = (long)iVar6 + (long)iVar8;
    *(undefined4 *)(lVar5 + lVar3) = *(undefined4 *)(param_1 + 0x14);
    setLimitMotorJacobi(this,extraout_x1_00,param_2,param_3,param_4,param_9,(int)uVar7,param_11,
                        param_12,param_13);
    lVar4 = *(long *)(param_9 + 0x30);
    fVar12 = fVar12 * *(float *)param_9 * *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x38);
    *(float *)(lVar4 + uVar7 * 4) = fVar12;
    fVar9 = (float)NEON_fmsub(fVar11,*(undefined4 *)(param_1 + 0x10),fVar12);
    if (param_12) {
      fVar16 = 0.0;
      if (fVar9 < 0.0) {
        fVar16 = 0.0;
        fVar11 = fVar11 * -*(float *)(param_1 + 8);
        if (fVar11 < fVar12) {
LAB_00993e60:
          *(float *)(lVar4 + uVar7 * 4) = fVar11;
        }
      }
    }
    else if (fVar9 <= 0.0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 0.0;
      fVar11 = fVar11 * -*(float *)(param_1 + 8);
      if (fVar12 < fVar11) goto LAB_00993e60;
    }
    lVar4 = *(long *)(param_9 + 0x48);
    iVar8 = 2;
    *(float *)(*(long *)(param_9 + 0x40) + uVar7 * 4) = fVar14;
    *(float *)(lVar4 + uVar7 * 4) = fVar16;
    pRVar2 = extraout_x1_01;
  }
  iVar6 = *(int *)(param_9 + 0x28);
  *(undefined4 *)(*(long *)(param_9 + 0x38) + uVar7 * 4) = *(undefined4 *)(param_1 + 0x14);
  uVar7 = (ulong)(uint)(iVar6 + (int)uVar7);
  RVar1 = param_1[0x20];
joined_r0x00993ea8:
  if (RVar1 != (RotationalLimitMotor)0x0) {
    iVar6 = (int)uVar7;
    if (param_1[0x2c] == (RotationalLimitMotor)0x0) {
      setLimitMotorJacobi(this,pRVar2,param_2,param_3,param_4,param_9,iVar6,param_11,param_12,
                          param_13);
      fVar16 = *(float *)(param_1 + 0x24);
      if (!param_12) {
        fVar16 = -*(float *)(param_1 + 0x24);
      }
      fVar16 = (float)btTypedConstraint::getMotorFactor
                                (*(float *)(param_1 + 0x3c),*(float *)param_1,
                                 *(float *)(param_1 + 4),fVar16,
                                 *(float *)param_9 * *(float *)(param_1 + 0x18));
      fVar16 = fVar16 * *(float *)(param_1 + 0x24);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x30);
      fVar9 = *(float *)(param_1 + 0x3c) - fVar16;
      if (param_12) {
        fVar11 = fVar16 + 6.283185;
        fVar12 = fVar9 + -6.283185;
        if (fVar9 <= 3.141593) {
          fVar11 = fVar16;
          fVar12 = fVar9;
        }
        fVar9 = fVar12;
        fVar16 = fVar11;
        if (fVar9 < -3.141593) {
          fVar9 = fVar9 + 6.283185;
          fVar16 = fVar16 + -6.283185;
        }
      }
      setLimitMotorJacobi(this,pRVar2,param_2,param_3,param_4,param_9,iVar6,param_11,param_12,
                          param_13);
      if (fVar9 == 0.0) {
        fVar16 = 0.0;
      }
      else {
        fVar14 = *(float *)param_1;
        fVar12 = *(float *)(param_1 + 4);
        fVar11 = fVar16;
        if (fVar14 <= fVar12) {
          if ((fVar16 <= fVar14 || fVar9 == 0.0) || fVar14 < fVar16 && fVar9 < 0.0) {
            fVar11 = fVar14;
          }
        }
        else {
          if (fVar9 == 0.0 || 0.0 > fVar9) {
            fVar11 = -3.402823e+38;
          }
          fVar12 = fVar16;
          if (0.0 <= fVar9) {
            fVar12 = 3.402823e+38;
          }
        }
        fVar16 = (float)btTypedConstraint::getMotorFactor
                                  (*(float *)(param_1 + 0x3c),fVar11,fVar12,
                                   fVar9 * *(float *)param_9 * *(float *)(param_1 + 0x18),
                                   *(float *)param_9 * *(float *)(param_1 + 0x18));
      }
      fVar9 = fVar9 * fVar16 * *(float *)param_9;
      fVar16 = -(fVar9 * *(float *)(param_1 + 0x18));
      if (!param_12) {
        fVar16 = fVar9 * *(float *)(param_1 + 0x18);
      }
    }
    iVar8 = iVar8 + 1;
    *(float *)(*(long *)(param_9 + 0x30) + (long)iVar6 * 4) = fVar16;
    lVar3 = (long)iVar6 * 4;
    lVar4 = *(long *)(param_9 + 0x38);
    *(float *)(*(long *)(param_9 + 0x40) + lVar3) = -*(float *)(param_1 + 0x28) / *(float *)param_9;
    *(float *)(*(long *)(param_9 + 0x48) + lVar3) = *(float *)(param_1 + 0x28) / *(float *)param_9;
    *(undefined4 *)(lVar4 + lVar3) = *(undefined4 *)(param_1 + 0x1c);
  }
  return iVar8;
}


