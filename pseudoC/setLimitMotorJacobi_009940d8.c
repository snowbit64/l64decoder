// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLimitMotorJacobi
// Entry Point: 009940d8
// Size: 392 bytes
// Signature: undefined __thiscall setLimitMotorJacobi(Bt2D6Joint * this, RotationalLimitMotor * param_1, int param_2, btTransform * param_3, btTransform * param_4, btConstraintInfo2 * param_5, int param_6, btVector3 * param_7, bool param_8, bool param_9)


/* Bt2D6Joint::setLimitMotorJacobi(Bt2D6Joint::RotationalLimitMotor*, int, btTransform const&,
   btTransform const&, btTypedConstraint::btConstraintInfo2*, int, btVector3&, bool, bool) */

void __thiscall
Bt2D6Joint::setLimitMotorJacobi
          (Bt2D6Joint *this,RotationalLimitMotor *param_1,int param_2,btTransform *param_3,
          btTransform *param_4,btConstraintInfo2 *param_5,int param_6,btVector3 *param_7,
          bool param_8,bool param_9)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar3 = 0x10;
  if (!param_8) {
    lVar3 = 8;
  }
  uVar4 = -(ulong)((uint)param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_6 << 2;
  lVar3 = *(long *)(param_5 + lVar3);
  *(undefined4 *)(lVar3 + uVar4) = *(undefined4 *)param_7;
  *(undefined4 *)(lVar3 + uVar4 + 4) = *(undefined4 *)(param_7 + 4);
  *(undefined4 *)(lVar3 + uVar4 + 8) = *(undefined4 *)(param_7 + 8);
  lVar3 = 0x20;
  if (!param_8) {
    lVar3 = 0x18;
  }
  lVar3 = *(long *)(param_5 + lVar3);
  *(float *)(lVar3 + uVar4) = -*(float *)param_7;
  *(float *)(lVar3 + uVar4 + 4) = -*(float *)(param_7 + 4);
  *(float *)(lVar3 + uVar4 + 8) = -*(float *)(param_7 + 8);
  if (!param_8) {
    if ((param_2 == 2) || (*(float *)(this + 200) == 0.0)) {
      fVar5 = *(float *)(param_3 + 0x30);
      fVar6 = *(float *)(param_3 + 0x34);
      fVar7 = *(float *)(this + 0x300);
      pfVar2 = (float *)(this + 0x308);
      fVar8 = *(float *)(this + 0x304);
    }
    else {
      fVar5 = *(float *)(param_3 + 0x30);
      fVar6 = *(float *)(param_3 + 0x34);
      fVar7 = *(float *)(this + 800);
      pfVar2 = (float *)(this + 0x328);
      fVar8 = *(float *)(this + 0x324);
    }
    fVar16 = *(float *)param_7;
    fVar15 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20);
    fVar12 = fVar8 - (float)*(undefined8 *)(param_4 + 0x34);
    fVar13 = *pfVar2 - (float)((ulong)*(undefined8 *)(param_4 + 0x34) >> 0x20);
    fVar10 = *pfVar2 - *(float *)(param_3 + 0x38);
    fVar14 = (float)*(undefined8 *)(param_7 + 4);
    fVar11 = (float)NEON_fmadd(fVar10,fVar16,-(fVar7 - fVar5) * fVar15);
    fVar9 = fVar16 * -(fVar8 - fVar6) + (fVar7 - fVar5) * fVar14;
    fVar10 = -fVar10 * fVar14 + (fVar8 - fVar6) * fVar15;
    fVar6 = fVar14 * -fVar13 + fVar15 * fVar12;
    fVar8 = fVar15 * -(fVar7 - *(float *)(param_4 + 0x30)) + fVar16 * fVar13;
    fVar5 = fVar16 * -fVar12 + (fVar7 - *(float *)(param_4 + 0x30)) * fVar14;
    if ((this[0x368] != (Bt2D6Joint)0x0) && (!param_9)) {
      fVar7 = *(float *)(this + 0x360);
      fVar12 = *(float *)(this + 0x364);
      fVar10 = fVar10 * fVar7;
      fVar11 = fVar11 * fVar7;
      fVar9 = fVar9 * fVar7;
      fVar6 = fVar6 * fVar12;
      fVar8 = fVar8 * fVar12;
      fVar5 = fVar5 * fVar12;
    }
    pfVar2 = (float *)(*(long *)(param_5 + 0x10) + (long)param_6 * 4);
    *pfVar2 = fVar10;
    pfVar2[1] = fVar11;
    pfVar2[2] = fVar9;
    puVar1 = (undefined8 *)(*(long *)(param_5 + 0x20) + (long)param_6 * 4);
    *puVar1 = CONCAT44(-fVar8,-fVar6);
    *(float *)(puVar1 + 1) = -fVar5;
  }
  return;
}


